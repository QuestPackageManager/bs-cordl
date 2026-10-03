#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessMaterialLibrary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PostProcessMaterialLibrary)
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PostProcessMaterialLibrary;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*, "UnityEngine.Rendering.Universal", "PostProcessMaterialLibrary");
// Dependencies System.Object, UnityEngine.Material
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessMaterialLibrary
class CORDL_TYPE PostProcessMaterialLibrary : public ::System::Object {
public:
  // Declarations
  /// @brief Field bloom, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_bloom, put = __cordl_internal_set_bloom)) ::UnityW<::UnityEngine::Material> bloom;

  /// @brief Field bloomUpsample, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomUpsample, put = __cordl_internal_set_bloomUpsample)) ::ArrayW<::UnityW<::UnityEngine::Material>> bloomUpsample;

  /// @brief Field bokehDepthOfField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bokehDepthOfField, put = __cordl_internal_set_bokehDepthOfField)) ::UnityW<::UnityEngine::Material> bokehDepthOfField;

  /// @brief Field bokehDepthOfFieldCoC, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_bokehDepthOfFieldCoC, put = __cordl_internal_set_bokehDepthOfFieldCoC)) ::UnityW<::UnityEngine::Material> bokehDepthOfFieldCoC;

  /// @brief Field easu, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_easu, put = __cordl_internal_set_easu)) ::UnityW<::UnityEngine::Material> easu;

  /// @brief Field finalPass, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_finalPass, put = __cordl_internal_set_finalPass)) ::UnityW<::UnityEngine::Material> finalPass;

  /// @brief Field gaussianDepthOfField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gaussianDepthOfField, put = __cordl_internal_set_gaussianDepthOfField)) ::UnityW<::UnityEngine::Material> gaussianDepthOfField;

  /// @brief Field gaussianDepthOfFieldCoC, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gaussianDepthOfFieldCoC, put = __cordl_internal_set_gaussianDepthOfFieldCoC)) ::UnityW<::UnityEngine::Material> gaussianDepthOfFieldCoC;

  /// @brief Field lensFlareDataDriven, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_lensFlareDataDriven, put = __cordl_internal_set_lensFlareDataDriven)) ::UnityW<::UnityEngine::Material> lensFlareDataDriven;

  /// @brief Field lensFlareScreenSpace, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_lensFlareScreenSpace, put = __cordl_internal_set_lensFlareScreenSpace)) ::UnityW<::UnityEngine::Material> lensFlareScreenSpace;

  /// @brief Field m_Resources, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resources, put = __cordl_internal_set_m_Resources)) ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> m_Resources;

  /// @brief Field motionBlur, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_motionBlur, put = __cordl_internal_set_motionBlur)) ::UnityW<::UnityEngine::Material> motionBlur;

  /// @brief Field paniniProjection, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_paniniProjection, put = __cordl_internal_set_paniniProjection)) ::UnityW<::UnityEngine::Material> paniniProjection;

  __declspec(property(get = get_resources)) ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> resources;

  /// @brief Field scalingSetup, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_scalingSetup, put = __cordl_internal_set_scalingSetup)) ::UnityW<::UnityEngine::Material> scalingSetup;

  /// @brief Field stopNaN, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stopNaN, put = __cordl_internal_set_stopNaN)) ::UnityW<::UnityEngine::Material> stopNaN;

  /// @brief Field subpixelMorphologicalAntialiasing, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subpixelMorphologicalAntialiasing, put = __cordl_internal_set_subpixelMorphologicalAntialiasing)) ::UnityW<::UnityEngine::Material>
      subpixelMorphologicalAntialiasing;

  /// @brief Field temporalAntialiasing, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_temporalAntialiasing, put = __cordl_internal_set_temporalAntialiasing)) ::UnityW<::UnityEngine::Material> temporalAntialiasing;

  /// @brief Field uber, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_uber, put = __cordl_internal_set_uber)) ::UnityW<::UnityEngine::Material> uber;

  /// @brief Method Cleanup, addr 0x6cdaa60, size 0x170, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Load, addr 0x6cda8d8, size 0x188, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> Load(::UnityEngine::Shader* shader);

  static inline ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary* New_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bloom() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bloom();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_bloomUpsample() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_bloomUpsample();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bokehDepthOfField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bokehDepthOfField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bokehDepthOfFieldCoC() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bokehDepthOfFieldCoC();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_easu() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_easu();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_finalPass() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_finalPass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_gaussianDepthOfField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_gaussianDepthOfField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_gaussianDepthOfFieldCoC() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_gaussianDepthOfFieldCoC();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lensFlareDataDriven() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lensFlareDataDriven();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lensFlareScreenSpace() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lensFlareScreenSpace();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& __cordl_internal_get_m_Resources() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& __cordl_internal_get_m_Resources();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_motionBlur() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_motionBlur();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_paniniProjection() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_paniniProjection();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_scalingSetup() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_scalingSetup();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stopNaN() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stopNaN();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_subpixelMorphologicalAntialiasing() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_subpixelMorphologicalAntialiasing();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_temporalAntialiasing() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_temporalAntialiasing();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_uber() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_uber();

  constexpr void __cordl_internal_set_bloom(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_bloomUpsample(::ArrayW<::UnityW<::UnityEngine::Material>> value);

  constexpr void __cordl_internal_set_bokehDepthOfField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_bokehDepthOfFieldCoC(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_easu(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_finalPass(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_gaussianDepthOfField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_gaussianDepthOfFieldCoC(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_lensFlareDataDriven(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_lensFlareScreenSpace(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Resources(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value);

  constexpr void __cordl_internal_set_motionBlur(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_paniniProjection(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_scalingSetup(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_stopNaN(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_subpixelMorphologicalAntialiasing(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_temporalAntialiasing(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_uber(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x6cda6b4, size 0x224, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::PostProcessData* data);

  /// @brief Method get_resources, addr 0x6cda6ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> get_resources();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessMaterialLibrary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessMaterialLibrary", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessMaterialLibrary(PostProcessMaterialLibrary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessMaterialLibrary", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessMaterialLibrary(PostProcessMaterialLibrary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13107 };

  /// @brief Field stopNaN, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stopNaN;

  /// @brief Field subpixelMorphologicalAntialiasing, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___subpixelMorphologicalAntialiasing;

  /// @brief Field gaussianDepthOfField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___gaussianDepthOfField;

  /// @brief Field gaussianDepthOfFieldCoC, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___gaussianDepthOfFieldCoC;

  /// @brief Field bokehDepthOfField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bokehDepthOfField;

  /// @brief Field bokehDepthOfFieldCoC, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bokehDepthOfFieldCoC;

  /// @brief Field temporalAntialiasing, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___temporalAntialiasing;

  /// @brief Field motionBlur, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___motionBlur;

  /// @brief Field paniniProjection, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___paniniProjection;

  /// @brief Field bloom, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bloom;

  /// @brief Field bloomUpsample, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>> ___bloomUpsample;

  /// @brief Field lensFlareScreenSpace, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___lensFlareScreenSpace;

  /// @brief Field lensFlareDataDriven, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___lensFlareDataDriven;

  /// @brief Field uber, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___uber;

  /// @brief Field scalingSetup, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___scalingSetup;

  /// @brief Field easu, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___easu;

  /// @brief Field finalPass, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___finalPass;

  /// @brief Field m_Resources, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> ___m_Resources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___stopNaN) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___subpixelMorphologicalAntialiasing) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___gaussianDepthOfField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___gaussianDepthOfFieldCoC) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___bokehDepthOfField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___bokehDepthOfFieldCoC) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___temporalAntialiasing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___motionBlur) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___paniniProjection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___bloom) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___bloomUpsample) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___lensFlareScreenSpace) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___lensFlareDataDriven) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___uber) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___scalingSetup) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___easu) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___finalPass) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary, ___m_Resources) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary) == 0xa0, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
