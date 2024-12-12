#pragma once
// IWYU pragma private; include "System/Xml/XPath/XPathNamespaceScope.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNamespaceScope)
// Forward declare root types
namespace System::Xml::XPath {
struct XPathNamespaceScope;
}
// Write type traits
MARK_VAL_T(::System::Xml::XPath::XPathNamespaceScope);
// Dependencies
namespace System::Xml::XPath {
// Is value type: true
// CS Name: System.Xml.XPath.XPathNamespaceScope
struct CORDL_TYPE XPathNamespaceScope {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XPathNamespaceScope_Unwrapped
  enum struct __XPathNamespaceScope_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_ExcludeXml = static_cast<int32_t>(0x1),
    __E_Local = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XPathNamespaceScope_Unwrapped() const noexcept {
    return static_cast<__XPathNamespaceScope_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNamespaceScope();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XPathNamespaceScope(int32_t value__) noexcept;

  /// @brief Field All value: I32(0)
  static ::System::Xml::XPath::XPathNamespaceScope const All;

  /// @brief Field ExcludeXml value: I32(1)
  static ::System::Xml::XPath::XPathNamespaceScope const ExcludeXml;

  /// @brief Field Local value: I32(2)
  static ::System::Xml::XPath::XPathNamespaceScope const Local;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7376 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XPath::XPathNamespaceScope, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathNamespaceScope, 0x4>, "Size mismatch!");

} // namespace System::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNamespaceScope, "System.Xml.XPath", "XPathNamespaceScope");
