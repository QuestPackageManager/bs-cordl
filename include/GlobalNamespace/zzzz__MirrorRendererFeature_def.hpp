#pragma once
// IWYU pragma private; include "GlobalNamespace\MirrorRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorRendererFeature)
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace GlobalNamespace {
class MirrorRendererFeature_IterationHandle;
}
namespace GlobalNamespace {
class MirrorRendererFeature_ShaderStatics;
}
namespace GlobalNamespace {
class MirrorRendererFeature___c__DisplayClass17_0;
}
namespace GlobalNamespace {
template <typename T> class MirrorRendererFeature___c__DisplayClass21_0_1;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
class PlanarMirrorBloomPass;
}
namespace GlobalNamespace {
class PlanarMirrorInitializePass;
}
namespace GlobalNamespace {
class PlanarMirrorRenderPass;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class AssetReferenceT_1;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorRendererFeature;
}
namespace GlobalNamespace {
class MirrorRendererFeature_IterationHandle;
}
namespace GlobalNamespace {
class MirrorRendererFeature_ShaderStatics;
}
namespace GlobalNamespace {
class MirrorRendererFeature___c__DisplayClass17_0;
}
namespace GlobalNamespace {
template <typename T> class MirrorRendererFeature___c__DisplayClass21_0_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MirrorRendererFeature*);
MARK_REF_T(::GlobalNamespace::MirrorRendererFeature_IterationHandle*);
MARK_REF_T(::GlobalNamespace::MirrorRendererFeature_ShaderStatics*);
MARK_REF_T(::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorRendererFeature*, "", "MirrorRendererFeature");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorRendererFeature_IterationHandle*, "", "MirrorRendererFeature/IterationHandle");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorRendererFeature_ShaderStatics*, "", "MirrorRendererFeature/ShaderStatics");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0*, "", "MirrorRendererFeature/<>c__DisplayClass17_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1, "", "MirrorRendererFeature/<>c__DisplayClass21_0`1");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorRendererFeature/ShaderStatics
class CORDL_TYPE MirrorRendererFeature_ShaderStatics : public ::System::Object {
public:
  // Declarations
  /// @brief Field worldSpaceCameraPosId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_worldSpaceCameraPosId, put = setStaticF_worldSpaceCameraPosId)) int32_t worldSpaceCameraPosId;

  static inline int32_t getStaticF_worldSpaceCameraPosId();

  static inline void setStaticF_worldSpaceCameraPosId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererFeature_ShaderStatics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererFeature_ShaderStatics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererFeature_ShaderStatics(MirrorRendererFeature_ShaderStatics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererFeature_ShaderStatics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererFeature_ShaderStatics(MirrorRendererFeature_ShaderStatics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MirrorRendererFeature_ShaderStatics) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Guid, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorRendererFeature/IterationHandle
class CORDL_TYPE MirrorRendererFeature_IterationHandle : public ::System::Object {
public:
  // Declarations
  /// @brief Field guid, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_guid, put = __cordl_internal_set_guid)) ::System::Guid guid;

  static inline ::GlobalNamespace::MirrorRendererFeature_IterationHandle* New_ctor();

  constexpr ::System::Guid const& __cordl_internal_get_guid() const;

  constexpr ::System::Guid& __cordl_internal_get_guid();

  constexpr void __cordl_internal_set_guid(::System::Guid value);

  /// @brief Method .ctor, addr 0x5f48aec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererFeature_IterationHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererFeature_IterationHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererFeature_IterationHandle(MirrorRendererFeature_IterationHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererFeature_IterationHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererFeature_IterationHandle(MirrorRendererFeature_IterationHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20653 };

  /// @brief Field guid, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___guid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature_IterationHandle, ___guid) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorRendererFeature_IterationHandle) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Guid, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorRendererFeature/<>c__DisplayClass17_0
class CORDL_TYPE MirrorRendererFeature___c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MirrorRendererFeature> __4__this;

  /// @brief Field currentGuid, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_currentGuid, put = __cordl_internal_set_currentGuid)) ::System::Guid currentGuid;

  static inline ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0* New_ctor();

  /// @brief Method <Create>b__0, addr 0x5f48b60, size 0xc4, virtual false, abstract: false, final false
  inline void _Create_b__0(::GlobalNamespace::BloomPrePassEffectSO* bloomFogOverride);

  /// @brief Method <Create>b__1, addr 0x5f48c9c, size 0x110, virtual false, abstract: false, final false
  inline void _Create_b__1(::GlobalNamespace::MirrorRendererSO* mirrorRenderer);

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererFeature> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererFeature>& __cordl_internal_get___4__this();

  constexpr ::System::Guid const& __cordl_internal_get_currentGuid() const;

  constexpr ::System::Guid& __cordl_internal_get_currentGuid();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MirrorRendererFeature> value);

  constexpr void __cordl_internal_set_currentGuid(::System::Guid value);

  /// @brief Method .ctor, addr 0x5f47c1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererFeature___c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererFeature___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererFeature___c__DisplayClass17_0(MirrorRendererFeature___c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererFeature___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererFeature___c__DisplayClass17_0(MirrorRendererFeature___c__DisplayClass17_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20654 };

  /// @brief Field currentGuid, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___currentGuid;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererFeature> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0, ___currentGuid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: MirrorRendererFeature/<>c__DisplayClass21_0`1<T>
class CORDL_TYPE MirrorRendererFeature___c__DisplayClass21_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onLoadFinished, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onLoadFinished, put = __cordl_internal_set_onLoadFinished)) ::System::Action_1<T>* onLoadFinished;

  static inline ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>* New_ctor();

  /// @brief Method <LoadAssetAsync>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _LoadAssetAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> handle);

  constexpr ::System::Action_1<T>* const& __cordl_internal_get_onLoadFinished() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_onLoadFinished();

  constexpr void __cordl_internal_set_onLoadFinished(::System::Action_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererFeature___c__DisplayClass21_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererFeature___c__DisplayClass21_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererFeature___c__DisplayClass21_0_1(MirrorRendererFeature___c__DisplayClass21_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererFeature___c__DisplayClass21_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererFeature___c__DisplayClass21_0_1(MirrorRendererFeature___c__DisplayClass21_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20655 };

  /// @brief Field onLoadFinished, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<T>* ___onLoadFinished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies UnityEngine.Plane, UnityEngine.Rendering.ScriptableRenderContext, UnityEngine.Rendering.Universal.RenderPassEvent, UnityEngine.Rendering.Universal.ScriptableRendererFeature,
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorRendererFeature
class CORDL_TYPE MirrorRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  using IterationHandle = ::GlobalNamespace::MirrorRendererFeature_IterationHandle;

  using ShaderStatics = ::GlobalNamespace::MirrorRendererFeature_ShaderStatics;

  using __c__DisplayClass17_0 = ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0;

  template <typename T> using __c__DisplayClass21_0_1 = ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>;

  /// @brief Field _bloomEffectOverrideHandle, offset 0x58, size 0x18
  __declspec(property(
      get = __cordl_internal_get__bloomEffectOverrideHandle,
      put = __cordl_internal_set__bloomEffectOverrideHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>
      _bloomEffectOverrideHandle;

  /// @brief Field _bloomEffectOverrideRef, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bloomEffectOverrideRef,
      put = __cordl_internal_set__bloomEffectOverrideRef)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* _bloomEffectOverrideRef;

  /// @brief Field _bloomPass, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPass, put = __cordl_internal_set__bloomPass)) ::GlobalNamespace::PlanarMirrorBloomPass* _bloomPass;

  /// @brief Field _cullingPlanes, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__cullingPlanes, put = __cordl_internal_set__cullingPlanes)) ::ArrayW<::UnityEngine::Plane> _cullingPlanes;

  /// @brief Field _eyePlanesLeft, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__eyePlanesLeft, put = __cordl_internal_set__eyePlanesLeft)) ::ArrayW<::UnityEngine::Plane> _eyePlanesLeft;

  /// @brief Field _eyePlanesRight, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__eyePlanesRight, put = __cordl_internal_set__eyePlanesRight)) ::ArrayW<::UnityEngine::Plane> _eyePlanesRight;

  /// @brief Field _initializePass, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__initializePass, put = __cordl_internal_set__initializePass)) ::GlobalNamespace::PlanarMirrorInitializePass* _initializePass;

  /// @brief Field _iterationHandle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__iterationHandle, put = __cordl_internal_set__iterationHandle)) ::GlobalNamespace::MirrorRendererFeature_IterationHandle* _iterationHandle;

  /// @brief Field _mirrorRenderer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRenderer, put = __cordl_internal_set__mirrorRenderer)) ::UnityW<::GlobalNamespace::MirrorRendererSO> _mirrorRenderer;

  /// @brief Field _mirrorRendererHandle, offset 0x70, size 0x18
  __declspec(property(get = __cordl_internal_get__mirrorRendererHandle,
                      put = __cordl_internal_set__mirrorRendererHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>
      _mirrorRendererHandle;

  /// @brief Field _mirrorRendererRef, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRendererRef,
                      put = __cordl_internal_set__mirrorRendererRef)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>* _mirrorRendererRef;

  /// @brief Field _pendingContext, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingContext, put = __cordl_internal_set__pendingContext)) ::UnityEngine::Rendering::ScriptableRenderContext _pendingContext;

  /// @brief Field _pendingContextCamera, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingContextCamera, put = __cordl_internal_set__pendingContextCamera)) ::UnityW<::UnityEngine::Camera> _pendingContextCamera;

  /// @brief Field _renderPass, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__renderPass, put = __cordl_internal_set__renderPass)) ::GlobalNamespace::PlanarMirrorRenderPass* _renderPass;

  /// @brief Field _renderPassEvent, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__renderPassEvent, put = __cordl_internal_set__renderPassEvent)) ::UnityEngine::Rendering::Universal::RenderPassEvent _renderPassEvent;

  /// @brief Method AddRenderPasses, addr 0x5f47d74, size 0x864, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x5f478a0, size 0x37c, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x5f488bc, size 0xf8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method HandleBeginCameraRendering, addr 0x5f489b4, size 0x8, virtual false, abstract: false, final false
  inline void HandleBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method HandleEndCameraRendering, addr 0x5f489bc, size 0x7c, virtual false, abstract: false, final false
  inline void HandleEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void LoadAssetAsync(::UnityEngine::AddressableAssets::AssetReferenceT_1<T>* reference, ::by_ref<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>> handle,
                             ::System::Action_1<T>* onLoadFinished);

  static inline ::GlobalNamespace::MirrorRendererFeature* New_ctor();

  /// @brief Method ReleaseHandles, addr 0x5f47c20, size 0x154, virtual false, abstract: false, final false
  inline void ReleaseHandles();

  /// @brief Method UnionFrustumPlanes, addr 0x5f485fc, size 0x29c, virtual false, abstract: false, final false
  static inline void UnionFrustumPlanes(::ArrayW<::UnityEngine::Plane> eyeLeft, ::ArrayW<::UnityEngine::Plane> eyeRight, ::UnityEngine::Matrix4x4 reflectedViewLeft,
                                        ::UnityEngine::Matrix4x4 reflectedViewRight, ::ArrayW<::UnityEngine::Plane> result);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>> const&
  __cordl_internal_get__bloomEffectOverrideHandle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>& __cordl_internal_get__bloomEffectOverrideHandle();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* const& __cordl_internal_get__bloomEffectOverrideRef() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>*& __cordl_internal_get__bloomEffectOverrideRef();

  constexpr ::GlobalNamespace::PlanarMirrorBloomPass* const& __cordl_internal_get__bloomPass() const;

  constexpr ::GlobalNamespace::PlanarMirrorBloomPass*& __cordl_internal_get__bloomPass();

  constexpr ::ArrayW<::UnityEngine::Plane> const& __cordl_internal_get__cullingPlanes() const;

  constexpr ::ArrayW<::UnityEngine::Plane>& __cordl_internal_get__cullingPlanes();

  constexpr ::ArrayW<::UnityEngine::Plane> const& __cordl_internal_get__eyePlanesLeft() const;

  constexpr ::ArrayW<::UnityEngine::Plane>& __cordl_internal_get__eyePlanesLeft();

  constexpr ::ArrayW<::UnityEngine::Plane> const& __cordl_internal_get__eyePlanesRight() const;

  constexpr ::ArrayW<::UnityEngine::Plane>& __cordl_internal_get__eyePlanesRight();

  constexpr ::GlobalNamespace::PlanarMirrorInitializePass* const& __cordl_internal_get__initializePass() const;

  constexpr ::GlobalNamespace::PlanarMirrorInitializePass*& __cordl_internal_get__initializePass();

  constexpr ::GlobalNamespace::MirrorRendererFeature_IterationHandle* const& __cordl_internal_get__iterationHandle() const;

  constexpr ::GlobalNamespace::MirrorRendererFeature_IterationHandle*& __cordl_internal_get__iterationHandle();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& __cordl_internal_get__mirrorRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& __cordl_internal_get__mirrorRenderer();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::MirrorRendererSO>> const& __cordl_internal_get__mirrorRendererHandle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>& __cordl_internal_get__mirrorRendererHandle();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>* const& __cordl_internal_get__mirrorRendererRef() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>*& __cordl_internal_get__mirrorRendererRef();

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& __cordl_internal_get__pendingContext() const;

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext& __cordl_internal_get__pendingContext();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__pendingContextCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__pendingContextCamera();

  constexpr ::GlobalNamespace::PlanarMirrorRenderPass* const& __cordl_internal_get__renderPass() const;

  constexpr ::GlobalNamespace::PlanarMirrorRenderPass*& __cordl_internal_get__renderPass();

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& __cordl_internal_get__renderPassEvent() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& __cordl_internal_get__renderPassEvent();

  constexpr void __cordl_internal_set__bloomEffectOverrideHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>> value);

  constexpr void __cordl_internal_set__bloomEffectOverrideRef(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* value);

  constexpr void __cordl_internal_set__bloomPass(::GlobalNamespace::PlanarMirrorBloomPass* value);

  constexpr void __cordl_internal_set__cullingPlanes(::ArrayW<::UnityEngine::Plane> value);

  constexpr void __cordl_internal_set__eyePlanesLeft(::ArrayW<::UnityEngine::Plane> value);

  constexpr void __cordl_internal_set__eyePlanesRight(::ArrayW<::UnityEngine::Plane> value);

  constexpr void __cordl_internal_set__initializePass(::GlobalNamespace::PlanarMirrorInitializePass* value);

  constexpr void __cordl_internal_set__iterationHandle(::GlobalNamespace::MirrorRendererFeature_IterationHandle* value);

  constexpr void __cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value);

  constexpr void __cordl_internal_set__mirrorRendererHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::MirrorRendererSO>> value);

  constexpr void __cordl_internal_set__mirrorRendererRef(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>* value);

  constexpr void __cordl_internal_set__pendingContext(::UnityEngine::Rendering::ScriptableRenderContext value);

  constexpr void __cordl_internal_set__pendingContextCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__renderPass(::GlobalNamespace::PlanarMirrorRenderPass* value);

  constexpr void __cordl_internal_set__renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  /// @brief Method .ctor, addr 0x5f48a38, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererFeature(MirrorRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererFeature(MirrorRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20656 };

  /// @brief Field _renderPassEvent, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent ____renderPassEvent;

  /// @brief Field _mirrorRendererRef, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>* ____mirrorRendererRef;

  /// @brief Field _bloomEffectOverrideRef, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* ____bloomEffectOverrideRef;

  /// @brief Field _iterationHandle, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MirrorRendererFeature_IterationHandle* ____iterationHandle;

  /// @brief Field _mirrorRenderer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererSO> ____mirrorRenderer;

  /// @brief Field _initializePass, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlanarMirrorInitializePass* ____initializePass;

  /// @brief Field _bloomPass, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PlanarMirrorBloomPass* ____bloomPass;

  /// @brief Field _renderPass, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::PlanarMirrorRenderPass* ____renderPass;

  /// @brief Field _bloomEffectOverrideHandle, offset: 0x58, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>> ____bloomEffectOverrideHandle;

  /// @brief Field _mirrorRendererHandle, offset: 0x70, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::MirrorRendererSO>> ____mirrorRendererHandle;

  /// @brief Field _pendingContext, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScriptableRenderContext ____pendingContext;

  /// @brief Field _pendingContextCamera, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____pendingContextCamera;

  /// @brief Field _cullingPlanes, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Plane> ____cullingPlanes;

  /// @brief Field _eyePlanesLeft, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Plane> ____eyePlanesLeft;

  /// @brief Field _eyePlanesRight, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Plane> ____eyePlanesRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____renderPassEvent) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____mirrorRendererRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____bloomEffectOverrideRef) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____iterationHandle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____mirrorRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____initializePass) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____bloomPass) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____renderPass) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____bloomEffectOverrideHandle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____mirrorRendererHandle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____pendingContext) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____pendingContextCamera) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____cullingPlanes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____eyePlanesLeft) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererFeature, ____eyePlanesRight) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorRendererFeature) == 0xb0, "Size mismatch!");

} // namespace GlobalNamespace
