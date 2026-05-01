#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureConfiguration_RemoteWithDependency.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Remote_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_RemoteWithDependency_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FeatureConfiguration_RemoteWithDependency._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FeatureConfiguration_RemoteWithDependency::*)(
    ::StringW, bool, ::BeatSaber::FeatureFlags::Feature)>(&::GlobalNamespace::FeatureConfiguration_RemoteWithDependency::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x31f4ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::FeatureFlags::Feature& GlobalNamespace::FeatureConfiguration_RemoteWithDependency::__cordl_internal_get_dependency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dependency;
}
constexpr ::BeatSaber::FeatureFlags::Feature const& GlobalNamespace::FeatureConfiguration_RemoteWithDependency::__cordl_internal_get_dependency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dependency;
}
constexpr void GlobalNamespace::FeatureConfiguration_RemoteWithDependency::__cordl_internal_set_dependency(::BeatSaber::FeatureFlags::Feature value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dependency = value;
}
inline void GlobalNamespace::FeatureConfiguration_RemoteWithDependency::_ctor(::StringW feature, bool defaultValue, ::BeatSaber::FeatureFlags::Feature dependency) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, feature, defaultValue, dependency);
}
inline ::GlobalNamespace::FeatureConfiguration_RemoteWithDependency* GlobalNamespace::FeatureConfiguration_RemoteWithDependency::New_ctor(::StringW feature, bool defaultValue,
                                                                                                                                          ::BeatSaber::FeatureFlags::Feature dependency) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*>(feature, defaultValue, dependency));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FeatureConfiguration_RemoteWithDependency::FeatureConfiguration_RemoteWithDependency() {}
