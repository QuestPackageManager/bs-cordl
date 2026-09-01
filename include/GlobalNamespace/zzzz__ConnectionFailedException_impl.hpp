#pragma once
// IWYU pragma private; include "GlobalNamespace\ConnectionFailedException.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedException_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectionFailedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectionFailedException::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::ConnectionFailedException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x332e1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionFailedException*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectionFailedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectionFailedException::*)(::GlobalNamespace::ConnectionFailedReason, ::StringW)>(
    &::GlobalNamespace::ConnectionFailedException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x332e230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionFailedException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ConnectionFailedReason& GlobalNamespace::ConnectionFailedException::__cordl_internal_get_reason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reason;
}
constexpr ::GlobalNamespace::ConnectionFailedReason const& GlobalNamespace::ConnectionFailedException::__cordl_internal_get_reason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reason;
}
constexpr void GlobalNamespace::ConnectionFailedException::__cordl_internal_set_reason(::GlobalNamespace::ConnectionFailedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reason = value;
}
inline void GlobalNamespace::ConnectionFailedException::_ctor(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionFailedException*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void GlobalNamespace::ConnectionFailedException::_ctor(::GlobalNamespace::ConnectionFailedReason reason, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionFailedException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason, message);
}
inline ::GlobalNamespace::ConnectionFailedException* GlobalNamespace::ConnectionFailedException::New_ctor(::GlobalNamespace::ConnectionFailedReason reason) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConnectionFailedException*>(reason));
}
inline ::GlobalNamespace::ConnectionFailedException* GlobalNamespace::ConnectionFailedException::New_ctor(::GlobalNamespace::ConnectionFailedReason reason, ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConnectionFailedException*>(reason, message));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectionFailedException::ConnectionFailedException() {}
