#pragma once
// IWYU pragma private; include "GlobalNamespace\AppIdentificationSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AppIdentificationSO_def.hpp"
#include "GlobalNamespace/zzzz__IAppIdentification_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppIdentificationSO.get_appId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::AppIdentificationSO::*)()>(&::GlobalNamespace::AppIdentificationSO::get_appId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3704c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppIdentificationSO*>(), { "get_appId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppIdentificationSO.get_graphAppId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::AppIdentificationSO::*)()>(&::GlobalNamespace::AppIdentificationSO::get_graphAppId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3704c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppIdentificationSO*>(), { "get_graphAppId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppIdentificationSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppIdentificationSO::*)()>(&::GlobalNamespace::AppIdentificationSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3704c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppIdentificationSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint64_t& GlobalNamespace::AppIdentificationSO::__cordl_internal_get__appId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr uint64_t const& GlobalNamespace::AppIdentificationSO::__cordl_internal_get__appId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr void GlobalNamespace::AppIdentificationSO::__cordl_internal_set__appId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appId = value;
}
constexpr uint64_t& GlobalNamespace::AppIdentificationSO::__cordl_internal_get__graphAppId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAppId;
}
constexpr uint64_t const& GlobalNamespace::AppIdentificationSO::__cordl_internal_get__graphAppId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAppId;
}
constexpr void GlobalNamespace::AppIdentificationSO::__cordl_internal_set__graphAppId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphAppId = value;
}
inline uint64_t GlobalNamespace::AppIdentificationSO::get_appId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppIdentificationSO*>(), { "get_appId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::AppIdentificationSO::get_graphAppId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppIdentificationSO*>(), { "get_graphAppId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void GlobalNamespace::AppIdentificationSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppIdentificationSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AppIdentificationSO* GlobalNamespace::AppIdentificationSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AppIdentificationSO*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAppIdentification"
constexpr GlobalNamespace::AppIdentificationSO::operator ::GlobalNamespace::IAppIdentification*() noexcept {
  return static_cast<::GlobalNamespace::IAppIdentification*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAppIdentification"
constexpr ::GlobalNamespace::IAppIdentification* GlobalNamespace::AppIdentificationSO::i___GlobalNamespace__IAppIdentification() noexcept {
  return static_cast<::GlobalNamespace::IAppIdentification*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppIdentificationSO::AppIdentificationSO() {}
