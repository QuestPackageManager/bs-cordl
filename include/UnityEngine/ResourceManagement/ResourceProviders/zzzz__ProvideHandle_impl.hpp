#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IGenericProviderOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x691a580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_IsValid)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x69142e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle.get_InternalOp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* (
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_InternalOp)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x691a640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_InternalOp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle.get_ResourceManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceManager* (::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_ResourceManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691a744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_ResourceManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_Type)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x69180b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle.get_Location
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_Location)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6913c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_Location", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle.get_DependencyCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_DependencyCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x691a74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_DependencyCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle.GetDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)(::System::Collections::Generic::IList_1<::System::Object*>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::GetDependencies)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6918efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                             { "GetDependencies", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle.SetProgressCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)(::System::Func_1<float_t>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetProgressCallback)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6915020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                           { "SetProgressCallback", {}, { ::i2c::type_of<::System::Func_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle.SetDownloadProgressCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)(
    ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*)>(&::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetDownloadProgressCallbacks)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x69150e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                { "SetDownloadProgressCallbacks", {}, { ::i2c::type_of<::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle.SetWaitForCompletionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::*)(::System::Func_1<bool>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetWaitForCompletionCallback)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x69151a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                           { "SetWaitForCompletionCallback", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::_ctor(::UnityEngine::ResourceManagement::ResourceManager* rm,
                                                                                     ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rm, op);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_InternalOp() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_InternalOp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_ResourceManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_ResourceManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceManager*>(*this, ___internal_method);
}
inline ::System::Type* UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_Location() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_Location", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(*this, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::get_DependencyCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(), { "get_DependencyCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TDepObject> inline TDepObject UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::GetDependency(int32_t index) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                              { "GetDependency", { ::i2c::class_of<TDepObject>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDepObject>() })));
  return ::cordl_internals::RunMethodRethrow<TDepObject>(*this, ___internal_method, index);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::GetDependencies(::System::Collections::Generic::IList_1<::System::Object*>* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                           { "GetDependencies", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetProgressCallback(::System::Func_1<float_t>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                         { "SetProgressCallback", {}, { ::i2c::type_of<::System::Func_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
inline void
UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetDownloadProgressCallbacks(::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                              { "SetDownloadProgressCallbacks", {}, { ::i2c::type_of<::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::SetWaitForCompletionCallback(::System::Func_1<bool>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                         { "SetWaitForCompletionCallback", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
template <typename T> inline void UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::Complete(T result, bool status, ::System::Exception* exception) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                           { "Complete", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Exception*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result, status, exception);
}
// Ctor Parameters [CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InternalOp", ty:
// "::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ResourceManager", ty:
// "::UnityEngine::ResourceManagement::ResourceManager*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::ProvideHandle(int32_t m_Version,
                                                                                             ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation* m_InternalOp,
                                                                                             ::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager) noexcept {
  this->m_Version = m_Version;
  this->m_InternalOp = m_InternalOp;
  this->m_ResourceManager = m_ResourceManager;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle::ProvideHandle() {}
