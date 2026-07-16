#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectionFailedReasonMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReasonMethods_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectionFailedReasonMethods.LocalizedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::ConnectionFailedReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3732268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionFailedReasonMethods*>(),
                                                                                           { "LocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectionFailedReasonMethods.ErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::ConnectionFailedReasonMethods::ErrorCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3732398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionFailedReasonMethods*>(), { "ErrorCode", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ConnectionFailedReasonMethods::LocalizedKey(::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionFailedReasonMethods*>(), { "LocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, connectionFailedReason);
}
inline ::StringW GlobalNamespace::ConnectionFailedReasonMethods::ErrorCode(::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionFailedReasonMethods*>(), { "ErrorCode", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, connectionFailedReason);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectionFailedReasonMethods::ConnectionFailedReasonMethods() {}
