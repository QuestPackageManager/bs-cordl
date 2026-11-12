#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLoader.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameLoader_def.hpp"
#include "GlobalNamespace/zzzz__GameLoader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameLoader___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLoader___c::*)()>(&::GlobalNamespace::GameLoader___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a28f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLoader___c._PrewarmSlowFirstCallsInBackground_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::GameLoader___c::*)()>(&::GlobalNamespace::GameLoader___c::_PrewarmSlowFirstCallsInBackground_b__5_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3a28f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader___c*>(), { "<PrewarmSlowFirstCallsInBackground>b__5_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLoader___c._PrewarmSlowFirstCallsInBackground_b__5_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* (::GlobalNamespace::GameLoader___c::*)()>(
    &::GlobalNamespace::GameLoader___c::_PrewarmSlowFirstCallsInBackground_b__5_1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3a28ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader___c*>(), { "<PrewarmSlowFirstCallsInBackground>b__5_1", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameLoader___c::setStaticF___9(::GlobalNamespace::GameLoader___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameLoader___c*, "<>9", ::GlobalNamespace::GameLoader___c*>(std::forward<::GlobalNamespace::GameLoader___c*>(value));
}
inline ::GlobalNamespace::GameLoader___c* GlobalNamespace::GameLoader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameLoader___c*, "<>9", ::GlobalNamespace::GameLoader___c*>();
}
inline void GlobalNamespace::GameLoader___c::setStaticF___9__5_0(::System::Func_1<::System::DateTime>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::DateTime>*, "<>9__5_0", ::GlobalNamespace::GameLoader___c*>(std::forward<::System::Func_1<::System::DateTime>*>(value));
}
inline ::System::Func_1<::System::DateTime>* GlobalNamespace::GameLoader___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::DateTime>*, "<>9__5_0", ::GlobalNamespace::GameLoader___c*>();
}
inline void GlobalNamespace::GameLoader___c::setStaticF___9__5_1(::System::Func_1<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>*, "<>9__5_1", ::GlobalNamespace::GameLoader___c*>(
      std::forward<::System::Func_1<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>*>(value));
}
inline ::System::Func_1<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>* GlobalNamespace::GameLoader___c::getStaticF___9__5_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>*, "<>9__5_1", ::GlobalNamespace::GameLoader___c*>();
}
inline void GlobalNamespace::GameLoader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTime GlobalNamespace::GameLoader___c::_PrewarmSlowFirstCallsInBackground_b__5_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader___c*>(), { "<PrewarmSlowFirstCallsInBackground>b__5_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* GlobalNamespace::GameLoader___c::_PrewarmSlowFirstCallsInBackground_b__5_1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader___c*>(), { "<PrewarmSlowFirstCallsInBackground>b__5_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(this, ___internal_method);
}
inline ::GlobalNamespace::GameLoader___c* GlobalNamespace::GameLoader___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameLoader___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLoader___c::GameLoader___c() {}
//  Writing Method size for method: ::GlobalNamespace::GameLoader__Start_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLoader__Start_d__4::*)()>(&::GlobalNamespace::GameLoader__Start_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x3a29078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader__Start_d__4>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLoader__Start_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLoader__Start_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::GameLoader__Start_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a294c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader__Start_d__4>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameLoader__Start_d__4::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader__Start_d__4>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GameLoader__Start_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader__Start_d__4>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::GameLoader__Start_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::GameLoader__Start_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GameLoader>",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_appInitHandle_5__2", ty:
// "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameLoader__Start_d__4::GameLoader__Start_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::GameLoader> __4__this,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> _appInitHandle_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_appInitHandle_5__2 = _appInitHandle_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLoader__Start_d__4::GameLoader__Start_d__4() {}
//  Writing Method size for method: ::GlobalNamespace::GameLoader.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLoader::*)()>(&::GlobalNamespace::GameLoader::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3a28ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLoader.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLoader::*)()>(&::GlobalNamespace::GameLoader::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3a28b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLoader.PrewarmSlowFirstCallsInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GameLoader::PrewarmSlowFirstCallsInBackground)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x3a28bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader*>(), { "PrewarmSlowFirstCallsInBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLoader.HandleSceneContextPostInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLoader::*)()>(&::GlobalNamespace::GameLoader::HandleSceneContextPostInstall)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3a28dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader*>(), { "HandleSceneContextPostInstall", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLoader::*)()>(&::GlobalNamespace::GameLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a28f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Zenject::SceneContext>& GlobalNamespace::GameLoader::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::UnityW<::Zenject::SceneContext> const& GlobalNamespace::GameLoader::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void GlobalNamespace::GameLoader::__cordl_internal_set__context(::UnityW<::Zenject::SceneContext> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>&
GlobalNamespace::GameLoader::__cordl_internal_get__handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const&
GlobalNamespace::GameLoader::__cordl_internal_get__handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
constexpr void GlobalNamespace::GameLoader::__cordl_internal_set__handle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handle = value;
}
inline void GlobalNamespace::GameLoader::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLoader::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLoader::PrewarmSlowFirstCallsInBackground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader*>(), { "PrewarmSlowFirstCallsInBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GameLoader::HandleSceneContextPostInstall() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader*>(), { "HandleSceneContextPostInstall", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameLoader* GlobalNamespace::GameLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameLoader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLoader::GameLoader() {}
