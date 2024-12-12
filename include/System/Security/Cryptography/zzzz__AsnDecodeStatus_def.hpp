#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsnDecodeStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsnDecodeStatus)
// Forward declare root types
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::AsnDecodeStatus);
// Dependencies
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.AsnDecodeStatus
struct CORDL_TYPE AsnDecodeStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AsnDecodeStatus_Unwrapped
  enum struct __AsnDecodeStatus_Unwrapped : int32_t {
    __E_NotDecoded = static_cast<int32_t>(0xffffffff),
    __E_Ok = static_cast<int32_t>(0x0),
    __E_BadAsn = static_cast<int32_t>(0x1),
    __E_BadTag = static_cast<int32_t>(0x2),
    __E_BadLength = static_cast<int32_t>(0x3),
    __E_InformationNotAvailable = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AsnDecodeStatus_Unwrapped() const noexcept {
    return static_cast<__AsnDecodeStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsnDecodeStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AsnDecodeStatus(int32_t value__) noexcept;

  /// @brief Field BadAsn value: I32(1)
  static ::System::Security::Cryptography::AsnDecodeStatus const BadAsn;

  /// @brief Field BadLength value: I32(3)
  static ::System::Security::Cryptography::AsnDecodeStatus const BadLength;

  /// @brief Field BadTag value: I32(2)
  static ::System::Security::Cryptography::AsnDecodeStatus const BadTag;

  /// @brief Field InformationNotAvailable value: I32(4)
  static ::System::Security::Cryptography::AsnDecodeStatus const InformationNotAvailable;

  /// @brief Field NotDecoded value: I32(-1)
  static ::System::Security::Cryptography::AsnDecodeStatus const NotDecoded;

  /// @brief Field Ok value: I32(0)
  static ::System::Security::Cryptography::AsnDecodeStatus const Ok;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9292 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::AsnDecodeStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsnDecodeStatus, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsnDecodeStatus, "System.Security.Cryptography", "AsnDecodeStatus");
