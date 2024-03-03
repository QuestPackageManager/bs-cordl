#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeProperties)
// Forward declare root types
namespace System::Xml {
struct AttributeProperties;
}
// Write type traits
MARK_VAL_T(::System::Xml::AttributeProperties);
// Type: System.Xml::AttributeProperties
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::System.Xml::AttributeProperties
struct CORDL_TYPE AttributeProperties {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __AttributeProperties_Unwrapped
  enum struct __AttributeProperties_Unwrapped : uint32_t {
    __E_DEFAULT = static_cast<uint32_t>(0x4020100u),
    __E_URI = static_cast<uint32_t>(0x40201u),
    __E_BOOLEAN = static_cast<uint32_t>(0x2000402u),
    __E_NAME = static_cast<uint32_t>(0x4020004u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AttributeProperties_Unwrapped() const noexcept {
    return static_cast<__AttributeProperties_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeProperties();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr AttributeProperties(uint32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief Field BOOLEAN value: static_cast<uint32_t>(0x2000402u)
  static ::System::Xml::AttributeProperties const BOOLEAN;

  /// @brief Field DEFAULT value: static_cast<uint32_t>(0x4020100u)
  static ::System::Xml::AttributeProperties const DEFAULT;

  /// @brief Field NAME value: static_cast<uint32_t>(0x4020004u)
  static ::System::Xml::AttributeProperties const NAME;

  /// @brief Field URI value: static_cast<uint32_t>(0x40201u)
  static ::System::Xml::AttributeProperties const URI;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::AttributeProperties, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::AttributeProperties, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AttributeProperties, "System.Xml", "AttributeProperties");
