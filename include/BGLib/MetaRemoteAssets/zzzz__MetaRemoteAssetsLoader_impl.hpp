#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsLoader.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsLoader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsLoader_def.hpp"
#include "GlobalNamespace/zzzz__NetworkConfigSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3775ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c._LoadInternalAsync_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::_LoadInternalAsync_b__3_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3775cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*>(),
                                                             { "<LoadInternalAsync>b__3_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c* value) {
  ::cordl_internals::setStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*, "<>9", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*>(
      std::forward<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*>(value));
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*, "<>9", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::setStaticF___9__3_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*, "<>9__3_0", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*>(
      std::forward<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>*, "<>9__3_0",
                                           ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::_LoadInternalAsync_b__3_0(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*>(),
                                                           { "<LoadInternalAsync>b__3_0", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, locator);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c::MetaRemoteAssetsLoader___c() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x3775dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3776378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "registry", ty: "::BGLib::AppFlow::Initialization::IInstallerRegistry*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_shouldUseMock_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3::MetaRemoteAssetsLoader__LoadInternalAsync_d__3(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader> __4__this,
    ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, bool _shouldUseMock_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->registry = registry;
  this->_shouldUseMock_5__2 = _shouldUseMock_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3::MetaRemoteAssetsLoader__LoadInternalAsync_d__3() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader.get_synchronizationStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep (::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::get_synchronizationStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37757fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(), { ::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader.LoadInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::*)(::BGLib::AppFlow::Initialization::IInstallerRegistry*, ::Zenject::DiContainer*, ::System::Threading::CancellationToken)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::LoadInternalAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3775804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(), { ::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader.ApplyAddressablesOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::ApplyAddressablesOverrides)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x37758c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(), { "ApplyAddressablesOverrides", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader.WebRequestOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::WebRequestOverride)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x37759c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(),
                                                                                           { "WebRequestOverride", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3775c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::__cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkConfig = value;
}
inline ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::get_synchronizationStep() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::LoadInternalAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry,
                                                                                                            ::Zenject::DiContainer* container,
                                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, registry, container, cancellationToken);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::ApplyAddressablesOverrides() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(), { "ApplyAddressablesOverrides", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::WebRequestOverride(::UnityEngine::Networking::UnityWebRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(),
                                                                                         { "WebRequestOverride", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader* BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader::MetaRemoteAssetsLoader() {}
