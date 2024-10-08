#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsRemoteCatalogLoader.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsRemoteCatalogLoader_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__IRemoteCatalogLoader_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsRemoteCatalogLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::*)()>(
    &::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226b694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c._LoadRemoteCatalogAsync_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)>(&::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::_LoadRemoteCatalogAsync_b__0_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x226b69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*>::get(), "<LoadRemoteCatalogAsync>b__0_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::setStaticF___9(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c* value) {
  ::cordl_internals::setStaticField<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*>::get>(
      std::forward<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*>(value));
}
inline ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c* BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*>::get>();
}
inline void
BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*, "<>9__0_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*, "<>9__0_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*>::get>();
}
inline ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c* BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*>());
}
inline void BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::_LoadRemoteCatalogAsync_b__0_0(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c*>::get(), "<LoadRemoteCatalogAsync>b__0_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, locator);
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader____c::__MetaRemoteAssetsRemoteCatalogLoader____c() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0::*)()>(
    &::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x226b774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x226bc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0::__MetaRemoteAssetsRemoteCatalogLoader___LoadRemoteCatalogAsync_d__0() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader.LoadRemoteCatalogAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader::*)(::System::Threading::CancellationToken)>(
        &::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader::LoadRemoteCatalogAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x226b54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader*>::get(), "LoadRemoteCatalogAsync",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226b630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGLib::MetaRemoteAssets::IRemoteCatalogLoader"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader::operator ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*() noexcept {
  return static_cast<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::MetaRemoteAssets::IRemoteCatalogLoader"
constexpr ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader::i___BGLib__MetaRemoteAssets__IRemoteCatalogLoader() noexcept {
  return static_cast<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(static_cast<void*>(this));
}
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader::LoadRemoteCatalogAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader*>::get(), "LoadRemoteCatalogAsync",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, cancellationToken);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader* BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader*>());
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader::MetaRemoteAssetsRemoteCatalogLoader() {}
