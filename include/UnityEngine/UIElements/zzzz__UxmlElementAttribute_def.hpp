#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlElementAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__LibraryVisibility_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UxmlElementAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlElementAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UxmlElementAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UxmlElementAttribute*, "UnityEngine.UIElements", "UxmlElementAttribute");
// [AttributeUsage((System.AttributeTargets)4, Inherited = false)]
// Dependencies System.Attribute, System.Type, UnityEngine.UIElements.LibraryVisibility
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlElementAttribute
class CORDL_TYPE UxmlElementAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field supportedChildTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_supportedChildTypes, put = __cordl_internal_set_supportedChildTypes)) ::ArrayW<::System::Type*> supportedChildTypes;

  /// @brief Field visibility, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_visibility, put = __cordl_internal_set_visibility)) ::UnityEngine::UIElements::LibraryVisibility visibility;

  static inline ::UnityEngine::UIElements::UxmlElementAttribute* New_ctor(::StringW uxmlName);

  static inline ::UnityEngine::UIElements::UxmlElementAttribute* New_ctor(::StringW uxmlName, /* [ParamArray] */ ::ArrayW<::System::Type*> supportedTypes);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get_supportedChildTypes() const;

  constexpr ::ArrayW<::System::Type*>& __cordl_internal_get_supportedChildTypes();

  constexpr ::UnityEngine::UIElements::LibraryVisibility const& __cordl_internal_get_visibility() const;

  constexpr ::UnityEngine::UIElements::LibraryVisibility& __cordl_internal_get_visibility();

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_supportedChildTypes(::ArrayW<::System::Type*> value);

  constexpr void __cordl_internal_set_visibility(::UnityEngine::UIElements::LibraryVisibility value);

  /// @brief Method .ctor, addr 0x7146870, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW uxmlName);

  /// @brief Method .ctor, addr 0x7146880, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW uxmlName, /* [ParamArray] */ ::ArrayW<::System::Type*> supportedTypes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlElementAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlElementAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlElementAttribute(UxmlElementAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlElementAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlElementAttribute(UxmlElementAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5272 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field visibility, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::LibraryVisibility ___visibility;

  /// @brief Field supportedChildTypes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Type*> ___supportedChildTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlElementAttribute, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlElementAttribute, ___visibility) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlElementAttribute, ___supportedChildTypes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UxmlElementAttribute) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
