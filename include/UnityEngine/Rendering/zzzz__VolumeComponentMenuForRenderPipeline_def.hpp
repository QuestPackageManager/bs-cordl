#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeComponentMenuForRenderPipeline.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponentMenu_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VolumeComponentMenuForRenderPipeline)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeComponentMenuForRenderPipeline;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline);
// Dependencies UnityEngine.Rendering.VolumeComponentMenu
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeComponentMenuForRenderPipeline
class CORDL_TYPE VolumeComponentMenuForRenderPipeline : public ::UnityEngine::Rendering::VolumeComponentMenu {
public:
  // Declarations
  /// @brief Field <pipelineTypes>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__pipelineTypes_k__BackingField, put = __cordl_internal_set__pipelineTypes_k__BackingField)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*>
      _pipelineTypes_k__BackingField;

  __declspec(property(get = get_pipelineTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> pipelineTypes;

  static inline ::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline* New_ctor(::StringW menu, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> pipelineTypes);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__pipelineTypes_k__BackingField() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__pipelineTypes_k__BackingField();

  constexpr void __cordl_internal_set__pipelineTypes_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x65ac4a8, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::StringW menu, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> pipelineTypes);

  /// @brief Method get_pipelineTypes, addr 0x65ac4a0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_pipelineTypes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeComponentMenuForRenderPipeline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponentMenuForRenderPipeline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeComponentMenuForRenderPipeline(VolumeComponentMenuForRenderPipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponentMenuForRenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeComponentMenuForRenderPipeline(VolumeComponentMenuForRenderPipeline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12295 };

  /// @brief Field <pipelineTypes>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____pipelineTypes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline, ____pipelineTypes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeComponentMenuForRenderPipeline*, "UnityEngine.Rendering", "VolumeComponentMenuForRenderPipeline");
