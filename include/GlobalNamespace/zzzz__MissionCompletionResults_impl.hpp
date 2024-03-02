#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionCompletionResults.get_IsMissionComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MissionCompletionResults::*)()>(
    &::GlobalNamespace::MissionCompletionResults::get_IsMissionComplete)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12d5c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionCompletionResults*>::get(),
                                                                               "get_IsMissionComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionCompletionResults::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*>)>(
    &::GlobalNamespace::MissionCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12d5c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionCompletionResults*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LevelCompletionResults*& GlobalNamespace::MissionCompletionResults::__cordl_internal_get_levelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCompletionResults;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& GlobalNamespace::MissionCompletionResults::__cordl_internal_get_levelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCompletionResults;
}
constexpr void GlobalNamespace::MissionCompletionResults::__cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*>&
GlobalNamespace::MissionCompletionResults::__cordl_internal_get_missionObjectiveResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectiveResults;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> const&
GlobalNamespace::MissionCompletionResults::__cordl_internal_get_missionObjectiveResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectiveResults;
}
constexpr void GlobalNamespace::MissionCompletionResults::__cordl_internal_set_missionObjectiveResults(
    ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionObjectiveResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::MissionCompletionResults::get_IsMissionComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionCompletionResults*>::get(),
                                                                             "get_IsMissionComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionCompletionResults*
GlobalNamespace::MissionCompletionResults::New_ctor(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                    ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> missionObjectiveResults) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionCompletionResults*>(levelCompletionResults, missionObjectiveResults));
}
inline void GlobalNamespace::MissionCompletionResults::_ctor(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                             ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> missionObjectiveResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionCompletionResults*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults, missionObjectiveResults);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionCompletionResults::MissionCompletionResults() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
