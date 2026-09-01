#pragma once
// IWYU pragma private; include "BeatSaber\FeatureFlags\FeatureConfiguration_RemoteWithDependency.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Remote_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_RemoteWithDependency_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FeatureConfiguration_RemoteWithDependency._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FeatureConfiguration_RemoteWithDependency::*)(::StringW, bool, ::BeatSaber::FeatureFlags::Feature)>(
    &::GlobalNamespace::FeatureConfiguration_RemoteWithDependency::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x328b78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::BeatSaber::FeatureFlags::Feature>() } })));
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::BeatSaber::FeatureFlags::Feature>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, defaultValue, dependency);
}
inline ::GlobalNamespace::FeatureConfiguration_RemoteWithDependency* GlobalNamespace::FeatureConfiguration_RemoteWithDependency::New_ctor(::StringW feature, bool defaultValue,
                                                                                                                                          ::BeatSaber::FeatureFlags::Feature dependency) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*>(feature, defaultValue, dependency));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FeatureConfiguration_RemoteWithDependency::FeatureConfiguration_RemoteWithDependency() {}
