#pragma once
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__HandsMovementMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__SaberActivityCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandsMovementMissionObjectiveChecker.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::HandsMovementMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23cbeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandsMovementMissionObjectiveChecker.HandleTotalDistanceDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HandsMovementMissionObjectiveChecker::*)(float_t)>(
    &::GlobalNamespace::HandsMovementMissionObjectiveChecker::HandleTotalDistanceDidChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23cbf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>::get(), "HandleTotalDistanceDidChange",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandsMovementMissionObjectiveChecker.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::HandsMovementMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23cbfec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandsMovementMissionObjectiveChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::HandsMovementMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cc0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SaberActivityCounter*& GlobalNamespace::HandsMovementMissionObjectiveChecker::__get__saberActivityCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberActivityCounter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberActivityCounter*> const& GlobalNamespace::HandsMovementMissionObjectiveChecker::__get__saberActivityCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberActivityCounter;
}
constexpr void GlobalNamespace::HandsMovementMissionObjectiveChecker::__set__saberActivityCounter(::GlobalNamespace::SaberActivityCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberActivityCounter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HandsMovementMissionObjectiveChecker::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HandsMovementMissionObjectiveChecker::HandleTotalDistanceDidChange(float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>::get(), "HandleTotalDistanceDidChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance);
}
inline void GlobalNamespace::HandsMovementMissionObjectiveChecker::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>::get(),
                                                                             "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HandsMovementMissionObjectiveChecker* GlobalNamespace::HandsMovementMissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>());
}
inline void GlobalNamespace::HandsMovementMissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandsMovementMissionObjectiveChecker::HandsMovementMissionObjectiveChecker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
