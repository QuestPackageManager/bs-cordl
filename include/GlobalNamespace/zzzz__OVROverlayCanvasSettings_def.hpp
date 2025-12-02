#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvasSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRRuntimeAssetsBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVROverlayCanvasSettings)
namespace GlobalNamespace {
struct OVROverlayCanvas_DrawMode;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class OVROverlayCanvasSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVROverlayCanvasSettings);
// Dependencies OVRRuntimeAssetsBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlayCanvasSettings
class CORDL_TYPE OVROverlayCanvasSettings : public ::GlobalNamespace::OVRRuntimeAssetsBase {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::UnityW<::GlobalNamespace::OVROverlayCanvasSettings> _instance;

  /// @brief Field _opaqueImposterShader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__opaqueImposterShader, put = __cordl_internal_set__opaqueImposterShader)) ::UnityW<::UnityEngine::Shader> _opaqueImposterShader;

  /// @brief Field _overrideCanvasShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideCanvasShader, put = __cordl_internal_set__overrideCanvasShader)) ::UnityW<::UnityEngine::Shader> _overrideCanvasShader;

  /// @brief Field _overrideDefaultCanvasMaterial, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideDefaultCanvasMaterial, put = __cordl_internal_set__overrideDefaultCanvasMaterial)) bool _overrideDefaultCanvasMaterial;

  /// @brief Field _transparentImposterShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transparentImposterShader, put = __cordl_internal_set__transparentImposterShader)) ::UnityW<::UnityEngine::Shader> _transparentImposterShader;

  /// @brief Method ApplyGlobalSettings, addr 0x5c84edc, size 0x38, virtual false, abstract: false, final false
  inline void ApplyGlobalSettings();

  /// @brief Method EnsureInitialized, addr 0x5c84de0, size 0xfc, virtual false, abstract: false, final false
  inline void EnsureInitialized();

  /// @brief Method EnsureShaderInitialized, addr 0x5c84fd8, size 0x160, virtual false, abstract: false, final false
  static inline void EnsureShaderInitialized(::ByRef<::UnityEngine::Shader*> shader, ::StringW shaderName, ::StringW replaceShaderName);

  /// @brief Method GetOverlayCanvasSettings, addr 0x5c84cac, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVROverlayCanvasSettings> GetOverlayCanvasSettings();

  /// @brief Method GetShader, addr 0x5c84f14, size 0x30, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> GetShader(::GlobalNamespace::OVROverlayCanvas_DrawMode drawMode);

  static inline ::GlobalNamespace::OVROverlayCanvasSettings* New_ctor();

  /// @brief Method OnValidate, addr 0x5c85138, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method UsingBuiltInRenderPipeline, addr 0x5c84f44, size 0x94, virtual false, abstract: false, final false
  static inline bool UsingBuiltInRenderPipeline();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__opaqueImposterShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__opaqueImposterShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__overrideCanvasShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__overrideCanvasShader();

  constexpr bool const& __cordl_internal_get__overrideDefaultCanvasMaterial() const;

  constexpr bool& __cordl_internal_get__overrideDefaultCanvasMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__transparentImposterShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__transparentImposterShader();

  constexpr void __cordl_internal_set__opaqueImposterShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__overrideCanvasShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__overrideDefaultCanvasMaterial(bool value);

  constexpr void __cordl_internal_set__transparentImposterShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x5c8513c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::OVROverlayCanvasSettings> getStaticF__instance();

  /// @brief Method get_Instance, addr 0x5c84c08, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVROverlayCanvasSettings> get_Instance();

  static inline void setStaticF__instance(::UnityW<::GlobalNamespace::OVROverlayCanvasSettings> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVROverlayCanvasSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvasSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVROverlayCanvasSettings(OVROverlayCanvasSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvasSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVROverlayCanvasSettings(OVROverlayCanvasSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7243 };

  /// @brief Field kAssetName offset 0xffffffff size 0x8
  static constexpr ::ConstString kAssetName{ u"OVROverlayCanvasSettings" };

  /// @brief Field kBuiltInOpaqueShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kBuiltInOpaqueShaderName{ u"UI/Prerendered Opaque" };

  /// @brief Field kBuiltInTransparentShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kBuiltInTransparentShaderName{ u"UI/Prerendered" };

  /// @brief Field kOverrideUiShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kOverrideUiShaderName{ u"UI/Default Correct" };

  /// @brief Field kUrpOpaqueShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kUrpOpaqueShaderName{ u"URP/UI/Prerendered Opaque" };

  /// @brief Field kUrpTransparentShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kUrpTransparentShaderName{ u"URP/UI/Prerendered" };

  /// @brief Field _overrideCanvasShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____overrideCanvasShader;

  /// @brief Field _transparentImposterShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____transparentImposterShader;

  /// @brief Field _opaqueImposterShader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____opaqueImposterShader;

  /// @brief Field _overrideDefaultCanvasMaterial, offset: 0x30, size: 0x1, def value: None
  bool ____overrideDefaultCanvasMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvasSettings, ____overrideCanvasShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvasSettings, ____transparentImposterShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvasSettings, ____opaqueImposterShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvasSettings, ____overrideDefaultCanvasMaterial) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROverlayCanvasSettings, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVROverlayCanvasSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlayCanvasSettings*, "", "OVROverlayCanvasSettings");
