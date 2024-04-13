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
namespace LIV::SDK::Unity {
struct FEATURES;
}
namespace LIV::SDK::Unity {
struct RENDERING_PIPELINE;
}
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
namespace LIV::SDK::Unity {
struct SDKPose;
}
namespace LIV::SDK::Unity {
class SDKRender;
}
namespace LIV::SDK::Unity {
struct SDKTrackedSpace;
}
namespace LIV::SDK::Unity {
struct TEXTURE_COLOR_SPACE;
}
namespace LIV::SDK::Unity {
struct TEXTURE_DEVICE;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct RenderingPath;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
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
// CS Name: ::LIV.SDK.Unity::SDKUtils*
class CORDL_TYPE SDKUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApplyUserSpaceTransform, addr 0x24fef64, size 0xf0, virtual false, abstract: false, final false
  static inline void ApplyUserSpaceTransform(::LIV::SDK::Unity::SDKRender* render);

  /// @brief Method CleanCameraBehaviours, addr 0x250061c, size 0x384, virtual false, abstract: false, final false
  static inline void CleanCameraBehaviours(::UnityEngine::Camera* camera, ::ArrayW<::StringW, ::Array<::StringW>*> excludeBehaviours);

  /// @brief Method ContainsFlag, addr 0x24fc9d8, size 0xc, virtual false, abstract: false, final false
  static inline bool ContainsFlag(uint64_t flags, uint64_t flag);

  /// @brief Method CreateBridgeOutputFrame, addr 0x24ffe1c, size 0x188, virtual false, abstract: false, final false
  static inline void CreateBridgeOutputFrame(::LIV::SDK::Unity::SDKRender* render);

  /// @brief Method CreateClipPlane, addr 0x25009a0, size 0x4bc, virtual false, abstract: false, final false
  static inline void CreateClipPlane(::UnityEngine::Mesh* mesh, int32_t resX, int32_t resY, bool useQuads, float_t skirtLength);

  /// @brief Method CreateTexture, addr 0x2501b80, size 0x170, virtual false, abstract: false, final false
  static inline bool CreateTexture(ByRef<::UnityEngine::RenderTexture*> renderTexture, int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format);

  /// @brief Method DestroyObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool DestroyObject(ByRef<T> reference);

  /// @brief Method DestroyTexture, addr 0x2501044, size 0x94, virtual false, abstract: false, final false
  static inline void DestroyTexture(ByRef<::UnityEngine::RenderTexture*> _renderTexture);

  /// @brief Method DisableStandardAssets, addr 0x250025c, size 0x170, virtual false, abstract: false, final false
  static inline void DisableStandardAssets(::UnityEngine::Camera* cameraInstance, ByRef<::ArrayW<::UnityEngine::MonoBehaviour*, ::Array<::UnityEngine::MonoBehaviour*>*>> behaviours,
                                           ByRef<::ArrayW<bool, ::Array<bool>*>> wasBehaviourEnabled);

  /// @brief Method DisposeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool DisposeObject(ByRef<T> reference);

  /// @brief Method FeatureEnabled, addr 0x24fe014, size 0xc, virtual false, abstract: false, final false
  static inline bool FeatureEnabled(::LIV::SDK::Unity::FEATURES features, ::LIV::SDK::Unity::FEATURES feature);

  /// @brief Method ForceForwardRendering, addr 0x2504b78, size 0x28c, virtual false, abstract: false, final false
  static inline void ForceForwardRendering(::UnityEngine::Camera* cameraInstance, ::UnityEngine::Mesh* clipPlaneMesh, ::UnityEngine::Material* forceForwardRenderingMaterial);

  /// @brief Method GetCameraPositionAndRotation, addr 0x2504884, size 0x78, virtual false, abstract: false, final false
  static inline void GetCameraPositionAndRotation(::LIV::SDK::Unity::SDKPose pose, ::UnityEngine::Matrix4x4 originLocalToWorldMatrix, ByRef<::UnityEngine::Vector3> position,
                                                  ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method GetColorSpace, addr 0x2501f10, size 0x8c, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE GetColorSpace(::UnityEngine::RenderTexture* renderTexture);

  /// @brief Method GetDevice, addr 0x2501eac, size 0x64, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::TEXTURE_DEVICE GetDevice();

  /// @brief Method GetReadWriteFromColorSpace, addr 0x2504820, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureReadWrite GetReadWriteFromColorSpace(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace);

  /// @brief Method GetRenderingPipeline, addr 0x2504864, size 0x20, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::RENDERING_PIPELINE GetRenderingPipeline(::UnityEngine::RenderingPath renderingPath);

  /// @brief Method GetTrackedSpace, addr 0x25048fc, size 0x27c, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKTrackedSpace GetTrackedSpace(::UnityEngine::Transform* transform);

  /// @brief Method RestoreStandardAssets, addr 0x2500508, size 0x88, virtual false, abstract: false, final false
  static inline void RestoreStandardAssets(ByRef<::ArrayW<::UnityEngine::MonoBehaviour*, ::Array<::UnityEngine::MonoBehaviour*>*>> behaviours,
                                           ByRef<::ArrayW<bool, ::Array<bool>*>> wasBehaviourEnabled);

  /// @brief Method RotateQuaternionByMatrix, addr 0x250156c, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion RotateQuaternionByMatrix(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetCamera, addr 0x24fecc0, size 0x24c, virtual false, abstract: false, final false
  static inline void SetCamera(::UnityEngine::Camera* camera, ::UnityEngine::Transform* cameraTransform, ::LIV::SDK::Unity::SDKInputFrame inputFrame, ::UnityEngine::Matrix4x4 originLocalToWorldMatrix,
                               int32_t layerMask);

  /// @brief Method SetFlag, addr 0x24fba68, size 0x14, virtual false, abstract: false, final false
  static inline uint64_t SetFlag(uint64_t flags, uint64_t flag, bool enabled);

  /// @brief Method get_GetDefaultColorSpace, addr 0x2504838, size 0x2c, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE get_GetDefaultColorSpace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SDKUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SDKUtils(SDKUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SDKUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SDKUtils(SDKUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKUtils, 0x10>, "Size mismatch!");

} // namespace LIV::SDK::Unity
NEED_NO_BOX(::LIV::SDK::Unity::SDKUtils);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKUtils*, "LIV.SDK.Unity", "SDKUtils");
