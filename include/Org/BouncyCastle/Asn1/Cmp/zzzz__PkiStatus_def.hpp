#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PkiStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PkiStatus)
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
struct PkiStatus;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Asn1::Cmp::PkiStatus);
// Dependencies
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: true
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiStatus
struct CORDL_TYPE PkiStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PkiStatus_Unwrapped
  enum struct __PkiStatus_Unwrapped : int32_t {
    __E_Granted = static_cast<int32_t>(0x0),
    __E_GrantedWithMods = static_cast<int32_t>(0x1),
    __E_Rejection = static_cast<int32_t>(0x2),
    __E_Waiting = static_cast<int32_t>(0x3),
    __E_RevocationWarning = static_cast<int32_t>(0x4),
    __E_RevocationNotification = static_cast<int32_t>(0x5),
    __E_KeyUpdateWarning = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PkiStatus_Unwrapped() const noexcept {
    return static_cast<__PkiStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PkiStatus(int32_t value__) noexcept;

  /// @brief Field Granted value: I32(0)
  static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const Granted;

  /// @brief Field GrantedWithMods value: I32(1)
  static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const GrantedWithMods;

  /// @brief Field KeyUpdateWarning value: I32(6)
  static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const KeyUpdateWarning;

  /// @brief Field Rejection value: I32(2)
  static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const Rejection;

  /// @brief Field RevocationNotification value: I32(5)
  static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const RevocationNotification;

  /// @brief Field RevocationWarning value: I32(4)
  static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const RevocationWarning;

  /// @brief Field Waiting value: I32(3)
  static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const Waiting;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 41 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiStatus, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiStatus, "Org.BouncyCastle.Asn1.Cmp", "PkiStatus");
