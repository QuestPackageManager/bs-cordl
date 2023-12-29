#pragma once
#include "Org/BouncyCastle/Tsp/zzzz__TspException_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TspValidationException_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspValidationException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TspValidationException::*)(::StringW)>(
    &::Org::BouncyCastle::Tsp::TspValidationException::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10dfd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspValidationException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspValidationException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TspValidationException::*)(::StringW, int32_t)>(
    &::Org::BouncyCastle::Tsp::TspValidationException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x10de918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspValidationException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspValidationException.get_FailureCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Tsp::TspValidationException::*)()>(
    &::Org::BouncyCastle::Tsp::TspValidationException::get_FailureCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10e5c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspValidationException*>::get(),
                                                                               "get_FailureCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Tsp::TspValidationException::__get_failureCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failureCode;
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TspValidationException::__get_failureCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failureCode;
}
constexpr void Org::BouncyCastle::Tsp::TspValidationException::__set_failureCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failureCode = value;
}
inline ::Org::BouncyCastle::Tsp::TspValidationException* Org::BouncyCastle::Tsp::TspValidationException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Tsp::TspValidationException*>(message));
}
inline void Org::BouncyCastle::Tsp::TspValidationException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspValidationException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Org::BouncyCastle::Tsp::TspValidationException* Org::BouncyCastle::Tsp::TspValidationException::New_ctor(::StringW message, int32_t failureCode) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Tsp::TspValidationException*>(message, failureCode));
}
inline void Org::BouncyCastle::Tsp::TspValidationException::_ctor(::StringW message, int32_t failureCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspValidationException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, failureCode);
}
inline int32_t Org::BouncyCastle::Tsp::TspValidationException::get_FailureCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspValidationException*>::get(),
                                                                             "get_FailureCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TspValidationException::TspValidationException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
