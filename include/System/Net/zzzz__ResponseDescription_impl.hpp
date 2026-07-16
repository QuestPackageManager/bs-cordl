#pragma once
// IWYU pragma private; include "System/Net/ResponseDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ResponseDescription_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Net::ResponseDescription.get_PositiveIntermediate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ResponseDescription::*)()>(&::System::Net::ResponseDescription::get_PositiveIntermediate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63f86cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { "get_PositiveIntermediate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ResponseDescription.get_PositiveCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ResponseDescription::*)()>(&::System::Net::ResponseDescription::get_PositiveCompletion)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63f86e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { "get_PositiveCompletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ResponseDescription.get_TransientFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ResponseDescription::*)()>(&::System::Net::ResponseDescription::get_TransientFailure)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63f86f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { "get_TransientFailure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ResponseDescription.get_PermanentFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ResponseDescription::*)()>(&::System::Net::ResponseDescription::get_PermanentFailure)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63f8708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { "get_PermanentFailure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ResponseDescription.get_InvalidStatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ResponseDescription::*)()>(&::System::Net::ResponseDescription::get_InvalidStatusCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63f871c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { "get_InvalidStatusCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ResponseDescription._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ResponseDescription::*)()>(&::System::Net::ResponseDescription::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63f8730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::ResponseDescription::__cordl_internal_get_Multiline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Multiline;
}
constexpr bool const& System::Net::ResponseDescription::__cordl_internal_get_Multiline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Multiline;
}
constexpr void System::Net::ResponseDescription::__cordl_internal_set_Multiline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Multiline = value;
}
constexpr int32_t& System::Net::ResponseDescription::__cordl_internal_get_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr int32_t const& System::Net::ResponseDescription::__cordl_internal_get_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr void System::Net::ResponseDescription::__cordl_internal_set_Status(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Status = value;
}
constexpr ::StringW& System::Net::ResponseDescription::__cordl_internal_get_StatusDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusDescription;
}
constexpr ::StringW const& System::Net::ResponseDescription::__cordl_internal_get_StatusDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusDescription;
}
constexpr void System::Net::ResponseDescription::__cordl_internal_set_StatusDescription(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StatusDescription = value;
}
constexpr ::System::Text::StringBuilder*& System::Net::ResponseDescription::__cordl_internal_get_StatusBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusBuffer;
}
constexpr ::System::Text::StringBuilder* const& System::Net::ResponseDescription::__cordl_internal_get_StatusBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusBuffer;
}
constexpr void System::Net::ResponseDescription::__cordl_internal_set_StatusBuffer(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StatusBuffer = value;
}
constexpr ::StringW& System::Net::ResponseDescription::__cordl_internal_get_StatusCodeString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusCodeString;
}
constexpr ::StringW const& System::Net::ResponseDescription::__cordl_internal_get_StatusCodeString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusCodeString;
}
constexpr void System::Net::ResponseDescription::__cordl_internal_set_StatusCodeString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StatusCodeString = value;
}
inline bool System::Net::ResponseDescription::get_PositiveIntermediate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { "get_PositiveIntermediate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::ResponseDescription::get_PositiveCompletion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { "get_PositiveCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::ResponseDescription::get_TransientFailure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { "get_TransientFailure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::ResponseDescription::get_PermanentFailure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { "get_PermanentFailure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::ResponseDescription::get_InvalidStatusCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { "get_InvalidStatusCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::ResponseDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ResponseDescription*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::ResponseDescription* System::Net::ResponseDescription::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ResponseDescription*>());
}
// Ctor Parameters []
constexpr ::System::Net::ResponseDescription::ResponseDescription() {}
