#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BundledAssetProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BundledAssetProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BundledAssetProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.IsDownloadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::System::Object*>*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::IsDownloadOnly)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x6918bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                             { "IsDownloadOnly", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::Start)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x6918828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                             { "Start", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.BeginAssetLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::BeginAssetLoad)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x6918fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(), { "BeginAssetLoad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.WaitForCompletionHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::WaitForCompletionHandler)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6919c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(), { "WaitForCompletionHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.ActionComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::ActionComplete)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x691939c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                           { "ActionComplete", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.GetArrayResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)(::ArrayW<::UnityEngine::Object*>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::GetArrayResult)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6919d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                           { "GetArrayResult", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.GetListResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)(::ArrayW<::UnityEngine::Object*>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::GetListResult)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6919d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                           { "GetListResult", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.GetAssetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)(::UnityEngine::Object*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::GetAssetResult)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6919d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                           { "GetAssetResult", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.GetAssetSubObjectResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)(::ArrayW<::UnityEngine::Object*>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::GetAssetSubObjectResult)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6919e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                           { "GetAssetSubObjectResult", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.CompleteOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::CompleteOperation)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6919eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(), { "CompleteOperation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp.ProgressCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::ProgressCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x691a074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(), { "ProgressCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6918824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp._Start_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::_Start_b__8_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691a08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                           { "<Start>b__8_0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AssetBundle>& UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_m_AssetBundle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetBundle;
}
constexpr ::UnityW<::UnityEngine::AssetBundle> const& UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_m_AssetBundle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetBundle;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_set_m_AssetBundle(::UnityW<::UnityEngine::AssetBundle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetBundle = value;
}
constexpr ::UnityEngine::AssetBundleRequest*& UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_m_PreloadRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreloadRequest;
}
constexpr ::UnityEngine::AssetBundleRequest* const& UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_m_PreloadRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreloadRequest;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_set_m_PreloadRequest(::UnityEngine::AssetBundleRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreloadRequest = value;
}
constexpr ::UnityEngine::AssetBundleRequest*& UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_m_RequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr ::UnityEngine::AssetBundleRequest* const& UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_m_RequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_set_m_RequestOperation(::UnityEngine::AssetBundleRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestOperation = value;
}
constexpr ::System::Object*& UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_m_Result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Result;
}
constexpr ::System::Object* const& UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_m_Result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Result;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_set_m_Result(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Result = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle&
UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_m_ProvideHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProvideHandle;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const&
UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_m_ProvideHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProvideHandle;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProvideHandle = value;
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_subObjectName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subObjectName;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_get_subObjectName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subObjectName;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::__cordl_internal_set_subObjectName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subObjectName = value;
}
template <typename T>
inline T UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::LoadBundleFromDependecies(::System::Collections::Generic::IList_1<::System::Object*>* results) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                              { "LoadBundleFromDependecies", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, results);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::IsDownloadOnly(::System::Collections::Generic::IList_1<::System::Object*>* results) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                         { "IsDownloadOnly", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, results);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                         { "Start", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provideHandle);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::BeginAssetLoad() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(), { "BeginAssetLoad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::WaitForCompletionHandler() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(), { "WaitForCompletionHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::ActionComplete(::UnityEngine::AsyncOperation* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                         { "ActionComplete", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::GetArrayResult(::ArrayW<::UnityEngine::Object*> allAssets) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                         { "GetArrayResult", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allAssets);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::GetListResult(::ArrayW<::UnityEngine::Object*> allAssets) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                         { "GetListResult", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allAssets);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::GetAssetResult(::UnityEngine::Object* asset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                         { "GetAssetResult", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::GetAssetSubObjectResult(::ArrayW<::UnityEngine::Object*> allAssets) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                         { "GetAssetSubObjectResult", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allAssets);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::CompleteOperation() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(), { "CompleteOperation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::ProgressCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(), { "ProgressCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::_Start_b__8_0(::UnityEngine::AsyncOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>(),
                                                                                         { "<Start>b__8_0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp* UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider_InternalOp::BundledAssetProvider_InternalOp() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider.Provide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::Provide)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69187b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6918bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provideHandle);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider* UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::BundledAssetProvider() {}
