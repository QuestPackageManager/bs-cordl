#pragma once
// IWYU pragma private; include "System/Net/FtpStatusCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpStatusCode)
// Forward declare root types
namespace System::Net {
struct FtpStatusCode;
}
// Write type traits
MARK_VAL_T(::System::Net::FtpStatusCode);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.FtpStatusCode
struct CORDL_TYPE FtpStatusCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FtpStatusCode_Unwrapped
  enum struct __FtpStatusCode_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_RestartMarker = static_cast<int32_t>(0x6e),
    __E_ServiceTemporarilyNotAvailable = static_cast<int32_t>(0x78),
    __E_DataAlreadyOpen = static_cast<int32_t>(0x7d),
    __E_OpeningData = static_cast<int32_t>(0x96),
    __E_CommandOK = static_cast<int32_t>(0xc8),
    __E_CommandExtraneous = static_cast<int32_t>(0xca),
    __E_DirectoryStatus = static_cast<int32_t>(0xd4),
    __E_FileStatus = static_cast<int32_t>(0xd5),
    __E_SystemType = static_cast<int32_t>(0xd7),
    __E_SendUserCommand = static_cast<int32_t>(0xdc),
    __E_ClosingControl = static_cast<int32_t>(0xdd),
    __E_ClosingData = static_cast<int32_t>(0xe2),
    __E_EnteringPassive = static_cast<int32_t>(0xe3),
    __E_LoggedInProceed = static_cast<int32_t>(0xe6),
    __E_ServerWantsSecureSession = static_cast<int32_t>(0xea),
    __E_FileActionOK = static_cast<int32_t>(0xfa),
    __E_PathnameCreated = static_cast<int32_t>(0x101),
    __E_SendPasswordCommand = static_cast<int32_t>(0x14b),
    __E_NeedLoginAccount = static_cast<int32_t>(0x14c),
    __E_FileCommandPending = static_cast<int32_t>(0x15e),
    __E_ServiceNotAvailable = static_cast<int32_t>(0x1a5),
    __E_CantOpenData = static_cast<int32_t>(0x1a9),
    __E_ConnectionClosed = static_cast<int32_t>(0x1aa),
    __E_ActionNotTakenFileUnavailableOrBusy = static_cast<int32_t>(0x1c2),
    __E_ActionAbortedLocalProcessingError = static_cast<int32_t>(0x1c3),
    __E_ActionNotTakenInsufficientSpace = static_cast<int32_t>(0x1c4),
    __E_CommandSyntaxError = static_cast<int32_t>(0x1f4),
    __E_ArgumentSyntaxError = static_cast<int32_t>(0x1f5),
    __E_CommandNotImplemented = static_cast<int32_t>(0x1f6),
    __E_BadCommandSequence = static_cast<int32_t>(0x1f7),
    __E_NotLoggedIn = static_cast<int32_t>(0x212),
    __E_AccountNeeded = static_cast<int32_t>(0x214),
    __E_ActionNotTakenFileUnavailable = static_cast<int32_t>(0x226),
    __E_ActionAbortedUnknownPageType = static_cast<int32_t>(0x227),
    __E_FileActionAborted = static_cast<int32_t>(0x228),
    __E_ActionNotTakenFilenameNotAllowed = static_cast<int32_t>(0x229),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FtpStatusCode_Unwrapped() const noexcept {
    return static_cast<__FtpStatusCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpStatusCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FtpStatusCode(int32_t value__) noexcept;

  /// @brief Field AccountNeeded value: I32(532)
  static ::System::Net::FtpStatusCode const AccountNeeded;

  /// @brief Field ActionAbortedLocalProcessingError value: I32(451)
  static ::System::Net::FtpStatusCode const ActionAbortedLocalProcessingError;

  /// @brief Field ActionAbortedUnknownPageType value: I32(551)
  static ::System::Net::FtpStatusCode const ActionAbortedUnknownPageType;

  /// @brief Field ActionNotTakenFileUnavailable value: I32(550)
  static ::System::Net::FtpStatusCode const ActionNotTakenFileUnavailable;

  /// @brief Field ActionNotTakenFileUnavailableOrBusy value: I32(450)
  static ::System::Net::FtpStatusCode const ActionNotTakenFileUnavailableOrBusy;

  /// @brief Field ActionNotTakenFilenameNotAllowed value: I32(553)
  static ::System::Net::FtpStatusCode const ActionNotTakenFilenameNotAllowed;

  /// @brief Field ActionNotTakenInsufficientSpace value: I32(452)
  static ::System::Net::FtpStatusCode const ActionNotTakenInsufficientSpace;

  /// @brief Field ArgumentSyntaxError value: I32(501)
  static ::System::Net::FtpStatusCode const ArgumentSyntaxError;

  /// @brief Field BadCommandSequence value: I32(503)
  static ::System::Net::FtpStatusCode const BadCommandSequence;

  /// @brief Field CantOpenData value: I32(425)
  static ::System::Net::FtpStatusCode const CantOpenData;

  /// @brief Field ClosingControl value: I32(221)
  static ::System::Net::FtpStatusCode const ClosingControl;

  /// @brief Field ClosingData value: I32(226)
  static ::System::Net::FtpStatusCode const ClosingData;

  /// @brief Field CommandExtraneous value: I32(202)
  static ::System::Net::FtpStatusCode const CommandExtraneous;

  /// @brief Field CommandNotImplemented value: I32(502)
  static ::System::Net::FtpStatusCode const CommandNotImplemented;

  /// @brief Field CommandOK value: I32(200)
  static ::System::Net::FtpStatusCode const CommandOK;

  /// @brief Field CommandSyntaxError value: I32(500)
  static ::System::Net::FtpStatusCode const CommandSyntaxError;

  /// @brief Field ConnectionClosed value: I32(426)
  static ::System::Net::FtpStatusCode const ConnectionClosed;

  /// @brief Field DataAlreadyOpen value: I32(125)
  static ::System::Net::FtpStatusCode const DataAlreadyOpen;

  /// @brief Field DirectoryStatus value: I32(212)
  static ::System::Net::FtpStatusCode const DirectoryStatus;

  /// @brief Field EnteringPassive value: I32(227)
  static ::System::Net::FtpStatusCode const EnteringPassive;

  /// @brief Field FileActionAborted value: I32(552)
  static ::System::Net::FtpStatusCode const FileActionAborted;

  /// @brief Field FileActionOK value: I32(250)
  static ::System::Net::FtpStatusCode const FileActionOK;

  /// @brief Field FileCommandPending value: I32(350)
  static ::System::Net::FtpStatusCode const FileCommandPending;

  /// @brief Field FileStatus value: I32(213)
  static ::System::Net::FtpStatusCode const FileStatus;

  /// @brief Field LoggedInProceed value: I32(230)
  static ::System::Net::FtpStatusCode const LoggedInProceed;

  /// @brief Field NeedLoginAccount value: I32(332)
  static ::System::Net::FtpStatusCode const NeedLoginAccount;

  /// @brief Field NotLoggedIn value: I32(530)
  static ::System::Net::FtpStatusCode const NotLoggedIn;

  /// @brief Field OpeningData value: I32(150)
  static ::System::Net::FtpStatusCode const OpeningData;

  /// @brief Field PathnameCreated value: I32(257)
  static ::System::Net::FtpStatusCode const PathnameCreated;

  /// @brief Field RestartMarker value: I32(110)
  static ::System::Net::FtpStatusCode const RestartMarker;

  /// @brief Field SendPasswordCommand value: I32(331)
  static ::System::Net::FtpStatusCode const SendPasswordCommand;

  /// @brief Field SendUserCommand value: I32(220)
  static ::System::Net::FtpStatusCode const SendUserCommand;

  /// @brief Field ServerWantsSecureSession value: I32(234)
  static ::System::Net::FtpStatusCode const ServerWantsSecureSession;

  /// @brief Field ServiceNotAvailable value: I32(421)
  static ::System::Net::FtpStatusCode const ServiceNotAvailable;

  /// @brief Field ServiceTemporarilyNotAvailable value: I32(120)
  static ::System::Net::FtpStatusCode const ServiceTemporarilyNotAvailable;

  /// @brief Field SystemType value: I32(215)
  static ::System::Net::FtpStatusCode const SystemType;

  /// @brief Field Undefined value: I32(0)
  static ::System::Net::FtpStatusCode const Undefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11457 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpStatusCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpStatusCode, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpStatusCode, "System.Net", "FtpStatusCode");
