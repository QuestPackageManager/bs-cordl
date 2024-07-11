#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/PresetOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/PerformancePresets/zzzz__PresetOverride_def.hpp"
//  Writing Method size for method: ::BeatSaber::PerformancePresets::PresetOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::PerformancePresets::PresetOverride::*)()>(
    &::BeatSaber::PerformancePresets::PresetOverride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1074218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::PerformancePresets::PresetOverride*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::PerformancePresets::PresetOverride::__cordl_internal_get_presetName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presetName;
}
constexpr ::StringW const& BeatSaber::PerformancePresets::PresetOverride::__cordl_internal_get_presetName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presetName;
}
constexpr void BeatSaber::PerformancePresets::PresetOverride::__cordl_internal_set_presetName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___presetName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaber::PerformancePresets::PresetOverride::__cordl_internal_get_depthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr bool const& BeatSaber::PerformancePresets::PresetOverride::__cordl_internal_get_depthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr void BeatSaber::PerformancePresets::PresetOverride::__cordl_internal_set_depthTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthTexture = value;
}
inline ::BeatSaber::PerformancePresets::PresetOverride* BeatSaber::PerformancePresets::PresetOverride::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::PerformancePresets::PresetOverride*>());
}
inline void BeatSaber::PerformancePresets::PresetOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::PerformancePresets::PresetOverride*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::PerformancePresets::PresetOverride::PresetOverride() {}
