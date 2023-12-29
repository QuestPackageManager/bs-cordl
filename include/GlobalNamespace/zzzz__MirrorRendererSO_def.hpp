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
namespace UnityEngine {
class Shader;
}
namespace GlobalNamespace {
struct __MirrorRendererSO__CameraTransformData;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Rect;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Texture;
}
namespace System {
class Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15326))
// CS Name: ::MirrorRendererSO::CameraTransformData
struct CORDL_TYPE __MirrorRendererSO__CameraTransformData {
public:
  // Declarations
  /// @brief Method .ctor addr 0x268f400 size 0x1c virtual false final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t fov, bool stereoEnabled);

  /// @brief Method Equals addr 0x268fee0 size 0x100 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x268ffe0 size 0x120 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "stereoEnabled", ty: "bool", modifiers: "", def_value: None }]
  constexpr __MirrorRendererSO__CameraTransformData(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t fov, bool stereoEnabled) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MirrorRendererSO__CameraTransformData();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879)), TypeDefinitionIndex(TypeDefinitionIndex(10132)), TypeDefinitionIndex(TypeDefinitionIndex(10093))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15327))
// CS Name: ::MirrorRendererSO*
class CORDL_TYPE MirrorRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using CameraTransformData = ::GlobalNamespace::__MirrorRendererSO__CameraTransformData;

  /// @brief Field _reflectLayers, offset 0x18, size 0x4
  __declspec(property(get = __get__reflectLayers, put = __set__reflectLayers))::UnityEngine::LayerMask _reflectLayers;

  /// @brief Field _stereoTextureWidth, offset 0x1c, size 0x4
  __declspec(property(get = __get__stereoTextureWidth, put = __set__stereoTextureWidth)) int32_t _stereoTextureWidth;

  /// @brief Field _stereoTextureHeight, offset 0x20, size 0x4
  __declspec(property(get = __get__stereoTextureHeight, put = __set__stereoTextureHeight)) int32_t _stereoTextureHeight;

  /// @brief Field _monoTextureWidth, offset 0x24, size 0x4
  __declspec(property(get = __get__monoTextureWidth, put = __set__monoTextureWidth)) int32_t _monoTextureWidth;

  /// @brief Field _monoTextureHeight, offset 0x28, size 0x4
  __declspec(property(get = __get__monoTextureHeight, put = __set__monoTextureHeight)) int32_t _monoTextureHeight;

  /// @brief Field _maxAntiAliasing, offset 0x2c, size 0x4
  __declspec(property(get = __get__maxAntiAliasing, put = __set__maxAntiAliasing)) int32_t _maxAntiAliasing;

  /// @brief Field _disableDepthTexture, offset 0x30, size 0x1
  __declspec(property(get = __get__disableDepthTexture, put = __set__disableDepthTexture)) bool _disableDepthTexture;

  /// @brief Field _enableBloomPrePass, offset 0x31, size 0x1
  __declspec(property(get = __get__enableBloomPrePass, put = __set__enableBloomPrePass)) bool _enableBloomPrePass;

  /// @brief Field _bloomPrePassRenderer, offset 0x38, size 0x8
  __declspec(property(get = __get__bloomPrePassRenderer, put = __set__bloomPrePassRenderer))::GlobalNamespace::BloomPrePassRendererSO* _bloomPrePassRenderer;

  /// @brief Field _bloomPrePassEffect, offset 0x40, size 0x8
  __declspec(property(get = __get__bloomPrePassEffect, put = __set__bloomPrePassEffect))::GlobalNamespace::BloomPrePassEffectSO* _bloomPrePassEffect;

  /// @brief Field _clearDepthShader, offset 0x48, size 0x8
  __declspec(property(get = __get__clearDepthShader, put = __set__clearDepthShader))::UnityEngine::Shader* _clearDepthShader;

  /// @brief Field _bloomPrePassRenderTexture, offset 0x50, size 0x8
  __declspec(property(get = __get__bloomPrePassRenderTexture, put = __set__bloomPrePassRenderTexture))::UnityEngine::RenderTexture* _bloomPrePassRenderTexture;

  /// @brief Field _mirrorCamera, offset 0x58, size 0x8
  __declspec(property(get = __get__mirrorCamera, put = __set__mirrorCamera))::UnityEngine::Camera* _mirrorCamera;

  /// @brief Field _antialiasing, offset 0x60, size 0x4
  __declspec(property(get = __get__antialiasing, put = __set__antialiasing)) int32_t _antialiasing;

  /// @brief Field _renderTextures, offset 0x68, size 0x8
  __declspec(
      property(get = __get__renderTextures,
               put = __set__renderTextures))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityEngine::RenderTexture*>* _renderTextures;

  /// @brief Field kLeftRect, offset 0x70, size 0x10
  __declspec(property(get = __get_kLeftRect, put = __set_kLeftRect))::UnityEngine::Rect kLeftRect;

  /// @brief Field kRightRect, offset 0x80, size 0x10
  __declspec(property(get = __get_kRightRect, put = __set_kRightRect))::UnityEngine::Rect kRightRect;

  /// @brief Field kFullRect, offset 0x90, size 0x10
  __declspec(property(get = __get_kFullRect, put = __set_kFullRect))::UnityEngine::Rect kFullRect;

  constexpr ::UnityEngine::LayerMask& __get__reflectLayers();

  constexpr ::UnityEngine::LayerMask const& __get__reflectLayers() const;

  constexpr void __set__reflectLayers(::UnityEngine::LayerMask value);

  constexpr int32_t& __get__stereoTextureWidth();

  constexpr int32_t const& __get__stereoTextureWidth() const;

  constexpr void __set__stereoTextureWidth(int32_t value);

  constexpr int32_t& __get__stereoTextureHeight();

  constexpr int32_t const& __get__stereoTextureHeight() const;

  constexpr void __set__stereoTextureHeight(int32_t value);

  constexpr int32_t& __get__monoTextureWidth();

  constexpr int32_t const& __get__monoTextureWidth() const;

  constexpr void __set__monoTextureWidth(int32_t value);

  constexpr int32_t& __get__monoTextureHeight();

  constexpr int32_t const& __get__monoTextureHeight() const;

  constexpr void __set__monoTextureHeight(int32_t value);

  constexpr int32_t& __get__maxAntiAliasing();

  constexpr int32_t const& __get__maxAntiAliasing() const;

  constexpr void __set__maxAntiAliasing(int32_t value);

  constexpr bool& __get__disableDepthTexture();

  constexpr bool const& __get__disableDepthTexture() const;

  constexpr void __set__disableDepthTexture(bool value);

  constexpr bool& __get__enableBloomPrePass();

  constexpr bool const& __get__enableBloomPrePass() const;

  constexpr void __set__enableBloomPrePass(bool value);

  constexpr ::GlobalNamespace::BloomPrePassRendererSO*& __get__bloomPrePassRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRendererSO*> const& __get__bloomPrePassRenderer() const;

  constexpr void __set__bloomPrePassRenderer(::GlobalNamespace::BloomPrePassRendererSO* value);

  constexpr ::GlobalNamespace::BloomPrePassEffectSO*& __get__bloomPrePassEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectSO*> const& __get__bloomPrePassEffect() const;

  constexpr void __set__bloomPrePassEffect(::GlobalNamespace::BloomPrePassEffectSO* value);

  constexpr ::UnityEngine::Shader*& __get__clearDepthShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__clearDepthShader() const;

  constexpr void __set__clearDepthShader(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::RenderTexture*& __get__bloomPrePassRenderTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__bloomPrePassRenderTexture() const;

  constexpr void __set__bloomPrePassRenderTexture(::UnityEngine::RenderTexture* value);

  constexpr ::UnityEngine::Camera*& __get__mirrorCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__mirrorCamera() const;

  constexpr void __set__mirrorCamera(::UnityEngine::Camera* value);

  constexpr int32_t& __get__antialiasing();

  constexpr int32_t const& __get__antialiasing() const;

  constexpr void __set__antialiasing(int32_t value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityEngine::RenderTexture*>*& __get__renderTextures();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityEngine::RenderTexture*>*> const&
  __get__renderTextures() const;

  constexpr void __set__renderTextures(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityEngine::RenderTexture*>* value);

  constexpr ::UnityEngine::Rect& __get_kLeftRect();

  constexpr ::UnityEngine::Rect const& __get_kLeftRect() const;

  constexpr void __set_kLeftRect(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __get_kRightRect();

  constexpr ::UnityEngine::Rect const& __get_kRightRect() const;

  constexpr void __set_kRightRect(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __get_kFullRect();

  constexpr ::UnityEngine::Rect const& __get_kFullRect() const;

  constexpr void __set_kFullRect(::UnityEngine::Rect value);

  /// @brief Method OnValidate addr 0x268f36c size 0x4 virtual false final false
  inline void OnValidate();

  /// @brief Method Awake addr 0x268f3e4 size 0x4 virtual false final false
  inline void Awake();

  /// @brief Method ValidateParams addr 0x268f370 size 0x74 virtual false final false
  inline void ValidateParams();

  /// @brief Method Init addr 0x268f3e8 size 0x18 virtual false final false
  inline void Init(::UnityEngine::LayerMask reflectLayers, int32_t stereoTextureWidth, int32_t stereoTextureHeight, int32_t monoTextureWidth, int32_t monoTextureHeight, int32_t maxAntiAliasing,
                   bool enableBloomPrePass);

  /// @brief Method PrepareForNextFrame addr 0x268e6ec size 0x18c virtual false final false
  inline void PrepareForNextFrame();

  /// @brief Method GetMirrorTexture addr 0x268eb0c size 0x7f0 virtual false final false
  inline ::UnityEngine::Texture* GetMirrorTexture(::UnityEngine::Vector3 reflectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal);

  /// @brief Method RenderMirror addr 0x268f7e4 size 0x270 virtual false final false
  inline void RenderMirror(::UnityEngine::Vector3 camPosition, ::UnityEngine::Quaternion camRotation, ::UnityEngine::Matrix4x4 camProjectionMatrix, ::UnityEngine::Rect screenRect,
                           ::UnityEngine::Vector3 reclectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal);

  /// @brief Method OnDisable addr 0x268fb80 size 0x224 virtual false final false
  inline void OnDisable();

  /// @brief Method CreateOrUpdateMirrorCamera addr 0x268f41c size 0x2b4 virtual false final false
  inline void CreateOrUpdateMirrorCamera(::UnityEngine::Camera* currentCamera, ::UnityEngine::RenderTexture* renderTexture);

  /// @brief Method Plane addr 0x268f6d0 size 0x2c virtual false final false
  static inline ::UnityEngine::Vector4 Plane(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal);

  /// @brief Method CameraSpacePlane addr 0x268fa54 size 0x12c virtual false final false
  static inline ::UnityEngine::Vector4 CameraSpacePlane(::UnityEngine::Matrix4x4 worldToCameraMatrix, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal);

  /// @brief Method CalculateReflectionMatrix addr 0x268f6fc size 0xe8 virtual false final false
  static inline ::UnityEngine::Matrix4x4 CalculateReflectionMatrix(::UnityEngine::Vector4 plane);

  static inline ::GlobalNamespace::MirrorRendererSO* New_ctor();

  /// @brief Method .ctor addr 0x268fda4 size 0x13c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererSO(MirrorRendererSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererSO(MirrorRendererSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererSO();

public:
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
  ::GlobalNamespace::BloomPrePassRendererSO* ____bloomPrePassRenderer;

  /// @brief Field _bloomPrePassEffect, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassEffectSO* ____bloomPrePassEffect;

  /// @brief Field _clearDepthShader, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Shader* ____clearDepthShader;

  /// @brief Field _bloomPrePassRenderTexture, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____bloomPrePassRenderTexture;

  /// @brief Field _mirrorCamera, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Camera* ____mirrorCamera;

  /// @brief Field _antialiasing, offset: 0x60, size: 0x4, def value: None
  int32_t ____antialiasing;

  /// @brief Field _renderTextures, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityEngine::RenderTexture*>* ____renderTextures;

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
