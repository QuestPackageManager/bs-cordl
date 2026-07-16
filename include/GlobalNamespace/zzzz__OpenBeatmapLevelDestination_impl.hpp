#pragma once
// IWYU pragma private; include "GlobalNamespace/OpenBeatmapLevelDestination.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__OpenBeatmapLevelDestination_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OpenBeatmapLevelDestination._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OpenBeatmapLevelDestination::*)(::StringW)>(&::GlobalNamespace::OpenBeatmapLevelDestination::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370519c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenBeatmapLevelDestination*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::OpenBeatmapLevelDestination::__cordl_internal_get_projectPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectPath;
}
constexpr ::StringW const& GlobalNamespace::OpenBeatmapLevelDestination::__cordl_internal_get_projectPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectPath;
}
constexpr void GlobalNamespace::OpenBeatmapLevelDestination::__cordl_internal_set_projectPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___projectPath = value;
}
inline void GlobalNamespace::OpenBeatmapLevelDestination::_ctor(::StringW projectPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OpenBeatmapLevelDestination*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectPath);
}
inline ::GlobalNamespace::OpenBeatmapLevelDestination* GlobalNamespace::OpenBeatmapLevelDestination::New_ctor(::StringW projectPath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OpenBeatmapLevelDestination*>(projectPath));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenBeatmapLevelDestination::OpenBeatmapLevelDestination() {}
