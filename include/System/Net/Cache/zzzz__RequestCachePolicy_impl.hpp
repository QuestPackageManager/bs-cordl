#pragma once
// IWYU pragma private; include "System\Net\Cache\RequestCachePolicy.hpp"
#include "System/Net/Cache/zzzz__RequestCacheLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheLevel_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCachePolicy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Cache::RequestCachePolicy::*)(::System::Net::Cache::RequestCacheLevel)>(&::System::Net::Cache::RequestCachePolicy::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6357afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCachePolicy*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Cache::RequestCacheLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCachePolicy.get_Level
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCacheLevel (::System::Net::Cache::RequestCachePolicy::*)()>(&::System::Net::Cache::RequestCachePolicy::get_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6357bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCachePolicy*>(), { "get_Level", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCachePolicy.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Cache::RequestCachePolicy::*)()>(&::System::Net::Cache::RequestCachePolicy::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6357bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCachePolicy*>(), { ::i2c::class_of<::System::Net::Cache::RequestCachePolicy*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::Cache::RequestCacheLevel& System::Net::Cache::RequestCachePolicy::__cordl_internal_get_m_Level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Level;
}
constexpr ::System::Net::Cache::RequestCacheLevel const& System::Net::Cache::RequestCachePolicy::__cordl_internal_get_m_Level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Level;
}
constexpr void System::Net::Cache::RequestCachePolicy::__cordl_internal_set_m_Level(::System::Net::Cache::RequestCacheLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Level = value;
}
inline void System::Net::Cache::RequestCachePolicy::_ctor(::System::Net::Cache::RequestCacheLevel level) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCachePolicy*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Cache::RequestCacheLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline ::System::Net::Cache::RequestCacheLevel System::Net::Cache::RequestCachePolicy::get_Level() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCachePolicy*>(), { "get_Level", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheLevel>(this, ___internal_method);
}
inline ::StringW System::Net::Cache::RequestCachePolicy::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Cache::RequestCachePolicy*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::Cache::RequestCachePolicy::New_ctor(::System::Net::Cache::RequestCacheLevel level) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Cache::RequestCachePolicy*>(level));
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCachePolicy::RequestCachePolicy() {}
