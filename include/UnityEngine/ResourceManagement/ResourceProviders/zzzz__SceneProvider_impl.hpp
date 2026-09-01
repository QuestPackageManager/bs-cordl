#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\ResourceProviders\SceneProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneReleaseMode_impl.hpp"
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
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider2_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneReleaseMode_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6920bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.GetDownloadStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(::System::Collections::Generic::HashSet_1<::System::Object*>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6921054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Init)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6921134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                 ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters,
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode, bool, int32_t,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Init)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6920c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                            { "Init",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x6921174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.GetDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::GetDependencies)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x69214d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.get_DebugName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::get_DebugName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x69215e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Execute)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x69216c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.InternalLoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(
        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, bool, ::UnityEngine::SceneManagement::LoadSceneParameters, bool, int32_t)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InternalLoadScene)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6921c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                             { "InternalLoadScene",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.InternalLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::AsyncOperation* (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(::StringW, bool, ::UnityEngine::SceneManagement::LoadSceneParameters)>(
        &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InternalLoad)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6921d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                         { "InternalLoad", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Destroy)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x69220b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.get_Progress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::get_Progress)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x692229c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp.UnityEngine_ResourceManagement_IUpdateReceiver_Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::*)(float_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::UnityEngine_ResourceManagement_IUpdateReceiver_Update)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6922360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                                                           { "UnityEngine.ResourceManagement.IUpdateReceiver.Update", {}, { ::i2c::type_of<float_t>() } })));
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
  this->___m_Location = value;
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
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_ReleaseMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseMode;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode const&
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_ReleaseMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseMode;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_set_m_ReleaseMode(::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseMode = value;
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
  this->___m_ResourceManager = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*& UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_provider;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2* const&
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_get_m_provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_provider;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::__cordl_internal_set_m_provider(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_provider = value;
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::_ctor(::UnityEngine::ResourceManagement::ResourceManager* rm,
                                                                                             ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rm, provider);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(this, ___internal_method, visited);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Init(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, bool activateOnLoad, int32_t priority,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                               ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                                   ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, loadSceneMode, activateOnLoad, priority, depOp);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Init(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                          { "Init",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, loadSceneParameters, releaseMode, activateOnLoad, priority, depOp);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deps);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::get_DebugName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InternalLoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, bool loadingFromBundle,
                                                                                             ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad,
                                                                                             int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                           { "InternalLoadScene",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(this, ___internal_method, location, loadingFromBundle, loadSceneParameters,
                                                                                                                  activateOnLoad, priority);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::InternalLoad(::StringW path, bool loadingFromBundle,
                                                                                                                              ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                              { "InternalLoad", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, path, loadingFromBundle, loadSceneParameters);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::Destroy() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::get_Progress() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::UnityEngine_ResourceManagement_IUpdateReceiver_Update(float_t unscaledDeltaTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(),
                                                                                         { "UnityEngine.ResourceManagement.IUpdateReceiver.Update", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unscaledDeltaTime);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp::New_ctor(::UnityEngine::ResourceManagement::ResourceManager* rm,
                                                                                    ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2* provider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_SceneOp*>(rm, provider));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,
    ::UnityEngine::SceneManagement::UnloadSceneOptions)>(&::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::Init)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6920fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(),
                            { "Init",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                                ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::Execute)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6922534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(),
                                                            { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x69227d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(),
                                                            { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp.UnloadSceneCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::UnloadSceneCompleted)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6922670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(),
                                                                                           { "UnloadSceneCompleted", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp.get_Progress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::get_Progress)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6922b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(),
                                                            { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6920f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(), { ".ctor", {}, {} })));
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
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(),
                          { "Init",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                              ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneLoadHandle, options);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::Execute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::UnloadSceneCompleted(::UnityEngine::AsyncOperation* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(),
                                                                                         { "UnloadSceneCompleted", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::get_Progress() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp* UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider_UnloadSceneOp::SceneProvider_UnloadSceneOp() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ProvideScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6920800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(),
                            { "ProvideScene",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ProvideScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters, bool, int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6920840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(),
                            { "ProvideScene",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ProvideScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters,
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode, bool, int32_t)>(&::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x692087c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(),
                            { "ProvideScene",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ReleaseScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ReleaseScene)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6920d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(),
                         { "ReleaseScene",
                           {},
                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                             ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>,
    ::UnityEngine::SceneManagement::UnloadSceneOptions)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6920e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(),
                            { "UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                                ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6921050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(),
                          { "ProvideScene",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                              ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, resourceManager, location, loadSceneMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(),
                          { "ProvideScene",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                              ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, resourceManager, location, loadSceneParameters, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                                                ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
                                                                                ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad,
                                                                                int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(),
                          { "ProvideScene",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                              ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, resourceManager, location, loadSceneParameters, releaseMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ReleaseScene(
    ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(),
                          { "ReleaseScene",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, resourceManager, sceneLoadHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene(
    ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle,
    ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(),
                          { "UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(),
                              ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, resourceManager, sceneLoadHandle, unloadOptions);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider* UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*>());
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
