#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SubsystemsAnalyticInfo.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::SubsystemsAnalyticInfo::*)()>(&::UnityEngine::Analytics::SubsystemsAnalyticInfo::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e21404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticInfo.CreateSubsystemsAnalyticInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::SubsystemsAnalyticInfo* (*)()>(&::UnityEngine::Analytics::SubsystemsAnalyticInfo::CreateSubsystemsAnalyticInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e21498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticInfo*>(), { "CreateSubsystemsAnalyticInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
constexpr ::StringW& UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_get_plugin_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___plugin_name;
}
constexpr ::StringW const& UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_get_plugin_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___plugin_name;
}
constexpr void UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_set_plugin_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___plugin_name = value;
}
constexpr ::StringW& UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::StringW& UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_get_library_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___library_name;
}
constexpr ::StringW const& UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_get_library_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___library_name;
}
constexpr void UnityEngine::Analytics::SubsystemsAnalyticInfo::__cordl_internal_set_library_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___library_name = value;
}
inline void UnityEngine::Analytics::SubsystemsAnalyticInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticInfo* UnityEngine::Analytics::SubsystemsAnalyticInfo::CreateSubsystemsAnalyticInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::SubsystemsAnalyticInfo*>(), { "CreateSubsystemsAnalyticInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::SubsystemsAnalyticInfo*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticInfo* UnityEngine::Analytics::SubsystemsAnalyticInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::SubsystemsAnalyticInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::SubsystemsAnalyticInfo::SubsystemsAnalyticInfo() {}
