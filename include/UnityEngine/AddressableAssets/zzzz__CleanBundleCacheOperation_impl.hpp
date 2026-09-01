#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\CleanBundleCacheOperation.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__CleanBundleCacheOperation_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)(::UnityEngine::AddressableAssets::AddressablesImpl*, bool)>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x645ee20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (
    ::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>)>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x645eee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                             { "Start",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                                   ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.CompleteInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)(bool, bool, ::StringW)>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::CompleteInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x646173c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                             { "CompleteInternal", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)()>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x64617e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)()>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::Destroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6461a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.GetDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::GetDependencies)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6461a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)()>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::Execute)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6461b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.UnityEngine_ResourceManagement_IUpdateReceiver_Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)(float_t)>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::UnityEngine_ResourceManagement_IUpdateReceiver_Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6462a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                                                           { "UnityEngine.ResourceManagement.IUpdateReceiver.Update", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.RemoveCacheEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)()>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::RemoveCacheEntries)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x64618c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(), { "RemoveCacheEntries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.DetermineCacheDirsNotInUse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)(::System::Object*)>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::DetermineCacheDirsNotInUse)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6462ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                                                           { "DetermineCacheDirsNotInUse", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.DetermineCacheDirsNotInUse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)(::System::Collections::Generic::HashSet_1<::StringW>*)>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::DetermineCacheDirsNotInUse)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x64626a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                             { "DetermineCacheDirsNotInUse", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::CleanBundleCacheOperation.GetCacheDirsInUse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (
    ::UnityEngine::AddressableAssets::CleanBundleCacheOperation::*)(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(
    &::UnityEngine::AddressableAssets::CleanBundleCacheOperation::GetCacheDirsInUse)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0x6461d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                            { "GetCacheDirsInUse", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_Addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_Addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr void UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Addressables = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_DepOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_DepOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
constexpr void UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_set_m_DepOp(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepOp = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_CacheDirsForRemoval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheDirsForRemoval;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_CacheDirsForRemoval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheDirsForRemoval;
}
constexpr void UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_set_m_CacheDirsForRemoval(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CacheDirsForRemoval = value;
}
constexpr ::System::Threading::Thread*& UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_EnumerationThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumerationThread;
}
constexpr ::System::Threading::Thread* const& UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_EnumerationThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumerationThread;
}
constexpr void UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_set_m_EnumerationThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnumerationThread = value;
}
constexpr ::StringW& UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_BaseCachePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaseCachePath;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_BaseCachePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaseCachePath;
}
constexpr void UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_set_m_BaseCachePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BaseCachePath = value;
}
constexpr bool& UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_UseMultiThreading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseMultiThreading;
}
constexpr bool const& UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_get_m_UseMultiThreading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseMultiThreading;
}
constexpr void UnityEngine::AddressableAssets::CleanBundleCacheOperation::__cordl_internal_set_m_UseMultiThreading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseMultiThreading = value;
}
inline void UnityEngine::AddressableAssets::CleanBundleCacheOperation::_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa, bool forceSingleThreading) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa, forceSingleThreading);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::CleanBundleCacheOperation::Start(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
        depOp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                           { "Start",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                                                 ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, depOp);
}
inline void UnityEngine::AddressableAssets::CleanBundleCacheOperation::CompleteInternal(bool result, bool success, ::StringW errorMsg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                                                         { "CompleteInternal", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, success, errorMsg);
}
inline bool UnityEngine::AddressableAssets::CleanBundleCacheOperation::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::CleanBundleCacheOperation::Destroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::CleanBundleCacheOperation::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependencies);
}
inline void UnityEngine::AddressableAssets::CleanBundleCacheOperation::Execute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::CleanBundleCacheOperation::UnityEngine_ResourceManagement_IUpdateReceiver_Update(float_t unscaledDeltaTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                                                         { "UnityEngine.ResourceManagement.IUpdateReceiver.Update", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unscaledDeltaTime);
}
inline void UnityEngine::AddressableAssets::CleanBundleCacheOperation::RemoveCacheEntries() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(), { "RemoveCacheEntries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::CleanBundleCacheOperation::DetermineCacheDirsNotInUse(::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                                                         { "DetermineCacheDirsNotInUse", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::AddressableAssets::CleanBundleCacheOperation::DetermineCacheDirsNotInUse(::System::Collections::Generic::HashSet_1<::StringW>* cacheDirsInUse) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                                                           { "DetermineCacheDirsNotInUse", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cacheDirsInUse);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* UnityEngine::AddressableAssets::CleanBundleCacheOperation::GetCacheDirsInUse(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* catalogOps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(),
                          { "GetCacheDirsInUse", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*>(this, ___internal_method, catalogOps);
}
inline ::UnityEngine::AddressableAssets::CleanBundleCacheOperation* UnityEngine::AddressableAssets::CleanBundleCacheOperation::New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa,
                                                                                                                                        bool forceSingleThreading) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::CleanBundleCacheOperation*>(aa, forceSingleThreading));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr UnityEngine::AddressableAssets::CleanBundleCacheOperation::operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr ::UnityEngine::ResourceManagement::IUpdateReceiver* UnityEngine::AddressableAssets::CleanBundleCacheOperation::i___UnityEngine__ResourceManagement__IUpdateReceiver() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::CleanBundleCacheOperation::CleanBundleCacheOperation() {}
