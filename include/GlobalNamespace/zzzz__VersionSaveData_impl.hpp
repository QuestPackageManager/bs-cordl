#pragma once
// IWYU pragma private; include "GlobalNamespace\VersionSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VersionSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VersionSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VersionSaveData::*)()>(&::GlobalNamespace::VersionSaveData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37546ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VersionSaveData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::VersionSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& GlobalNamespace::VersionSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void GlobalNamespace::VersionSaveData::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
inline void GlobalNamespace::VersionSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VersionSaveData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VersionSaveData* GlobalNamespace::VersionSaveData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VersionSaveData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VersionSaveData::VersionSaveData() {}
