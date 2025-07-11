#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/SceneProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider2_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneProvider_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*)>(&::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x479fc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.GetDownloadStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(::System::Collections::Generic::HashSet_1<::System::Object*>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x47a0020;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x47a00fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters, bool, int32_t,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x479fc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x47a016c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.GetDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::GetDependencies)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x47a04a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.get_DebugName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::get_DebugName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x47a05e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Execute)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x47a0688;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.InternalLoadScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, bool, ::UnityEngine::SceneManagement::LoadSceneParameters, bool, int32_t)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InternalLoadScene)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x47a0c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), "InternalLoadScene",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.InternalLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::AsyncOperation* (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(::StringW, bool, ::UnityEngine::SceneManagement::LoadSceneParameters)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InternalLoad)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x47a0d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), "InternalLoad",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Destroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x47a0dac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.get_Progress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::get_Progress)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x47a0e3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.UnityEngine_ResourceManagement_IUpdateReceiver_Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(float_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::UnityEngine_ResourceManagement_IUpdateReceiver_Update)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x47a0efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(),
                                                 "UnityEngine.ResourceManagement.IUpdateReceiver.Update", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_ActivateOnLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivateOnLoad;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_ActivateOnLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivateOnLoad;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_set_m_ActivateOnLoad(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActivateOnLoad = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_Inst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inst;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance const& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_Inst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inst;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_set_m_Inst(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Inst = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_Location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Location;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_Location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Location;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_set_m_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Location)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_LoadSceneParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadSceneParameters;
}
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters const& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_LoadSceneParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadSceneParameters;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_set_m_LoadSceneParameters(::UnityEngine::SceneManagement::LoadSceneParameters value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoadSceneParameters = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_Priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Priority;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_Priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Priority;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_set_m_Priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Priority = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_DepOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_DepOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_set_m_DepOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepOp = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceManager*& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_ResourceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceManager;
}
constexpr ::UnityEngine::ResourceManagement::ResourceManager* const& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_ResourceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceManager;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResourceManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::_ctor(::UnityEngine::ResourceManagement::ResourceManager* rm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rm);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method, visited);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Init(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, bool activateOnLoad, int32_t priority,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                              ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location, loadSceneMode, activateOnLoad, priority, depOp);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Init(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad, int32_t priority,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                              ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location, loadSceneParameters, activateOnLoad, priority, depOp);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deps);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::get_DebugName() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InternalLoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, bool loadingFromBundle,
                                                                                             ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad,
                                                                                             int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), "InternalLoadScene",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, false>(this, ___internal_method, location, loadingFromBundle, loadSceneParameters,
                                                                                                                         activateOnLoad, priority);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InternalLoad(::StringW path, bool loadingFromBundle,
                                                                                                                              ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), "InternalLoad",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, path, loadingFromBundle, loadSceneParameters);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Destroy() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::get_Progress() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::UnityEngine_ResourceManagement_IUpdateReceiver_Update(float_t unscaledDeltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>::get(),
                                               "UnityEngine.ResourceManagement.IUpdateReceiver.Update", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unscaledDeltaTime);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::New_ctor(::UnityEngine::ResourceManagement::ResourceManager* rm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(rm));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr ::UnityEngine::ResourceManagement::IUpdateReceiver*
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::i___UnityEngine__ResourceManagement__IUpdateReceiver() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::SceneProvider_SceneOp() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,
    ::UnityEngine::SceneManagement::UnloadSceneOptions)>(&::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::Init)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x479ff84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), "Init",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::Execute)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x47a1024;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x47a1288;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp.UnloadSceneCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)(
    ::UnityEngine::AsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::UnloadSceneCompleted)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x47a11c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), "UnloadSceneCompleted",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp.UnloadSceneCompletedNoRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)(
    ::UnityEngine::AsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::UnloadSceneCompletedNoRelease)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x47a1150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), "UnloadSceneCompletedNoRelease",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp.get_Progress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::get_Progress)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x47a133c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x479ff3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::__cordl_internal_get_m_Instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Instance;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance const&
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::__cordl_internal_get_m_Instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Instance;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::__cordl_internal_set_m_Instance(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Instance = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>&
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::__cordl_internal_get_m_sceneLoadHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_sceneLoadHandle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const&
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::__cordl_internal_get_m_sceneLoadHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_sceneLoadHandle;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::__cordl_internal_set_m_sceneLoadHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_sceneLoadHandle = value;
}
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::__cordl_internal_get_m_UnloadOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnloadOptions;
}
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions const& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::__cordl_internal_get_m_UnloadOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnloadOptions;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::__cordl_internal_set_m_UnloadOptions(::UnityEngine::SceneManagement::UnloadSceneOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnloadOptions = value;
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::Init(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle,
    ::UnityEngine::SceneManagement::UnloadSceneOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), "Init",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneLoadHandle, options);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::UnloadSceneCompleted(::UnityEngine::AsyncOperation* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), "UnloadSceneCompleted",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::UnloadSceneCompletedNoRelease(::UnityEngine::AsyncOperation* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), "UnloadSceneCompletedNoRelease",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::get_Progress() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp* UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::SceneProvider_UnloadSceneOp() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ProvideScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x479f834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(), "ProvideScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ProvideScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters, bool, int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x479f8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(), "ProvideScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ReleaseScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ReleaseScene)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x479fd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(), "ReleaseScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,
    ::UnityEngine::SceneManagement::UnloadSceneOptions)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x479fe14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(),
        "UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47a0018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(), "ProvideScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      this, ___internal_method, resourceManager, location, loadSceneMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(), "ProvideScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      this, ___internal_method, resourceManager, location, loadSceneParameters, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ReleaseScene(
    ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(), "ReleaseScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      this, ___internal_method, resourceManager, sceneLoadHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene(
    ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle,
    ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(),
      "UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(
      this, ___internal_method, resourceManager, sceneLoadHandle, unloadOptions);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider* UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2"
constexpr UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::operator ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2"
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::i___UnityEngine__ResourceManagement__ResourceProviders__ISceneProvider2() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
constexpr UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::operator ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::i___UnityEngine__ResourceManagement__ResourceProviders__ISceneProvider() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneProvider() {}
