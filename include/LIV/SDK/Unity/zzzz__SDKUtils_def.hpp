#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKUtils)
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace LIV::SDK::Unity {
struct TEXTURE_DEVICE;
}
namespace UnityEngine {
struct Quaternion;
}
namespace LIV::SDK::Unity {
struct FEATURES;
}
namespace LIV::SDK::Unity {
struct RENDERING_PIPELINE;
}
namespace LIV::SDK::Unity {
struct TEXTURE_COLOR_SPACE;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace LIV::SDK::Unity {
struct SDKTrackedSpace;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RenderingPath;
}
namespace LIV::SDK::Unity {
struct SDKPose;
}
namespace LIV::SDK::Unity {
class SDKRender;
}
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
// Forward declare root types
namespace LIV::SDK::Unity {
class SDKUtils;
}
// Write type traits
MARK_REF_PTR_T(::LIV::SDK::Unity::SDKUtils);
// Type: LIV.SDK.Unity::SDKUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15227))
// CS Name: ::LIV.SDK.Unity::SDKUtils*
class CORDL_TYPE SDKUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateClipPlane addr 0x20b17f8 size 0x4bc virtual false final false
  static inline void CreateClipPlane(::UnityEngine::Mesh* mesh, int32_t resX, int32_t resY, bool useQuads, float_t skirtLength);

  /// @brief Method GetReadWriteFromColorSpace addr 0x20b5678 size 0x18 virtual false final false
  static inline ::UnityEngine::RenderTextureReadWrite GetReadWriteFromColorSpace(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace);

  /// @brief Method get_GetDefaultColorSpace addr 0x20b5690 size 0x2c virtual false final false
  static inline ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE get_GetDefaultColorSpace();

  /// @brief Method GetColorSpace addr 0x20b2d68 size 0x8c virtual false final false
  static inline ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE GetColorSpace(::UnityEngine::RenderTexture* renderTexture);

  /// @brief Method GetRenderingPipeline addr 0x20b56bc size 0x20 virtual false final false
  static inline ::LIV::SDK::Unity::RENDERING_PIPELINE GetRenderingPipeline(::UnityEngine::RenderingPath renderingPath);

  /// @brief Method GetDevice addr 0x20b2d04 size 0x64 virtual false final false
  static inline ::LIV::SDK::Unity::TEXTURE_DEVICE GetDevice();

  /// @brief Method ContainsFlag addr 0x20ad830 size 0xc virtual false final false
  static inline bool ContainsFlag(uint64_t flags, uint64_t flag);

  /// @brief Method SetFlag addr 0x20ac8c0 size 0x14 virtual false final false
  static inline uint64_t SetFlag(uint64_t flags, uint64_t flag, bool enabled);

  /// @brief Method GetCameraPositionAndRotation addr 0x20b56dc size 0x78 virtual false final false
  static inline void GetCameraPositionAndRotation(::LIV::SDK::Unity::SDKPose pose, ::UnityEngine::Matrix4x4 originLocalToWorldMatrix, ByRef<::UnityEngine::Vector3> position,
                                                  ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method CleanCameraBehaviours addr 0x20b1474 size 0x384 virtual false final false
  static inline void CleanCameraBehaviours(::UnityEngine::Camera* camera, ::ArrayW<::StringW, ::Array<::StringW>*> excludeBehaviours);

  /// @brief Method SetCamera addr 0x20afb18 size 0x24c virtual false final false
  static inline void SetCamera(::UnityEngine::Camera* camera, ::UnityEngine::Transform* cameraTransform, ::LIV::SDK::Unity::SDKInputFrame inputFrame, ::UnityEngine::Matrix4x4 originLocalToWorldMatrix,
                               int32_t layerMask);

  /// @brief Method RotateQuaternionByMatrix addr 0x20b23c4 size 0x164 virtual false final false
  static inline ::UnityEngine::Quaternion RotateQuaternionByMatrix(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Quaternion rotation);

  /// @brief Method GetTrackedSpace addr 0x20b5754 size 0x27c virtual false final false
  static inline ::LIV::SDK::Unity::SDKTrackedSpace GetTrackedSpace(::UnityEngine::Transform* transform);

  /// @brief Method DestroyObject addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool DestroyObject(ByRef<T> reference);

  /// @brief Method DisposeObject addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool DisposeObject(ByRef<T> reference);

  /// @brief Method CreateTexture addr 0x20b29d8 size 0x170 virtual false final false
  static inline bool CreateTexture(ByRef<::UnityEngine::RenderTexture*> renderTexture, int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format);

  /// @brief Method DestroyTexture addr 0x20b1e9c size 0x94 virtual false final false
  static inline void DestroyTexture(ByRef<::UnityEngine::RenderTexture*> _renderTexture);

  /// @brief Method ApplyUserSpaceTransform addr 0x20afdbc size 0xf0 virtual false final false
  static inline void ApplyUserSpaceTransform(::LIV::SDK::Unity::SDKRender* render);

  /// @brief Method CreateBridgeOutputFrame addr 0x20b0c74 size 0x188 virtual false final false
  static inline void CreateBridgeOutputFrame(::LIV::SDK::Unity::SDKRender* render);

  /// @brief Method FeatureEnabled addr 0x20aee6c size 0xc virtual false final false
  static inline bool FeatureEnabled(::LIV::SDK::Unity::FEATURES features, ::LIV::SDK::Unity::FEATURES feature);

  /// @brief Method DisableStandardAssets addr 0x20b10b4 size 0x170 virtual false final false
  static inline void DisableStandardAssets(::UnityEngine::Camera* cameraInstance, ByRef<::ArrayW<::UnityEngine::MonoBehaviour*, ::Array<::UnityEngine::MonoBehaviour*>*>> behaviours,
                                           ByRef<::ArrayW<bool, ::Array<bool>*>> wasBehaviourEnabled);

  /// @brief Method RestoreStandardAssets addr 0x20b1360 size 0x88 virtual false final false
  static inline void RestoreStandardAssets(ByRef<::ArrayW<::UnityEngine::MonoBehaviour*, ::Array<::UnityEngine::MonoBehaviour*>*>> behaviours,
                                           ByRef<::ArrayW<bool, ::Array<bool>*>> wasBehaviourEnabled);

  /// @brief Method ForceForwardRendering addr 0x20b59d0 size 0x28c virtual false final false
  static inline void ForceForwardRendering(::UnityEngine::Camera* cameraInstance, ::UnityEngine::Mesh* clipPlaneMesh, ::UnityEngine::Material* forceForwardRenderingMaterial);

  // Ctor Parameters [CppParam { name: "", ty: "SDKUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SDKUtils(SDKUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SDKUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SDKUtils(SDKUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKUtils();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKUtils, 0x10>, "Size mismatch!");

} // namespace LIV::SDK::Unity
NEED_NO_BOX(::LIV::SDK::Unity::SDKUtils);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKUtils*, "LIV.SDK.Unity", "SDKUtils");
