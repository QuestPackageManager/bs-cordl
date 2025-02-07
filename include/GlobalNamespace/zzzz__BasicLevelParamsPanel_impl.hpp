#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicLevelParamsPanel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BasicLevelParamsPanel_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicLevelParamsPanel.set_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicLevelParamsPanel::*)(float_t)>(
    &::GlobalNamespace::BasicLevelParamsPanel::set_duration)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3b041f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicLevelParamsPanel*>::get(), "set_duration", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicLevelParamsPanel.set_bpm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicLevelParamsPanel::*)(float_t)>(&::GlobalNamespace::BasicLevelParamsPanel::set_bpm)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3b04228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicLevelParamsPanel*>::get(), "set_bpm", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicLevelParamsPanel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicLevelParamsPanel::*)()>(&::GlobalNamespace::BasicLevelParamsPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b04270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicLevelParamsPanel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_get__durationText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_get__durationText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____durationText;
}
constexpr void GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_set__durationText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____durationText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_get__bpmText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_get__bpmText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmText;
}
constexpr void GlobalNamespace::BasicLevelParamsPanel::__cordl_internal_set__bpmText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpmText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BasicLevelParamsPanel::set_duration(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicLevelParamsPanel*>::get(), "set_duration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BasicLevelParamsPanel::set_bpm(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicLevelParamsPanel*>::get(), "set_bpm",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BasicLevelParamsPanel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicLevelParamsPanel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicLevelParamsPanel* GlobalNamespace::BasicLevelParamsPanel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BasicLevelParamsPanel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicLevelParamsPanel::BasicLevelParamsPanel() {}
