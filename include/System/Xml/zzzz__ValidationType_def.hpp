#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValidationType)
// Forward declare root types
namespace System::Xml {
struct ValidationType;
}
// Write type traits
MARK_VAL_T(::System::Xml::ValidationType);
// Type: System.Xml::ValidationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::System.Xml::ValidationType
struct CORDL_TYPE ValidationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ValidationType_Unwrapped
  enum struct __ValidationType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Auto = static_cast<int32_t>(0x1),
    __E_DTD = static_cast<int32_t>(0x2),
    __E_XDR = static_cast<int32_t>(0x3),
    __E_Schema = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ValidationType_Unwrapped() const noexcept {
    return static_cast<__ValidationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__ValidationType_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValidationType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Auto value: static_cast<int32_t>(0x1)
  static ::System::Xml::ValidationType const Auto;

  /// @brief Field DTD value: static_cast<int32_t>(0x2)
  static ::System::Xml::ValidationType const DTD;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::ValidationType const None;

  /// @brief Field Schema value: static_cast<int32_t>(0x4)
  static ::System::Xml::ValidationType const Schema;

  /// @brief Field XDR value: static_cast<int32_t>(0x3)
  static ::System::Xml::ValidationType const XDR;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::ValidationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::ValidationType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ValidationType, "System.Xml", "ValidationType");
