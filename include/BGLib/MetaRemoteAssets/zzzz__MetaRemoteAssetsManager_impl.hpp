#pragma once
// IWYU pragma private; include "BGLib\MetaRemoteAssets\MetaRemoteAssetsManager.hpp"
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
  constexpr static std::size_t addrs = 0x3318c9c;

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
  constexpr static std::size_t addrs = 0x33191a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c.__ctor_b__18_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::__ctor_b__18_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33191a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(), { "<.ctor>b__18_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c._UpdateCatalogsInternalAsync_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)(::AddressablesInternalBridge::Runtime::CatalogLocationData*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__24_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x33191ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(),
                                                             { "<UpdateCatalogsInternalAsync>b__24_0", {}, { ::i2c::type_of<::AddressablesInternalBridge::Runtime::CatalogLocationData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c._UpdateCatalogsInternalAsync_b__24_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__24_1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x33191c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(),
                                                { "<UpdateCatalogsInternalAsync>b__24_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>() } })));
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
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9__18_0(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__18_0", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__18_0", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9__24_0(::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>*, "<>9__24_0", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(
      std::forward<::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>*>(value));
}
inline ::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>*, "<>9__24_0",
                                           ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::setStaticF___9__24_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*, "<>9__24_1",
                                    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::getStaticF___9__24_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>*, "<>9__24_1",
                                           ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::__ctor_b__18_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(), { "<.ctor>b__18_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__24_0(::AddressablesInternalBridge::Runtime::CatalogLocationData* catalogData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(),
                                                           { "<UpdateCatalogsInternalAsync>b__24_0", {}, { ::i2c::type_of<::AddressablesInternalBridge::Runtime::CatalogLocationData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, catalogData);
}
inline bool BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::_UpdateCatalogsInternalAsync_b__24_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>(),
                                              { "<UpdateCatalogsInternalAsync>b__24_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c::MetaRemoteAssetsManager___c() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x3319264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33194ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x33194f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x331992c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::MetaRemoteAssetsManager__InitializeInternalAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21::MetaRemoteAssetsManager__InitializeInternalAsync_d__21() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x33199ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3319b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__23() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0xc18;
  constexpr static std::size_t addrs = 0x3319c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x331a81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_hashesBeforeUpdate_5__2", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24(
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
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__24() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x331a888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x331ab20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::get_RemoteCatalogPath)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3317ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "get_RemoteCatalogPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.add_didCatalogLoadOrUpdateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::System::Action*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::add_didCatalogLoadOrUpdateEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3318034;

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
  constexpr static std::size_t addrs = 0x33180e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                           { "remove_didCatalogLoadOrUpdateEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::GlobalNamespace::INetworkConfig*, ::OculusStudios::Platform::Core::IPlatform*,
                                                                                                                    ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*, ::StringW, ::StringW)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::_ctor)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x331818c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::INetworkConfig*>(), ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>(),
                                                                 ::i2c::type_of<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::Initialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x331850c;

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
  constexpr static std::size_t addrs = 0x3317de4;

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
  constexpr static std::size_t addrs = 0x33185b0;

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
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x33186a0;

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
  constexpr static std::size_t addrs = 0x3317ec0;

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
  constexpr static std::size_t addrs = 0x33187fc;

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
  constexpr static std::size_t addrs = 0x33188c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.WebRequestOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::WebRequestOverride)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3318980;

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
  constexpr static std::size_t addrs = 0x3318b74;

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
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x3318ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "MakeRemoteCatalogTopPriority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.IsMetaAddressableRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequest*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::IsMetaAddressableRequest)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3318b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                                                           { "IsMetaAddressableRequest", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager.IsMetaAddressableUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::IsMetaAddressableUrl)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33187a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "IsMetaAddressableUrl", {}, { ::i2c::type_of<::StringW>() } })));
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
inline ::StringW BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::get_RemoteCatalogPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), { "get_RemoteCatalogPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
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
                                                                    ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* remoteCatalogLoader, ::StringW platformStr, ::StringW inBuildGameVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::INetworkConfig*>(), ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>(),
                                                               ::i2c::type_of<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkConfig, platform, remoteCatalogLoader, platformStr, inBuildGameVersion);
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
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* BGLib::MetaRemoteAssets::MetaRemoteAssetsManager::New_ctor(::GlobalNamespace::INetworkConfig* networkConfig,
                                                                                                                      ::OculusStudios::Platform::Core::IPlatform* platform,
                                                                                                                      ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* remoteCatalogLoader,
                                                                                                                      ::StringW platformStr, ::StringW inBuildGameVersion) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(networkConfig, platform, remoteCatalogLoader, platformStr, inBuildGameVersion));
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
