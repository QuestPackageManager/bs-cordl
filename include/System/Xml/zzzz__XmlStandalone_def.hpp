#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlStandalone)
// Forward declare root types
namespace System::Xml {
struct XmlStandalone;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlStandalone);
// Type: System.Xml::XmlStandalone
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11422))
// CS Name: ::System.Xml::XmlStandalone
struct CORDL_TYPE XmlStandalone {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlStandalone_Unwrapped
  enum struct __XmlStandalone_Unwrapped : int32_t {
    __E_Omit = static_cast<int32_t>(0x0),
    __E_Yes = static_cast<int32_t>(0x1),
    __E_No = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlStandalone_Unwrapped() const noexcept {
    return static_cast<__XmlStandalone_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlStandalone(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlStandalone();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Omit value: static_cast<int32_t>(0x0)
  static ::System::Xml::XmlStandalone const Omit;

  /// @brief Field Yes value: static_cast<int32_t>(0x1)
  static ::System::Xml::XmlStandalone const Yes;

  /// @brief Field No value: static_cast<int32_t>(0x2)
  static ::System::Xml::XmlStandalone const No;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlStandalone, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlStandalone, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlStandalone, "System.Xml", "XmlStandalone");
