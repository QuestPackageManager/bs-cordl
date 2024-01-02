#pragma once
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status::__MissionObjectiveChecker__Status(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status::__MissionObjectiveChecker__Status() {}
constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status GlobalNamespace::__MissionObjectiveChecker__Status::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status GlobalNamespace::__MissionObjectiveChecker__Status::NotClearedYet{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status GlobalNamespace::__MissionObjectiveChecker__Status::NotFailedYet{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status GlobalNamespace::__MissionObjectiveChecker__Status::Cleared{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status GlobalNamespace::__MissionObjectiveChecker__Status::Failed{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.add_statusDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(
    ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*)>(&::GlobalNamespace::MissionObjectiveChecker::add_statusDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23cc0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "add_statusDidChangeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.remove_statusDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(
    ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*)>(&::GlobalNamespace::MissionObjectiveChecker::remove_statusDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23cc1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "remove_statusDidChangeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.add_checkedValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(
    ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*)>(&::GlobalNamespace::MissionObjectiveChecker::add_checkedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23cc25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "add_checkedValueDidChangeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.remove_checkedValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(
    ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*)>(&::GlobalNamespace::MissionObjectiveChecker::remove_checkedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23cc30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "remove_checkedValueDidChangeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_missionObjectiveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionObjectiveTypeSO* (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_missionObjectiveType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cc3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                               "get_missionObjectiveType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_missionObjective
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionObjective* (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_missionObjective)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cc3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                               "get_missionObjective", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_disableChecking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_disableChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cc3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                               "get_disableChecking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.set_disableChecking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(bool)>(
    &::GlobalNamespace::MissionObjectiveChecker::set_disableChecking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23cc3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_disableChecking",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MissionObjectiveChecker__Status (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cc3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "get_status",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.set_status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(::GlobalNamespace::__MissionObjectiveChecker__Status)>(
    &::GlobalNamespace::MissionObjectiveChecker::set_status)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23cb1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_status", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MissionObjectiveChecker__Status>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.get_checkedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MissionObjectiveChecker::*)()>(
    &::GlobalNamespace::MissionObjectiveChecker::get_checkedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cc3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                               "get_checkedValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.set_checkedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(int32_t)>(
    &::GlobalNamespace::MissionObjectiveChecker::set_checkedValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23cb314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_checkedValue",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.SetCheckedMissionObjective
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)(::GlobalNamespace::MissionObjective*)>(
    &::GlobalNamespace::MissionObjectiveChecker::SetCheckedMissionObjective)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23cc3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "SetCheckedMissionObjective", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveChecker.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveChecker::*)()>(&::GlobalNamespace::MissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

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
  constexpr static std::size_t addrs = 0x23cba1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MissionObjectiveTypeSO*& GlobalNamespace::MissionObjectiveChecker::__get__missionObjectiveType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveType;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveTypeSO*> const& GlobalNamespace::MissionObjectiveChecker::__get__missionObjectiveType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveType;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set__missionObjectiveType(::GlobalNamespace::MissionObjectiveTypeSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*& GlobalNamespace::MissionObjectiveChecker::__get_statusDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*> const& GlobalNamespace::MissionObjectiveChecker::__get_statusDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusDidChangeEvent;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set_statusDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___statusDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*& GlobalNamespace::MissionObjectiveChecker::__get_checkedValueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkedValueDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*> const&
GlobalNamespace::MissionObjectiveChecker::__get_checkedValueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkedValueDidChangeEvent;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set_checkedValueDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___checkedValueDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status& GlobalNamespace::MissionObjectiveChecker::__get__status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status const& GlobalNamespace::MissionObjectiveChecker::__get__status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set__status(::GlobalNamespace::__MissionObjectiveChecker__Status value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status = value;
}
constexpr int32_t& GlobalNamespace::MissionObjectiveChecker::__get__checkedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkedValue;
}
constexpr int32_t const& GlobalNamespace::MissionObjectiveChecker::__get__checkedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkedValue;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set__checkedValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkedValue = value;
}
constexpr ::GlobalNamespace::MissionObjective*& GlobalNamespace::MissionObjectiveChecker::__get__missionObjective() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjective;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjective*> const& GlobalNamespace::MissionObjectiveChecker::__get__missionObjective() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjective;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set__missionObjective(::GlobalNamespace::MissionObjective* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjective)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MissionObjectiveChecker::__get__disableChecking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableChecking;
}
constexpr bool const& GlobalNamespace::MissionObjectiveChecker::__get__disableChecking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableChecking;
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set__disableChecking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disableChecking = value;
}
inline void GlobalNamespace::MissionObjectiveChecker::add_statusDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "add_statusDidChangeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::remove_statusDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "remove_statusDidChangeEvent", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::add_checkedValueDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "add_checkedValueDidChangeEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::remove_checkedValueDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "remove_checkedValueDidChangeEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MissionObjectiveTypeSO* GlobalNamespace::MissionObjectiveChecker::get_missionObjectiveType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                             "get_missionObjectiveType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjectiveTypeSO*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjective* GlobalNamespace::MissionObjectiveChecker::get_missionObjective() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                             "get_missionObjective", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjective*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionObjectiveChecker::get_disableChecking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                             "get_disableChecking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::set_disableChecking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_disableChecking",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__MissionObjectiveChecker__Status GlobalNamespace::MissionObjectiveChecker::get_status() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "get_status",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MissionObjectiveChecker__Status, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::set_status(::GlobalNamespace::__MissionObjectiveChecker__Status value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_status", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MissionObjectiveChecker__Status>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MissionObjectiveChecker::get_checkedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(),
                                                                             "get_checkedValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveChecker::set_checkedValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "set_checkedValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveChecker::SetCheckedMissionObjective(::GlobalNamespace::MissionObjective* missionObjective) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), "SetCheckedMissionObjective", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionObjective);
}
inline void GlobalNamespace::MissionObjectiveChecker::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveChecker* GlobalNamespace::MissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionObjectiveChecker*>());
}
inline void GlobalNamespace::MissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveChecker*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveChecker::MissionObjectiveChecker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
