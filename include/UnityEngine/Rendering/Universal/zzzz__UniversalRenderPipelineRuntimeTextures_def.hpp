#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineRuntimeTextures.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipelineRuntimeTextures)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineRuntimeTextures;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeTextures
class CORDL_TYPE UniversalRenderPipelineRuntimeTextures : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = get_bayerMatrixTex, put = set_bayerMatrixTex)) ::UnityW<::UnityEngine::Texture2D> bayerMatrixTex;

  __declspec(property(get = get_blueNoise64LTex, put = set_blueNoise64LTex)) ::UnityW<::UnityEngine::Texture2D> blueNoise64LTex;

  __declspec(property(get = get_debugFontTexture, put = set_debugFontTexture)) ::UnityW<::UnityEngine::Texture2D> debugFontTexture;

  /// @brief Field m_BayerMatrixTex, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BayerMatrixTex, put = __cordl_internal_set_m_BayerMatrixTex)) ::UnityW<::UnityEngine::Texture2D> m_BayerMatrixTex;

  /// @brief Field m_BlueNoise64LTex, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlueNoise64LTex, put = __cordl_internal_set_m_BlueNoise64LTex)) ::UnityW<::UnityEngine::Texture2D> m_BlueNoise64LTex;

  /// @brief Field m_DebugFontTex, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugFontTex, put = __cordl_internal_set_m_DebugFontTex)) ::UnityW<::UnityEngine::Texture2D> m_DebugFontTex;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x66ff1b8, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_BayerMatrixTex() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_BayerMatrixTex();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_BlueNoise64LTex() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_BlueNoise64LTex();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_DebugFontTex() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_DebugFontTex();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_BayerMatrixTex(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_BlueNoise64LTex(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_DebugFontTex(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x66ff328, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bayerMatrixTex, addr 0x66ff238, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_bayerMatrixTex();

  /// @brief Method get_blueNoise64LTex, addr 0x66ff1c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_blueNoise64LTex();

  /// @brief Method get_debugFontTexture, addr 0x66ff2b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_debugFontTexture();

  /// @brief Method get_version, addr 0x66ff1b0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_bayerMatrixTex, addr 0x66ff240, size 0x70, virtual false, abstract: false, final false
  inline void set_bayerMatrixTex(::UnityEngine::Texture2D* value);

  /// @brief Method set_blueNoise64LTex, addr 0x66ff1c8, size 0x70, virtual false, abstract: false, final false
  inline void set_blueNoise64LTex(::UnityEngine::Texture2D* value);

  /// @brief Method set_debugFontTexture, addr 0x66ff2b8, size 0x70, virtual false, abstract: false, final false
  inline void set_debugFontTexture(::UnityEngine::Texture2D* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineRuntimeTextures();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineRuntimeTextures", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineRuntimeTextures(UniversalRenderPipelineRuntimeTextures&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineRuntimeTextures", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineRuntimeTextures(UniversalRenderPipelineRuntimeTextures const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12916 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_BlueNoise64LTex, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_BlueNoise64LTex;

  /// @brief Field m_BayerMatrixTex, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_BayerMatrixTex;

  /// @brief Field m_DebugFontTex, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_DebugFontTex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures, ___m_BlueNoise64LTex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures, ___m_BayerMatrixTex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures, ___m_DebugFontTex) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineRuntimeTextures");
