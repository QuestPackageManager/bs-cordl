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
// Type: ::ConnectionFailedReason
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ConnectionFailedReason
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AuthenticationFailed value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::ConnectionFailedReason const AuthenticationFailed;

  /// @brief Field CertificateValidationFailed value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::ConnectionFailedReason const CertificateValidationFailed;

  /// @brief Field ConnectionCanceled value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::ConnectionFailedReason const ConnectionCanceled;

  /// @brief Field FailedToFindMatch value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::ConnectionFailedReason const FailedToFindMatch;

  /// @brief Field InvalidPassword value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::ConnectionFailedReason const InvalidPassword;

  /// @brief Field MultiplayerApiUnreachable value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::ConnectionFailedReason const MultiplayerApiUnreachable;

  /// @brief Field NetworkNotConnected value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::ConnectionFailedReason const NetworkNotConnected;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::ConnectionFailedReason const None;

  /// @brief Field ServerAlreadyExists value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::ConnectionFailedReason const ServerAlreadyExists;

  /// @brief Field ServerAtCapacity value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::ConnectionFailedReason const ServerAtCapacity;

  /// @brief Field ServerDoesNotExist value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::ConnectionFailedReason const ServerDoesNotExist;

  /// @brief Field ServerIsTerminating value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::ConnectionFailedReason const ServerIsTerminating;

  /// @brief Field ServerUnreachable value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::ConnectionFailedReason const ServerUnreachable;

  /// @brief Field Timeout value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::ConnectionFailedReason const Timeout;

  /// @brief Field Unknown value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::ConnectionFailedReason const Unknown;

  /// @brief Field VersionMismatch value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::ConnectionFailedReason const VersionMismatch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14670 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectionFailedReason, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectionFailedReason, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionFailedReason, "", "ConnectionFailedReason");
