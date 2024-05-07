#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/AssetBundleExtensions.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_impl.hpp"
#include "BGLib/UnityExtension/zzzz__AssetBundleExtensions_def.hpp"
#include "BGLib/UnityExtension/zzzz__AssetBundleExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0::*)()>(
    &::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1086840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1086e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_webRequest_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0::__AssetBundleExtensions___ExistsAsync_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::StringW assetBundlePath, ::UnityEngine::Networking::UnityWebRequest* _webRequest_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->assetBundlePath = assetBundlePath;
  this->_webRequest_5__2 = _webRequest_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::__AssetBundleExtensions___ExistsAsync_d__0::__AssetBundleExtensions___ExistsAsync_d__0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::*)()>(
    &::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10866f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0._GetAwaiter_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::*)(::UnityEngine::AsyncOperation*)>(
    &::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::_GetAwaiter_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1086e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0*>::get(), "<GetAwaiter>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>*&
BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::__cordl_internal_get_loadAssetBundleTaskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadAssetBundleTaskSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>*> const&
BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::__cordl_internal_get_loadAssetBundleTaskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadAssetBundleTaskSource;
}
constexpr void BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::__cordl_internal_set_loadAssetBundleTaskSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loadAssetBundleTaskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AssetBundleCreateRequest*& BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::__cordl_internal_get_assetBundleCreateRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundleCreateRequest;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleCreateRequest*> const&
BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::__cordl_internal_get_assetBundleCreateRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundleCreateRequest;
}
constexpr void BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::__cordl_internal_set_assetBundleCreateRequest(::UnityEngine::AssetBundleCreateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assetBundleCreateRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0* BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0*>());
}
inline void BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::_GetAwaiter_b__0(::UnityEngine::AsyncOperation* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0*>::get(), "<GetAwaiter>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass1_0::__AssetBundleExtensions____c__DisplayClass1_0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::*)()>(
    &::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1086838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0._GetAwaiter_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::*)(::UnityEngine::AsyncOperation*)>(
    &::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::_GetAwaiter_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1086ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0*>::get(), "<GetAwaiter>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>*&
BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::__cordl_internal_get_loadResourceTaskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadResourceTaskSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>*> const&
BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::__cordl_internal_get_loadResourceTaskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadResourceTaskSource;
}
constexpr void BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::__cordl_internal_set_loadResourceTaskSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loadResourceTaskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceRequest*& BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::__cordl_internal_get_resourceRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceRequest;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceRequest*> const&
BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::__cordl_internal_get_resourceRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceRequest;
}
constexpr void BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::__cordl_internal_set_resourceRequest(::UnityEngine::ResourceRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourceRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0* BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0*>());
}
inline void BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::_GetAwaiter_b__0(::UnityEngine::AsyncOperation* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0*>::get(), "<GetAwaiter>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::__AssetBundleExtensions____c__DisplayClass2_0::__AssetBundleExtensions____c__DisplayClass2_0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::AssetBundleExtensions.ExistsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::StringW)>(
    &::BGLib::UnityExtension::AssetBundleExtensions::ExistsAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x10864c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AssetBundleExtensions*>::get(), "ExistsAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::AssetBundleExtensions.GetAwaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>> (*)(
    ::UnityEngine::AssetBundleCreateRequest*)>(&::BGLib::UnityExtension::AssetBundleExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x10865c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AssetBundleExtensions*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AssetBundleCreateRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::AssetBundleExtensions.GetAwaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> (*)(
    ::UnityEngine::ResourceRequest*)>(&::BGLib::UnityExtension::AssetBundleExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1086700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AssetBundleExtensions*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceRequest*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::UnityExtension::AssetBundleExtensions::ExistsAsync(::StringW assetBundlePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AssetBundleExtensions*>::get(), "ExistsAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(nullptr, ___internal_method, assetBundlePath);
}
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>>
BGLib::UnityExtension::AssetBundleExtensions::GetAwaiter(::UnityEngine::AssetBundleCreateRequest* assetBundleCreateRequest) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AssetBundleExtensions*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AssetBundleCreateRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>>, false>(nullptr, ___internal_method, assetBundleCreateRequest);
}
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> BGLib::UnityExtension::AssetBundleExtensions::GetAwaiter(::UnityEngine::ResourceRequest* resourceRequest) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::AssetBundleExtensions*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>>, false>(nullptr, ___internal_method, resourceRequest);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::AssetBundleExtensions::AssetBundleExtensions() {}
