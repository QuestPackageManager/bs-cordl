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
// Dependencies
namespace System::Xml::XPath {
// Is value type: true
// CS Name: System.Xml.XPath.XPathNodeType
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

  /// @brief Field All value: I32(9)
  static ::System::Xml::XPath::XPathNodeType const All;

  /// @brief Field Attribute value: I32(2)
  static ::System::Xml::XPath::XPathNodeType const Attribute;

  /// @brief Field Comment value: I32(8)
  static ::System::Xml::XPath::XPathNodeType const Comment;

  /// @brief Field Element value: I32(1)
  static ::System::Xml::XPath::XPathNodeType const Element;

  /// @brief Field Namespace value: I32(3)
  static ::System::Xml::XPath::XPathNodeType const Namespace;

  /// @brief Field ProcessingInstruction value: I32(7)
  static ::System::Xml::XPath::XPathNodeType const ProcessingInstruction;

  /// @brief Field Root value: I32(0)
  static ::System::Xml::XPath::XPathNodeType const Root;

  /// @brief Field SignificantWhitespace value: I32(5)
  static ::System::Xml::XPath::XPathNodeType const SignificantWhitespace;

  /// @brief Field Text value: I32(4)
  static ::System::Xml::XPath::XPathNodeType const Text;

  /// @brief Field Whitespace value: I32(6)
  static ::System::Xml::XPath::XPathNodeType const Whitespace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7383 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XPath::XPathNodeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathNodeType, 0x4>, "Size mismatch!");

} // namespace System::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNodeType, "System.Xml.XPath", "XPathNodeType");
