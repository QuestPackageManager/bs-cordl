#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPlatformEntitlement.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlatformEntitlement_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlatformEntitlement.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlatformEntitlement::*)()>(&::GlobalNamespace::MockPlatformEntitlement::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36fd6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformEntitlement*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformEntitlement.get_status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EntitlementStatus (::GlobalNamespace::MockPlatformEntitlement::*)()>(
    &::GlobalNamespace::MockPlatformEntitlement::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36fd6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformEntitlement*>(), { "get_status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformEntitlement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlatformEntitlement::*)(::StringW, ::GlobalNamespace::EntitlementStatus)>(
    &::GlobalNamespace::MockPlatformEntitlement::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36fc508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformEntitlement*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::EntitlementStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformEntitlement.GetIt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlatformEntitlement::*)()>(&::GlobalNamespace::MockPlatformEntitlement::GetIt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36fc4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformEntitlement*>(), { "GetIt", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MockPlatformEntitlement::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr ::StringW const& GlobalNamespace::MockPlatformEntitlement::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::MockPlatformEntitlement::__cordl_internal_set__id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::GlobalNamespace::EntitlementStatus& GlobalNamespace::MockPlatformEntitlement::__cordl_internal_get__status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr ::GlobalNamespace::EntitlementStatus const& GlobalNamespace::MockPlatformEntitlement::__cordl_internal_get__status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr void GlobalNamespace::MockPlatformEntitlement::__cordl_internal_set__status(::GlobalNamespace::EntitlementStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status = value;
}
inline ::StringW GlobalNamespace::MockPlatformEntitlement::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformEntitlement*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::EntitlementStatus GlobalNamespace::MockPlatformEntitlement::get_status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformEntitlement*>(), { "get_status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EntitlementStatus>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlatformEntitlement::_ctor(::StringW id, ::GlobalNamespace::EntitlementStatus status) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformEntitlement*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::EntitlementStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, status);
}
inline void GlobalNamespace::MockPlatformEntitlement::GetIt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlatformEntitlement*>(), { "GetIt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockPlatformEntitlement* GlobalNamespace::MockPlatformEntitlement::New_ctor(::StringW id, ::GlobalNamespace::EntitlementStatus status) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlatformEntitlement*>(id, status));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlatformEntitlement::MockPlatformEntitlement() {}
