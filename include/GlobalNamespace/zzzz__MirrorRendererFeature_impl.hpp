#pragma once
// IWYU pragma private; include "GlobalNamespace\MirrorRendererFeature.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__PlanarMirrorBloomPass_def.hpp"
#include "GlobalNamespace/zzzz__PlanarMirrorInitializePass_def.hpp"
#include "GlobalNamespace/zzzz__PlanarMirrorRenderPass_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
inline void GlobalNamespace::MirrorRendererFeature_ShaderStatics::setStaticF_worldSpaceCameraPosId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "worldSpaceCameraPosId", ::GlobalNamespace::MirrorRendererFeature_ShaderStatics*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MirrorRendererFeature_ShaderStatics::getStaticF_worldSpaceCameraPosId() {
  return ::cordl_internals::getStaticField<int32_t, "worldSpaceCameraPosId", ::GlobalNamespace::MirrorRendererFeature_ShaderStatics*>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorRendererFeature_ShaderStatics::MirrorRendererFeature_ShaderStatics() {}
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature_IterationHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature_IterationHandle::*)()>(&::GlobalNamespace::MirrorRendererFeature_IterationHandle::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f48aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature_IterationHandle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Guid& GlobalNamespace::MirrorRendererFeature_IterationHandle::__cordl_internal_get_guid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guid;
}
constexpr ::System::Guid const& GlobalNamespace::MirrorRendererFeature_IterationHandle::__cordl_internal_get_guid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guid;
}
constexpr void GlobalNamespace::MirrorRendererFeature_IterationHandle::__cordl_internal_set_guid(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___guid = value;
}
inline void GlobalNamespace::MirrorRendererFeature_IterationHandle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature_IterationHandle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirrorRendererFeature_IterationHandle* GlobalNamespace::MirrorRendererFeature_IterationHandle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirrorRendererFeature_IterationHandle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorRendererFeature_IterationHandle::MirrorRendererFeature_IterationHandle() {}
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::*)()>(
    &::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f47c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0._Create_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::*)(::GlobalNamespace::BloomPrePassEffectSO*)>(
    &::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::_Create_b__0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f48b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0*>(),
                                                                                           { "<Create>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BloomPrePassEffectSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0._Create_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::*)(::GlobalNamespace::MirrorRendererSO*)>(
    &::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::_Create_b__1)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f48c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0*>(),
                                                                                           { "<Create>b__1", {}, { ::i2c::type_of<::GlobalNamespace::MirrorRendererSO*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Guid& GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::__cordl_internal_get_currentGuid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentGuid;
}
constexpr ::System::Guid const& GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::__cordl_internal_get_currentGuid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentGuid;
}
constexpr void GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::__cordl_internal_set_currentGuid(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentGuid = value;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererFeature>& GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererFeature> const& GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MirrorRendererFeature> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::_Create_b__0(::GlobalNamespace::BloomPrePassEffectSO* bloomFogOverride) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0*>(),
                                                                                         { "<Create>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BloomPrePassEffectSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bloomFogOverride);
}
inline void GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::_Create_b__1(::GlobalNamespace::MirrorRendererSO* mirrorRenderer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0*>(),
                                                                                         { "<Create>b__1", {}, { ::i2c::type_of<::GlobalNamespace::MirrorRendererSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mirrorRenderer);
}
inline ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0* GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass17_0::MirrorRendererFeature___c__DisplayClass17_0() {}
template <typename T> constexpr ::System::Action_1<T>*& GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>::__cordl_internal_get_onLoadFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onLoadFinished;
}
template <typename T> constexpr ::System::Action_1<T>* const& GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>::__cordl_internal_get_onLoadFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onLoadFinished;
}
template <typename T> constexpr void GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>::__cordl_internal_set_onLoadFinished(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onLoadFinished = value;
}
template <typename T> inline void GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>::_LoadAssetAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>*>(),
                                                           { "<LoadAssetAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
template <typename T> inline ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>* GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::MirrorRendererFeature___c__DisplayClass21_0_1<T>::MirrorRendererFeature___c__DisplayClass21_0_1() {}
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature::*)()>(&::GlobalNamespace::MirrorRendererFeature::Create)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5f478a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::MirrorRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x864;
  constexpr static std::size_t addrs = 0x5f47d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature::*)(bool)>(&::GlobalNamespace::MirrorRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f488bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature.ReleaseHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature::*)()>(&::GlobalNamespace::MirrorRendererFeature::ReleaseHandles)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5f47c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), { "ReleaseHandles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature.UnionFrustumPlanes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Plane>, ::ArrayW<::UnityEngine::Plane>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4,
                                                                ::ArrayW<::UnityEngine::Plane>)>(&::GlobalNamespace::MirrorRendererFeature::UnionFrustumPlanes)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5f485fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(),
                                                { "UnionFrustumPlanes",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                    ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature.HandleBeginCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::MirrorRendererFeature::HandleBeginCameraRendering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f489b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(),
                                         { "HandleBeginCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature.HandleEndCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::MirrorRendererFeature::HandleEndCameraRendering)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f489bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(),
                                         { "HandleEndCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererFeature::*)()>(&::GlobalNamespace::MirrorRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f48a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__renderPassEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPassEvent;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__renderPassEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPassEvent;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderPassEvent = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>*& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__mirrorRendererRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererRef;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>* const&
GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__mirrorRendererRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererRef;
}
constexpr void
GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__mirrorRendererRef(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorRendererRef = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>*&
GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__bloomEffectOverrideRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomEffectOverrideRef;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* const&
GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__bloomEffectOverrideRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomEffectOverrideRef;
}
constexpr void
GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__bloomEffectOverrideRef(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomEffectOverrideRef = value;
}
constexpr ::GlobalNamespace::MirrorRendererFeature_IterationHandle*& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__iterationHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iterationHandle;
}
constexpr ::GlobalNamespace::MirrorRendererFeature_IterationHandle* const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__iterationHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iterationHandle;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__iterationHandle(::GlobalNamespace::MirrorRendererFeature_IterationHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iterationHandle = value;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__mirrorRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__mirrorRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorRenderer = value;
}
constexpr ::GlobalNamespace::PlanarMirrorInitializePass*& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__initializePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializePass;
}
constexpr ::GlobalNamespace::PlanarMirrorInitializePass* const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__initializePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializePass;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__initializePass(::GlobalNamespace::PlanarMirrorInitializePass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializePass = value;
}
constexpr ::GlobalNamespace::PlanarMirrorBloomPass*& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__bloomPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPass;
}
constexpr ::GlobalNamespace::PlanarMirrorBloomPass* const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__bloomPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPass;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__bloomPass(::GlobalNamespace::PlanarMirrorBloomPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPass = value;
}
constexpr ::GlobalNamespace::PlanarMirrorRenderPass*& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__renderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPass;
}
constexpr ::GlobalNamespace::PlanarMirrorRenderPass* const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__renderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPass;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__renderPass(::GlobalNamespace::PlanarMirrorRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderPass = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>&
GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__bloomEffectOverrideHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomEffectOverrideHandle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>> const&
GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__bloomEffectOverrideHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomEffectOverrideHandle;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__bloomEffectOverrideHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomEffectOverrideHandle = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::MirrorRendererSO>>&
GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__mirrorRendererHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererHandle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::MirrorRendererSO>> const&
GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__mirrorRendererHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererHandle;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__mirrorRendererHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::MirrorRendererSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorRendererHandle = value;
}
constexpr ::UnityEngine::Rendering::ScriptableRenderContext& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__pendingContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingContext;
}
constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__pendingContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingContext;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__pendingContext(::UnityEngine::Rendering::ScriptableRenderContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingContext = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__pendingContextCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingContextCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__pendingContextCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingContextCamera;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__pendingContextCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingContextCamera = value;
}
constexpr ::ArrayW<::UnityEngine::Plane>& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__cullingPlanes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cullingPlanes;
}
constexpr ::ArrayW<::UnityEngine::Plane> const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__cullingPlanes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cullingPlanes;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__cullingPlanes(::ArrayW<::UnityEngine::Plane> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cullingPlanes = value;
}
constexpr ::ArrayW<::UnityEngine::Plane>& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__eyePlanesLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyePlanesLeft;
}
constexpr ::ArrayW<::UnityEngine::Plane> const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__eyePlanesLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyePlanesLeft;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__eyePlanesLeft(::ArrayW<::UnityEngine::Plane> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eyePlanesLeft = value;
}
constexpr ::ArrayW<::UnityEngine::Plane>& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__eyePlanesRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyePlanesRight;
}
constexpr ::ArrayW<::UnityEngine::Plane> const& GlobalNamespace::MirrorRendererFeature::__cordl_internal_get__eyePlanesRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyePlanesRight;
}
constexpr void GlobalNamespace::MirrorRendererFeature::__cordl_internal_set__eyePlanesRight(::ArrayW<::UnityEngine::Plane> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eyePlanesRight = value;
}
inline void GlobalNamespace::MirrorRendererFeature::Create() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                    ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::MirrorRendererFeature::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MirrorRendererFeature::ReleaseHandles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), { "ReleaseHandles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::MirrorRendererFeature::LoadAssetAsync(::UnityEngine::AddressableAssets::AssetReferenceT_1<T>* reference,
                                                                   ::by_ref<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>> handle,
                                                                   ::System::Action_1<T>* onLoadFinished) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(),
                                       { "LoadAssetAsync",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::UnityEngine::AddressableAssets::AssetReferenceT_1<T>*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>>(), ::i2c::type_of<::System::Action_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reference, handle, onLoadFinished);
}
inline void GlobalNamespace::MirrorRendererFeature::UnionFrustumPlanes(::ArrayW<::UnityEngine::Plane> eyeLeft, ::ArrayW<::UnityEngine::Plane> eyeRight, ::UnityEngine::Matrix4x4 reflectedViewLeft,
                                                                       ::UnityEngine::Matrix4x4 reflectedViewRight, ::ArrayW<::UnityEngine::Plane> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(),
                                              { "UnionFrustumPlanes",
                                                {},
                                                { ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                  ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eyeLeft, eyeRight, reflectedViewLeft, reflectedViewRight, result);
}
inline void GlobalNamespace::MirrorRendererFeature::HandleBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(),
                                       { "HandleBeginCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void GlobalNamespace::MirrorRendererFeature::HandleEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(),
                                              { "HandleEndCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void GlobalNamespace::MirrorRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirrorRendererFeature* GlobalNamespace::MirrorRendererFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirrorRendererFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorRendererFeature::MirrorRendererFeature() {}
