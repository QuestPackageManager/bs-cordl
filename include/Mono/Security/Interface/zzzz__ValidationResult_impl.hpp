#pragma once
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Interface/zzzz__ValidationResult_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::ValidationResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::ValidationResult::*)(
    bool, bool, int32_t, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>)>(&::Mono::Security::Interface::ValidationResult::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24f15c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::ValidationResult.get_Trusted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::ValidationResult::*)()>(
    &::Mono::Security::Interface::ValidationResult::get_Trusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f1608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(),
                                                                               "get_Trusted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::ValidationResult.get_UserDenied
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::ValidationResult::*)()>(
    &::Mono::Security::Interface::ValidationResult::get_UserDenied)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f1610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(),
                                                                               "get_UserDenied", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
inline ::Mono::Security::Interface::ValidationResult* Mono::Security::Interface::ValidationResult::New_ctor(bool trusted, bool user_denied, int32_t error_code,
                                                                                                            ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Interface::ValidationResult*>(trusted, user_denied, error_code, policy_errors));
}
inline void Mono::Security::Interface::ValidationResult::_ctor(bool trusted, bool user_denied, int32_t error_code,
                                                               ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trusted, user_denied, error_code, policy_errors);
}
inline bool Mono::Security::Interface::ValidationResult::get_Trusted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(),
                                                                             "get_Trusted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Mono::Security::Interface::ValidationResult::get_UserDenied() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(),
                                                                             "get_UserDenied", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::ValidationResult::ValidationResult() {}
