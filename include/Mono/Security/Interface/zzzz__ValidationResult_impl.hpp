#pragma once
// IWYU pragma private; include "Mono/Security/Interface/ValidationResult.hpp"
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Interface/zzzz__ValidationResult_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::ValidationResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::ValidationResult::*)(
    bool, bool, int32_t, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>)>(&::Mono::Security::Interface::ValidationResult::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a9bc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Mono::Security::Interface::ValidationResult*>(),
            { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::ValidationResult.get_Trusted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Interface::ValidationResult::*)()>(&::Mono::Security::Interface::ValidationResult::get_Trusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9bc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::ValidationResult*>(), { "get_Trusted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::ValidationResult.get_UserDenied
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Interface::ValidationResult::*)()>(&::Mono::Security::Interface::ValidationResult::get_UserDenied)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9bc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::ValidationResult*>(), { "get_UserDenied", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::Interface::ValidationResult::__cordl_internal_get_trusted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trusted;
}
constexpr bool const& Mono::Security::Interface::ValidationResult::__cordl_internal_get_trusted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trusted;
}
constexpr void Mono::Security::Interface::ValidationResult::__cordl_internal_set_trusted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trusted = value;
}
constexpr bool& Mono::Security::Interface::ValidationResult::__cordl_internal_get_user_denied() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_denied;
}
constexpr bool const& Mono::Security::Interface::ValidationResult::__cordl_internal_get_user_denied() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_denied;
}
constexpr void Mono::Security::Interface::ValidationResult::__cordl_internal_set_user_denied(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___user_denied = value;
}
constexpr int32_t& Mono::Security::Interface::ValidationResult::__cordl_internal_get_error_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error_code;
}
constexpr int32_t const& Mono::Security::Interface::ValidationResult::__cordl_internal_get_error_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error_code;
}
constexpr void Mono::Security::Interface::ValidationResult::__cordl_internal_set_error_code(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error_code = value;
}
constexpr ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>& Mono::Security::Interface::ValidationResult::__cordl_internal_get_policy_errors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy_errors;
}
constexpr ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> const& Mono::Security::Interface::ValidationResult::__cordl_internal_get_policy_errors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy_errors;
}
constexpr void Mono::Security::Interface::ValidationResult::__cordl_internal_set_policy_errors(::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policy_errors = value;
}
inline void Mono::Security::Interface::ValidationResult::_ctor(bool trusted, bool user_denied, int32_t error_code,
                                                               ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Mono::Security::Interface::ValidationResult*>(),
          { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trusted, user_denied, error_code, policy_errors);
}
inline bool Mono::Security::Interface::ValidationResult::get_Trusted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::ValidationResult*>(), { "get_Trusted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Security::Interface::ValidationResult::get_UserDenied() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::ValidationResult*>(), { "get_UserDenied", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Security::Interface::ValidationResult* Mono::Security::Interface::ValidationResult::New_ctor(bool trusted, bool user_denied, int32_t error_code,
                                                                                                            ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Interface::ValidationResult*>(trusted, user_denied, error_code, policy_errors));
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::ValidationResult::ValidationResult() {}
