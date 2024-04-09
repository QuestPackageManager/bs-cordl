#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathResultType)
// Forward declare root types
namespace System::Xml::XPath {
struct XPathResultType;
}
// Write type traits
MARK_VAL_T(::System::Xml::XPath::XPathResultType);
// Type: System.Xml.XPath::XPathResultType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::XPath {
// Is value type: true
// CS Name: ::System.Xml.XPath::XPathResultType
struct CORDL_TYPE XPathResultType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XPathResultType_Unwrapped
  enum struct __XPathResultType_Unwrapped : int32_t {
    __E_Number = static_cast<int32_t>(0x0),
    __E_String = static_cast<int32_t>(0x1),
    __E_Boolean = static_cast<int32_t>(0x2),
    __E_NodeSet = static_cast<int32_t>(0x3),
    __E_Navigator = static_cast<int32_t>(0x1),
    __E_Any = static_cast<int32_t>(0x5),
    __E_Error = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XPathResultType_Unwrapped() const noexcept {
    return static_cast<__XPathResultType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathResultType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XPathResultType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0x5)
  static ::System::Xml::XPath::XPathResultType const Any;

  /// @brief Field Boolean value: static_cast<int32_t>(0x2)
  static ::System::Xml::XPath::XPathResultType const Boolean;

  /// @brief Field Error value: static_cast<int32_t>(0x6)
  static ::System::Xml::XPath::XPathResultType const Error;

  /// @brief Field Navigator value: static_cast<int32_t>(0x1)
  static ::System::Xml::XPath::XPathResultType const Navigator;

  /// @brief Field NodeSet value: static_cast<int32_t>(0x3)
  static ::System::Xml::XPath::XPathResultType const NodeSet;

  /// @brief Field Number value: static_cast<int32_t>(0x0)
  static ::System::Xml::XPath::XPathResultType const Number;

  /// @brief Field String value: static_cast<int32_t>(0x1)
  static ::System::Xml::XPath::XPathResultType const String;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathResultType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathResultType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathResultType, "System.Xml.XPath", "XPathResultType");
