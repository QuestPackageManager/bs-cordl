#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncProtocolResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolResult_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolResult.get_UserResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::AsyncProtocolResult::*)()>(
    &::Mono::Net::Security::AsyncProtocolResult::get_UserResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c637cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult*>::get(),
                                                                               "get_UserResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolResult.get_Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::Mono::Net::Security::AsyncProtocolResult::*)()>(
    &::Mono::Net::Security::AsyncProtocolResult::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c637d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult*>::get(), "get_Error",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncProtocolResult::*)(int32_t)>(&::Mono::Net::Security::AsyncProtocolResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c637dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncProtocolResult::*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*)>(
    &::Mono::Net::Security::AsyncProtocolResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c63804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Net::Security::AsyncProtocolResult::__cordl_internal_get__UserResult_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserResult_k__BackingField;
}
constexpr int32_t const& Mono::Net::Security::AsyncProtocolResult::__cordl_internal_get__UserResult_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserResult_k__BackingField;
}
constexpr void Mono::Net::Security::AsyncProtocolResult::__cordl_internal_set__UserResult_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UserResult_k__BackingField = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& Mono::Net::Security::AsyncProtocolResult::__cordl_internal_get__Error_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Error_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> const&
Mono::Net::Security::AsyncProtocolResult::__cordl_internal_get__Error_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Error_k__BackingField;
}
constexpr void Mono::Net::Security::AsyncProtocolResult::__cordl_internal_set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Error_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t Mono::Net::Security::AsyncProtocolResult::get_UserResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult*>::get(),
                                                                             "get_UserResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Mono::Net::Security::AsyncProtocolResult::get_Error() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult*>::get(), "get_Error",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, false>(this, ___internal_method);
}
inline ::Mono::Net::Security::AsyncProtocolResult* Mono::Net::Security::AsyncProtocolResult::New_ctor(int32_t result) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Net::Security::AsyncProtocolResult*>(result));
}
inline void Mono::Net::Security::AsyncProtocolResult::_ctor(int32_t result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::Mono::Net::Security::AsyncProtocolResult* Mono::Net::Security::AsyncProtocolResult::New_ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Net::Security::AsyncProtocolResult*>(error));
}
inline void Mono::Net::Security::AsyncProtocolResult::_ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::AsyncProtocolResult::AsyncProtocolResult() {}
