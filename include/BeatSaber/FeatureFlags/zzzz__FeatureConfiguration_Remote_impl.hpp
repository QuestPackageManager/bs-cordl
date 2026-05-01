#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureConfiguration_Remote.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Remote_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FeatureConfiguration_Remote._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FeatureConfiguration_Remote::*)(::StringW, bool)>(
    &::GlobalNamespace::FeatureConfiguration_Remote::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31f4ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FeatureConfiguration_Remote*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_get_feature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feature;
}
constexpr ::StringW const& GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_get_feature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feature;
}
constexpr void GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_set_feature(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___feature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_get_defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValue;
}
constexpr bool const& GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_get_defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValue;
}
constexpr void GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_set_defaultValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultValue = value;
}
inline void GlobalNamespace::FeatureConfiguration_Remote::_ctor(::StringW feature, bool defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FeatureConfiguration_Remote*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, feature, defaultValue);
}
inline ::GlobalNamespace::FeatureConfiguration_Remote* GlobalNamespace::FeatureConfiguration_Remote::New_ctor(::StringW feature, bool defaultValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FeatureConfiguration_Remote*>(feature, defaultValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FeatureConfiguration_Remote::FeatureConfiguration_Remote() {}
