#pragma once
// IWYU pragma private; include "GlobalNamespace/DisconnectedReasonMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReasonMethods_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisconnectedReasonMethods.LocalizedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::DisconnectedReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x373242c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisconnectedReasonMethods*>(), { "LocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisconnectedReasonMethods.ErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::DisconnectedReasonMethods::ErrorCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x373250c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisconnectedReasonMethods*>(), { "ErrorCode", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::DisconnectedReasonMethods::LocalizedKey(::GlobalNamespace::DisconnectedReason connectionFailedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisconnectedReasonMethods*>(), { "LocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, connectionFailedReason);
}
inline ::StringW GlobalNamespace::DisconnectedReasonMethods::ErrorCode(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisconnectedReasonMethods*>(), { "ErrorCode", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, disconnectedReason);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisconnectedReasonMethods::DisconnectedReasonMethods() {}
