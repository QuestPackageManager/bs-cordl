#pragma once
// IWYU pragma private; include "System/Xml/XmlNamespaceScope.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNamespaceScope)
// Forward declare root types
namespace System::Xml {
struct XmlNamespaceScope;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlNamespaceScope);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlNamespaceScope
struct CORDL_TYPE XmlNamespaceScope {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlNamespaceScope_Unwrapped
  enum struct __XmlNamespaceScope_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_ExcludeXml = static_cast<int32_t>(0x1),
    __E_Local = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlNamespaceScope_Unwrapped() const noexcept {
    return static_cast<__XmlNamespaceScope_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNamespaceScope();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlNamespaceScope(int32_t value__) noexcept;

  /// @brief Field All value: I32(0)
  static ::System::Xml::XmlNamespaceScope const All;

  /// @brief Field ExcludeXml value: I32(1)
  static ::System::Xml::XmlNamespaceScope const ExcludeXml;

  /// @brief Field Local value: I32(2)
  static ::System::Xml::XmlNamespaceScope const Local;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7365 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlNamespaceScope, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNamespaceScope, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNamespaceScope, "System.Xml", "XmlNamespaceScope");
