#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveChecker.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*)>(&::GlobalNamespace::MissionObjectiveChecker::add_statusDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bb3bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "add_statusDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.remove_statusDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*)>(&::GlobalNamespace::MissionObjectiveChecker::remove_statusDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bb3ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "remove_statusDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.add_checkedValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*)>(&::GlobalNamespace::MissionObjectiveChecker::add_checkedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bb3d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "add_checkedValueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.remove_checkedValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*)>(&::GlobalNamespace::MissionObjectiveChecker::remove_checkedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bb3e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "remove_checkedValueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_missionObjectiveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_missionObjectiveType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb3eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                               "get_missionObjectiveType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_missionObjective
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionObjective* (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_missionObjective)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb3eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                               "get_missionObjective", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_disableChecking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_disableChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb3ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                               "get_disableChecking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.set_disableChecking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(bool)>(
    &::GlobalNamespace::MissionObjectiveChecker::set_disableChecking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3bb3ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_disableChecking",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionObjectiveChecker_Status (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb3ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "get_status",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.set_status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(::GlobalNamespace::MissionObjectiveChecker_Status)>(
    &::GlobalNamespace::MissionObjectiveChecker::set_status)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3bb2ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_status", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveChecker_Status>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_checkedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_checkedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb3edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                               "get_checkedValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.set_checkedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(int32_t)>(
    &::GlobalNamespace::MissionObjectiveChecker::set_checkedValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3bb2e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_checkedValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.SetCheckedMissionObjective
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(::GlobalNamespace::MissionObjective*)>(
    &::GlobalNamespace::MissionObjectiveChecker::SetCheckedMissionObjective)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3bb3ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "SetCheckedMissionObjective", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)()>(&::GlobalNamespace::MissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)()>(&::GlobalNamespace::MissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb3528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___statusDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___checkedValueDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjective)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "add_statusDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::remove_statusDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "remove_statusDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::add_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "add_checkedValueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::remove_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "remove_checkedValueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> GlobalNamespace::MissionObjectiveChecker::get_missionObjectiveType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                             "get_missionObjectiveType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjective* GlobalNamespace::MissionObjectiveChecker::get_missionObjective() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                             "get_missionObjective", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjective*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionObjectiveChecker::get_disableChecking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                             "get_disableChecking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::set_disableChecking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_disableChecking",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MissionObjectiveChecker_Status GlobalNamespace::MissionObjectiveChecker::get_status() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "get_status",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjectiveChecker_Status, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::set_status(::GlobalNamespace::MissionObjectiveChecker_Status value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_status", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveChecker_Status>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MissionObjectiveChecker::get_checkedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                             "get_checkedValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::set_checkedValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_checkedValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::SetCheckedMissionObjective(::GlobalNamespace::MissionObjective* missionObjective) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "SetCheckedMissionObjective", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionObjective);
}
inline void GlobalNamespace::MissionObjectiveChecker::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveChecker* GlobalNamespace::MissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionObjectiveChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveChecker::MissionObjectiveChecker() {}
