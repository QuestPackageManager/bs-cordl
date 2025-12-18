#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorRendererSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorRendererSO)
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace GlobalNamespace {
struct MirrorRendererSO_CameraTransformData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
struct MirrorRendererSO_CameraTransformData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirrorRendererSO);
MARK_VAL_T(::GlobalNamespace::MirrorRendererSO_CameraTransformData);
// Dependencies UnityEngine.Plane, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: MirrorRendererSO/CameraTransformData
struct CORDL_TYPE MirrorRendererSO_CameraTransformData {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::MirrorRendererSO_CameraTransformData>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::MirrorRendererSO_CameraTransformData>*();

  /// @brief Method Equals, addr 0x5d979dc, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5d978f8, size 0xe4, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::MirrorRendererSO_CameraTransformData other);

  /// @brief Method GetHashCode, addr 0x5d97a78, size 0x158, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::MirrorRendererSO_CameraTransformData>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::MirrorRendererSO_CameraTransformData>* i___System__IEquatable_1___GlobalNamespace__MirrorRendererSO_CameraTransformData_();

  /// @brief Method op_Equality, addr 0x5d97bd0, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::MirrorRendererSO_CameraTransformData left, ::GlobalNamespace::MirrorRendererSO_CameraTransformData right);

  /// @brief Method op_Inequality, addr 0x5d97c08, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::MirrorRendererSO_CameraTransformData left, ::GlobalNamespace::MirrorRendererSO_CameraTransformData right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererSO_CameraTransformData();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "stereoEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "reflectionPlane", ty: "::UnityEngine::Plane", modifiers: "", def_value: None }]
  constexpr MirrorRendererSO_CameraTransformData(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t fov, bool stereoEnabled, ::UnityEngine::Plane reflectionPlane) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20793 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field fov, offset: 0x1c, size: 0x4, def value: None
  float_t fov;

  /// @brief Field stereoEnabled, offset: 0x20, size: 0x1, def value: None
  bool stereoEnabled;

  /// @brief Field reflectionPlane, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Plane reflectionPlane;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorRendererSO_CameraTransformData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO_CameraTransformData, rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO_CameraTransformData, fov) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO_CameraTransformData, stereoEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO_CameraTransformData, reflectionPlane) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirrorRendererSO_CameraTransformData, 0x34>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject, UnityEngine.LayerMask, UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorRendererSO
class CORDL_TYPE MirrorRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using CameraTransformData = ::GlobalNamespace::MirrorRendererSO_CameraTransformData;

  /// @brief Field _antialiasing, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__antialiasing, put = __cordl_internal_set__antialiasing)) int32_t _antialiasing;

  /// @brief Field _bloomPrePassEffect, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassEffect, put = __cordl_internal_set__bloomPrePassEffect)) ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> _bloomPrePassEffect;

  /// @brief Field _bloomPrePassRenderTexture, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassRenderTexture, put = __cordl_internal_set__bloomPrePassRenderTexture)) ::UnityW<::UnityEngine::RenderTexture> _bloomPrePassRenderTexture;

  /// @brief Field _bloomPrePassRenderer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassRenderer, put = __cordl_internal_set__bloomPrePassRenderer)) ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> _bloomPrePassRenderer;

  /// @brief Field _clearDepthShader, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__clearDepthShader, put = __cordl_internal_set__clearDepthShader)) ::UnityW<::UnityEngine::Shader> _clearDepthShader;

  /// @brief Field _disableDepthTexture, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__disableDepthTexture, put = __cordl_internal_set__disableDepthTexture)) bool _disableDepthTexture;

  /// @brief Field _enableBloomPrePass, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__enableBloomPrePass, put = __cordl_internal_set__enableBloomPrePass)) bool _enableBloomPrePass;

  /// @brief Field _maxAntiAliasing, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxAntiAliasing, put = __cordl_internal_set__maxAntiAliasing)) int32_t _maxAntiAliasing;

  /// @brief Field _mirrorCamera, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorCamera, put = __cordl_internal_set__mirrorCamera)) ::UnityW<::UnityEngine::Camera> _mirrorCamera;

  /// @brief Field _monoTextureHeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__monoTextureHeight, put = __cordl_internal_set__monoTextureHeight)) int32_t _monoTextureHeight;

  /// @brief Field _monoTextureWidth, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__monoTextureWidth, put = __cordl_internal_set__monoTextureWidth)) int32_t _monoTextureWidth;

  /// @brief Field _reflectLayers, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__reflectLayers, put = __cordl_internal_set__reflectLayers)) ::UnityEngine::LayerMask _reflectLayers;

  /// @brief Field _renderTextures, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__renderTextures,
                      put = __cordl_internal_set__renderTextures)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MirrorRendererSO_CameraTransformData,
                                                                                                                ::UnityW<::UnityEngine::RenderTexture>>* _renderTextures;

  /// @brief Field _stereoTextureHeight, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__stereoTextureHeight, put = __cordl_internal_set__stereoTextureHeight)) int32_t _stereoTextureHeight;

  /// @brief Field _stereoTextureWidth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__stereoTextureWidth, put = __cordl_internal_set__stereoTextureWidth)) int32_t _stereoTextureWidth;

  /// @brief Field kFullRect, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_kFullRect, put = __cordl_internal_set_kFullRect)) ::UnityEngine::Rect kFullRect;

  /// @brief Field kLeftRect, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_kLeftRect, put = __cordl_internal_set_kLeftRect)) ::UnityEngine::Rect kLeftRect;

  /// @brief Field kRightRect, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_kRightRect, put = __cordl_internal_set_kRightRect)) ::UnityEngine::Rect kRightRect;

  /// @brief Method Awake, addr 0x5d96f14, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateReflectionMatrix, addr 0x5d971f8, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 CalculateReflectionMatrix(::UnityEngine::Vector4 plane);

  /// @brief Method CameraSpacePlane, addr 0x5d97500, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 CameraSpacePlane(::UnityEngine::Matrix4x4 worldToCameraMatrix, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal);

  /// @brief Method CreateOrUpdateMirrorCamera, addr 0x5d96f2c, size 0x2a0, virtual false, abstract: false, final false
  inline void CreateOrUpdateMirrorCamera(::UnityEngine::Camera* currentCamera, ::UnityEngine::RenderTexture* renderTexture);

  /// @brief Method Init, addr 0x5d96f18, size 0x14, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::LayerMask reflectLayers, int32_t stereoTextureWidth, int32_t stereoTextureHeight, int32_t monoTextureWidth, int32_t monoTextureHeight, int32_t maxAntiAliasing,
                   bool enableBloomPrePass);

  static inline ::GlobalNamespace::MirrorRendererSO* New_ctor();

  /// @brief Method OnDisable, addr 0x5d9763c, size 0x1ec, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnValidate, addr 0x5d96e78, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Plane, addr 0x5d971cc, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 Plane(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal);

  /// @brief Method PrepareForNextFrame, addr 0x5d96118, size 0x14c, virtual false, abstract: false, final false
  inline void PrepareForNextFrame();

  /// @brief Method RenderMirror, addr 0x5d972ec, size 0x214, virtual false, abstract: false, final false
  inline void RenderMirror(::UnityEngine::Vector3 camPosition, ::UnityEngine::Quaternion camRotation, ::UnityEngine::Matrix4x4 camProjectionMatrix, ::UnityEngine::Rect screenRect,
                           ::UnityEngine::Vector3 reclectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal);

  /// @brief Method RenderMirrorTexture, addr 0x5d96570, size 0x890, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> RenderMirrorTexture(::UnityEngine::Camera* currentCamera, ::UnityEngine::Vector3 reflectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal);

  /// @brief Method ValidateParams, addr 0x5d96e7c, size 0x98, virtual false, abstract: false, final false
  inline void ValidateParams();

  constexpr int32_t const& __cordl_internal_get__antialiasing() const;

  constexpr int32_t& __cordl_internal_get__antialiasing();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& __cordl_internal_get__bloomPrePassEffect() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& __cordl_internal_get__bloomPrePassEffect();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__bloomPrePassRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__bloomPrePassRenderTexture();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> const& __cordl_internal_get__bloomPrePassRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO>& __cordl_internal_get__bloomPrePassRenderer();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__clearDepthShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__clearDepthShader();

  constexpr bool const& __cordl_internal_get__disableDepthTexture() const;

  constexpr bool& __cordl_internal_get__disableDepthTexture();

  constexpr bool const& __cordl_internal_get__enableBloomPrePass() const;

  constexpr bool& __cordl_internal_get__enableBloomPrePass();

  constexpr int32_t const& __cordl_internal_get__maxAntiAliasing() const;

  constexpr int32_t& __cordl_internal_get__maxAntiAliasing();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__mirrorCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__mirrorCamera();

  constexpr int32_t const& __cordl_internal_get__monoTextureHeight() const;

  constexpr int32_t& __cordl_internal_get__monoTextureHeight();

  constexpr int32_t const& __cordl_internal_get__monoTextureWidth() const;

  constexpr int32_t& __cordl_internal_get__monoTextureWidth();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__reflectLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__reflectLayers();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MirrorRendererSO_CameraTransformData, ::UnityW<::UnityEngine::RenderTexture>>* const&
  __cordl_internal_get__renderTextures() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MirrorRendererSO_CameraTransformData, ::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get__renderTextures();

  constexpr int32_t const& __cordl_internal_get__stereoTextureHeight() const;

  constexpr int32_t& __cordl_internal_get__stereoTextureHeight();

  constexpr int32_t const& __cordl_internal_get__stereoTextureWidth() const;

  constexpr int32_t& __cordl_internal_get__stereoTextureWidth();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_kFullRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_kFullRect();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_kLeftRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_kLeftRect();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_kRightRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_kRightRect();

  constexpr void __cordl_internal_set__antialiasing(int32_t value);

  constexpr void __cordl_internal_set__bloomPrePassEffect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value);

  constexpr void __cordl_internal_set__bloomPrePassRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__bloomPrePassRenderer(::UnityW<::GlobalNamespace::BloomPrePassRendererSO> value);

  constexpr void __cordl_internal_set__clearDepthShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__disableDepthTexture(bool value);

  constexpr void __cordl_internal_set__enableBloomPrePass(bool value);

  constexpr void __cordl_internal_set__maxAntiAliasing(int32_t value);

  constexpr void __cordl_internal_set__mirrorCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__monoTextureHeight(int32_t value);

  constexpr void __cordl_internal_set__monoTextureWidth(int32_t value);

  constexpr void __cordl_internal_set__reflectLayers(::UnityEngine::LayerMask value);

  constexpr void
  __cordl_internal_set__renderTextures(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MirrorRendererSO_CameraTransformData, ::UnityW<::UnityEngine::RenderTexture>>* value);

  constexpr void __cordl_internal_set__stereoTextureHeight(int32_t value);

  constexpr void __cordl_internal_set__stereoTextureWidth(int32_t value);

  constexpr void __cordl_internal_set_kFullRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_kLeftRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_kRightRect(::UnityEngine::Rect value);

  /// @brief Method .ctor, addr 0x5d97828, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererSO(MirrorRendererSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererSO(MirrorRendererSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20794 };

  /// @brief Field kWaterLayer offset 0xffffffff size 0x4
  static constexpr int32_t kWaterLayer{ static_cast<int32_t>(0x4) };

  /// @brief Field _reflectLayers, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____reflectLayers;

  /// @brief Field _stereoTextureWidth, offset: 0x1c, size: 0x4, def value: None
  int32_t ____stereoTextureWidth;

  /// @brief Field _stereoTextureHeight, offset: 0x20, size: 0x4, def value: None
  int32_t ____stereoTextureHeight;

  /// @brief Field _monoTextureWidth, offset: 0x24, size: 0x4, def value: None
  int32_t ____monoTextureWidth;

  /// @brief Field _monoTextureHeight, offset: 0x28, size: 0x4, def value: None
  int32_t ____monoTextureHeight;

  /// @brief Field _maxAntiAliasing, offset: 0x2c, size: 0x4, def value: None
  int32_t ____maxAntiAliasing;

  /// @brief Field _disableDepthTexture, offset: 0x30, size: 0x1, def value: None
  bool ____disableDepthTexture;

  /// @brief Field _enableBloomPrePass, offset: 0x31, size: 0x1, def value: None
  bool ____enableBloomPrePass;

  /// @brief Field _bloomPrePassRenderer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> ____bloomPrePassRenderer;

  /// @brief Field _bloomPrePassEffect, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> ____bloomPrePassEffect;

  /// @brief Field _clearDepthShader, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____clearDepthShader;

  /// @brief Field _bloomPrePassRenderTexture, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____bloomPrePassRenderTexture;

  /// @brief Field _mirrorCamera, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____mirrorCamera;

  /// @brief Field _antialiasing, offset: 0x60, size: 0x4, def value: None
  int32_t ____antialiasing;

  /// @brief Field _renderTextures, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MirrorRendererSO_CameraTransformData, ::UnityW<::UnityEngine::RenderTexture>>* ____renderTextures;

  /// @brief Field kLeftRect, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Rect ___kLeftRect;

  /// @brief Field kRightRect, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Rect ___kRightRect;

  /// @brief Field kFullRect, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Rect ___kFullRect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____reflectLayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____stereoTextureWidth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____stereoTextureHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____monoTextureWidth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____monoTextureHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____maxAntiAliasing) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____disableDepthTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____enableBloomPrePass) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____bloomPrePassRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____bloomPrePassEffect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____clearDepthShader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____bloomPrePassRenderTexture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____mirrorCamera) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____antialiasing) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____renderTextures) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ___kLeftRect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ___kRightRect) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ___kFullRect) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirrorRendererSO, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirrorRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorRendererSO*, "", "MirrorRendererSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorRendererSO_CameraTransformData, "", "MirrorRendererSO/CameraTransformData");
