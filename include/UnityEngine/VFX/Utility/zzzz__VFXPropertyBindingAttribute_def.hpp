#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXPropertyBindingAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXPropertyBindingAttribute)
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXPropertyBindingAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute*, "UnityEngine.VFX.Utility", "VFXPropertyBindingAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXPropertyBindingAttribute
class CORDL_TYPE VFXPropertyBindingAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field EditorTypes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_EditorTypes, put = __cordl_internal_set_EditorTypes)) ::ArrayW<::StringW> EditorTypes;

  static inline ::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute* New_ctor(::ArrayW<::StringW> editorTypes);

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_EditorTypes() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_EditorTypes();

  constexpr void __cordl_internal_set_EditorTypes(::ArrayW<::StringW> value);

  /// @brief Method .ctor, addr 0x69e4044, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW> editorTypes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXPropertyBindingAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXPropertyBindingAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXPropertyBindingAttribute(VFXPropertyBindingAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXPropertyBindingAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXPropertyBindingAttribute(VFXPropertyBindingAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19985 };

  /// @brief Field EditorTypes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW> ___EditorTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute, ___EditorTypes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute) == 0x20, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
