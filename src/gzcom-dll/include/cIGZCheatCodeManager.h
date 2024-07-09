#pragma once
#include "cIGZUnknown.h"

class cIGZMessageTarget;
class cIGZString;

/**
 * @brief Service for managing cheat codes
 *
 * The cheat code manager allows COM directors to register and unregister
 * cheat codes at will, and dispatches messages when cheat codes are used. The
 * manager can also handle the preservation of cheat code state for cheats
 * that persist across city saves.
 */
class cIGZCheatCodeManager : public cIGZUnknown
{
public:
    virtual bool RegisterCheatCode(uint32_t clsid, cIGZString const& cheatName) = 0;
    virtual bool UnregisterCheatCode(uint32_t clsid) = 0;

    virtual bool AddNotification(cIGZMessageTarget*, uint32_t) = 0;
    virtual bool RemoveNotification(cIGZMessageTarget*, uint32_t) = 0;

    virtual bool GetCheatHasBeenSet(uint32_t) = 0;
    virtual bool SetCheatHasBeenSet(uint32_t, bool) = 0;

    /**
     * @brief Gets a list of cheat codes that heave been set.
     * @param ppCheatsOut A pointer to the destination array.
     * @param arraySize A reference that stores the number of values retrieved.
     * @return The number of set cheat codes.
     */
    virtual uint32_t GetSetCheatCodes(uint32_t* ppCheatsOut, uint32_t& arraySize) = 0;

    /**
     * @brief Forces the game to dispatch a cheat notification
     * @param szCheatString The cheat code string to send
     * @param dwCheatID The ID of the cheat code to dispatch
     * @return Whether the message was dispatched successfully
     *
     * Can be used to force a cheat code to be issued without user
     * intervention.
     */
    virtual bool SendCheatNotifications(cIGZString const& szCheatString, uint32_t dwCheatID) = 0;

    /**
     * @brief Gets a cheat ID given a cheat code name
     * @param szCheatName The cheat code name to search for
     * @param dwCheatID A reference to an integer; stores the cheat ID found
     * @return Whether the cheat code was successfully found
     */
    virtual bool DoesCheatCodeMatch(cIGZString const& szCheatName, uint32_t& dwCheatID) = 0;

    /**
     * @brief Processes a full cheat string
     * @see DoesCheatCodeMatch(cIGZString const& szCheatName, uint32_t& dwCheatID)
     */
    virtual bool DoDefaultCheatCodeProcessing(cIGZString const& szCheatLine, uint32_t& dwCheatID) = 0;

    /**
     * @brief Gets a list of the registered cheat codes.
     * @param ppStringsOut A pointer to the destination array.
     * @param arraySize A reference that stores the number of strings retrieved.
     * @return The number of registered cheat codes.
     */
    virtual uint32_t GetListOfAllCheatStrings(cIGZString** ppStringsOut, uint32_t&) = 0;

    virtual uint32_t GetCheatCodeOccurrenceCount(void) = 0;

    /**
    * @brief Sets whether or not to enable cheat codes
    * @param bEnable Whether cheat codes are enabled
    * @param szCompressionKey The key to use when encrypting cheat data
    * @return Whether the operation succeeded or not
    *
    * szCompressionKey cannot be longer than 64 characters.
    */
    virtual bool EnableCheatCodes(bool bEnable, cIGZString const& szCompressionKey) = 0;
    virtual bool GetCheatCodesEnabled(void) = 0;

    /**
    *@brief Gets the compression key / password for saving cheat state
    * @param pszPassword Pointer to an array of characters; the key is saved here
    * @param dwLen Reference to an integer; length of password saved here
    * @return Whether the cheat code password was successfully retrieved
    */
    virtual bool GetCheatCodePassword(uint8_t* pszPassword, uint32_t& dwLen) = 0;

    /**
     * @brief Sets the compression key/password for cheat state
     * @param pszPassword A character array representing the password
     * @param dwLen The length of the password given
     * @return Whether the cheat code password was successfully saved
     */
    virtual bool SetCheatCodePassword(uint8_t* pszPassword, uint32_t dwLen) = 0;

    virtual bool SetEnableDisableStrings(cIGZString const&, cIGZString const&) = 0;
};
