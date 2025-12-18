#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Renderer2DResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Renderer2DResources)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Renderer2DResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Renderer2DResources);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Renderer2DResources
class CORDL_TYPE Renderer2DResources : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = get_copyDepthPS, put = set_copyDepthPS)) ::UnityW<::UnityEngine::Shader> copyDepthPS;

  __declspec(property(get = get_fallOffLookup, put = set_fallOffLookup)) ::UnityW<::UnityEngine::Texture2D> fallOffLookup;

  __declspec(property(get = get_geometryShadowShader, put = set_geometryShadowShader)) ::UnityW<::UnityEngine::Shader> geometryShadowShader;

  __declspec(property(get = get_geometryUnshadowShader, put = set_geometryUnshadowShader)) ::UnityW<::UnityEngine::Shader> geometryUnshadowShader;

  __declspec(property(get = get_lightShader, put = set_lightShader)) ::UnityW<::UnityEngine::Shader> lightShader;

  /// @brief Field m_CopyDepthPS, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyDepthPS, put = __cordl_internal_set_m_CopyDepthPS)) ::UnityW<::UnityEngine::Shader> m_CopyDepthPS;

  /// @brief Field m_FallOffLookup, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FallOffLookup, put = __cordl_internal_set_m_FallOffLookup)) ::UnityW<::UnityEngine::Texture2D> m_FallOffLookup;

  /// @brief Field m_GeometryShadowShader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GeometryShadowShader, put = __cordl_internal_set_m_GeometryShadowShader)) ::UnityW<::UnityEngine::Shader> m_GeometryShadowShader;

  /// @brief Field m_GeometryUnshadowShader, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GeometryUnshadowShader, put = __cordl_internal_set_m_GeometryUnshadowShader)) ::UnityW<::UnityEngine::Shader> m_GeometryUnshadowShader;

  /// @brief Field m_LightShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightShader, put = __cordl_internal_set_m_LightShader)) ::UnityW<::UnityEngine::Shader> m_LightShader;

  /// @brief Field m_ProjectedShadowShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProjectedShadowShader, put = __cordl_internal_set_m_ProjectedShadowShader)) ::UnityW<::UnityEngine::Shader> m_ProjectedShadowShader;

  /// @brief Field m_SpriteShadowShader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteShadowShader, put = __cordl_internal_set_m_SpriteShadowShader)) ::UnityW<::UnityEngine::Shader> m_SpriteShadowShader;

  /// @brief Field m_SpriteUnshadowShader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteUnshadowShader, put = __cordl_internal_set_m_SpriteUnshadowShader)) ::UnityW<::UnityEngine::Shader> m_SpriteUnshadowShader;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_projectedShadowShader, put = set_projectedShadowShader)) ::UnityW<::UnityEngine::Shader> projectedShadowShader;

  __declspec(property(get = get_spriteShadowShader, put = set_spriteShadowShader)) ::UnityW<::UnityEngine::Shader> spriteShadowShader;

  __declspec(property(get = get_spriteUnshadowShader, put = set_spriteUnshadowShader)) ::UnityW<::UnityEngine::Shader> spriteUnshadowShader;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::Renderer2DResources* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x66fe6a0, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_CopyDepthPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_CopyDepthPS();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_FallOffLookup() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_FallOffLookup();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_GeometryShadowShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_GeometryShadowShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_GeometryUnshadowShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_GeometryUnshadowShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_LightShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_LightShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_ProjectedShadowShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_ProjectedShadowShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_SpriteShadowShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_SpriteShadowShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_SpriteUnshadowShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_SpriteUnshadowShader();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_CopyDepthPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_FallOffLookup(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_GeometryShadowShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_GeometryUnshadowShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_LightShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_ProjectedShadowShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_SpriteShadowShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_SpriteUnshadowShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x66fea68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_copyDepthPS, addr 0x66fe9f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_copyDepthPS();

  /// @brief Method get_fallOffLookup, addr 0x66fe978, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_fallOffLookup();

  /// @brief Method get_geometryShadowShader, addr 0x66fe888, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_geometryShadowShader();

  /// @brief Method get_geometryUnshadowShader, addr 0x66fe900, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_geometryUnshadowShader();

  /// @brief Method get_lightShader, addr 0x66fe6a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_lightShader();

  /// @brief Method get_projectedShadowShader, addr 0x66fe720, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_projectedShadowShader();

  /// @brief Method get_spriteShadowShader, addr 0x66fe798, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_spriteShadowShader();

  /// @brief Method get_spriteUnshadowShader, addr 0x66fe810, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_spriteUnshadowShader();

  /// @brief Method get_version, addr 0x66fe698, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_copyDepthPS, addr 0x66fe9f8, size 0x70, virtual false, abstract: false, final false
  inline void set_copyDepthPS(::UnityEngine::Shader* value);

  /// @brief Method set_fallOffLookup, addr 0x66fe980, size 0x70, virtual false, abstract: false, final false
  inline void set_fallOffLookup(::UnityEngine::Texture2D* value);

  /// @brief Method set_geometryShadowShader, addr 0x66fe890, size 0x70, virtual false, abstract: false, final false
  inline void set_geometryShadowShader(::UnityEngine::Shader* value);

  /// @brief Method set_geometryUnshadowShader, addr 0x66fe908, size 0x70, virtual false, abstract: false, final false
  inline void set_geometryUnshadowShader(::UnityEngine::Shader* value);

  /// @brief Method set_lightShader, addr 0x66fe6b0, size 0x70, virtual false, abstract: false, final false
  inline void set_lightShader(::UnityEngine::Shader* value);

  /// @brief Method set_projectedShadowShader, addr 0x66fe728, size 0x70, virtual false, abstract: false, final false
  inline void set_projectedShadowShader(::UnityEngine::Shader* value);

  /// @brief Method set_spriteShadowShader, addr 0x66fe7a0, size 0x70, virtual false, abstract: false, final false
  inline void set_spriteShadowShader(::UnityEngine::Shader* value);

  /// @brief Method set_spriteUnshadowShader, addr 0x66fe818, size 0x70, virtual false, abstract: false, final false
  inline void set_spriteUnshadowShader(::UnityEngine::Shader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Renderer2DResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Renderer2DResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Renderer2DResources(Renderer2DResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Renderer2DResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Renderer2DResources(Renderer2DResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12912 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_LightShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_LightShader;

  /// @brief Field m_ProjectedShadowShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_ProjectedShadowShader;

  /// @brief Field m_SpriteShadowShader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_SpriteShadowShader;

  /// @brief Field m_SpriteUnshadowShader, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_SpriteUnshadowShader;

  /// @brief Field m_GeometryShadowShader, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_GeometryShadowShader;

  /// @brief Field m_GeometryUnshadowShader, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_GeometryUnshadowShader;

  /// @brief Field m_FallOffLookup, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_FallOffLookup;

  /// @brief Field m_CopyDepthPS, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_CopyDepthPS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DResources, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DResources, ___m_LightShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DResources, ___m_ProjectedShadowShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DResources, ___m_SpriteShadowShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DResources, ___m_SpriteUnshadowShader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DResources, ___m_GeometryShadowShader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DResources, ___m_GeometryUnshadowShader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DResources, ___m_FallOffLookup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2DResources, ___m_CopyDepthPS) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Renderer2DResources, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Renderer2DResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Renderer2DResources*, "UnityEngine.Rendering.Universal", "Renderer2DResources");
