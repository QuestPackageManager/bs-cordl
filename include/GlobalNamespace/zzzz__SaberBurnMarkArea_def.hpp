#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberBurnMarkArea.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SaberBurnMarkArea)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberBurnMarkArea;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberBurnMarkArea);
// Type: ::SaberBurnMarkArea
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SaberBurnMarkArea*
class CORDL_TYPE SaberBurnMarkArea : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _blackMarkLineRandomOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__blackMarkLineRandomOffset, put = __cordl_internal_set__blackMarkLineRandomOffset)) float_t _blackMarkLineRandomOffset;

  /// @brief Field _burnMarksFadeOutStrength, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__burnMarksFadeOutStrength, put = __cordl_internal_set__burnMarksFadeOutStrength)) float_t _burnMarksFadeOutStrength;

  /// @brief Field _camera, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _colorManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _disableBlitTimer, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__disableBlitTimer, put = __cordl_internal_set__disableBlitTimer)) float_t _disableBlitTimer;

  /// @brief Field _emitParams, offset 0xb8, size 0x90
  __declspec(property(get = __cordl_internal_get__emitParams, put = __cordl_internal_set__emitParams)) ::UnityEngine::__ParticleSystem__EmitParams _emitParams;

  /// @brief Field _fadeOutMaterial, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutMaterial, put = __cordl_internal_set__fadeOutMaterial)) ::UnityW<::UnityEngine::Material> _fadeOutMaterial;

  /// @brief Field _fadeOutShader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutShader, put = __cordl_internal_set__fadeOutShader)) ::UnityW<::UnityEngine::Shader> _fadeOutShader;

  /// @brief Field _fadeOutStrengthShaderPropertyID, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutStrengthShaderPropertyID, put = __cordl_internal_set__fadeOutStrengthShaderPropertyID)) int32_t _fadeOutStrengthShaderPropertyID;

  /// @brief Field _linePoints, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__linePoints, put = __cordl_internal_set__linePoints)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _linePoints;

  /// @brief Field _lineRenderers, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__lineRenderers,
                      put = __cordl_internal_set__lineRenderers)) ::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*>
      _lineRenderers;

  /// @brief Field _plane, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__plane, put = __cordl_internal_set__plane)) ::UnityEngine::Plane _plane;

  /// @brief Field _prevBurnMarkPos, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__prevBurnMarkPos, put = __cordl_internal_set__prevBurnMarkPos)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _prevBurnMarkPos;

  /// @brief Field _prevBurnMarkPosValid, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__prevBurnMarkPosValid, put = __cordl_internal_set__prevBurnMarkPosValid)) ::ArrayW<bool, ::Array<bool>*> _prevBurnMarkPosValid;

  /// @brief Field _renderTextures, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__renderTextures,
                      put = __cordl_internal_set__renderTextures)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*>
      _renderTextures;

  /// @brief Field _renderer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer> _renderer;

  /// @brief Field _saberBurnMarkLinePrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__saberBurnMarkLinePrefab, put = __cordl_internal_set__saberBurnMarkLinePrefab)) ::UnityW<::UnityEngine::LineRenderer> _saberBurnMarkLinePrefab;

  /// @brief Field _saberManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _sabers, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sabers, put = __cordl_internal_set__sabers)) ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> _sabers;

  /// @brief Field _settingsManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _textureHeight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__textureHeight, put = __cordl_internal_set__textureHeight)) int32_t _textureHeight;

  /// @brief Field _textureWidth, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__textureWidth, put = __cordl_internal_set__textureWidth)) int32_t _textureWidth;

  /// @brief Method GetBurnMarkPos, addr 0x3b210c0, size 0x330, virtual false, abstract: false, final false
  inline bool GetBurnMarkPos(::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ByRef<::UnityEngine::Vector3> burnMarkPos);

  /// @brief Method LateUpdate, addr 0x3b214ac, size 0x688, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SaberBurnMarkArea* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b20c5c, size 0x224, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3b20fa0, size 0x120, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3b20e80, size 0x120, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x3b20260, size 0x9fc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method WorldToCameraBurnMarkPos, addr 0x3b213f0, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToCameraBurnMarkPos(::UnityEngine::Vector3 pos);

  constexpr float_t const& __cordl_internal_get__blackMarkLineRandomOffset() const;

  constexpr float_t& __cordl_internal_get__blackMarkLineRandomOffset();

  constexpr float_t const& __cordl_internal_get__burnMarksFadeOutStrength() const;

  constexpr float_t& __cordl_internal_get__burnMarksFadeOutStrength();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr float_t const& __cordl_internal_get__disableBlitTimer() const;

  constexpr float_t& __cordl_internal_get__disableBlitTimer();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __cordl_internal_get__emitParams() const;

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __cordl_internal_get__emitParams();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fadeOutMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fadeOutMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__fadeOutShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__fadeOutShader();

  constexpr int32_t const& __cordl_internal_get__fadeOutStrengthShaderPropertyID() const;

  constexpr int32_t& __cordl_internal_get__fadeOutStrengthShaderPropertyID();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__linePoints() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__linePoints();

  constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*> const& __cordl_internal_get__lineRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*>& __cordl_internal_get__lineRenderers();

  constexpr ::UnityEngine::Plane const& __cordl_internal_get__plane() const;

  constexpr ::UnityEngine::Plane& __cordl_internal_get__plane();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__prevBurnMarkPos() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__prevBurnMarkPos();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get__prevBurnMarkPosValid() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get__prevBurnMarkPosValid();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get__renderTextures() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*>& __cordl_internal_get__renderTextures();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__saberBurnMarkLinePrefab() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__saberBurnMarkLinePrefab();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> const& __cordl_internal_get__sabers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*>& __cordl_internal_get__sabers();

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

  constexpr int32_t const& __cordl_internal_get__textureHeight() const;

  constexpr int32_t& __cordl_internal_get__textureHeight();

  constexpr int32_t const& __cordl_internal_get__textureWidth() const;

  constexpr int32_t& __cordl_internal_get__textureWidth();

  constexpr void __cordl_internal_set__blackMarkLineRandomOffset(float_t value);

  constexpr void __cordl_internal_set__burnMarksFadeOutStrength(float_t value);

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__disableBlitTimer(float_t value);

  constexpr void __cordl_internal_set__emitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  constexpr void __cordl_internal_set__fadeOutMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__fadeOutShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__fadeOutStrengthShaderPropertyID(int32_t value);

  constexpr void __cordl_internal_set__linePoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__lineRenderers(::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*> value);

  constexpr void __cordl_internal_set__plane(::UnityEngine::Plane value);

  constexpr void __cordl_internal_set__prevBurnMarkPos(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__prevBurnMarkPosValid(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set__renderTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> value);

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  constexpr void __cordl_internal_set__saberBurnMarkLinePrefab(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__textureHeight(int32_t value);

  constexpr void __cordl_internal_set__textureWidth(int32_t value);

  /// @brief Method .ctor, addr 0x3b21b34, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberBurnMarkArea();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkArea", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberBurnMarkArea(SaberBurnMarkArea&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkArea", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberBurnMarkArea(SaberBurnMarkArea const&) = delete;

  /// @brief Field _saberBurnMarkLinePrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ____saberBurnMarkLinePrefab;

  /// @brief Field _blackMarkLineRandomOffset, offset: 0x28, size: 0x4, def value: None
  float_t ____blackMarkLineRandomOffset;

  /// @brief Field _textureWidth, offset: 0x2c, size: 0x4, def value: None
  int32_t ____textureWidth;

  /// @brief Field _textureHeight, offset: 0x30, size: 0x4, def value: None
  int32_t ____textureHeight;

  /// @brief Field _burnMarksFadeOutStrength, offset: 0x34, size: 0x4, def value: None
  float_t ____burnMarksFadeOutStrength;

  /// @brief Field _fadeOutShader, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____fadeOutShader;

  /// @brief Field _colorManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _saberManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _settingsManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _disableBlitTimer, offset: 0x58, size: 0x4, def value: None
  float_t ____disableBlitTimer;

  /// @brief Field _renderer, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  /// @brief Field _fadeOutStrengthShaderPropertyID, offset: 0x68, size: 0x4, def value: None
  int32_t ____fadeOutStrengthShaderPropertyID;

  /// @brief Field _sabers, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> ____sabers;

  /// @brief Field _plane, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Plane ____plane;

  /// @brief Field _prevBurnMarkPos, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____prevBurnMarkPos;

  /// @brief Field _prevBurnMarkPosValid, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____prevBurnMarkPosValid;

  /// @brief Field _lineRenderers, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*> ____lineRenderers;

  /// @brief Field _camera, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _linePoints, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____linePoints;

  /// @brief Field _renderTextures, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> ____renderTextures;

  /// @brief Field _emitParams, offset: 0xb8, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____emitParams;

  /// @brief Field _fadeOutMaterial, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____fadeOutMaterial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4221 };

  /// @brief Field kDisableBlitAfterSecondsThreshold offset 0xffffffff size 0x4
  static constexpr float_t kDisableBlitAfterSecondsThreshold{ 5.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberBurnMarkArea, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____saberBurnMarkLinePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____blackMarkLineRandomOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____textureWidth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____textureHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____burnMarksFadeOutStrength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____fadeOutShader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____colorManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____saberManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____settingsManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____disableBlitTimer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____renderer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____fadeOutStrengthShaderPropertyID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____sabers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____plane) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____prevBurnMarkPos) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____prevBurnMarkPosValid) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____lineRenderers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____camera) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____linePoints) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____renderTextures) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____emitParams) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____fadeOutMaterial) == 0x148, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberBurnMarkArea);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberBurnMarkArea*, "", "SaberBurnMarkArea");
