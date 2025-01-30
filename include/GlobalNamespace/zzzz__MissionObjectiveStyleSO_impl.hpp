#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveStyleSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveStyleSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorStyleSO_def.hpp"
#include "GlobalNamespace/zzzz__TextStyleSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveStyleSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveStyleSO::*)()>(&::GlobalNamespace::MissionObjectiveStyleSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22813c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveStyleSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TextStyleSO>& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_titleTextStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleTextStyle;
}
constexpr ::UnityW<::GlobalNamespace::TextStyleSO> const& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_titleTextStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleTextStyle;
}
constexpr void GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_set_titleTextStyle(::UnityW<::GlobalNamespace::TextStyleSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___titleTextStyle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ColorStyleSO>& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_titleColorStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleColorStyle;
}
constexpr ::UnityW<::GlobalNamespace::ColorStyleSO> const& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_titleColorStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleColorStyle;
}
constexpr void GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_set_titleColorStyle(::UnityW<::GlobalNamespace::ColorStyleSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___titleColorStyle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ColorStyleSO>& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_backgroundColorStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColorStyle;
}
constexpr ::UnityW<::GlobalNamespace::ColorStyleSO> const& GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_get_backgroundColorStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColorStyle;
}
constexpr void GlobalNamespace::MissionObjectiveStyleSO::__cordl_internal_set_backgroundColorStyle(::UnityW<::GlobalNamespace::ColorStyleSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___backgroundColorStyle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionObjectiveStyleSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveStyleSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveStyleSO* GlobalNamespace::MissionObjectiveStyleSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionObjectiveStyleSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveStyleSO::MissionObjectiveStyleSO() {}
