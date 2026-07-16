#pragma once
// IWYU pragma private; include "UnityEngine/Assertions/AssertionException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/Assertions/zzzz__AssertionException_def.hpp"
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Assertions::AssertionException::*)(::StringW, ::StringW)>(&::UnityEngine::Assertions::AssertionException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b03938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Assertions::AssertionException::*)()>(&::UnityEngine::Assertions::AssertionException::get_Message)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b04328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionException*>(), { ::i2c::class_of<::UnityEngine::Assertions::AssertionException*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Assertions::AssertionException::__cordl_internal_get_m_UserMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserMessage;
}
constexpr ::StringW const& UnityEngine::Assertions::AssertionException::__cordl_internal_get_m_UserMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserMessage;
}
constexpr void UnityEngine::Assertions::AssertionException::__cordl_internal_set_m_UserMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UserMessage = value;
}
inline void UnityEngine::Assertions::AssertionException::_ctor(::StringW message, ::StringW userMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, userMessage);
}
inline ::StringW UnityEngine::Assertions::AssertionException::get_Message() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Assertions::AssertionException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Assertions::AssertionException* UnityEngine::Assertions::AssertionException::New_ctor(::StringW message, ::StringW userMessage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Assertions::AssertionException*>(message, userMessage));
}
// Ctor Parameters []
constexpr ::UnityEngine::Assertions::AssertionException::AssertionException() {}
