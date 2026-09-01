#pragma once
// IWYU pragma private; include "System\Net\Authorization.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
//  Writing Method size for method: ::System::Net::Authorization._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Authorization::*)(::StringW)>(&::System::Net::Authorization::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x640b830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Authorization*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Authorization::*)(::StringW, bool)>(&::System::Net::Authorization::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x640b8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Authorization*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Authorization::*)()>(&::System::Net::Authorization::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640b958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Authorization*>(), { "get_Message", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.get_Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Authorization::*)()>(&::System::Net::Authorization::get_Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640b960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Authorization*>(), { "get_Complete", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::Authorization::__cordl_internal_get_m_Message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Message;
}
constexpr ::StringW const& System::Net::Authorization::__cordl_internal_get_m_Message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Message;
}
constexpr void System::Net::Authorization::__cordl_internal_set_m_Message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Message = value;
}
constexpr bool& System::Net::Authorization::__cordl_internal_get_m_Complete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Complete;
}
constexpr bool const& System::Net::Authorization::__cordl_internal_get_m_Complete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Complete;
}
constexpr void System::Net::Authorization::__cordl_internal_set_m_Complete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Complete = value;
}
constexpr ::StringW& System::Net::Authorization::__cordl_internal_get_ModuleAuthenticationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ModuleAuthenticationType;
}
constexpr ::StringW const& System::Net::Authorization::__cordl_internal_get_ModuleAuthenticationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ModuleAuthenticationType;
}
constexpr void System::Net::Authorization::__cordl_internal_set_ModuleAuthenticationType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ModuleAuthenticationType = value;
}
inline void System::Net::Authorization::_ctor(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Authorization*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void System::Net::Authorization::_ctor(::StringW token, bool finished) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Authorization*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, finished);
}
inline ::StringW System::Net::Authorization::get_Message() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Authorization*>(), { "get_Message", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::Authorization::get_Complete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Authorization*>(), { "get_Complete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::Authorization* System::Net::Authorization::New_ctor(::StringW token) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Authorization*>(token));
}
inline ::System::Net::Authorization* System::Net::Authorization::New_ctor(::StringW token, bool finished) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Authorization*>(token, finished));
}
// Ctor Parameters []
constexpr ::System::Net::Authorization::Authorization() {}
