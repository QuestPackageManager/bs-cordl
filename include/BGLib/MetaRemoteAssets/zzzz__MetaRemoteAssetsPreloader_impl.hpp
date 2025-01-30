#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsPreloader.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncPreloader_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsPreloader_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsPreloader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a9698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c._PreloadAsync_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::_PreloadAsync_b__0_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22a96a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>::get(), "<PreloadAsync>b__0_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c* value) {
  ::cordl_internals::setStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>::get>(
      std::forward<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>(value));
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>::get>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*, "<>9__0_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*, "<>9__0_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>::get>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::_PreloadAsync_b__0_0(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>::get(), "<PreloadAsync>b__0_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, locator);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c::MetaRemoteAssetsPreloader___c() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x22a9778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22a9bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0::MetaRemoteAssetsPreloader__PreloadAsync_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0::MetaRemoteAssetsPreloader__PreloadAsync_d__0() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader.PreloadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::PreloadAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22a9578;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a9634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::PreloadAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader* BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader::MetaRemoteAssetsPreloader() {}
