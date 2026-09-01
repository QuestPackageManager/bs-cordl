#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassRendererFeature)
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace GlobalNamespace {
class BloomPrePassRenderPass;
}
namespace GlobalNamespace {
class BloomPrePassRendererFeature_IterationHandle;
}
namespace GlobalNamespace {
template <typename T> class BloomPrePassRendererFeature___c__DisplayClass10_0_1;
}
namespace GlobalNamespace {
class BloomPrePassRendererFeature___c__DisplayClass6_0;
}
namespace GlobalNamespace {
class BloomPrePass;
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
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassRendererFeature;
}
namespace GlobalNamespace {
class BloomPrePassRendererFeature_IterationHandle;
}
namespace GlobalNamespace {
template <typename T> class BloomPrePassRendererFeature___c__DisplayClass10_0_1;
}
namespace GlobalNamespace {
class BloomPrePassRendererFeature___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BloomPrePassRendererFeature*);
MARK_REF_T(::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1);
MARK_REF_T(::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassRendererFeature*, "", "BloomPrePassRendererFeature");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle*, "", "BloomPrePassRendererFeature/IterationHandle");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1, "", "BloomPrePassRendererFeature/<>c__DisplayClass10_0`1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0*, "", "BloomPrePassRendererFeature/<>c__DisplayClass6_0");
// Dependencies System.Guid, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRendererFeature/IterationHandle
class CORDL_TYPE BloomPrePassRendererFeature_IterationHandle : public ::System::Object {
public:
  // Declarations
  /// @brief Field guid, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_guid, put = __cordl_internal_set_guid)) ::System::Guid guid;

  static inline ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle* New_ctor();

  constexpr ::System::Guid const& __cordl_internal_get_guid() const;

  constexpr ::System::Guid& __cordl_internal_get_guid();

  constexpr void __cordl_internal_set_guid(::System::Guid value);

  /// @brief Method .ctor, addr 0x5862de8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRendererFeature_IterationHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererFeature_IterationHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRendererFeature_IterationHandle(BloomPrePassRendererFeature_IterationHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererFeature_IterationHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRendererFeature_IterationHandle(BloomPrePassRendererFeature_IterationHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19470 };

  /// @brief Field guid, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___guid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle, ___guid) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BloomPrePassRendererFeature/<>c__DisplayClass10_0`1<T>
class CORDL_TYPE BloomPrePassRendererFeature___c__DisplayClass10_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onLoadFinished, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onLoadFinished, put = __cordl_internal_set_onLoadFinished)) ::System::Action_1<T>* onLoadFinished;

  static inline ::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>* New_ctor();

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
  constexpr BloomPrePassRendererFeature___c__DisplayClass10_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererFeature___c__DisplayClass10_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRendererFeature___c__DisplayClass10_0_1(BloomPrePassRendererFeature___c__DisplayClass10_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererFeature___c__DisplayClass10_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRendererFeature___c__DisplayClass10_0_1(BloomPrePassRendererFeature___c__DisplayClass10_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19471 };

  /// @brief Field onLoadFinished, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<T>* ___onLoadFinished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Guid, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRendererFeature/<>c__DisplayClass6_0
class CORDL_TYPE BloomPrePassRendererFeature___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BloomPrePassRendererFeature> __4__this;

  /// @brief Field currentGuid, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_currentGuid, put = __cordl_internal_set_currentGuid)) ::System::Guid currentGuid;

  static inline ::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0* New_ctor();

  /// @brief Method <Create>b__0, addr 0x5862dec, size 0xc4, virtual false, abstract: false, final false
  inline void _Create_b__0(::GlobalNamespace::BloomPrePassEffectSO* effectOverride);

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererFeature> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererFeature>& __cordl_internal_get___4__this();

  constexpr ::System::Guid const& __cordl_internal_get_currentGuid() const;

  constexpr ::System::Guid& __cordl_internal_get_currentGuid();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BloomPrePassRendererFeature> value);

  constexpr void __cordl_internal_set_currentGuid(::System::Guid value);

  /// @brief Method .ctor, addr 0x5862bb8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRendererFeature___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererFeature___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRendererFeature___c__DisplayClass6_0(BloomPrePassRendererFeature___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererFeature___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRendererFeature___c__DisplayClass6_0(BloomPrePassRendererFeature___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19472 };

  /// @brief Field currentGuid, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___currentGuid;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassRendererFeature> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0, ___currentGuid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.RenderPassEvent, UnityEngine.Rendering.Universal.ScriptableRendererFeature,
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRendererFeature
class CORDL_TYPE BloomPrePassRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  using IterationHandle = ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle;

  template <typename T> using __c__DisplayClass10_0_1 = ::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>;

  using __c__DisplayClass6_0 = ::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0;

  /// @brief Field _effectOverrideLoadHandle, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get__effectOverrideLoadHandle,
                      put =
                          __cordl_internal_set__effectOverrideLoadHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>
      _effectOverrideLoadHandle;

  /// @brief Field _effectOverrideRef, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__effectOverrideRef,
                      put = __cordl_internal_set__effectOverrideRef)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* _effectOverrideRef;

  /// @brief Field _iterationHandle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__iterationHandle, put = __cordl_internal_set__iterationHandle)) ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle* _iterationHandle;

  /// @brief Field _pass, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pass, put = __cordl_internal_set__pass)) ::GlobalNamespace::BloomPrePassRenderPass* _pass;

  /// @brief Field _renderPassEvent, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__renderPassEvent, put = __cordl_internal_set__renderPassEvent)) ::UnityEngine::Rendering::Universal::RenderPassEvent _renderPassEvent;

  /// @brief Method AddRenderPasses, addr 0x5862d04, size 0x28, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x5862a48, size 0x170, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x5862d80, size 0x8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void LoadAssetAsync(::UnityEngine::AddressableAssets::AssetReferenceT_1<T>* reference, ::by_ref<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>> handle,
                             ::System::Action_1<T>* onLoadFinished);

  static inline ::GlobalNamespace::BloomPrePassRendererFeature* New_ctor();

  /// @brief Method ReleaseHandles, addr 0x5862bbc, size 0xd0, virtual false, abstract: false, final false
  inline void ReleaseHandles();

  /// @brief Method ResolveBloomPrePass, addr 0x5862d2c, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::BloomPrePass> ResolveBloomPrePass(::UnityEngine::Camera* camera);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>> const& __cordl_internal_get__effectOverrideLoadHandle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>& __cordl_internal_get__effectOverrideLoadHandle();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* const& __cordl_internal_get__effectOverrideRef() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>*& __cordl_internal_get__effectOverrideRef();

  constexpr ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle* const& __cordl_internal_get__iterationHandle() const;

  constexpr ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle*& __cordl_internal_get__iterationHandle();

  constexpr ::GlobalNamespace::BloomPrePassRenderPass* const& __cordl_internal_get__pass() const;

  constexpr ::GlobalNamespace::BloomPrePassRenderPass*& __cordl_internal_get__pass();

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& __cordl_internal_get__renderPassEvent() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& __cordl_internal_get__renderPassEvent();

  constexpr void __cordl_internal_set__effectOverrideLoadHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>> value);

  constexpr void __cordl_internal_set__effectOverrideRef(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* value);

  constexpr void __cordl_internal_set__iterationHandle(::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle* value);

  constexpr void __cordl_internal_set__pass(::GlobalNamespace::BloomPrePassRenderPass* value);

  constexpr void __cordl_internal_set__renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  /// @brief Method .ctor, addr 0x5862d88, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRendererFeature(BloomPrePassRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRendererFeature(BloomPrePassRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19473 };

  /// @brief Field _renderPassEvent, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent ____renderPassEvent;

  /// @brief Field _effectOverrideRef, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* ____effectOverrideRef;

  /// @brief Field _iterationHandle, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle* ____iterationHandle;

  /// @brief Field _pass, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassRenderPass* ____pass;

  /// @brief Field _effectOverrideLoadHandle, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>> ____effectOverrideLoadHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature, ____renderPassEvent) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature, ____effectOverrideRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature, ____iterationHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature, ____pass) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature, ____effectOverrideLoadHandle) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BloomPrePassRendererFeature) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
