#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityPlayerLoopManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_impl.hpp"
#include "GlobalNamespace/zzzz__UnityPlayerLoopManager_def.hpp"
#include "GlobalNamespace/zzzz__UnityPlayerLoopManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition::UnityPlayerLoopManager_InsertPosition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition::UnityPlayerLoopManager_InsertPosition() {}
constexpr ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition GlobalNamespace::UnityPlayerLoopManager_InsertPosition::Before{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition GlobalNamespace::UnityPlayerLoopManager_InsertPosition::After{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert::*)(
    ::StringW, ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition, ::UnityEngine::LowLevel::PlayerLoopSystem)>(&::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5855cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::UnityPlayerLoopManager_InsertPosition>(),
                                                                                               ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnityPlayerLoopManager_SystemToInsert::_ctor(::StringW relativeToSystem, ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition position,
                                                                          ::UnityEngine::LowLevel::PlayerLoopSystem system) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::UnityPlayerLoopManager_InsertPosition>(), ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, relativeToSystem, position, system);
}
// Ctor Parameters [CppParam { name: "Position", ty: "::GlobalNamespace::UnityPlayerLoopManager_InsertPosition", modifiers: "", def_value: Some("{}") }, CppParam { name: "RelativeToSystem", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "System", ty: "::UnityEngine::LowLevel::PlayerLoopSystem", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert::UnityPlayerLoopManager_SystemToInsert(::GlobalNamespace::UnityPlayerLoopManager_InsertPosition Position, ::StringW RelativeToSystem,
                                                                                                          ::UnityEngine::LowLevel::PlayerLoopSystem System) noexcept {
  this->Position = Position;
  this->RelativeToSystem = RelativeToSystem;
  this->System = System;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert::UnityPlayerLoopManager_SystemToInsert() {}
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58569c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0._InsertSystems_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::*)(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert)>(
    &::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::_InsertSystems_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58569c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0*>(),
                                                             { "<InsertSystems>b__0", {}, { ::i2c::type_of<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0._InsertSystems_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::*)(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert)>(
    &::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::_InsertSystems_b__1)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58569fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0*>(),
                                                             { "<InsertSystems>b__1", {}, { ::i2c::type_of<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::__cordl_internal_get_currentSystemName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentSystemName;
}
constexpr ::StringW const& GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::__cordl_internal_get_currentSystemName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentSystemName;
}
constexpr void GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::__cordl_internal_set_currentSystemName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentSystemName = value;
}
constexpr ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>*& GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::__cordl_internal_get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* const& GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::__cordl_internal_get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::__cordl_internal_set___9__0(::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__0 = value;
}
constexpr ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>*& GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* const& GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::__cordl_internal_set___9__1(::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__1 = value;
}
inline void GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::_InsertSystems_b__0(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0*>(),
                                                           { "<InsertSystems>b__0", {}, { ::i2c::type_of<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline bool GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::_InsertSystems_b__1(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0*>(),
                                                           { "<InsertSystems>b__1", {}, { ::i2c::type_of<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0* GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0::UnityPlayerLoopManager___c__DisplayClass3_0() {}
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager.InitializePlayerLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::UnityPlayerLoopManager::InitializePlayerLoop)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x58558f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager*>(), { "InitializePlayerLoop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager.InsertSystems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevel::PlayerLoopSystem (*)(
    ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>, ::System::Collections::Generic::List_1<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>*)>(
    &::GlobalNamespace::UnityPlayerLoopManager::InsertSystems)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x5855d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager*>(),
                                                             { "InsertSystems",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityPlayerLoopManager.RemoveDisabledSubsystems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>, ::ArrayW<::System::Type*>)>(
    &::GlobalNamespace::UnityPlayerLoopManager::RemoveDisabledSubsystems)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5856770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager*>(),
                                         { "RemoveDisabledSubsystems", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnityPlayerLoopManager::InitializePlayerLoop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager*>(), { "InitializePlayerLoop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::LowLevel::PlayerLoopSystem
GlobalNamespace::UnityPlayerLoopManager::InsertSystems(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem> loopSystem,
                                                       ::System::Collections::Generic::List_1<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>* systemsToInsert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager*>(),
                                                           { "InsertSystems",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevel::PlayerLoopSystem>(nullptr, ___internal_method, loopSystem, systemsToInsert);
}
inline bool GlobalNamespace::UnityPlayerLoopManager::RemoveDisabledSubsystems(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem> loop, ::ArrayW<::System::Type*> typesToRemove) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopManager*>(),
                                       { "RemoveDisabledSubsystems", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, loop, typesToRemove);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityPlayerLoopManager::UnityPlayerLoopManager() {}
