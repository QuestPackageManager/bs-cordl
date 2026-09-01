#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\AsyncOperations\IGenericProviderOperation.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IGenericProviderOperation_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>,
    bool)>(&::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation.get_ProvideHandleVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::get_ProvideHandleVersion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation.get_Location
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (
    ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::*)()>(&::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::get_Location)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation.get_DependencyCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::get_DependencyCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation.GetDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::*)(
    ::System::Collections::Generic::IList_1<::System::Object*>*)>(&::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation.SetProgressCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::*)(::System::Func_1<float_t>*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::SetProgressCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation.get_RequestedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::get_RequestedType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation.SetDownloadProgressCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::*)(::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>*)>(
        &::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::SetDownloadProgressCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation.SetWaitForCompletionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::*)(::System::Func_1<bool>*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::SetWaitForCompletionCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 11 }));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::Init(
    ::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* provider,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rm, provider, location, depOp);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::Init(
    ::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* provider,
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp,
    bool releaseDependenciesOnFailure) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rm, provider, location, depOp, releaseDependenciesOnFailure);
}
inline int32_t UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::get_ProvideHandleVersion() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::get_Location() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(this, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::get_DependencyCount() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::GetDependencies(::System::Collections::Generic::IList_1<::System::Object*>* dstList) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dstList);
}
template <typename TDepObject> inline TDepObject UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::GetDependency(int32_t index) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 6 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDepObject>() }));
  return ::cordl_internals::RunMethodRethrow<TDepObject>(this, ___internal_method, index);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::SetProgressCallback(::System::Func_1<float_t>* callback) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template <typename T> inline void UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::ProviderCompleted(T result, bool status, ::System::Exception* e) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 8 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, status, e);
}
inline ::System::Type* UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::get_RequestedType() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::SetDownloadProgressCallback(
    ::System::Func_1<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation::SetWaitForCompletionCallback(::System::Func_1<bool>* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
