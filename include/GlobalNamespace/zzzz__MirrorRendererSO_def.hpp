#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
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
struct __MirrorRendererSO__CameraTransformData;
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
struct __MirrorRendererSO__CameraTransformData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirrorRendererSO);
MARK_VAL_T(::GlobalNamespace::__MirrorRendererSO__CameraTransformData);
// Type: ::CameraTransformData
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 49, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MirrorRendererSO::CameraTransformData
struct CORDL_TYPE __MirrorRendererSO__CameraTransformData {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>*();

  /// @brief Method Equals, addr 0x2ada618, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2ada574, size 0xa4, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::__MirrorRendererSO__CameraTransformData other);

  /// @brief Method GetHashCode, addr 0x2ada6a8, size 0xf0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>* i___System__IEquatable_1___GlobalNamespace____MirrorRendererSO__CameraTransformData_();

  /// @brief Method op_Equality, addr 0x2ada798, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::__MirrorRendererSO__CameraTransformData left, ::GlobalNamespace::__MirrorRendererSO__CameraTransformData right);

  /// @brief Method op_Inequality, addr 0x2ada7c8, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::__MirrorRendererSO__CameraTransformData left, ::GlobalNamespace::__MirrorRendererSO__CameraTransformData right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MirrorRendererSO__CameraTransformData();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "stereoEnabled", ty: "bool", modifiers: "", def_value: None }]
  constexpr __MirrorRendererSO__CameraTransformData(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t fov, bool stereoEnabled) noexcept;

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field fov, offset: 0x1c, size: 0x4, def value: None
  float_t fov;

  /// @brief Field stereoEnabled, offset: 0x20, size: 0x1, def value: None
  bool stereoEnabled;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, 0x24>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererSO__CameraTransformData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererSO__CameraTransformData, rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererSO__CameraTransformData, fov) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MirrorRendererSO__CameraTransformData, stereoEnabled) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MirrorRendererSO
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MirrorRendererSO*
class CORDL_TYPE MirrorRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using CameraTransformData = ::GlobalNamespace::__MirrorRendererSO__CameraTransformData;

  /// @brief Field _antialiasing, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__antialiasing, put = __cordl_internal_set__antialiasing)) int32_t _antialiasing;

  /// @brief Field _bloomPrePassEffect, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassEffect, put = __cordl_internal_set__bloomPrePassEffect))::UnityW<::GlobalNamespace::BloomPrePassEffectSO> _bloomPrePassEffect;

  /// @brief Field _bloomPrePassRenderTexture, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassRenderTexture, put = __cordl_internal_set__bloomPrePassRenderTexture))::UnityW<::UnityEngine::RenderTexture> _bloomPrePassRenderTexture;

  /// @brief Field _bloomPrePassRenderer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassRenderer, put = __cordl_internal_set__bloomPrePassRenderer))::UnityW<::GlobalNamespace::BloomPrePassRendererSO> _bloomPrePassRenderer;

  /// @brief Field _clearDepthShader, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__clearDepthShader, put = __cordl_internal_set__clearDepthShader))::UnityW<::UnityEngine::Shader> _clearDepthShader;

  /// @brief Field _disableDepthTexture, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__disableDepthTexture, put = __cordl_internal_set__disableDepthTexture)) bool _disableDepthTexture;

  /// @brief Field _enableBloomPrePass, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__enableBloomPrePass, put = __cordl_internal_set__enableBloomPrePass)) bool _enableBloomPrePass;

  /// @brief Field _maxAntiAliasing, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxAntiAliasing, put = __cordl_internal_set__maxAntiAliasing)) int32_t _maxAntiAliasing;

  /// @brief Field _mirrorCamera, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorCamera, put = __cordl_internal_set__mirrorCamera))::UnityW<::UnityEngine::Camera> _mirrorCamera;

  /// @brief Field _monoTextureHeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__monoTextureHeight, put = __cordl_internal_set__monoTextureHeight)) int32_t _monoTextureHeight;

  /// @brief Field _monoTextureWidth, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__monoTextureWidth, put = __cordl_internal_set__monoTextureWidth)) int32_t _monoTextureWidth;

  /// @brief Field _reflectLayers, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__reflectLayers, put = __cordl_internal_set__reflectLayers))::UnityEngine::LayerMask _reflectLayers;

  /// @brief Field _renderTextures, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__renderTextures,
                      put = __cordl_internal_set__renderTextures))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,
                                                                                                               ::UnityW<::UnityEngine::RenderTexture>>* _renderTextures;

  /// @brief Field _stereoTextureHeight, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__stereoTextureHeight, put = __cordl_internal_set__stereoTextureHeight)) int32_t _stereoTextureHeight;

  /// @brief Field _stereoTextureWidth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__stereoTextureWidth, put = __cordl_internal_set__stereoTextureWidth)) int32_t _stereoTextureWidth;

  /// @brief Field kFullRect, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_kFullRect, put = __cordl_internal_set_kFullRect))::UnityEngine::Rect kFullRect;

  /// @brief Field kLeftRect, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_kLeftRect, put = __cordl_internal_set_kLeftRect))::UnityEngine::Rect kLeftRect;

  /// @brief Field kRightRect, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_kRightRect, put = __cordl_internal_set_kRightRect))::UnityEngine::Rect kRightRect;

  /// @brief Method Awake, addr 0x2ad9a94, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateReflectionMatrix, addr 0x2ad9d90, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 CalculateReflectionMatrix(::UnityEngine::Vector4 plane);

  /// @brief Method CameraSpacePlane, addr 0x2ada0e8, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 CameraSpacePlane(::UnityEngine::Matrix4x4 worldToCameraMatrix, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal);

  /// @brief Method CreateOrUpdateMirrorCamera, addr 0x2ad9ab0, size 0x2b4, virtual false, abstract: false, final false
  inline void CreateOrUpdateMirrorCamera(::UnityEngine::Camera* currentCamera, ::UnityEngine::RenderTexture* renderTexture);

  /// @brief Method Init, addr 0x2ad9a98, size 0x18, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::LayerMask reflectLayers, int32_t stereoTextureWidth, int32_t stereoTextureHeight, int32_t monoTextureWidth, int32_t monoTextureHeight, int32_t maxAntiAliasing,
                   bool enableBloomPrePass);

  static inline ::GlobalNamespace::MirrorRendererSO* New_ctor();

  /// @brief Method OnDisable, addr 0x2ada214, size 0x224, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnValidate, addr 0x2ad9a1c, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Plane, addr 0x2ad9d64, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 Plane(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal);

  /// @brief Method PrepareForNextFrame, addr 0x2ad8d84, size 0x18c, virtual false, abstract: false, final false
  inline void PrepareForNextFrame();

  /// @brief Method RenderMirror, addr 0x2ad9e78, size 0x270, virtual false, abstract: false, final false
  inline void RenderMirror(::UnityEngine::Vector3 camPosition, ::UnityEngine::Quaternion camRotation, ::UnityEngine::Matrix4x4 camProjectionMatrix, ::UnityEngine::Rect screenRect,
                           ::UnityEngine::Vector3 reclectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal);

  /// @brief Method RenderMirrorTexture, addr 0x2ad91a4, size 0x808, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> RenderMirrorTexture(::UnityEngine::Vector3 reflectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal);

  /// @brief Method ValidateParams, addr 0x2ad9a20, size 0x74, virtual false, abstract: false, final false
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

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get__renderTextures();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityW<::UnityEngine::RenderTexture>>*> const&
  __cordl_internal_get__renderTextures() const;

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
  __cordl_internal_set__renderTextures(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityW<::UnityEngine::RenderTexture>>* value);

  constexpr void __cordl_internal_set__stereoTextureHeight(int32_t value);

  constexpr void __cordl_internal_set__stereoTextureWidth(int32_t value);

  constexpr void __cordl_internal_set_kFullRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_kLeftRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_kRightRect(::UnityEngine::Rect value);

  /// @brief Method .ctor, addr 0x2ada438, size 0x13c, virtual false, abstract: false, final false
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
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityW<::UnityEngine::RenderTexture>>* ____renderTextures;

  /// @brief Field kLeftRect, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Rect ___kLeftRect;

  /// @brief Field kRightRect, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Rect ___kRightRect;

  /// @brief Field kFullRect, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Rect ___kFullRect;

  /// @brief Field kWaterLayer offset 0xffffffff size 0x4
  static constexpr int32_t kWaterLayer{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirrorRendererSO, 0xa0>, "Size mismatch!");

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirrorRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorRendererSO*, "", "MirrorRendererSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirrorRendererSO__CameraTransformData, "", "MirrorRendererSO/CameraTransformData");
