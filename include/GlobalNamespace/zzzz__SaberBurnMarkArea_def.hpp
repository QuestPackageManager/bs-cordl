#pragma once
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
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 312, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10163)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(15889))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4874))
// CS Name: ::SaberBurnMarkArea*
class CORDL_TYPE SaberBurnMarkArea : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _saberBurnMarkLinePrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__saberBurnMarkLinePrefab, put = __cordl_internal_set__saberBurnMarkLinePrefab))::UnityW<::UnityEngine::LineRenderer> _saberBurnMarkLinePrefab;

  /// @brief Field _blackMarkLineRandomOffset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__blackMarkLineRandomOffset, put = __cordl_internal_set__blackMarkLineRandomOffset)) float_t _blackMarkLineRandomOffset;

  /// @brief Field _textureWidth, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__textureWidth, put = __cordl_internal_set__textureWidth)) int32_t _textureWidth;

  /// @brief Field _textureHeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__textureHeight, put = __cordl_internal_set__textureHeight)) int32_t _textureHeight;

  /// @brief Field _burnMarksFadeOutStrength, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__burnMarksFadeOutStrength, put = __cordl_internal_set__burnMarksFadeOutStrength)) float_t _burnMarksFadeOutStrength;

  /// @brief Field _fadeOutShader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutShader, put = __cordl_internal_set__fadeOutShader))::UnityW<::UnityEngine::Shader> _fadeOutShader;

  /// @brief Field _colorManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _saberManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager))::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _renderer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer))::UnityW<::UnityEngine::Renderer> _renderer;

  /// @brief Field _fadeOutStrengthShaderPropertyID, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutStrengthShaderPropertyID, put = __cordl_internal_set__fadeOutStrengthShaderPropertyID)) int32_t _fadeOutStrengthShaderPropertyID;

  /// @brief Field _sabers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__sabers, put = __cordl_internal_set__sabers))::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> _sabers;

  /// @brief Field _plane, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__plane, put = __cordl_internal_set__plane))::UnityEngine::Plane _plane;

  /// @brief Field _prevBurnMarkPos, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__prevBurnMarkPos, put = __cordl_internal_set__prevBurnMarkPos))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _prevBurnMarkPos;

  /// @brief Field _prevBurnMarkPosValid, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__prevBurnMarkPosValid, put = __cordl_internal_set__prevBurnMarkPosValid))::ArrayW<bool, ::Array<bool>*> _prevBurnMarkPosValid;

  /// @brief Field _lineRenderers, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__lineRenderers,
                      put = __cordl_internal_set__lineRenderers))::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*> _lineRenderers;

  /// @brief Field _camera, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera))::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _linePoints, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__linePoints, put = __cordl_internal_set__linePoints))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _linePoints;

  /// @brief Field _renderTextures, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__renderTextures,
                      put = __cordl_internal_set__renderTextures))::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> _renderTextures;

  /// @brief Field _emitParams, offset 0xa0, size 0x90
  __declspec(property(get = __cordl_internal_get__emitParams, put = __cordl_internal_set__emitParams))::UnityEngine::__ParticleSystem__EmitParams _emitParams;

  /// @brief Field _fadeOutMaterial, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutMaterial, put = __cordl_internal_set__fadeOutMaterial))::UnityW<::UnityEngine::Material> _fadeOutMaterial;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__saberBurnMarkLinePrefab();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__saberBurnMarkLinePrefab() const;

  constexpr void __cordl_internal_set__saberBurnMarkLinePrefab(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr float_t& __cordl_internal_get__blackMarkLineRandomOffset();

  constexpr float_t const& __cordl_internal_get__blackMarkLineRandomOffset() const;

  constexpr void __cordl_internal_set__blackMarkLineRandomOffset(float_t value);

  constexpr int32_t& __cordl_internal_get__textureWidth();

  constexpr int32_t const& __cordl_internal_get__textureWidth() const;

  constexpr void __cordl_internal_set__textureWidth(int32_t value);

  constexpr int32_t& __cordl_internal_get__textureHeight();

  constexpr int32_t const& __cordl_internal_get__textureHeight() const;

  constexpr void __cordl_internal_set__textureHeight(int32_t value);

  constexpr float_t& __cordl_internal_get__burnMarksFadeOutStrength();

  constexpr float_t const& __cordl_internal_get__burnMarksFadeOutStrength() const;

  constexpr void __cordl_internal_set__burnMarksFadeOutStrength(float_t value);

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__fadeOutShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__fadeOutShader() const;

  constexpr void __cordl_internal_set__fadeOutShader(::UnityW<::UnityEngine::Shader> value);

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  constexpr int32_t& __cordl_internal_get__fadeOutStrengthShaderPropertyID();

  constexpr int32_t const& __cordl_internal_get__fadeOutStrengthShaderPropertyID() const;

  constexpr void __cordl_internal_set__fadeOutStrengthShaderPropertyID(int32_t value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*>& __cordl_internal_get__sabers();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> const& __cordl_internal_get__sabers() const;

  constexpr void __cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> value);

  constexpr ::UnityEngine::Plane& __cordl_internal_get__plane();

  constexpr ::UnityEngine::Plane const& __cordl_internal_get__plane() const;

  constexpr void __cordl_internal_set__plane(::UnityEngine::Plane value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__prevBurnMarkPos();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__prevBurnMarkPos() const;

  constexpr void __cordl_internal_set__prevBurnMarkPos(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get__prevBurnMarkPosValid();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get__prevBurnMarkPosValid() const;

  constexpr void __cordl_internal_set__prevBurnMarkPosValid(::ArrayW<bool, ::Array<bool>*> value);

  constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*>& __cordl_internal_get__lineRenderers();

  constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*> const& __cordl_internal_get__lineRenderers() const;

  constexpr void __cordl_internal_set__lineRenderers(::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*> value);

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__linePoints();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__linePoints() const;

  constexpr void __cordl_internal_set__linePoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*>& __cordl_internal_get__renderTextures();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get__renderTextures() const;

  constexpr void __cordl_internal_set__renderTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __cordl_internal_get__emitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __cordl_internal_get__emitParams() const;

  constexpr void __cordl_internal_set__emitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fadeOutMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fadeOutMaterial() const;

  constexpr void __cordl_internal_set__fadeOutMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method Start, addr 0x239b0f0, size 0x8b8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x239b9a8, size 0x224, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x239bbcc, size 0x120, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x239bcec, size 0x120, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method GetBurnMarkPos, addr 0x239be0c, size 0x244, virtual false, abstract: false, final false
  inline bool GetBurnMarkPos(::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ByRef<::UnityEngine::Vector3> burnMarkPos);

  /// @brief Method WorldToCameraBurnMarkPos, addr 0x239c050, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 WorldToCameraBurnMarkPos(::UnityEngine::Vector3 pos);

  /// @brief Method LateUpdate, addr 0x239c150, size 0x6c0, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SaberBurnMarkArea* New_ctor();

  /// @brief Method .ctor, addr 0x239c810, size 0x107c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkArea", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberBurnMarkArea(SaberBurnMarkArea&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkArea", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberBurnMarkArea(SaberBurnMarkArea const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberBurnMarkArea();

public:
  /// @brief Field _saberBurnMarkLinePrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ____saberBurnMarkLinePrefab;

  /// @brief Field _blackMarkLineRandomOffset, offset: 0x20, size: 0x4, def value: None
  float_t ____blackMarkLineRandomOffset;

  /// @brief Field _textureWidth, offset: 0x24, size: 0x4, def value: None
  int32_t ____textureWidth;

  /// @brief Field _textureHeight, offset: 0x28, size: 0x4, def value: None
  int32_t ____textureHeight;

  /// @brief Field _burnMarksFadeOutStrength, offset: 0x2c, size: 0x4, def value: None
  float_t ____burnMarksFadeOutStrength;

  /// @brief Field _fadeOutShader, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____fadeOutShader;

  /// @brief Field _colorManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _saberManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _renderer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  /// @brief Field _fadeOutStrengthShaderPropertyID, offset: 0x50, size: 0x4, def value: None
  int32_t ____fadeOutStrengthShaderPropertyID;

  /// @brief Field _sabers, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> ____sabers;

  /// @brief Field _plane, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Plane ____plane;

  /// @brief Field _prevBurnMarkPos, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____prevBurnMarkPos;

  /// @brief Field _prevBurnMarkPosValid, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____prevBurnMarkPosValid;

  /// @brief Field _lineRenderers, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*> ____lineRenderers;

  /// @brief Field _camera, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _linePoints, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____linePoints;

  /// @brief Field _renderTextures, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> ____renderTextures;

  /// @brief Field _emitParams, offset: 0xa0, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____emitParams;

  /// @brief Field _fadeOutMaterial, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____fadeOutMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberBurnMarkArea, 0x138>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____saberBurnMarkLinePrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____blackMarkLineRandomOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____textureWidth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____textureHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____burnMarksFadeOutStrength) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____fadeOutShader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____colorManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____saberManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____renderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____fadeOutStrengthShaderPropertyID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____sabers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____plane) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____prevBurnMarkPos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____prevBurnMarkPosValid) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____lineRenderers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____camera) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____linePoints) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____renderTextures) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____emitParams) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____fadeOutMaterial) == 0x130, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberBurnMarkArea);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberBurnMarkArea*, "", "SaberBurnMarkArea");
