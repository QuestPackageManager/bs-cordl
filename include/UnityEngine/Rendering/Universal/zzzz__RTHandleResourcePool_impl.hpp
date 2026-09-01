#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\RTHandleResourcePool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RTHandleResourcePool_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureSizeMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.get_staleResourceCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)()>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::get_staleResourceCapacity)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68b8318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { "get_staleResourceCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.set_staleResourceCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::set_staleResourceCapacity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68b8374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { "set_staleResourceCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.AddResourceToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, ::UnityEngine::Rendering::RTHandle*, int32_t)>(&::UnityEngine::Rendering::Universal::RTHandleResourcePool::AddResourceToPool)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x68b88d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(),
                                                                                           { "AddResourceToPool",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.TryGetResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>,
                                                                                                                           ::by_ref<::UnityEngine::Rendering::RTHandle*>, bool)>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::TryGetResource)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x68b8b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(),
                                                                                           { "TryGetResource",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)()>(&::UnityEngine::Rendering::Universal::RTHandleResourcePool::Cleanup)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x68b8414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.ShouldReleaseResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::RTHandleResourcePool::ShouldReleaseResource)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68b8d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(),
                                                                                           { "ShouldReleaseResource", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.PurgeUnusedResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::PurgeUnusedResources)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x68b8d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { "PurgeUnusedResources", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.LogDebugInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)()>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::LogDebugInfo)> {
  constexpr static std::size_t size = 0x89c;
  constexpr static std::size_t addrs = 0x68b93a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { "LogDebugInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.GetHashCodeWithNameHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::GetHashCodeWithNameHash)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68b8ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(),
                                                             { "GetHashCodeWithNameHash", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.CreateTextureDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureDesc (*)(
    ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode, int32_t, float_t, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::StringW)>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::CreateTextureDesc)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x68b9c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(),
                            { "CreateTextureDesc",
                              {},
                              { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)()>(&::UnityEngine::Rendering::Universal::RTHandleResourcePool::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68b9d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Rendering::RTHandle*, int32_t>>*>*&
UnityEngine::Rendering::Universal::RTHandleResourcePool::__cordl_internal_get_m_ResourcePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourcePool;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Rendering::RTHandle*, int32_t>>*>* const&
UnityEngine::Rendering::Universal::RTHandleResourcePool::__cordl_internal_get_m_ResourcePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourcePool;
}
constexpr void UnityEngine::Rendering::Universal::RTHandleResourcePool::__cordl_internal_set_m_ResourcePool(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Rendering::RTHandle*, int32_t>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResourcePool = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::Universal::RTHandleResourcePool::__cordl_internal_get_m_RemoveList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Rendering::Universal::RTHandleResourcePool::__cordl_internal_get_m_RemoveList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveList;
}
constexpr void UnityEngine::Rendering::Universal::RTHandleResourcePool::__cordl_internal_set_m_RemoveList(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RemoveList = value;
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::setStaticF_s_CurrentStaleResourceCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CurrentStaleResourceCount", ::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RTHandleResourcePool::getStaticF_s_CurrentStaleResourceCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_CurrentStaleResourceCount", ::UnityEngine::Rendering::Universal::RTHandleResourcePool*>();
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::setStaticF_s_StaleResourceLifetime(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_StaleResourceLifetime", ::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RTHandleResourcePool::getStaticF_s_StaleResourceLifetime() {
  return ::cordl_internals::getStaticField<int32_t, "s_StaleResourceLifetime", ::UnityEngine::Rendering::Universal::RTHandleResourcePool*>();
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::setStaticF_s_StaleResourceMaxCapacity(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_StaleResourceMaxCapacity", ::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RTHandleResourcePool::getStaticF_s_StaleResourceMaxCapacity() {
  return ::cordl_internals::getStaticField<int32_t, "s_StaleResourceMaxCapacity", ::UnityEngine::Rendering::Universal::RTHandleResourcePool*>();
}
inline int32_t UnityEngine::Rendering::Universal::RTHandleResourcePool::get_staleResourceCapacity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { "get_staleResourceCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::set_staleResourceCapacity(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { "set_staleResourceCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::RTHandleResourcePool::AddResourceToPool(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> texDesc,
                                                                                       ::UnityEngine::Rendering::RTHandle* resource, int32_t currentFrameIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(),
                                                                                         { "AddResourceToPool",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texDesc, resource, currentFrameIndex);
}
inline bool UnityEngine::Rendering::Universal::RTHandleResourcePool::TryGetResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> texDesc,
                                                                                    ::by_ref<::UnityEngine::Rendering::RTHandle*> resource, bool usepool) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(),
                                                                                         { "TryGetResource",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texDesc, resource, usepool);
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::RTHandleResourcePool::ShouldReleaseResource(int32_t lastUsedFrameIndex, int32_t currentFrameIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(),
                                                                                         { "ShouldReleaseResource", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lastUsedFrameIndex, currentFrameIndex);
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::PurgeUnusedResources(int32_t currentFrameIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { "PurgeUnusedResources", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentFrameIndex);
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::LogDebugInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { "LogDebugInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::RTHandleResourcePool::GetHashCodeWithNameHash(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> texDesc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(),
                                                           { "GetHashCodeWithNameHash", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, texDesc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc
UnityEngine::Rendering::Universal::RTHandleResourcePool::CreateTextureDesc(::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode textureSizeMode,
                                                                           int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                                           ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(),
                          { "CreateTextureDesc",
                            {},
                            { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(nullptr, ___internal_method, desc, textureSizeMode, anisoLevel, mipMapBias, filterMode, wrapMode,
                                                                                                       name);
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RTHandleResourcePool* UnityEngine::Rendering::Universal::RTHandleResourcePool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RTHandleResourcePool::RTHandleResourcePool() {}
