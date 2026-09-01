#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionObjectiveChecker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MissionObjectiveChecker_Status::MissionObjectiveChecker_Status(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveChecker_Status::MissionObjectiveChecker_Status() {}
constexpr ::GlobalNamespace::MissionObjectiveChecker_Status GlobalNamespace::MissionObjectiveChecker_Status::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MissionObjectiveChecker_Status GlobalNamespace::MissionObjectiveChecker_Status::NotClearedYet{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MissionObjectiveChecker_Status GlobalNamespace::MissionObjectiveChecker_Status::NotFailedYet{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::MissionObjectiveChecker_Status GlobalNamespace::MissionObjectiveChecker_Status::Cleared{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::MissionObjectiveChecker_Status GlobalNamespace::MissionObjectiveChecker_Status::Failed{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.add_statusDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*)>(
    &::GlobalNamespace::MissionObjectiveChecker::add_statusDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x591a3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                                             { "add_statusDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.remove_statusDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*)>(
    &::GlobalNamespace::MissionObjectiveChecker::remove_statusDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x591a498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                                             { "remove_statusDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.add_checkedValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*)>(
    &::GlobalNamespace::MissionObjectiveChecker::add_checkedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x591a558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                                { "add_checkedValueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.remove_checkedValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*)>(
    &::GlobalNamespace::MissionObjectiveChecker::remove_checkedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x591a618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                                { "remove_checkedValueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_missionObjectiveType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_missionObjectiveType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591a6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "get_missionObjectiveType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_missionObjective
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MissionObjective* (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_missionObjective)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591a6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "get_missionObjective", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_disableChecking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionObjectiveChecker::*)()>(&::GlobalNamespace::MissionObjectiveChecker::get_disableChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591a6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "get_disableChecking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.set_disableChecking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(bool)>(&::GlobalNamespace::MissionObjectiveChecker::set_disableChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591a6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "set_disableChecking", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MissionObjectiveChecker_Status (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591a6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "get_status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.set_status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(::GlobalNamespace::MissionObjectiveChecker_Status)>(
    &::GlobalNamespace::MissionObjectiveChecker::set_status)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5919588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                                                                           { "set_status", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveChecker_Status>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_checkedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MissionObjectiveChecker::*)()>(&::GlobalNamespace::MissionObjectiveChecker::get_checkedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591a700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "get_checkedValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.set_checkedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(int32_t)>(&::GlobalNamespace::MissionObjectiveChecker::set_checkedValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5919724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "set_checkedValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.SetCheckedMissionObjective
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(::GlobalNamespace::MissionObjective*)>(
    &::GlobalNamespace::MissionObjectiveChecker::SetCheckedMissionObjective)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x591a708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                                                                           { "SetCheckedMissionObjective", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)()>(&::GlobalNamespace::MissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { ::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)()>(&::GlobalNamespace::MissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5919c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get__missionObjectiveType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveType;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> const& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get__missionObjectiveType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveType;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__cordl_internal_set__missionObjectiveType(::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveType = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get_statusDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusDidChangeEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* const& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get_statusDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusDidChangeEvent;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__cordl_internal_set_statusDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statusDidChangeEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get_checkedValueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkedValueDidChangeEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* const& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get_checkedValueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkedValueDidChangeEvent;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__cordl_internal_set_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkedValueDidChangeEvent = value;
}
constexpr ::GlobalNamespace::MissionObjectiveChecker_Status& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get__status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr ::GlobalNamespace::MissionObjectiveChecker_Status const& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get__status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__cordl_internal_set__status(::GlobalNamespace::MissionObjectiveChecker_Status value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status = value;
}
constexpr int32_t& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get__checkedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkedValue;
}
constexpr int32_t const& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get__checkedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkedValue;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__cordl_internal_set__checkedValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkedValue = value;
}
constexpr ::GlobalNamespace::MissionObjective*& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get__missionObjective() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjective;
}
constexpr ::GlobalNamespace::MissionObjective* const& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get__missionObjective() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjective;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__cordl_internal_set__missionObjective(::GlobalNamespace::MissionObjective* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjective = value;
}
constexpr bool& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get__disableChecking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableChecking;
}
constexpr bool const& GlobalNamespace::MissionObjectiveChecker::__cordl_internal_get__disableChecking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableChecking;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__cordl_internal_set__disableChecking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disableChecking = value;
}
inline void GlobalNamespace::MissionObjectiveChecker::add_statusDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                                           { "add_statusDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::remove_statusDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                                           { "remove_statusDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::add_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                                           { "add_checkedValueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::remove_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                              { "remove_checkedValueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> GlobalNamespace::MissionObjectiveChecker::get_missionObjectiveType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "get_missionObjectiveType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjective* GlobalNamespace::MissionObjectiveChecker::get_missionObjective() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "get_missionObjective", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjective*>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionObjectiveChecker::get_disableChecking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "get_disableChecking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::set_disableChecking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "set_disableChecking", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MissionObjectiveChecker_Status GlobalNamespace::MissionObjectiveChecker::get_status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "get_status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjectiveChecker_Status>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::set_status(::GlobalNamespace::MissionObjectiveChecker_Status value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "set_status", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveChecker_Status>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MissionObjectiveChecker::get_checkedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "get_checkedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::set_checkedValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { "set_checkedValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::SetCheckedMissionObjective(::GlobalNamespace::MissionObjective* missionObjective) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(),
                                                                                         { "SetCheckedMissionObjective", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionObjective);
}
inline void GlobalNamespace::MissionObjectiveChecker::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveChecker* GlobalNamespace::MissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectiveChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveChecker::MissionObjectiveChecker() {}
