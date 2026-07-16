#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/AssetBundleExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__AssetBundleExtensions_def.hpp"
#include "BGLib/UnityExtension/zzzz__AssetBundleExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::*)()>(
    &::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3325e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0._GetAwaiter_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::*)(::UnityEngine::AsyncOperation*)>(
    &::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::_GetAwaiter_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3325fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0*>(),
                                                                                           { "<GetAwaiter>b__0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>*&
BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::__cordl_internal_get_loadAssetBundleTaskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadAssetBundleTaskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>* const&
BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::__cordl_internal_get_loadAssetBundleTaskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadAssetBundleTaskSource;
}
constexpr void BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::__cordl_internal_set_loadAssetBundleTaskSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadAssetBundleTaskSource = value;
}
constexpr ::UnityEngine::AssetBundleCreateRequest*& BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::__cordl_internal_get_assetBundleCreateRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundleCreateRequest;
}
constexpr ::UnityEngine::AssetBundleCreateRequest* const& BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::__cordl_internal_get_assetBundleCreateRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundleCreateRequest;
}
constexpr void BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::__cordl_internal_set_assetBundleCreateRequest(::UnityEngine::AssetBundleCreateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assetBundleCreateRequest = value;
}
inline void BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::_GetAwaiter_b__0(::UnityEngine::AsyncOperation* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0*>(),
                                                                                         { "<GetAwaiter>b__0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0* BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0::AssetBundleExtensions___c__DisplayClass0_0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::*)()>(
    &::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3325fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0._GetAwaiter_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::*)(::UnityEngine::AsyncOperation*)>(
    &::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::_GetAwaiter_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x332603c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0*>(),
                                                                                           { "<GetAwaiter>b__0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>*&
BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::__cordl_internal_get_loadResourceTaskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadResourceTaskSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>* const&
BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::__cordl_internal_get_loadResourceTaskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadResourceTaskSource;
}
constexpr void BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::__cordl_internal_set_loadResourceTaskSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadResourceTaskSource = value;
}
constexpr ::UnityEngine::ResourceRequest*& BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::__cordl_internal_get_resourceRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceRequest;
}
constexpr ::UnityEngine::ResourceRequest* const& BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::__cordl_internal_get_resourceRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceRequest;
}
constexpr void BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::__cordl_internal_set_resourceRequest(::UnityEngine::ResourceRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourceRequest = value;
}
inline void BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::_GetAwaiter_b__0(::UnityEngine::AsyncOperation* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0*>(),
                                                                                         { "<GetAwaiter>b__0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0* BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0::AssetBundleExtensions___c__DisplayClass1_0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::AssetBundleExtensions.GetAwaiter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>> (*)(::UnityEngine::AssetBundleCreateRequest*)>(
    &::BGLib::UnityExtension::AssetBundleExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3325d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions*>(), { "GetAwaiter", {}, { ::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::AssetBundleExtensions.GetAwaiter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::ResourceRequest*)>(
    &::BGLib::UnityExtension::AssetBundleExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3325e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions*>(), { "GetAwaiter", {}, { ::i2c::type_of<::UnityEngine::ResourceRequest*>() } })));
    return ___internal_method;
  }
};
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>>
BGLib::UnityExtension::AssetBundleExtensions::GetAwaiter(::UnityEngine::AssetBundleCreateRequest* assetBundleCreateRequest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions*>(), { "GetAwaiter", {}, { ::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>>>(nullptr, ___internal_method, assetBundleCreateRequest);
}
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> BGLib::UnityExtension::AssetBundleExtensions::GetAwaiter(::UnityEngine::ResourceRequest* resourceRequest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::AssetBundleExtensions*>(), { "GetAwaiter", {}, { ::i2c::type_of<::UnityEngine::ResourceRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, resourceRequest);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::AssetBundleExtensions::AssetBundleExtensions() {}
