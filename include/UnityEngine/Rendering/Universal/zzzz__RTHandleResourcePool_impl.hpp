#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RTHandleResourcePool.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)()>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::get_staleResourceCapacity)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66fff40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "get_staleResourceCapacity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.set_staleResourceCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::set_staleResourceCapacity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x66fff9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "set_staleResourceCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.AddResourceToPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, ::UnityEngine::Rendering::RTHandle*, int32_t)>(&::UnityEngine::Rendering::Universal::RTHandleResourcePool::AddResourceToPool)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x67004f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "AddResourceToPool", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.TryGetResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, ::ByRef<::UnityEngine::Rendering::RTHandle*>, bool)>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::TryGetResource)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6700764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "TryGetResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)()>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::Cleanup)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x670003c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.ShouldReleaseResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::RTHandleResourcePool::ShouldReleaseResource)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x670094c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "ShouldReleaseResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.PurgeUnusedResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::PurgeUnusedResources)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x67009c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "PurgeUnusedResources",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.LogDebugInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)()>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::LogDebugInfo)> {
  constexpr static std::size_t size = 0x89c;
  constexpr static std::size_t addrs = 0x6700fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "LogDebugInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.GetHashCodeWithNameHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Rendering::Universal::RTHandleResourcePool::GetHashCodeWithNameHash)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x670070c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "GetHashCodeWithNameHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool.CreateTextureDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureDesc (*)(
    ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode, int32_t, float_t, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::StringW)>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::CreateTextureDesc)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6701868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "CreateTextureDesc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureWrapMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RTHandleResourcePool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::RTHandleResourcePool::*)()>(
    &::UnityEngine::Rendering::Universal::RTHandleResourcePool::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67019a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResourcePool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RemoveList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::setStaticF_s_CurrentStaleResourceCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CurrentStaleResourceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RTHandleResourcePool::getStaticF_s_CurrentStaleResourceCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_CurrentStaleResourceCount",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get>();
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::setStaticF_s_StaleResourceLifetime(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_StaleResourceLifetime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RTHandleResourcePool::getStaticF_s_StaleResourceLifetime() {
  return ::cordl_internals::getStaticField<int32_t, "s_StaleResourceLifetime",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get>();
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::setStaticF_s_StaleResourceMaxCapacity(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_StaleResourceMaxCapacity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::RTHandleResourcePool::getStaticF_s_StaleResourceMaxCapacity() {
  return ::cordl_internals::getStaticField<int32_t, "s_StaleResourceMaxCapacity",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get>();
}
inline int32_t UnityEngine::Rendering::Universal::RTHandleResourcePool::get_staleResourceCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(),
                                                                             "get_staleResourceCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::set_staleResourceCapacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "set_staleResourceCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::RTHandleResourcePool::AddResourceToPool(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> texDesc,
                                                                                       ::UnityEngine::Rendering::RTHandle* resource, int32_t currentFrameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "AddResourceToPool", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, texDesc, resource, currentFrameIndex);
}
inline bool UnityEngine::Rendering::Universal::RTHandleResourcePool::TryGetResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> texDesc,
                                                                                    ::ByRef<::UnityEngine::Rendering::RTHandle*> resource, bool usepool) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "TryGetResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, texDesc, resource, usepool);
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(),
                                                                             "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::RTHandleResourcePool::ShouldReleaseResource(int32_t lastUsedFrameIndex, int32_t currentFrameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "ShouldReleaseResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lastUsedFrameIndex, currentFrameIndex);
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::PurgeUnusedResources(int32_t currentFrameIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "PurgeUnusedResources",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentFrameIndex);
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::LogDebugInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(),
                                                                             "LogDebugInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::RTHandleResourcePool::GetHashCodeWithNameHash(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> texDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "GetHashCodeWithNameHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, texDesc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc
UnityEngine::Rendering::Universal::RTHandleResourcePool::CreateTextureDesc(::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode textureSizeMode,
                                                                           int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                                           ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(), "CreateTextureDesc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureWrapMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureDesc, false>(nullptr, ___internal_method, desc, textureSizeMode, anisoLevel, mipMapBias, filterMode,
                                                                                                              wrapMode, name);
}
inline void UnityEngine::Rendering::Universal::RTHandleResourcePool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RTHandleResourcePool* UnityEngine::Rendering::Universal::RTHandleResourcePool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RTHandleResourcePool::RTHandleResourcePool() {}
