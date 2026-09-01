#pragma once
// IWYU pragma private; include "GlobalNamespace\SaberBurnMarkArea.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
class SettingsManager;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberBurnMarkArea;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SaberBurnMarkArea*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaberBurnMarkArea*, "", "SaberBurnMarkArea");
// Dependencies Saber, UnityEngine.Bounds, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.RenderTexture, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberBurnMarkArea
class CORDL_TYPE SaberBurnMarkArea : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _anyActive, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get__anyActive, put = __cordl_internal_set__anyActive)) bool _anyActive;

  /// @brief Field _aspectShaderPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__aspectShaderPropertyID, put = setStaticF__aspectShaderPropertyID)) int32_t _aspectShaderPropertyID;

  /// @brief Field _aspectXZ, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__aspectXZ, put = __cordl_internal_set__aspectXZ)) float_t _aspectXZ;

  /// @brief Field _bounds, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get__bounds, put = __cordl_internal_set__bounds)) ::UnityEngine::Bounds _bounds;

  /// @brief Field _burnMarksFadeOutDurationSeconds, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__burnMarksFadeOutDurationSeconds, put = __cordl_internal_set__burnMarksFadeOutDurationSeconds)) float_t _burnMarksFadeOutDurationSeconds;

  /// @brief Field _disableBlitTimer, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__disableBlitTimer, put = __cordl_internal_set__disableBlitTimer)) float_t _disableBlitTimer;

  /// @brief Field _fadeOutMaterial, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutMaterial, put = __cordl_internal_set__fadeOutMaterial)) ::UnityW<::UnityEngine::Material> _fadeOutMaterial;

  /// @brief Field _fadeOutShader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutShader, put = __cordl_internal_set__fadeOutShader)) ::UnityW<::UnityEngine::Shader> _fadeOutShader;

  /// @brief Field _fadeOutStrengthShaderPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__fadeOutStrengthShaderPropertyID, put = setStaticF__fadeOutStrengthShaderPropertyID)) int32_t _fadeOutStrengthShaderPropertyID;

  /// @brief Field _prevBurnMarkPos, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__prevBurnMarkPos, put = __cordl_internal_set__prevBurnMarkPos)) ::ArrayW<::UnityEngine::Vector2> _prevBurnMarkPos;

  /// @brief Field _prevBurnMarkPosValid, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__prevBurnMarkPosValid, put = __cordl_internal_set__prevBurnMarkPosValid)) ::ArrayW<bool> _prevBurnMarkPosValid;

  /// @brief Field _renderMaterial, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__renderMaterial, put = __cordl_internal_set__renderMaterial)) ::UnityW<::UnityEngine::Material> _renderMaterial;

  /// @brief Field _renderTextures, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__renderTextures, put = __cordl_internal_set__renderTextures)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> _renderTextures;

  /// @brief Field _saberColors, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__saberColors, put = __cordl_internal_set__saberColors)) ::ArrayW<::UnityEngine::Color> _saberColors;

  /// @brief Field _sabers, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sabers, put = __cordl_internal_set__sabers)) ::ArrayW<::UnityW<::GlobalNamespace::Saber>> _sabers;

  /// @brief Field _segColorShaderPropertyIDs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__segColorShaderPropertyIDs, put = setStaticF__segColorShaderPropertyIDs)) ::ArrayW<int32_t> _segColorShaderPropertyIDs;

  /// @brief Field _segShaderPropertyIDs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__segShaderPropertyIDs, put = setStaticF__segShaderPropertyIDs)) ::ArrayW<int32_t> _segShaderPropertyIDs;

  /// @brief Field _strokeRadiusShaderPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__strokeRadiusShaderPropertyID, put = setStaticF__strokeRadiusShaderPropertyID)) int32_t _strokeRadiusShaderPropertyID;

  /// @brief Field _textureHeight, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__textureHeight, put = __cordl_internal_set__textureHeight)) int32_t _textureHeight;

  /// @brief Field _textureWidth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__textureWidth, put = __cordl_internal_set__textureWidth)) int32_t _textureWidth;

  /// @brief Field kBufferNames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_kBufferNames, put = __cordl_internal_set_kBufferNames)) ::ArrayW<::StringW> kBufferNames;

  /// @brief Method GetBurnMarkPos, addr 0x5987084, size 0x32c, virtual false, abstract: false, final false
  static inline bool GetBurnMarkPos(::UnityEngine::Transform* transform, ::by_ref<::UnityEngine::Bounds> bounds, ::by_ref<::UnityEngine::Plane> plane, ::UnityEngine::Vector3 bladeBottomPos,
                                    ::UnityEngine::Vector3 bladeTopPos, ::by_ref<::UnityEngine::Vector3> burnMarkPos);

  /// @brief Method Initialize, addr 0x598646c, size 0x444, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::SaberManager* saberManager, ::GlobalNamespace::ColorManager* colorManager);

  /// @brief Method LateUpdate, addr 0x5986a08, size 0x67c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SaberBurnMarkArea* New_ctor();

  /// @brief Method OnDestroy, addr 0x59868b0, size 0x158, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method WorldToNormalized, addr 0x59873b0, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 WorldToNormalized(::UnityEngine::Vector3 worldPos);

  constexpr bool const& __cordl_internal_get__anyActive() const;

  constexpr bool& __cordl_internal_get__anyActive();

  constexpr float_t const& __cordl_internal_get__aspectXZ() const;

  constexpr float_t& __cordl_internal_get__aspectXZ();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get__bounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get__bounds();

  constexpr float_t const& __cordl_internal_get__burnMarksFadeOutDurationSeconds() const;

  constexpr float_t& __cordl_internal_get__burnMarksFadeOutDurationSeconds();

  constexpr float_t const& __cordl_internal_get__disableBlitTimer() const;

  constexpr float_t& __cordl_internal_get__disableBlitTimer();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fadeOutMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fadeOutMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__fadeOutShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__fadeOutShader();

  constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get__prevBurnMarkPos() const;

  constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get__prevBurnMarkPos();

  constexpr ::ArrayW<bool> const& __cordl_internal_get__prevBurnMarkPosValid() const;

  constexpr ::ArrayW<bool>& __cordl_internal_get__prevBurnMarkPosValid();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__renderMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__renderMaterial();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& __cordl_internal_get__renderTextures() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& __cordl_internal_get__renderTextures();

  constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get__saberColors() const;

  constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get__saberColors();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>> const& __cordl_internal_get__sabers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>>& __cordl_internal_get__sabers();

  constexpr int32_t const& __cordl_internal_get__textureHeight() const;

  constexpr int32_t& __cordl_internal_get__textureHeight();

  constexpr int32_t const& __cordl_internal_get__textureWidth() const;

  constexpr int32_t& __cordl_internal_get__textureWidth();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_kBufferNames() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_kBufferNames();

  constexpr void __cordl_internal_set__anyActive(bool value);

  constexpr void __cordl_internal_set__aspectXZ(float_t value);

  constexpr void __cordl_internal_set__bounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set__burnMarksFadeOutDurationSeconds(float_t value);

  constexpr void __cordl_internal_set__disableBlitTimer(float_t value);

  constexpr void __cordl_internal_set__fadeOutMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__fadeOutShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__prevBurnMarkPos(::ArrayW<::UnityEngine::Vector2> value);

  constexpr void __cordl_internal_set__prevBurnMarkPosValid(::ArrayW<bool> value);

  constexpr void __cordl_internal_set__renderMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__renderTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value);

  constexpr void __cordl_internal_set__saberColors(::ArrayW<::UnityEngine::Color> value);

  constexpr void __cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>> value);

  constexpr void __cordl_internal_set__textureHeight(int32_t value);

  constexpr void __cordl_internal_set__textureWidth(int32_t value);

  constexpr void __cordl_internal_set_kBufferNames(::ArrayW<::StringW> value);

  /// @brief Method .ctor, addr 0x5987414, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__aspectShaderPropertyID();

  static inline int32_t getStaticF__fadeOutStrengthShaderPropertyID();

  static inline ::ArrayW<int32_t> getStaticF__segColorShaderPropertyIDs();

  static inline ::ArrayW<int32_t> getStaticF__segShaderPropertyIDs();

  static inline int32_t getStaticF__strokeRadiusShaderPropertyID();

  static inline void setStaticF__aspectShaderPropertyID(int32_t value);

  static inline void setStaticF__fadeOutStrengthShaderPropertyID(int32_t value);

  static inline void setStaticF__segColorShaderPropertyIDs(::ArrayW<int32_t> value);

  static inline void setStaticF__segShaderPropertyIDs(::ArrayW<int32_t> value);

  static inline void setStaticF__strokeRadiusShaderPropertyID(int32_t value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5794 };

  /// @brief Field kBufferCount offset 0xffffffff size 0x4
  static constexpr int32_t kBufferCount{ static_cast<int32_t>(0x2) };

  /// @brief Field kSaberCount offset 0xffffffff size 0x4
  static constexpr int32_t kSaberCount{ static_cast<int32_t>(0x2) };

  /// @brief Field kStrokeRadiusNormalized offset 0xffffffff size 0x4
  static constexpr float_t kStrokeRadiusNormalized{ static_cast<float_t>(0.05f) };

  /// @brief Field _textureWidth, offset: 0x20, size: 0x4, def value: None
  int32_t ____textureWidth;

  /// @brief Field _textureHeight, offset: 0x24, size: 0x4, def value: None
  int32_t ____textureHeight;

  /// @brief Field _burnMarksFadeOutDurationSeconds, offset: 0x28, size: 0x4, def value: None
  float_t ____burnMarksFadeOutDurationSeconds;

  /// @brief Field _fadeOutShader, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____fadeOutShader;

  /// @brief Field kBufferNames, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW> ___kBufferNames;

  /// @brief Field _bounds, offset: 0x40, size: 0x18, def value: None
  ::UnityEngine::Bounds ____bounds;

  /// @brief Field _aspectXZ, offset: 0x58, size: 0x4, def value: None
  float_t ____aspectXZ;

  /// @brief Field _renderMaterial, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____renderMaterial;

  /// @brief Field _fadeOutMaterial, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____fadeOutMaterial;

  /// @brief Field _sabers, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Saber>> ____sabers;

  /// @brief Field _saberColors, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color> ____saberColors;

  /// @brief Field _prevBurnMarkPos, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2> ____prevBurnMarkPos;

  /// @brief Field _prevBurnMarkPosValid, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<bool> ____prevBurnMarkPosValid;

  /// @brief Field _renderTextures, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> ____renderTextures;

  /// @brief Field _disableBlitTimer, offset: 0x98, size: 0x4, def value: None
  float_t ____disableBlitTimer;

  /// @brief Field _anyActive, offset: 0x9c, size: 0x1, def value: None
  bool ____anyActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____textureWidth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____textureHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____burnMarksFadeOutDurationSeconds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____fadeOutShader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ___kBufferNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____bounds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____aspectXZ) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____renderMaterial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____fadeOutMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____sabers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____saberColors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____prevBurnMarkPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____prevBurnMarkPosValid) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____renderTextures) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____disableBlitTimer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberBurnMarkArea, ____anyActive) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SaberBurnMarkArea) == 0xa0, "Size mismatch!");

} // namespace GlobalNamespace
