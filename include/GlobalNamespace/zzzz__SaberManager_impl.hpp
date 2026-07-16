#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberManager.hpp"
#include "GlobalNamespace/zzzz__SaberType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberManager_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberManager_InitData::*)(bool, ::GlobalNamespace::SaberType)>(&::GlobalNamespace::SaberManager_InitData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59e9ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SaberManager_InitData::__cordl_internal_get_oneSaberMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oneSaberMode;
}
constexpr bool const& GlobalNamespace::SaberManager_InitData::__cordl_internal_get_oneSaberMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oneSaberMode;
}
constexpr void GlobalNamespace::SaberManager_InitData::__cordl_internal_set_oneSaberMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oneSaberMode = value;
}
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::SaberManager_InitData::__cordl_internal_get_oneSaberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oneSaberType;
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::SaberManager_InitData::__cordl_internal_get_oneSaberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oneSaberType;
}
constexpr void GlobalNamespace::SaberManager_InitData::__cordl_internal_set_oneSaberType(::GlobalNamespace::SaberType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oneSaberType = value;
}
inline void GlobalNamespace::SaberManager_InitData::_ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oneSaberMode, oneSaberType);
}
inline ::GlobalNamespace::SaberManager_InitData* GlobalNamespace::SaberManager_InitData::New_ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberManager_InitData*>(oneSaberMode, oneSaberType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberManager_InitData::SaberManager_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::SaberManager.get_leftSaber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Saber> (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::get_leftSaber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e9c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "get_leftSaber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.get_rightSaber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Saber> (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::get_rightSaber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e9c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "get_rightSaber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.add_didUpdateSaberPositionsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberManager::*)(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*)>(
    &::GlobalNamespace::SaberManager::add_didUpdateSaberPositionsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59e8000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(),
                            { "add_didUpdateSaberPositionsEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.remove_didUpdateSaberPositionsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberManager::*)(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*)>(
    &::GlobalNamespace::SaberManager::remove_didUpdateSaberPositionsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59e814c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(),
                            { "remove_didUpdateSaberPositionsEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.set_disableSabers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberManager::*)(bool)>(&::GlobalNamespace::SaberManager::set_disableSabers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59e9c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "set_disableSabers", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59e9c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e9dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59e9df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::Update)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59e9e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.SaberForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Saber> (::GlobalNamespace::SaberManager::*)(::GlobalNamespace::SaberType)>(
    &::GlobalNamespace::SaberManager::SaberForType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59e9e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "SaberForType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.RefreshSabers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::RefreshSabers)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x59e9cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "RefreshSabers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e9ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::SaberManager::__cordl_internal_get__leftSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::SaberManager::__cordl_internal_get__leftSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaber;
}
constexpr void GlobalNamespace::SaberManager::__cordl_internal_set__leftSaber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftSaber = value;
}
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::SaberManager::__cordl_internal_get__rightSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::SaberManager::__cordl_internal_get__rightSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaber;
}
constexpr void GlobalNamespace::SaberManager::__cordl_internal_set__rightSaber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightSaber = value;
}
constexpr ::GlobalNamespace::SaberManager_InitData*& GlobalNamespace::SaberManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::SaberManager_InitData* const& GlobalNamespace::SaberManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::SaberManager::__cordl_internal_set__initData(::GlobalNamespace::SaberManager_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr bool& GlobalNamespace::SaberManager::__cordl_internal_get__started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____started;
}
constexpr bool const& GlobalNamespace::SaberManager::__cordl_internal_get__started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____started;
}
constexpr void GlobalNamespace::SaberManager::__cordl_internal_set__started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____started = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*& GlobalNamespace::SaberManager::__cordl_internal_get_didUpdateSaberPositionsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdateSaberPositionsEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* const& GlobalNamespace::SaberManager::__cordl_internal_get_didUpdateSaberPositionsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdateSaberPositionsEvent;
}
constexpr void GlobalNamespace::SaberManager::__cordl_internal_set_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didUpdateSaberPositionsEvent = value;
}
inline ::UnityW<::GlobalNamespace::Saber> GlobalNamespace::SaberManager::get_leftSaber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "get_leftSaber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Saber>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::Saber> GlobalNamespace::SaberManager::get_rightSaber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "get_rightSaber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Saber>>(this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::add_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(),
                                       { "add_didUpdateSaberPositionsEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SaberManager::remove_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(),
                          { "remove_didUpdateSaberPositionsEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SaberManager::set_disableSabers(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "set_disableSabers", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SaberManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::Saber> GlobalNamespace::SaberManager::SaberForType(::GlobalNamespace::SaberType saberType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "SaberForType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Saber>>(this, ___internal_method, saberType);
}
inline void GlobalNamespace::SaberManager::RefreshSabers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { "RefreshSabers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberManager* GlobalNamespace::SaberManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberManager::SaberManager() {}
