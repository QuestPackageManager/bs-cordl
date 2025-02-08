#pragma once
// IWYU pragma private; include "GlobalNamespace/FullComboMissionObjectiveChecker.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__FullComboMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__ComboController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FullComboMissionObjectiveChecker.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullComboMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::FullComboMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3bb79bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullComboMissionObjectiveChecker*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullComboMissionObjectiveChecker*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullComboMissionObjectiveChecker.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullComboMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::FullComboMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3bb7ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullComboMissionObjectiveChecker*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullComboMissionObjectiveChecker.HandleComboBreakingEventHappened
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullComboMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::FullComboMissionObjectiveChecker::HandleComboBreakingEventHappened)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3bb7b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullComboMissionObjectiveChecker*>::get(),
                                                 "HandleComboBreakingEventHappened", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullComboMissionObjectiveChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullComboMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::FullComboMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb7bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullComboMissionObjectiveChecker*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ComboController>& GlobalNamespace::FullComboMissionObjectiveChecker::__cordl_internal_get__comboController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr ::UnityW<::GlobalNamespace::ComboController> const& GlobalNamespace::FullComboMissionObjectiveChecker::__cordl_internal_get__comboController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr void GlobalNamespace::FullComboMissionObjectiveChecker::__cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comboController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FullComboMissionObjectiveChecker::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullComboMissionObjectiveChecker*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FullComboMissionObjectiveChecker::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullComboMissionObjectiveChecker*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FullComboMissionObjectiveChecker::HandleComboBreakingEventHappened() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullComboMissionObjectiveChecker*>::get(),
                                                                             "HandleComboBreakingEventHappened", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FullComboMissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullComboMissionObjectiveChecker*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FullComboMissionObjectiveChecker* GlobalNamespace::FullComboMissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FullComboMissionObjectiveChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FullComboMissionObjectiveChecker::FullComboMissionObjectiveChecker() {}
