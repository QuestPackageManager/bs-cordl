#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsManager.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsManager_def.hpp"
#include "AddressablesInternalBridge/Runtime/zzzz__CatalogLocationData_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__IRemoteCatalogLoader_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsManager_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "OculusStudios/MetaNetworking/Utils/zzzz__IMetaApiUserAgentProvider_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
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
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::*)(
    ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x35a1b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
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
  this->___ResourceLocator = value;
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
  this->___LocalHash = value;
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
  this->___CatalogLocation = value;
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::_ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator, ::StringW localHash,
                                                                                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceLocator, localHash, catalogLocation);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator, ::StringW localHash,
                                                                                   ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLocation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*>(resourceLocator, localHash, catalogLocation));
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput::MetaRemoteAssetsManager_AddResourceLocatorInput() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35a2124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c.__ctor_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::__ctor_b__23_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35a2128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(), { "<.ctor>b__23_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c._UpdateCatalogsInternalAsync_b__29_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)(::AddressablesInternalBridge::Runtime::CatalogLocationData*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__29_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x35a212c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(),
                                                             { "<UpdateCatalogsInternalAsync>b__29_0", {}, { ::i2c::type_of<::AddressablesInternalBridge::Runtime::CatalogLocationData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c._UpdateCatalogsInternalAsync_b__29_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__29_1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x35a2140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(),
                                                { "<UpdateCatalogsInternalAsync>b__29_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* value) {
  ::cordl_internals::setStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*, "<>9", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(
      std::forward<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(value));
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*, "<>9", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9__23_0(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__23_0", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__23_0", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9__29_0(::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>*, "<>9__29_0", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(
      std::forward<::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>*>(value));
}
inline ::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9__29_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>*, "<>9__29_0",
                                           ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9__29_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*, "<>9__29_1",
                                    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9__29_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*, "<>9__29_1",
                                           ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::__ctor_b__23_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(), { "<.ctor>b__23_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__29_0(::AddressablesInternalBridge::Runtime::CatalogLocationData* catalogData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(),
                                                           { "<UpdateCatalogsInternalAsync>b__29_0", {}, { ::i2c::type_of<::AddressablesInternalBridge::Runtime::CatalogLocationData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, catalogData);
}
inline bool BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__29_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(),
                                              { "<UpdateCatalogsInternalAsync>b__29_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::MetaRemoteAssetsManager___c() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x35a21e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35a246c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24::MetaRemoteAssetsManager__Initialize_d__24(int32_t __1__state,
                                                                                                                          ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                          ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
                                                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__24::MetaRemoteAssetsManager__Initialize_d__24() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x35a2474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x35a28ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None
// }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26::MetaRemoteAssetsManager__InitializeInternalAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__26::MetaRemoteAssetsManager__InitializeInternalAsync_d__26() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x35a292c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35a2b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__28() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29::MoveNext)> {
  constexpr static std::size_t size = 0xc18;
  constexpr static std::size_t addrs = 0x35a2b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35a379c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_hashesBeforeUpdate_5__2", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _hashesBeforeUpdate_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_hashesBeforeUpdate_5__2 = _hashesBeforeUpdate_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__29() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x35a3808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x35a3aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25::MetaRemoteAssetsManager__WaitInitAsync_d__25(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__25::MetaRemoteAssetsManager__WaitInitAsync_d__25() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.get_RemoteCatalogPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::get_RemoteCatalogPath)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35a0ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "get_RemoteCatalogPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.SetServerHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::SetServerHost)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35a0b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "SetServerHost", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.ResetServerHostForNoDomainReload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::ResetServerHostForNoDomainReload)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35a0ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "ResetServerHostForNoDomainReload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.add_didCatalogLoadOrUpdateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Action*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::add_didCatalogLoadOrUpdateEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x35a0d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "add_didCatalogLoadOrUpdateEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.remove_didCatalogLoadOrUpdateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Action*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::remove_didCatalogLoadOrUpdateEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x35a0db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                           { "remove_didCatalogLoadOrUpdateEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(
    ::GlobalNamespace::INetworkConfig*, ::OculusStudios::Platform::Core::IPlatform*, ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*,
    ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*, ::StringW, ::StringW)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::_ctor)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x35a0e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::INetworkConfig*>(), ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>(),
                                             ::i2c::type_of<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(), ::i2c::type_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::Initialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x35a127c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.WaitInitAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::WaitInitAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x35a08c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "WaitInitAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.InitializeInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Threading::CancellationToken)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::InitializeInternalAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x35a1320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                           { "InitializeInternalAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.InternalIdTransformFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x35a1410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                             { "InternalIdTransformFunc", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.UpdateCatalogsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Threading::CancellationToken)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::UpdateCatalogsAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x35a09a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                           { "UpdateCatalogsAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.UpdateCatalogsInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Threading::CancellationToken)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::UpdateCatalogsInternalAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x35a15c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                           { "UpdateCatalogsInternalAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35a168c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.WebRequestOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::WebRequestOverride)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x35a174c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                           { "WebRequestOverride", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.CreateAddResourceLocatorInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput* (*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool)>(
        &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::CreateAddResourceLocatorInput)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x35a1a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                            { "CreateAddResourceLocatorInput", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.MakeRemoteCatalogTopPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::MakeRemoteCatalogTopPriority)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x35a1b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "MakeRemoteCatalogTopPriority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.IsMetaAddressableRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequest*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::IsMetaAddressableRequest)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x35a19f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                           { "IsMetaAddressableRequest", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.IsMetaAddressableUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::IsMetaAddressableUrl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x35a1544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "IsMetaAddressableUrl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.GetSecondLevelDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::GetSecondLevelDomain)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x35a0bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "GetSecondLevelDomain", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__platformStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformStr;
}
constexpr ::StringW const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__platformStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformStr;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__platformStr(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformStr = value;
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
  this->____initializationCancellationTokenSource = value;
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
  this->____initializationTask = value;
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
  this->____updateCatalogTask = value;
}
constexpr ::StringW& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__graphAccessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAccessToken;
}
constexpr ::StringW const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__graphAccessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAccessToken;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__graphAccessToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphAccessToken = value;
}
constexpr ::StringW& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__appAccessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appAccessToken;
}
constexpr ::StringW const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__appAccessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appAccessToken;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__appAccessToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appAccessToken = value;
}
constexpr ::StringW& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__graphAppId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAppId;
}
constexpr ::StringW const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__graphAppId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAppId;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__graphAppId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphAppId = value;
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
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
  this->____remoteCatalogLoader = value;
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
  this->____inBuildGameVersion = value;
}
constexpr ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__metaApiUserAgentProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metaApiUserAgentProvider;
}
constexpr ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_get__metaApiUserAgentProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metaApiUserAgentProvider;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::__cordl_internal_set__metaApiUserAgentProvider(::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____metaApiUserAgentProvider = value;
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
  this->___didCatalogLoadOrUpdateEvent = value;
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::setStaticF_MetaServerHost(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "MetaServerHost", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(std::forward<::StringW>(value));
}
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::getStaticF_MetaServerHost() {
  return ::cordl_internals::getStaticField<::StringW, "MetaServerHost", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::setStaticF__metaServerSecondLevelDomain(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_metaServerSecondLevelDomain", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(std::forward<::StringW>(value));
}
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::getStaticF__metaServerSecondLevelDomain() {
  return ::cordl_internals::getStaticField<::StringW, "_metaServerSecondLevelDomain", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>();
}
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::get_RemoteCatalogPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "get_RemoteCatalogPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::SetServerHost(::StringW remoteAssetsBaseUrl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "SetServerHost", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, remoteAssetsBaseUrl);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::ResetServerHostForNoDomainReload() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "ResetServerHostForNoDomainReload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::add_didCatalogLoadOrUpdateEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "add_didCatalogLoadOrUpdateEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::remove_didCatalogLoadOrUpdateEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "remove_didCatalogLoadOrUpdateEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::_ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::OculusStudios::Platform::Core::IPlatform* platform,
                                                                    ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* remoteCatalogLoader,
                                                                    ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider* metaApiUserAgentProvider,
                                                                    /* [Inject(Id = "MetaRemoteAssetsManager_platform_injectId")] */ ::StringW platformStr,
                                                                    /* [Inject(Id = "InBuildGameVersion")] */ ::StringW inBuildGameVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::INetworkConfig*>(), ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>(),
                                                  ::i2c::type_of<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(),
                                                  ::i2c::type_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkConfig, platform, remoteCatalogLoader, metaApiUserAgentProvider, platformStr, inBuildGameVersion);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::WaitInitAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "WaitInitAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::InitializeInternalAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                         { "InitializeInternalAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::InternalIdTransformFunc(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* resourceLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                           { "InternalIdTransformFunc", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, resourceLocation);
}
inline ::System::Threading::Tasks::Task* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::UpdateCatalogsAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                         { "UpdateCatalogsAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::UpdateCatalogsInternalAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                         { "UpdateCatalogsInternalAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::WebRequestOverride(::UnityEngine::Networking::UnityWebRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                         { "WebRequestOverride", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::CreateAddResourceLocatorInput(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator, bool isRemote) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                       { "CreateAddResourceLocatorInput", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*>(nullptr, ___internal_method, resourceLocator, isRemote);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::MakeRemoteCatalogTopPriority() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "MakeRemoteCatalogTopPriority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::IsMetaAddressableRequest(::UnityEngine::Networking::UnityWebRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                         { "IsMetaAddressableRequest", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, request);
}
inline bool BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::IsMetaAddressableUrl(::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "IsMetaAddressableUrl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, url);
}
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::GetSecondLevelDomain(::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "GetSecondLevelDomain", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, url);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::New_ctor(
    ::GlobalNamespace::INetworkConfig* networkConfig, ::OculusStudios::Platform::Core::IPlatform* platform, ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* remoteCatalogLoader,
    ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider* metaApiUserAgentProvider, /* [Inject(Id = "MetaRemoteAssetsManager_platform_injectId")] */ ::StringW platformStr,
    /* [Inject(Id = "InBuildGameVersion")] */ ::StringW inBuildGameVersion) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(networkConfig, platform, remoteCatalogLoader, metaApiUserAgentProvider, platformStr, inBuildGameVersion));
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
