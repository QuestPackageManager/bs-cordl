#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\ClientInterface\AttemptData.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__AttemptData_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::AttemptData.get_ended
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::OculusStudios::GraphQL::ClientInterface::AttemptData::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::AttemptData::get_ended)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "get_ended", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::AttemptData.get_rawResponseData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::GraphQL::ClientInterface::AttemptData::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::AttemptData::get_rawResponseData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "get_rawResponseData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::AttemptData.get_exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::OculusStudios::GraphQL::ClientInterface::AttemptData::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::AttemptData::get_exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "get_exception", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::AttemptData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::AttemptData::*)()>(&::OculusStudios::GraphQL::ClientInterface::AttemptData::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f2c910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::AttemptData.FinishAttempt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::AttemptData::*)()>(&::OculusStudios::GraphQL::ClientInterface::AttemptData::FinishAttempt)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f2c980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "FinishAttempt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::AttemptData.IsFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::GraphQL::ClientInterface::AttemptData::*)()>(&::OculusStudios::GraphQL::ClientInterface::AttemptData::IsFinished)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f2c9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "IsFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::AttemptData.RegisterRawResponseData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::AttemptData::*)(::StringW)>(
    &::OculusStudios::GraphQL::ClientInterface::AttemptData::RegisterRawResponseData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f2ca58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "RegisterRawResponseData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::AttemptData.RegisterException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::AttemptData::*)(::System::Exception*)>(
    &::OculusStudios::GraphQL::ClientInterface::AttemptData::RegisterException)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f2cab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "RegisterException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_get_started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr ::System::DateTime const& OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_get_started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr void OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_set_started(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___started = value;
}
constexpr ::System::DateTime& OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_get__ended() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ended;
}
constexpr ::System::DateTime const& OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_get__ended() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ended;
}
constexpr void OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_set__ended(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ended = value;
}
constexpr ::StringW& OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_get__rawResponseData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rawResponseData;
}
constexpr ::StringW const& OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_get__rawResponseData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rawResponseData;
}
constexpr void OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_set__rawResponseData(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rawResponseData = value;
}
constexpr ::System::Exception*& OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_get__exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr ::System::Exception* const& OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_get__exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr void OculusStudios::GraphQL::ClientInterface::AttemptData::__cordl_internal_set__exception(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exception = value;
}
inline ::System::DateTime OculusStudios::GraphQL::ClientInterface::AttemptData::get_ended() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "get_ended", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::StringW OculusStudios::GraphQL::ClientInterface::AttemptData::get_rawResponseData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "get_rawResponseData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Exception* OculusStudios::GraphQL::ClientInterface::AttemptData::get_exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "get_exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::AttemptData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::AttemptData::FinishAttempt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "FinishAttempt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OculusStudios::GraphQL::ClientInterface::AttemptData::IsFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "IsFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::AttemptData::RegisterRawResponseData(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "RegisterRawResponseData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void OculusStudios::GraphQL::ClientInterface::AttemptData::RegisterException(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::AttemptData*>(), { "RegisterException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::OculusStudios::GraphQL::ClientInterface::AttemptData* OculusStudios::GraphQL::ClientInterface::AttemptData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::ClientInterface::AttemptData*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::AttemptData::AttemptData() {}
