#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessPasses.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PostProcessPasses)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessParams;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct PostProcessPasses;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::PostProcessPasses);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessPasses
struct CORDL_TYPE PostProcessPasses {
public:
  // Declarations
  __declspec(property(get = get_afterPostProcessColor)) ::UnityEngine::Rendering::RTHandle* afterPostProcessColor;

  __declspec(property(get = get_colorGradingLut)) ::UnityEngine::Rendering::RTHandle* colorGradingLut;

  __declspec(property(get = get_colorGradingLutPass)) ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* colorGradingLutPass;

  __declspec(property(get = get_finalPostProcessPass)) ::UnityEngine::Rendering::Universal::PostProcessPass* finalPostProcessPass;

  __declspec(property(get = get_isCreated)) bool isCreated;

  __declspec(property(get = get_postProcessPass)) ::UnityEngine::Rendering::Universal::PostProcessPass* postProcessPass;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x66f2f78, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Recreate, addr 0x66f2db0, size 0x1c8, virtual false, abstract: false, final false
  inline void Recreate(::UnityEngine::Rendering::Universal::PostProcessData* data, ::ByRef<::UnityEngine::Rendering::Universal::PostProcessParams> ppParams);

  /// @brief Method ReleaseRenderTargets, addr 0x66f2fdc, size 0x54, virtual false, abstract: false, final false
  inline void ReleaseRenderTargets();

  /// @brief Method .ctor, addr 0x66f2d98, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::PostProcessData* rendererPostProcessData, ::ByRef<::UnityEngine::Rendering::Universal::PostProcessParams> postProcessParams);

  /// @brief Method get_afterPostProcessColor, addr 0x66f2d24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_afterPostProcessColor();

  /// @brief Method get_colorGradingLut, addr 0x66f2d2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_colorGradingLut();

  /// @brief Method get_colorGradingLutPass, addr 0x66f2d0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* get_colorGradingLutPass();

  /// @brief Method get_finalPostProcessPass, addr 0x66f2d1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PostProcessPass* get_finalPostProcessPass();

  /// @brief Method get_isCreated, addr 0x66f2d34, size 0x64, virtual false, abstract: false, final false
  inline bool get_isCreated();

  /// @brief Method get_postProcessPass, addr 0x66f2d14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PostProcessPass* get_postProcessPass();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPasses();

  // Ctor Parameters [CppParam { name: "m_ColorGradingLutPass", ty: "::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*", modifiers: "", def_value: None }, CppParam { name:
  // "m_PostProcessPass", ty: "::UnityEngine::Rendering::Universal::PostProcessPass*", modifiers: "", def_value: None }, CppParam { name: "m_FinalPostProcessPass", ty:
  // "::UnityEngine::Rendering::Universal::PostProcessPass*", modifiers: "", def_value: None }, CppParam { name: "m_AfterPostProcessColor", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "",
  // def_value: None }, CppParam { name: "m_ColorGradingLut", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam { name: "m_RendererPostProcessData", ty:
  // "::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentPostProcessData", ty:
  // "::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>", modifiers: "", def_value: None }, CppParam { name: "m_BlitMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "",
  // def_value: None }]
  constexpr PostProcessPasses(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* m_ColorGradingLutPass, ::UnityEngine::Rendering::Universal::PostProcessPass* m_PostProcessPass,
                              ::UnityEngine::Rendering::Universal::PostProcessPass* m_FinalPostProcessPass, ::UnityEngine::Rendering::RTHandle* m_AfterPostProcessColor,
                              ::UnityEngine::Rendering::RTHandle* m_ColorGradingLut, ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> m_RendererPostProcessData,
                              ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> m_CurrentPostProcessData, ::UnityW<::UnityEngine::Material> m_BlitMaterial) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12869 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m_ColorGradingLutPass, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* m_ColorGradingLutPass;

  /// @brief Field m_PostProcessPass, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPass* m_PostProcessPass;

  /// @brief Field m_FinalPostProcessPass, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPass* m_FinalPostProcessPass;

  /// @brief Field m_AfterPostProcessColor, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* m_AfterPostProcessColor;

  /// @brief Field m_ColorGradingLut, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* m_ColorGradingLut;

  /// @brief Field m_RendererPostProcessData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> m_RendererPostProcessData;

  /// @brief Field m_CurrentPostProcessData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> m_CurrentPostProcessData;

  /// @brief Field m_BlitMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> m_BlitMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPasses, m_ColorGradingLutPass) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPasses, m_PostProcessPass) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPasses, m_FinalPostProcessPass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPasses, m_AfterPostProcessColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPasses, m_ColorGradingLut) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPasses, m_RendererPostProcessData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPasses, m_CurrentPostProcessData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPasses, m_BlitMaterial) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPasses, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPasses, "UnityEngine.Rendering.Universal", "PostProcessPasses");
