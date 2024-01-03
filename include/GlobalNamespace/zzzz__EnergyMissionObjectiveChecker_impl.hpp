#pragma once
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__EnergyMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnergyMissionObjectiveChecker.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::EnergyMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x23cb6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnergyMissionObjectiveChecker.HandleEnergyDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnergyMissionObjectiveChecker::*)(float_t)>(
    &::GlobalNamespace::EnergyMissionObjectiveChecker::HandleEnergyDidChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23cb7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(), "HandleEnergyDidChange",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnergyMissionObjectiveChecker.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::EnergyMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x23cb8dc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnergyMissionObjectiveChecker.CheckAndUpdateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::EnergyMissionObjectiveChecker::CheckAndUpdateStatus)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23cb818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(),
                                                                               "CheckAndUpdateStatus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnergyMissionObjectiveChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::EnergyMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cba14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameEnergyCounter*& GlobalNamespace::EnergyMissionObjectiveChecker::__get__energyCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____energyCounter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> const& GlobalNamespace::EnergyMissionObjectiveChecker::__get__energyCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____energyCounter;
}
constexpr void GlobalNamespace::EnergyMissionObjectiveChecker::__set__energyCounter(::GlobalNamespace::GameEnergyCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____energyCounter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EnergyMissionObjectiveChecker::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnergyMissionObjectiveChecker::HandleEnergyDidChange(float_t energy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(), "HandleEnergyDidChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, energy);
}
inline void GlobalNamespace::EnergyMissionObjectiveChecker::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnergyMissionObjectiveChecker::CheckAndUpdateStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(),
                                                                             "CheckAndUpdateStatus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnergyMissionObjectiveChecker* GlobalNamespace::EnergyMissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnergyMissionObjectiveChecker*>());
}
inline void GlobalNamespace::EnergyMissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnergyMissionObjectiveChecker::EnergyMissionObjectiveChecker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
