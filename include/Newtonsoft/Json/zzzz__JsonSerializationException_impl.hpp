#pragma once
// IWYU pragma private; include "Newtonsoft\Json\JsonSerializationException.hpp"
#include "Newtonsoft/Json/zzzz__JsonException_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializationException_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonSerializationException::*)()>(&::Newtonsoft::Json::JsonSerializationException::get_LineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cde7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { "get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonSerializationException::*)()>(&::Newtonsoft::Json::JsonSerializationException::get_LinePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cde7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { "get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException.get_Path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonSerializationException::*)()>(&::Newtonsoft::Json::JsonSerializationException::get_Path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cde7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { "get_Path", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializationException::*)()>(&::Newtonsoft::Json::JsonSerializationException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cde7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializationException::*)(::StringW)>(&::Newtonsoft::Json::JsonSerializationException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cde7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializationException::*)(::StringW, ::System::Exception*)>(
    &::Newtonsoft::Json::JsonSerializationException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cde800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializationException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::Newtonsoft::Json::JsonSerializationException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cde804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializationException::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Exception*)>(
    &::Newtonsoft::Json::JsonSerializationException::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cde808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializationException* (*)(::Newtonsoft::Json::JsonReader*, ::StringW)>(
    &::Newtonsoft::Json::JsonSerializationException::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd62d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
                                                                                           { "Create", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializationException* (*)(::Newtonsoft::Json::JsonReader*, ::StringW, ::System::Exception*)>(
    &::Newtonsoft::Json::JsonSerializationException::Create)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cde844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
                                                { "Create", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializationException.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializationException* (*)(::Newtonsoft::Json::IJsonLineInfo*, ::StringW, ::StringW, ::System::Exception*)>(
    &::Newtonsoft::Json::JsonSerializationException::Create)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5cde8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
            { "Create", {}, { ::i2c::type_of<::Newtonsoft::Json::IJsonLineInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::JsonSerializationException::__cordl_internal_get__LineNumber_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LineNumber_k__BackingField;
}
constexpr int32_t const& Newtonsoft::Json::JsonSerializationException::__cordl_internal_get__LineNumber_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LineNumber_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializationException::__cordl_internal_set__LineNumber_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LineNumber_k__BackingField = value;
}
constexpr int32_t& Newtonsoft::Json::JsonSerializationException::__cordl_internal_get__LinePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LinePosition_k__BackingField;
}
constexpr int32_t const& Newtonsoft::Json::JsonSerializationException::__cordl_internal_get__LinePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LinePosition_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializationException::__cordl_internal_set__LinePosition_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LinePosition_k__BackingField = value;
}
constexpr ::StringW& Newtonsoft::Json::JsonSerializationException::__cordl_internal_get__Path_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Path_k__BackingField;
}
constexpr ::StringW const& Newtonsoft::Json::JsonSerializationException::__cordl_internal_get__Path_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Path_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializationException::__cordl_internal_set__Path_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Path_k__BackingField = value;
}
inline int32_t Newtonsoft::Json::JsonSerializationException::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { "get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonSerializationException::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { "get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonSerializationException::get_Path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { "get_Path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializationException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializationException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Newtonsoft::Json::JsonSerializationException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline void Newtonsoft::Json::JsonSerializationException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void Newtonsoft::Json::JsonSerializationException::_ctor(::StringW message, ::StringW path, int32_t lineNumber, int32_t linePosition, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, path, lineNumber, linePosition, innerException);
}
inline ::Newtonsoft::Json::JsonSerializationException* Newtonsoft::Json::JsonSerializationException::Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializationException*>(nullptr, ___internal_method, reader, message);
}
inline ::Newtonsoft::Json::JsonSerializationException* Newtonsoft::Json::JsonSerializationException::Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message, ::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
                                              { "Create", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializationException*>(nullptr, ___internal_method, reader, message, ex);
}
inline ::Newtonsoft::Json::JsonSerializationException* Newtonsoft::Json::JsonSerializationException::Create(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::StringW message,
                                                                                                            ::System::Exception* ex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Newtonsoft::Json::JsonSerializationException*>(),
                       { "Create", {}, { ::i2c::type_of<::Newtonsoft::Json::IJsonLineInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializationException*>(nullptr, ___internal_method, lineInfo, path, message, ex);
}
inline ::Newtonsoft::Json::JsonSerializationException* Newtonsoft::Json::JsonSerializationException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonSerializationException*>());
}
inline ::Newtonsoft::Json::JsonSerializationException* Newtonsoft::Json::JsonSerializationException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonSerializationException*>(message));
}
inline ::Newtonsoft::Json::JsonSerializationException* Newtonsoft::Json::JsonSerializationException::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonSerializationException*>(message, innerException));
}
inline ::Newtonsoft::Json::JsonSerializationException* Newtonsoft::Json::JsonSerializationException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                              ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonSerializationException*>(info, context));
}
inline ::Newtonsoft::Json::JsonSerializationException* Newtonsoft::Json::JsonSerializationException::New_ctor(::StringW message, ::StringW path, int32_t lineNumber, int32_t linePosition,
                                                                                                              ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonSerializationException*>(message, path, lineNumber, linePosition, innerException));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonSerializationException::JsonSerializationException() {}
