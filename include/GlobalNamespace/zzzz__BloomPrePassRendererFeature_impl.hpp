#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassRendererFeature.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderPass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePass_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle::*)()>(
    &::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5862de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Guid& GlobalNamespace::BloomPrePassRendererFeature_IterationHandle::__cordl_internal_get_guid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guid;
}
constexpr ::System::Guid const& GlobalNamespace::BloomPrePassRendererFeature_IterationHandle::__cordl_internal_get_guid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guid;
}
constexpr void GlobalNamespace::BloomPrePassRendererFeature_IterationHandle::__cordl_internal_set_guid(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___guid = value;
}
inline void GlobalNamespace::BloomPrePassRendererFeature_IterationHandle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle* GlobalNamespace::BloomPrePassRendererFeature_IterationHandle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle::BloomPrePassRendererFeature_IterationHandle() {}
template <typename T> constexpr ::System::Action_1<T>*& GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>::__cordl_internal_get_onLoadFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onLoadFinished;
}
template <typename T> constexpr ::System::Action_1<T>* const& GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>::__cordl_internal_get_onLoadFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onLoadFinished;
}
template <typename T> constexpr void GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>::__cordl_internal_set_onLoadFinished(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onLoadFinished = value;
}
template <typename T> inline void GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>::_LoadAssetAsync_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>*>(),
                                                           { "<LoadAssetAsync>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
template <typename T> inline ::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>* GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass10_0_1<T>::BloomPrePassRendererFeature___c__DisplayClass10_0_1() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5862bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0._Create_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::*)(::GlobalNamespace::BloomPrePassEffectSO*)>(
    &::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::_Create_b__0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5862dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0*>(),
                                                                                           { "<Create>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BloomPrePassEffectSO*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Guid& GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::__cordl_internal_get_currentGuid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentGuid;
}
constexpr ::System::Guid const& GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::__cordl_internal_get_currentGuid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentGuid;
}
constexpr void GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::__cordl_internal_set_currentGuid(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentGuid = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererFeature>& GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererFeature> const& GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BloomPrePassRendererFeature> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::_Create_b__0(::GlobalNamespace::BloomPrePassEffectSO* effectOverride) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0*>(),
                                                                                         { "<Create>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BloomPrePassEffectSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effectOverride);
}
inline ::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0* GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererFeature___c__DisplayClass6_0::BloomPrePassRendererFeature___c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature::*)()>(&::GlobalNamespace::BloomPrePassRendererFeature::Create)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5862a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::BloomPrePassRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5862d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature.ResolveBloomPrePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BloomPrePass> (*)(::UnityEngine::Camera*)>(&::GlobalNamespace::BloomPrePassRendererFeature::ResolveBloomPrePass)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5862d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { "ResolveBloomPrePass", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature::*)(bool)>(&::GlobalNamespace::BloomPrePassRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5862d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature.ReleaseHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature::*)()>(&::GlobalNamespace::BloomPrePassRendererFeature::ReleaseHandles)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5862bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { "ReleaseHandles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererFeature::*)()>(&::GlobalNamespace::BloomPrePassRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5862d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__renderPassEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPassEvent;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__renderPassEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPassEvent;
}
constexpr void GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_set__renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderPassEvent = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>*&
GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__effectOverrideRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectOverrideRef;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* const&
GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__effectOverrideRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectOverrideRef;
}
constexpr void
GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_set__effectOverrideRef(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectOverrideRef = value;
}
constexpr ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle*& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__iterationHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iterationHandle;
}
constexpr ::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle* const& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__iterationHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iterationHandle;
}
constexpr void GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_set__iterationHandle(::GlobalNamespace::BloomPrePassRendererFeature_IterationHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iterationHandle = value;
}
constexpr ::GlobalNamespace::BloomPrePassRenderPass*& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__pass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pass;
}
constexpr ::GlobalNamespace::BloomPrePassRenderPass* const& GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__pass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pass;
}
constexpr void GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_set__pass(::GlobalNamespace::BloomPrePassRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pass = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>>&
GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__effectOverrideLoadHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectOverrideLoadHandle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>> const&
GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_get__effectOverrideLoadHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectOverrideLoadHandle;
}
constexpr void GlobalNamespace::BloomPrePassRendererFeature::__cordl_internal_set__effectOverrideLoadHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BloomPrePassEffectSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectOverrideLoadHandle = value;
}
inline void GlobalNamespace::BloomPrePassRendererFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                          ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline ::UnityW<::GlobalNamespace::BloomPrePass> GlobalNamespace::BloomPrePassRendererFeature::ResolveBloomPrePass(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { "ResolveBloomPrePass", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BloomPrePass>>(nullptr, ___internal_method, camera);
}
inline void GlobalNamespace::BloomPrePassRendererFeature::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template <typename T>
inline void GlobalNamespace::BloomPrePassRendererFeature::LoadAssetAsync(::UnityEngine::AddressableAssets::AssetReferenceT_1<T>* reference,
                                                                         ::by_ref<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>> handle,
                                                                         ::System::Action_1<T>* onLoadFinished) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(),
                                       { "LoadAssetAsync",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::UnityEngine::AddressableAssets::AssetReferenceT_1<T>*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>>(), ::i2c::type_of<::System::Action_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reference, handle, onLoadFinished);
}
inline void GlobalNamespace::BloomPrePassRendererFeature::ReleaseHandles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { "ReleaseHandles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRendererFeature* GlobalNamespace::BloomPrePassRendererFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRendererFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererFeature::BloomPrePassRendererFeature() {}
