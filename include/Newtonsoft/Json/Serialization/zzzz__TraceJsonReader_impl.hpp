#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/TraceJsonReader.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__TraceJsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonReader::*)(::Newtonsoft::Json::JsonReader*)>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d58424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.GetDeserializedJsonMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::GetDeserializedJsonMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d58570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { "GetDeserializedJsonMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::Read)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d5858c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsInt32)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d58604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d58648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBytes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d5868c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Decimal> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDecimal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d586d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDouble)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d5875c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBoolean)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d587a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d587ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTimeOffset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d58838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.WriteCurrentToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::WriteCurrentToken)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d585d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { "WriteCurrentToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_Depth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d58894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_Path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_Path)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d588b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d588d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.set_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonReader::*)(char16_t)>(&::Newtonsoft::Json::Serialization::TraceJsonReader::set_QuoteChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d588f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_TokenType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonToken (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::get_TokenType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d58914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_Value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d58934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_ValueType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d58954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::Close)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d58974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.Newtonsoft_Json_IJsonLineInfo_HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_HasLineInfo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d58994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { "Newtonsoft.Json.IJsonLineInfo.HasLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.Newtonsoft_Json_IJsonLineInfo_get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d58a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { "Newtonsoft.Json.IJsonLineInfo.get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.Newtonsoft_Json_IJsonLineInfo_get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d58b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { "Newtonsoft.Json.IJsonLineInfo.get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::JsonReader*& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__innerReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerReader;
}
constexpr ::Newtonsoft::Json::JsonReader* const& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__innerReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerReader;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_set__innerReader(::Newtonsoft::Json::JsonReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____innerReader = value;
}
constexpr ::Newtonsoft::Json::JsonTextWriter*& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__textWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textWriter;
}
constexpr ::Newtonsoft::Json::JsonTextWriter* const& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__textWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textWriter;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_set__textWriter(::Newtonsoft::Json::JsonTextWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textWriter = value;
}
constexpr ::System::IO::StringWriter*& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__sw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sw;
}
constexpr ::System::IO::StringWriter* const& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__sw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sw;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_set__sw(::System::IO::StringWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sw = value;
}
inline void Newtonsoft::Json::Serialization::TraceJsonReader::_ctor(::Newtonsoft::Json::JsonReader* innerReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerReader);
}
inline ::StringW Newtonsoft::Json::Serialization::TraceJsonReader::GetDeserializedJsonMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { "GetDeserializedJsonMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Serialization::TraceJsonReader::Read() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsInt32() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDecimal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>>(this, ___internal_method);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDouble() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(this, ___internal_method);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBoolean() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTimeOffset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonReader::WriteCurrentToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { "WriteCurrentToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Serialization::TraceJsonReader::get_Depth() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::TraceJsonReader::get_Path() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline char16_t Newtonsoft::Json::Serialization::TraceJsonReader::get_QuoteChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonReader::set_QuoteChar(char16_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonToken Newtonsoft::Json::Serialization::TraceJsonReader::get_TokenType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonToken>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Serialization::TraceJsonReader::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Type* Newtonsoft::Json::Serialization::TraceJsonReader::get_ValueType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonReader::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_HasLineInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { "Newtonsoft.Json.IJsonLineInfo.HasLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LineNumber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { "Newtonsoft.Json.IJsonLineInfo.get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LinePosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonReader*>(), { "Newtonsoft.Json.IJsonLineInfo.get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::TraceJsonReader* Newtonsoft::Json::Serialization::TraceJsonReader::New_ctor(::Newtonsoft::Json::JsonReader* innerReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::TraceJsonReader*>(innerReader));
}
/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr Newtonsoft::Json::Serialization::TraceJsonReader::operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept {
  return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* Newtonsoft::Json::Serialization::TraceJsonReader::i___Newtonsoft__Json__IJsonLineInfo() noexcept {
  return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::TraceJsonReader::TraceJsonReader() {}
