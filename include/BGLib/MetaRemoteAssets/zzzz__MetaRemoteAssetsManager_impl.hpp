#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsManager.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IInitializable_impl.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsManager_def.hpp"
#include "AddressablesInternalBridge/Runtime/zzzz__CatalogLocationData_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__IRemoteCatalogLoader_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsManager_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22a8c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::__cordl_internal_get_ResourceLocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceLocator;
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* const&
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::__cordl_internal_get_ResourceLocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceLocator;
}
constexpr void
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::__cordl_internal_set_ResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ResourceLocator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::__cordl_internal_get_LocalHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalHash;
}
constexpr ::StringW const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::__cordl_internal_get_LocalHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalHash;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::__cordl_internal_set_LocalHash(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LocalHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::__cordl_internal_get_CatalogLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CatalogLocation;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::__cordl_internal_get_CatalogLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CatalogLocation;
}
constexpr void
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::__cordl_internal_set_CatalogLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CatalogLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::_ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator, ::StringW localHash,
                                                                                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resourceLocator, localHash, catalogLocation);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator, ::StringW localHash,
                                                                                   ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLocation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*>(resourceLocator, localHash, catalogLocation));
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::MetaRemoteAssetsManager_AddResourceLocatorInput() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a91a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c.__ctor_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::__ctor_b__17_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a91b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get(),
                                                                               "<.ctor>b__17_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c._UpdateCatalogsInternalAsync_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)(
    ::AddressablesInternalBridge::Runtime::CatalogLocationData*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__25_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22a91b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get(), "<UpdateCatalogsInternalAsync>b__25_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AddressablesInternalBridge::Runtime::CatalogLocationData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c._UpdateCatalogsInternalAsync_b__25_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__25_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22a91cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get(), "<UpdateCatalogsInternalAsync>b__25_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* value) {
  ::cordl_internals::setStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get>(
      std::forward<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(value));
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9__17_0(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9__25_0(::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>*, "<>9__25_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get>(
      std::forward<::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>*>(value));
}
inline ::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>*, "<>9__25_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9__25_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*, "<>9__25_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9__25_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*, "<>9__25_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::__ctor_b__17_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get(),
                                                                             "<.ctor>b__17_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__25_0(::AddressablesInternalBridge::Runtime::CatalogLocationData* catalogData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get(), "<UpdateCatalogsInternalAsync>b__25_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AddressablesInternalBridge::Runtime::CatalogLocationData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, catalogData);
}
inline bool BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__25_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>::get(), "<UpdateCatalogsInternalAsync>b__25_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::MetaRemoteAssetsManager___c() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x22a926c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22a9834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23::MetaRemoteAssetsManager__FetchTokenAsync_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23::MetaRemoteAssetsManager__FetchTokenAsync_d__23() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x22a989c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22a9b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::MetaRemoteAssetsManager__Initialize_d__19(int32_t __1__state,
                                                                                                                          ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                          ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
                                                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::MetaRemoteAssetsManager__Initialize_d__19() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x22a9b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22a9fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::MetaRemoteAssetsManager__InitializeInternalAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::MetaRemoteAssetsManager__InitializeInternalAsync_d__21() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x22aa060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22aa240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x834;
  constexpr static std::size_t addrs = 0x22aa2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22aaadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_hashesBeforeUpdate_5__2", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _hashesBeforeUpdate_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->_hashesBeforeUpdate_5__2 = _hashesBeforeUpdate_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x22aab44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22aada8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::MetaRemoteAssetsManager__WaitInitAsync_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::MetaRemoteAssetsManager__WaitInitAsync_d__20() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.get_RemoteCatalogPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::get_RemoteCatalogPath)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22a809c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                               "get_RemoteCatalogPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.add_didCatalogLoadOrUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Action*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::add_didCatalogLoadOrUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22a80dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "add_didCatalogLoadOrUpdateEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.remove_didCatalogLoadOrUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Action*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::remove_didCatalogLoadOrUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22a8178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "remove_didCatalogLoadOrUpdateEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(
    ::GlobalNamespace::INetworkConfig*, ::GlobalNamespace::IPlatformUserModel*, ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*, ::StringW, ::StringW)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x22a8214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformUserModel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.ApplyAddressablesOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::ApplyAddressablesOverrides)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22a8434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                               "ApplyAddressablesOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22a8528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.WaitInitAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::WaitInitAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x22a7e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                               "WaitInitAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.InitializeInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Threading::CancellationToken)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::InitializeInternalAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22a85b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "InitializeInternalAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.InternalIdTransformFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x22a86b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "InternalIdTransformFunc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.FetchTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Threading::CancellationToken)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::FetchTokenAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22a87c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "FetchTokenAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.UpdateCatalogsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Threading::CancellationToken)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::UpdateCatalogsAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22a7f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "UpdateCatalogsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.UpdateCatalogsInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Threading::CancellationToken)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::UpdateCatalogsInternalAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22a8894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "UpdateCatalogsInternalAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22a8964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.WebRequestOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::WebRequestOverride)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x22a89b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "WebRequestOverride", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.CreateAddResourceLocatorInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput* (*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)>(
        &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::CreateAddResourceLocatorInput)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22a8b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "CreateAddResourceLocatorInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.MakeRemoteCatalogTopPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::MakeRemoteCatalogTopPriority)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x22a8cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                               "MakeRemoteCatalogTopPriority", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__accessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accessToken;
}
constexpr ::StringW const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__accessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accessToken;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__accessToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____accessToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::StringW const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__platform(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__initializationCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationCancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__initializationCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationCancellationTokenSource;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__initializationCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initializationCancellationTokenSource)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task_1<bool>*& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__initializationTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task_1<bool>* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__initializationTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initializationTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__updateCatalogTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateCatalogTask;
}
constexpr ::System::Threading::Tasks::Task* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__updateCatalogTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateCatalogTask;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__updateCatalogTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updateCatalogTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__appId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr ::StringW const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__appId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__appId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IPlatformUserModel*& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__platformUserModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformUserModel;
}
constexpr ::GlobalNamespace::IPlatformUserModel* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__platformUserModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformUserModel;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformUserModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__remoteCatalogLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteCatalogLoader;
}
constexpr ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__remoteCatalogLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteCatalogLoader;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__remoteCatalogLoader(::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____remoteCatalogLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__inBuildGameVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inBuildGameVersion;
}
constexpr ::StringW const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__inBuildGameVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inBuildGameVersion;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__inBuildGameVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inBuildGameVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get_didCatalogLoadOrUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didCatalogLoadOrUpdateEvent;
}
constexpr ::System::Action* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get_didCatalogLoadOrUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didCatalogLoadOrUpdateEvent;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set_didCatalogLoadOrUpdateEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didCatalogLoadOrUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::get_RemoteCatalogPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                             "get_RemoteCatalogPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::add_didCatalogLoadOrUpdateEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "add_didCatalogLoadOrUpdateEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::remove_didCatalogLoadOrUpdateEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "remove_didCatalogLoadOrUpdateEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::_ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::GlobalNamespace::IPlatformUserModel* platformUserModel,
                                                                    ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* remoteCatalogLoader, ::StringW platform, ::StringW inBuildGameVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformUserModel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkConfig, platformUserModel, remoteCatalogLoader, platform, inBuildGameVersion);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::ApplyAddressablesOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                             "ApplyAddressablesOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::WaitInitAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                             "WaitInitAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::InitializeInternalAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "InitializeInternalAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, cancellationToken);
}
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::InternalIdTransformFunc(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* resourceLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "InternalIdTransformFunc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, resourceLocation);
}
inline ::System::Threading::Tasks::Task* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::FetchTokenAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "FetchTokenAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::UpdateCatalogsAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "UpdateCatalogsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::UpdateCatalogsInternalAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "UpdateCatalogsInternalAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::WebRequestOverride(::UnityEngine::Networking::UnityWebRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "WebRequestOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::CreateAddResourceLocatorInput(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(), "CreateAddResourceLocatorInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*, false>(nullptr, ___internal_method, resourceLocator);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::MakeRemoteCatalogTopPriority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                                                             "MakeRemoteCatalogTopPriority", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::New_ctor(::GlobalNamespace::INetworkConfig* networkConfig,
                                                                                                                      ::GlobalNamespace::IPlatformUserModel* platformUserModel,
                                                                                                                      ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* remoteCatalogLoader,
                                                                                                                      ::StringW platform, ::StringW inBuildGameVersion) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(networkConfig, platformUserModel, remoteCatalogLoader, platform, inBuildGameVersion));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::MetaRemoteAssetsManager() {}
