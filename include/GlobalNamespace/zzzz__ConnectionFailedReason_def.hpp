#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectionFailedReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionFailedReason)
// Forward declare root types
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConnectionFailedReason);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConnectionFailedReason
struct CORDL_TYPE ConnectionFailedReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConnectionFailedReason_Unwrapped
  enum struct __ConnectionFailedReason_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Unknown = static_cast<int32_t>(0x1),
    __E_ConnectionCanceled = static_cast<int32_t>(0x2),
    __E_ServerUnreachable = static_cast<int32_t>(0x3),
    __E_ServerAlreadyExists = static_cast<int32_t>(0x4),
    __E_ServerDoesNotExist = static_cast<int32_t>(0x5),
    __E_ServerAtCapacity = static_cast<int32_t>(0x6),
    __E_VersionMismatch = static_cast<int32_t>(0x7),
    __E_InvalidPassword = static_cast<int32_t>(0x8),
    __E_MultiplayerApiUnreachable = static_cast<int32_t>(0x9),
    __E_AuthenticationFailed = static_cast<int32_t>(0xa),
    __E_NetworkNotConnected = static_cast<int32_t>(0xb),
    __E_CertificateValidationFailed = static_cast<int32_t>(0xc),
    __E_ServerIsTerminating = static_cast<int32_t>(0xd),
    __E_Timeout = static_cast<int32_t>(0xe),
    __E_FailedToFindMatch = static_cast<int32_t>(0xf),
    __E_MismatchedServerEnvironment = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConnectionFailedReason_Unwrapped() const noexcept {
    return static_cast<__ConnectionFailedReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionFailedReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConnectionFailedReason(int32_t value__) noexcept;

  /// @brief Field AuthenticationFailed value: I32(10)
  static ::GlobalNamespace::ConnectionFailedReason const AuthenticationFailed;

  /// @brief Field CertificateValidationFailed value: I32(12)
  static ::GlobalNamespace::ConnectionFailedReason const CertificateValidationFailed;

  /// @brief Field ConnectionCanceled value: I32(2)
  static ::GlobalNamespace::ConnectionFailedReason const ConnectionCanceled;

  /// @brief Field FailedToFindMatch value: I32(15)
  static ::GlobalNamespace::ConnectionFailedReason const FailedToFindMatch;

  /// @brief Field InvalidPassword value: I32(8)
  static ::GlobalNamespace::ConnectionFailedReason const InvalidPassword;

  /// @brief Field MismatchedServerEnvironment value: I32(16)
  static ::GlobalNamespace::ConnectionFailedReason const MismatchedServerEnvironment;

  /// @brief Field MultiplayerApiUnreachable value: I32(9)
  static ::GlobalNamespace::ConnectionFailedReason const MultiplayerApiUnreachable;

  /// @brief Field NetworkNotConnected value: I32(11)
  static ::GlobalNamespace::ConnectionFailedReason const NetworkNotConnected;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::ConnectionFailedReason const None;

  /// @brief Field ServerAlreadyExists value: I32(4)
  static ::GlobalNamespace::ConnectionFailedReason const ServerAlreadyExists;

  /// @brief Field ServerAtCapacity value: I32(6)
  static ::GlobalNamespace::ConnectionFailedReason const ServerAtCapacity;

  /// @brief Field ServerDoesNotExist value: I32(5)
  static ::GlobalNamespace::ConnectionFailedReason const ServerDoesNotExist;

  /// @brief Field ServerIsTerminating value: I32(13)
  static ::GlobalNamespace::ConnectionFailedReason const ServerIsTerminating;

  /// @brief Field ServerUnreachable value: I32(3)
  static ::GlobalNamespace::ConnectionFailedReason const ServerUnreachable;

  /// @brief Field Timeout value: I32(14)
  static ::GlobalNamespace::ConnectionFailedReason const Timeout;

  /// @brief Field Unknown value: I32(1)
  static ::GlobalNamespace::ConnectionFailedReason const Unknown;

  /// @brief Field VersionMismatch value: I32(7)
  static ::GlobalNamespace::ConnectionFailedReason const VersionMismatch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14714 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectionFailedReason, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectionFailedReason, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionFailedReason, "", "ConnectionFailedReason");
