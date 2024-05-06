#pragma once
// IWYU pragma private; include "System/Xml/XPath/XPathNodeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNodeType)
// Forward declare root types
namespace System::Xml::XPath {
struct XPathNodeType;
}
// Write type traits
MARK_VAL_T(::System::Xml::XPath::XPathNodeType);
// Type: System.Xml.XPath::XPathNodeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::XPath {
// Is value type: true
// CS Name: ::System.Xml.XPath::XPathNodeType
struct CORDL_TYPE XPathNodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XPathNodeType_Unwrapped
  enum struct __XPathNodeType_Unwrapped : int32_t {
    __E_Root = static_cast<int32_t>(0x0),
    __E_Element = static_cast<int32_t>(0x1),
    __E_Attribute = static_cast<int32_t>(0x2),
    __E_Namespace = static_cast<int32_t>(0x3),
    __E_Text = static_cast<int32_t>(0x4),
    __E_SignificantWhitespace = static_cast<int32_t>(0x5),
    __E_Whitespace = static_cast<int32_t>(0x6),
    __E_ProcessingInstruction = static_cast<int32_t>(0x7),
    __E_Comment = static_cast<int32_t>(0x8),
    __E_All = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XPathNodeType_Unwrapped() const noexcept {
    return static_cast<__XPathNodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XPathNodeType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x9)
  static ::System::Xml::XPath::XPathNodeType const All;

  /// @brief Field Attribute value: static_cast<int32_t>(0x2)
  static ::System::Xml::XPath::XPathNodeType const Attribute;

  /// @brief Field Comment value: static_cast<int32_t>(0x8)
  static ::System::Xml::XPath::XPathNodeType const Comment;

  /// @brief Field Element value: static_cast<int32_t>(0x1)
  static ::System::Xml::XPath::XPathNodeType const Element;

  /// @brief Field Namespace value: static_cast<int32_t>(0x3)
  static ::System::Xml::XPath::XPathNodeType const Namespace;

  /// @brief Field ProcessingInstruction value: static_cast<int32_t>(0x7)
  static ::System::Xml::XPath::XPathNodeType const ProcessingInstruction;

  /// @brief Field Root value: static_cast<int32_t>(0x0)
  static ::System::Xml::XPath::XPathNodeType const Root;

  /// @brief Field SignificantWhitespace value: static_cast<int32_t>(0x5)
  static ::System::Xml::XPath::XPathNodeType const SignificantWhitespace;

  /// @brief Field Text value: static_cast<int32_t>(0x4)
  static ::System::Xml::XPath::XPathNodeType const Text;

  /// @brief Field Whitespace value: static_cast<int32_t>(0x6)
  static ::System::Xml::XPath::XPathNodeType const Whitespace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathNodeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathNodeType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNodeType, "System.Xml.XPath", "XPathNodeType");
