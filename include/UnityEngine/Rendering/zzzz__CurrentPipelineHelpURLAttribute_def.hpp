#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CurrentPipelineHelpURLAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__HelpURLAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CurrentPipelineHelpURLAttribute)
// Forward declare root types
namespace UnityEngine::Rendering {
class CurrentPipelineHelpURLAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute);
// Dependencies UnityEngine.HelpURLAttribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CurrentPipelineHelpURLAttribute
class CORDL_TYPE CurrentPipelineHelpURLAttribute : public ::UnityEngine::HelpURLAttribute {
public:
  // Declarations
  __declspec(property(get = get_URL)) ::StringW URL;

  /// @brief Field <pageHash>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pageHash_k__BackingField, put = __cordl_internal_set__pageHash_k__BackingField)) ::StringW _pageHash_k__BackingField;

  /// @brief Field <pageName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pageName_k__BackingField, put = __cordl_internal_set__pageName_k__BackingField)) ::StringW _pageName_k__BackingField;

  __declspec(property(get = get_pageHash)) ::StringW pageHash;

  __declspec(property(get = get_pageName)) ::StringW pageName;

  static inline ::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute* New_ctor(::StringW pageName, ::StringW pageHash);

  constexpr ::StringW const& __cordl_internal_get__pageHash_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__pageHash_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__pageName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__pageName_k__BackingField();

  constexpr void __cordl_internal_set__pageHash_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__pageName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6568f04, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW pageName, ::StringW pageHash);

  /// @brief Method get_URL, addr 0x6568f6c, size 0x14, virtual true, abstract: false, final false
  inline ::StringW get_URL();

  /// @brief Method get_pageHash, addr 0x6568efc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_pageHash();

  /// @brief Method get_pageName, addr 0x6568ef4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_pageName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurrentPipelineHelpURLAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CurrentPipelineHelpURLAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurrentPipelineHelpURLAttribute(CurrentPipelineHelpURLAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurrentPipelineHelpURLAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurrentPipelineHelpURLAttribute(CurrentPipelineHelpURLAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12040 };

  /// @brief Field <pageName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____pageName_k__BackingField;

  /// @brief Field <pageHash>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____pageHash_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute, ____pageName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute, ____pageHash_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*, "UnityEngine.Rendering", "CurrentPipelineHelpURLAttribute");
