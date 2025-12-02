#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepth/EnvironmentDepthManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/EnvironmentDepth/zzzz__OcclusionShadersMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RenderTargetSetup_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentDepthManager)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace Meta::XR::EnvironmentDepth {
struct DepthFrameDesc;
}
namespace Meta::XR::EnvironmentDepth {
class EnvironmentDepthManager_Mask;
}
namespace Meta::XR::EnvironmentDepth {
class IDepthProvider;
}
namespace Meta::XR::EnvironmentDepth {
struct OcclusionShadersMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::EnvironmentDepth {
class EnvironmentDepthManager;
}
namespace Meta::XR::EnvironmentDepth {
class EnvironmentDepthManager_Mask;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager);
MARK_REF_PTR_T(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask);
// Dependencies System.Object
namespace Meta::XR::EnvironmentDepth {
// Is value type: false
// CS Name: Meta.XR.EnvironmentDepth.EnvironmentDepthManager/Mask
class CORDL_TYPE EnvironmentDepthManager_Mask : public ::System::Object {
public:
  // Declarations
  /// @brief Field _maskCommandBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__maskCommandBuffer, put = __cordl_internal_set__maskCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* _maskCommandBuffer;

  /// @brief Field _maskDepthRt, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__maskDepthRt, put = __cordl_internal_set__maskDepthRt)) ::UnityW<::UnityEngine::RenderTexture> _maskDepthRt;

  /// @brief Field _maskMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__maskMaterial, put = __cordl_internal_set__maskMaterial)) ::UnityW<::UnityEngine::Material> _maskMaterial;

  /// @brief Field _maskedDepthTexture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__maskedDepthTexture, put = __cordl_internal_set__maskedDepthTexture)) ::UnityW<::UnityEngine::RenderTexture> _maskedDepthTexture;

  /// @brief Field _mvpMatrices, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mvpMatrices, put = __cordl_internal_set__mvpMatrices)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> _mvpMatrices;

  /// @brief Method ApplyMask, addr 0x582820c, size 0x928, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> ApplyMask(::UnityEngine::RenderTexture* depthTexture, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* meshFilters,
                                                          ::UnityEngine::Matrix4x4 trackingSpaceWorldToLocal,
                                                          ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*> frameDescriptors);

  /// @brief Method Dispose, addr 0x58275e0, size 0x8c, virtual false, abstract: false, final false
  inline void Dispose();

  static inline ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask* New_ctor(int32_t width, int32_t height, float_t bias);

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__maskCommandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__maskCommandBuffer();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__maskDepthRt() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__maskDepthRt();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__maskMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__maskMaterial();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__maskedDepthTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__maskedDepthTexture();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get__mvpMatrices() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get__mvpMatrices();

  constexpr void __cordl_internal_set__maskCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set__maskDepthRt(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__maskMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__maskedDepthTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__mvpMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  /// @brief Method .ctor, addr 0x5827fc8, size 0x244, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, float_t bias);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentDepthManager_Mask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentDepthManager_Mask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentDepthManager_Mask(EnvironmentDepthManager_Mask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentDepthManager_Mask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentDepthManager_Mask(EnvironmentDepthManager_Mask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22595 };

  /// @brief Field _maskMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____maskMaterial;

  /// @brief Field _maskDepthRt, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____maskDepthRt;

  /// @brief Field _maskedDepthTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____maskedDepthTexture;

  /// @brief Field _maskCommandBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____maskCommandBuffer;

  /// @brief Field _mvpMatrices, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ____mvpMatrices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask, ____maskMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask, ____maskDepthRt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask, ____maskedDepthTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask, ____maskCommandBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask, ____mvpMatrices) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask, 0x38>, "Size mismatch!");

} // namespace Meta::XR::EnvironmentDepth
// Dependencies Meta.XR.EnvironmentDepth.OcclusionShadersMode, UnityEngine.MonoBehaviour, UnityEngine.RenderTargetSetup
namespace Meta::XR::EnvironmentDepth {
// Is value type: false
// CS Name: Meta.XR.EnvironmentDepth.EnvironmentDepthManager
class CORDL_TYPE EnvironmentDepthManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Mask = ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask;

  /// @brief Field CustomTrackingSpace, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomTrackingSpace, put = __cordl_internal_set_CustomTrackingSpace)) ::UnityW<::UnityEngine::Transform> CustomTrackingSpace;

  /// @brief Field DepthTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_DepthTextureID, put = setStaticF_DepthTextureID)) int32_t DepthTextureID;

  __declspec(property(get = get_IsDepthAvailable, put = set_IsDepthAvailable)) bool IsDepthAvailable;

  __declspec(property(get = get_MaskBias, put = set_MaskBias)) float_t MaskBias;

  /// @brief Field MaskBiasID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MaskBiasID, put = setStaticF_MaskBiasID)) int32_t MaskBiasID;

  __declspec(property(get = get_MaskMeshFilters, put = set_MaskMeshFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* MaskMeshFilters;

  /// @brief Field MaskTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MaskTextureID, put = setStaticF_MaskTextureID)) int32_t MaskTextureID;

  /// @brief Field MvpMatricesID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MvpMatricesID, put = setStaticF_MvpMatricesID)) int32_t MvpMatricesID;

  __declspec(property(get = get_OcclusionShadersMode, put = set_OcclusionShadersMode)) ::Meta::XR::EnvironmentDepth::OcclusionShadersMode OcclusionShadersMode;

  /// @brief Field PreprocessedEnvironmentDepthTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_PreprocessedEnvironmentDepthTexture, put = setStaticF_PreprocessedEnvironmentDepthTexture)) int32_t PreprocessedEnvironmentDepthTexture;

  __declspec(property(get = get_RemoveHands, put = set_RemoveHands)) bool RemoveHands;

  /// @brief Field ReprojectionMatricesID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ReprojectionMatricesID, put = setStaticF_ReprojectionMatricesID)) int32_t ReprojectionMatricesID;

  /// @brief Field ZBufferParamsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ZBufferParamsID, put = setStaticF_ZBufferParamsID)) int32_t ZBufferParamsID;

  /// @brief Field <IsDepthAvailable>k__BackingField, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDepthAvailable_k__BackingField, put = __cordl_internal_set__IsDepthAvailable_k__BackingField)) bool _IsDepthAvailable_k__BackingField;

  /// @brief Field <MaskMeshFilters>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__MaskMeshFilters_k__BackingField,
                      put = __cordl_internal_set__MaskMeshFilters_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* _MaskMeshFilters_k__BackingField;

  /// @brief Field _cameraRig, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraRig, put = __cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig> _cameraRig;

  /// @brief Field _hasPermission, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__hasPermission, put = __cordl_internal_set__hasPermission)) bool _hasPermission;

  /// @brief Field _isCameraRigCached, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__isCameraRigCached, put = __cordl_internal_set__isCameraRigCached)) bool _isCameraRigCached;

  /// @brief Field _mask, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__mask, put = __cordl_internal_set__mask)) ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask* _mask;

  /// @brief Field _maskBias, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__maskBias, put = __cordl_internal_set__maskBias)) float_t _maskBias;

  /// @brief Field _occlusionShadersMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__occlusionShadersMode, put = __cordl_internal_set__occlusionShadersMode)) ::Meta::XR::EnvironmentDepth::OcclusionShadersMode _occlusionShadersMode;

  /// @brief Field _preprocessMaterial, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__preprocessMaterial, put = __cordl_internal_set__preprocessMaterial)) ::UnityW<::UnityEngine::Material> _preprocessMaterial;

  /// @brief Field _preprocessRenderTargetSetup, offset 0x60, size 0x40
  __declspec(property(get = __cordl_internal_get__preprocessRenderTargetSetup, put = __cordl_internal_set__preprocessRenderTargetSetup)) ::UnityEngine::RenderTargetSetup _preprocessRenderTargetSetup;

  /// @brief Field _preprocessTexture, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__preprocessTexture, put = __cordl_internal_set__preprocessTexture)) ::UnityW<::UnityEngine::RenderTexture> _preprocessTexture;

  /// @brief Field _provider, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__provider, put = setStaticF__provider)) ::Meta::XR::EnvironmentDepth::IDepthProvider* _provider;

  /// @brief Field _removeHands, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__removeHands, put = __cordl_internal_set__removeHands)) bool _removeHands;

  /// @brief Field _reprojectionMatrices, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__reprojectionMatrices, put = __cordl_internal_set__reprojectionMatrices)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      _reprojectionMatrices;

  /// @brief Field frameDescriptors, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_frameDescriptors,
                      put = __cordl_internal_set_frameDescriptors)) ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*>
      frameDescriptors;

  /// @brief Field onDepthTextureUpdate, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_onDepthTextureUpdate,
                      put = __cordl_internal_set_onDepthTextureUpdate)) ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* onDepthTextureUpdate;

  /// @brief Method Awake, addr 0x5826ff4, size 0xbc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CacheCameraRig, addr 0x5827f28, size 0xa0, virtual false, abstract: false, final false
  inline void CacheCameraRig();

  /// @brief Method CreateProvider, addr 0x5826808, size 0x2ec, virtual false, abstract: false, final false
  static inline ::Meta::XR::EnvironmentDepth::IDepthProvider* CreateProvider();

  /// @brief Method GetTrackingSpaceWorldToLocalMatrix, addr 0x58279bc, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetTrackingSpaceWorldToLocalMatrix();

  /// @brief Method Log, addr 0x5828e18, size 0x124, virtual false, abstract: false, final false
  static inline void Log(::UnityEngine::LogType type, ::StringW msg);

  static inline ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager* New_ctor();

  /// @brief Method OnBeforeRender, addr 0x582766c, size 0x350, virtual false, abstract: false, final false
  inline void OnBeforeRender();

  /// @brief Method OnDestroy, addr 0x58274f8, size 0xe8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x5827368, size 0x190, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x58270b0, size 0x21c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PreprocessDepthTexture, addr 0x5828b34, size 0x2e4, virtual false, abstract: false, final false
  inline void PreprocessDepthTexture(::UnityEngine::RenderTexture* depthTexture);

  /// @brief Method ResetDepthTextureIfAvailable, addr 0x58272cc, size 0x9c, virtual false, abstract: false, final false
  inline void ResetDepthTextureIfAvailable();

  /// @brief Method SetOcclusionShaderKeywords, addr 0x5826c68, size 0x1b0, virtual false, abstract: false, final false
  static inline void SetOcclusionShaderKeywords(::Meta::XR::EnvironmentDepth::OcclusionShadersMode mode);

  /// @brief Method TryFetchDepthTexture, addr 0x5827b00, size 0x2e4, virtual false, abstract: false, final false
  inline void TryFetchDepthTexture(::UnityEngine::Matrix4x4 trackingSpaceWorldToLocal);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_CustomTrackingSpace() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_CustomTrackingSpace();

  constexpr bool const& __cordl_internal_get__IsDepthAvailable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDepthAvailable_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* const& __cordl_internal_get__MaskMeshFilters_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*& __cordl_internal_get__MaskMeshFilters_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig();

  constexpr bool const& __cordl_internal_get__hasPermission() const;

  constexpr bool& __cordl_internal_get__hasPermission();

  constexpr bool const& __cordl_internal_get__isCameraRigCached() const;

  constexpr bool& __cordl_internal_get__isCameraRigCached();

  constexpr ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask* const& __cordl_internal_get__mask() const;

  constexpr ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask*& __cordl_internal_get__mask();

  constexpr float_t const& __cordl_internal_get__maskBias() const;

  constexpr float_t& __cordl_internal_get__maskBias();

  constexpr ::Meta::XR::EnvironmentDepth::OcclusionShadersMode const& __cordl_internal_get__occlusionShadersMode() const;

  constexpr ::Meta::XR::EnvironmentDepth::OcclusionShadersMode& __cordl_internal_get__occlusionShadersMode();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__preprocessMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__preprocessMaterial();

  constexpr ::UnityEngine::RenderTargetSetup const& __cordl_internal_get__preprocessRenderTargetSetup() const;

  constexpr ::UnityEngine::RenderTargetSetup& __cordl_internal_get__preprocessRenderTargetSetup();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__preprocessTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__preprocessTexture();

  constexpr bool const& __cordl_internal_get__removeHands() const;

  constexpr bool& __cordl_internal_get__removeHands();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get__reprojectionMatrices() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get__reprojectionMatrices();

  constexpr ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*> const& __cordl_internal_get_frameDescriptors() const;

  constexpr ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*>& __cordl_internal_get_frameDescriptors();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_onDepthTextureUpdate() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_onDepthTextureUpdate();

  constexpr void __cordl_internal_set_CustomTrackingSpace(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__IsDepthAvailable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MaskMeshFilters_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* value);

  constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set__hasPermission(bool value);

  constexpr void __cordl_internal_set__isCameraRigCached(bool value);

  constexpr void __cordl_internal_set__mask(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask* value);

  constexpr void __cordl_internal_set__maskBias(float_t value);

  constexpr void __cordl_internal_set__occlusionShadersMode(::Meta::XR::EnvironmentDepth::OcclusionShadersMode value);

  constexpr void __cordl_internal_set__preprocessMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__preprocessRenderTargetSetup(::UnityEngine::RenderTargetSetup value);

  constexpr void __cordl_internal_set__preprocessTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__removeHands(bool value);

  constexpr void __cordl_internal_set__reprojectionMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_frameDescriptors(::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*> value);

  constexpr void __cordl_internal_set_onDepthTextureUpdate(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  /// @brief Method .ctor, addr 0x5828f3c, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onDepthTextureUpdate, addr 0x5826604, size 0xc0, virtual false, abstract: false, final false
  inline void add_onDepthTextureUpdate(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  static inline int32_t getStaticF_DepthTextureID();

  static inline int32_t getStaticF_MaskBiasID();

  static inline int32_t getStaticF_MaskTextureID();

  static inline int32_t getStaticF_MvpMatricesID();

  static inline int32_t getStaticF_PreprocessedEnvironmentDepthTexture();

  static inline int32_t getStaticF_ReprojectionMatricesID();

  static inline int32_t getStaticF_ZBufferParamsID();

  static inline ::Meta::XR::EnvironmentDepth::IDepthProvider* getStaticF__provider();

  /// @brief Method get_IsDepthAvailable, addr 0x5826bc4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDepthAvailable();

  /// @brief Method get_IsSupported, addr 0x5826af8, size 0xcc, virtual false, abstract: false, final false
  static inline bool get_IsSupported();

  /// @brief Method get_MaskBias, addr 0x5826f50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_MaskBias();

  /// @brief Method get_MaskMeshFilters, addr 0x58265f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* get_MaskMeshFilters();

  /// @brief Method get_OcclusionShadersMode, addr 0x5826bd4, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::EnvironmentDepth::OcclusionShadersMode get_OcclusionShadersMode();

  /// @brief Method get_RemoveHands, addr 0x5826e18, size 0x8, virtual false, abstract: false, final false
  inline bool get_RemoveHands();

  /// @brief Method get_provider, addr 0x5826784, size 0x84, virtual false, abstract: false, final false
  static inline ::Meta::XR::EnvironmentDepth::IDepthProvider* get_provider();

  /// @brief Method remove_onDepthTextureUpdate, addr 0x58266c4, size 0xc0, virtual false, abstract: false, final false
  inline void remove_onDepthTextureUpdate(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value);

  static inline void setStaticF_DepthTextureID(int32_t value);

  static inline void setStaticF_MaskBiasID(int32_t value);

  static inline void setStaticF_MaskTextureID(int32_t value);

  static inline void setStaticF_MvpMatricesID(int32_t value);

  static inline void setStaticF_PreprocessedEnvironmentDepthTexture(int32_t value);

  static inline void setStaticF_ReprojectionMatricesID(int32_t value);

  static inline void setStaticF_ZBufferParamsID(int32_t value);

  static inline void setStaticF__provider(::Meta::XR::EnvironmentDepth::IDepthProvider* value);

  /// @brief Method set_IsDepthAvailable, addr 0x5826bcc, size 0x8, virtual false, abstract: false, final false
  inline void set_IsDepthAvailable(bool value);

  /// @brief Method set_MaskBias, addr 0x5826f58, size 0x9c, virtual false, abstract: false, final false
  inline void set_MaskBias(float_t value);

  /// @brief Method set_MaskMeshFilters, addr 0x58265fc, size 0x8, virtual false, abstract: false, final false
  inline void set_MaskMeshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* value);

  /// @brief Method set_OcclusionShadersMode, addr 0x5826bdc, size 0x8c, virtual false, abstract: false, final false
  inline void set_OcclusionShadersMode(::Meta::XR::EnvironmentDepth::OcclusionShadersMode value);

  /// @brief Method set_RemoveHands, addr 0x5826e20, size 0x130, virtual false, abstract: false, final false
  inline void set_RemoveHands(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentDepthManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentDepthManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentDepthManager(EnvironmentDepthManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentDepthManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentDepthManager(EnvironmentDepthManager const&) = delete;

  /// @brief Field HardOcclusionKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString HardOcclusionKeyword{ u"HARD_OCCLUSION" };

  /// @brief Field SoftOcclusionKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString SoftOcclusionKeyword{ u"SOFT_OCCLUSION" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22596 };

  /// @brief Field numViews offset 0xffffffff size 0x4
  static constexpr int32_t numViews{ static_cast<int32_t>(0x2) };

  /// @brief Field _occlusionShadersMode, offset: 0x20, size: 0x4, def value: None
  ::Meta::XR::EnvironmentDepth::OcclusionShadersMode ____occlusionShadersMode;

  /// @brief Field _removeHands, offset: 0x24, size: 0x1, def value: None
  bool ____removeHands;

  /// @brief Field CustomTrackingSpace, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___CustomTrackingSpace;

  /// @brief Field <MaskMeshFilters>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* ____MaskMeshFilters_k__BackingField;

  /// @brief Field _isCameraRigCached, offset: 0x38, size: 0x1, def value: None
  bool ____isCameraRigCached;

  /// @brief Field _cameraRig, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ____cameraRig;

  /// @brief Field _hasPermission, offset: 0x48, size: 0x1, def value: None
  bool ____hasPermission;

  /// @brief Field _preprocessMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____preprocessMaterial;

  /// @brief Field _preprocessTexture, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____preprocessTexture;

  /// @brief Field _preprocessRenderTargetSetup, offset: 0x60, size: 0x40, def value: None
  ::UnityEngine::RenderTargetSetup ____preprocessRenderTargetSetup;

  /// @brief Field onDepthTextureUpdate, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* ___onDepthTextureUpdate;

  /// @brief Field frameDescriptors, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc, ::Array<::Meta::XR::EnvironmentDepth::DepthFrameDesc>*> ___frameDescriptors;

  /// @brief Field _maskBias, offset: 0xb0, size: 0x4, def value: None
  float_t ____maskBias;

  /// @brief Field _mask, offset: 0xb8, size: 0x8, def value: None
  ::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask* ____mask;

  /// @brief Field <IsDepthAvailable>k__BackingField, offset: 0xc0, size: 0x1, def value: None
  bool ____IsDepthAvailable_k__BackingField;

  /// @brief Field _reprojectionMatrices, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ____reprojectionMatrices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____occlusionShadersMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____removeHands) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ___CustomTrackingSpace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____MaskMeshFilters_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____isCameraRigCached) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____cameraRig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____hasPermission) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____preprocessMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____preprocessTexture) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____preprocessRenderTargetSetup) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ___onDepthTextureUpdate) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ___frameDescriptors) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____maskBias) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____mask) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____IsDepthAvailable_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, ____reprojectionMatrices) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager, 0xd0>, "Size mismatch!");

} // namespace Meta::XR::EnvironmentDepth
NEED_NO_BOX(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*, "Meta.XR.EnvironmentDepth", "EnvironmentDepthManager");
NEED_NO_BOX(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager_Mask*, "Meta.XR.EnvironmentDepth", "EnvironmentDepthManager/Mask");
