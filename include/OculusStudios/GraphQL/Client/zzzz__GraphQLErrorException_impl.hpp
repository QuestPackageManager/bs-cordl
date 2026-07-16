#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLErrorException.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLErrorException_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLErrorException.get_Class
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::GraphQL::Client::GraphQLErrorException::*)()>(&::OculusStudios::GraphQL::Client::GraphQLErrorException::get_Class)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1f7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { "get_Class", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLErrorException.set_Class
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLErrorException::*)(::StringW)>(
    &::OculusStudios::GraphQL::Client::GraphQLErrorException::set_Class)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1f804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { "set_Class", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLErrorException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::GraphQL::Client::GraphQLErrorException::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLErrorException::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1f80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { "get_Message", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLErrorException.set_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLErrorException::*)(::StringW)>(
    &::OculusStudios::GraphQL::Client::GraphQLErrorException::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1f814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { "set_Message", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLErrorException.get_StackTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::OculusStudios::GraphQL::Client::GraphQLErrorException::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLErrorException::get_StackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1f81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { "get_StackTrace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLErrorException.set_StackTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLErrorException::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::OculusStudios::GraphQL::Client::GraphQLErrorException::set_StackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1f824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(),
                                                                                           { "set_StackTrace", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLErrorException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLErrorException::*)()>(&::OculusStudios::GraphQL::Client::GraphQLErrorException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1f82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLErrorException::__cordl_internal_get__Class_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Class_k__BackingField;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLErrorException::__cordl_internal_get__Class_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Class_k__BackingField;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLErrorException::__cordl_internal_set__Class_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Class_k__BackingField = value;
}
constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLErrorException::__cordl_internal_get__Message_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Message_k__BackingField;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLErrorException::__cordl_internal_get__Message_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Message_k__BackingField;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLErrorException::__cordl_internal_set__Message_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Message_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& OculusStudios::GraphQL::Client::GraphQLErrorException::__cordl_internal_get__StackTrace_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StackTrace_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& OculusStudios::GraphQL::Client::GraphQLErrorException::__cordl_internal_get__StackTrace_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StackTrace_k__BackingField;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLErrorException::__cordl_internal_set__StackTrace_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StackTrace_k__BackingField = value;
}
inline ::StringW OculusStudios::GraphQL::Client::GraphQLErrorException::get_Class() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { "get_Class", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLErrorException::set_Class(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { "set_Class", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW OculusStudios::GraphQL::Client::GraphQLErrorException::get_Message() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { "get_Message", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLErrorException::set_Message(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { "set_Message", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* OculusStudios::GraphQL::Client::GraphQLErrorException::get_StackTrace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { "get_StackTrace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLErrorException::set_StackTrace(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(),
                                                                                         { "set_StackTrace", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::GraphQLErrorException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLErrorException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLErrorException* OculusStudios::GraphQL::Client::GraphQLErrorException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLErrorException*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLErrorException::GraphQLErrorException() {}
