#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PipelineHelpURLAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__HelpURLAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PipelineHelpURLAttribute)
// Forward declare root types
namespace UnityEngine::Rendering {
class PipelineHelpURLAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PipelineHelpURLAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PipelineHelpURLAttribute*, "UnityEngine.Rendering", "PipelineHelpURLAttribute");
// [Conditional("UNITY_EDITOR")]
// [AttributeUsage((System.AttributeTargets)20, AllowMultiple = true)]
// Dependencies UnityEngine.HelpURLAttribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.PipelineHelpURLAttribute
class CORDL_TYPE PipelineHelpURLAttribute : public ::UnityEngine::HelpURLAttribute {
public:
  // Declarations
  __declspec(property(get = get_URL)) ::StringW URL;

  /// @brief Field <pageHash>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pageHash_k__BackingField, put = __cordl_internal_set__pageHash_k__BackingField)) ::StringW _pageHash_k__BackingField;

  /// @brief Field <pageName>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pageName_k__BackingField, put = __cordl_internal_set__pageName_k__BackingField)) ::StringW _pageName_k__BackingField;

  /// @brief Field <pipelineName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pipelineName_k__BackingField, put = __cordl_internal_set__pipelineName_k__BackingField)) ::StringW _pipelineName_k__BackingField;

  __declspec(property(get = get_pageHash)) ::StringW pageHash;

  __declspec(property(get = get_pageName)) ::StringW pageName;

  __declspec(property(get = get_pipelineName)) ::StringW pipelineName;

  static inline ::UnityEngine::Rendering::PipelineHelpURLAttribute* New_ctor(::StringW pipelineName, ::StringW pageName, ::StringW pageHash);

  constexpr ::StringW const& __cordl_internal_get__pageHash_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__pageHash_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__pageName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__pageName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__pipelineName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__pipelineName_k__BackingField();

  constexpr void __cordl_internal_set__pageHash_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__pageName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__pipelineName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6ba2890, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW pipelineName, ::StringW pageName, ::StringW pageHash);

  /// @brief Method get_URL, addr 0x6ba2904, size 0x14, virtual true, abstract: false, final false
  inline ::StringW get_URL();

  /// [CompilerGenerated]
  /// @brief Method get_pageHash, addr 0x6ba2888, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_pageHash();

  /// [CompilerGenerated]
  /// @brief Method get_pageName, addr 0x6ba2880, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_pageName();

  /// [CompilerGenerated]
  /// @brief Method get_pipelineName, addr 0x6ba2878, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_pipelineName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PipelineHelpURLAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PipelineHelpURLAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PipelineHelpURLAttribute(PipelineHelpURLAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PipelineHelpURLAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PipelineHelpURLAttribute(PipelineHelpURLAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8939 };

  /// [CompilerGenerated]
  /// @brief Field <pipelineName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____pipelineName_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <pageName>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____pageName_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <pageHash>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____pageHash_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PipelineHelpURLAttribute, ____pipelineName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PipelineHelpURLAttribute, ____pageName_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PipelineHelpURLAttribute, ____pageHash_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PipelineHelpURLAttribute) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering
