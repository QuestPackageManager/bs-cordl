#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Bson\BsonWriter.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonWriter_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryWriter_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.get_DateTimeKindHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeKind (::Newtonsoft::Json::Bson::BsonWriter::*)()>(&::Newtonsoft::Json::Bson::BsonWriter::get_DateTimeKindHandling)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dae978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "get_DateTimeKindHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.set_DateTimeKindHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::DateTimeKind)>(&::Newtonsoft::Json::Bson::BsonWriter::set_DateTimeKindHandling)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dae990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "set_DateTimeKindHandling", {}, { ::i2c::type_of<::System::DateTimeKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::IO::Stream*)>(&::Newtonsoft::Json::Bson::BsonWriter::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5dae9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::IO::BinaryWriter*)>(&::Newtonsoft::Json::Bson::BsonWriter::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5daeaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)()>(&::Newtonsoft::Json::Bson::BsonWriter::Flush)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5daeb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5daeb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteComment)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5daec18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 124 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteStartConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5daec5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5daeca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteRawValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteRawValue)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5daece4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 85 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)()>(&::Newtonsoft::Json::Bson::BsonWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5daed28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)()>(&::Newtonsoft::Json::Bson::BsonWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5daedc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Bson::BsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5daee34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)()>(&::Newtonsoft::Json::Bson::BsonWriter::Close)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5daee60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.AddParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonWriter::AddParent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5daed9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "AddParent", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.RemoveParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)()>(&::Newtonsoft::Json::Bson::BsonWriter::RemoveParent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5daebfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "RemoveParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::Object*, ::Newtonsoft::Json::Bson::BsonType)>(
    &::Newtonsoft::Json::Bson::BsonWriter::AddValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5daf068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(),
                                                             { "AddValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.AddToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonWriter::AddToken)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5daeea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "AddToken", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::Object*)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5daf0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 123 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)()>(&::Newtonsoft::Json::Bson::BsonWriter::WriteNull)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5daf1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteUndefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)()>(&::Newtonsoft::Json::Bson::BsonWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5daf264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 83 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5daf2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 86 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(int32_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5daf3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 87 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(uint32_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5daf414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 88 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(int64_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5daf4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 89 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(uint64_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5daf50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 90 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(float_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5daf5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 91 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(double_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5daf604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(bool)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5daf660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(int16_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5daf70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 94 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(uint16_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5daf768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 95 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(char16_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5daf7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 96 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(uint8_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5daf8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 97 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(int8_t)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5daf918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 98 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::Decimal)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5daf974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 99 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5dafa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 100 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dafb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 101 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::ArrayW<uint8_t>)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5dafb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 121 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::Guid)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5dafc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 102 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::TimeSpan)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5dafcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 103 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5dafdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 122 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteObjectId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::ArrayW<uint8_t>)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteObjectId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5dafea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "WriteObjectId", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteRegex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::StringW, ::StringW)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteRegex)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5daff84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "WriteRegex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryWriter*& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr ::Newtonsoft::Json::Bson::BsonBinaryWriter* const& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr void Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_set__writer(::Newtonsoft::Json::Bson::BsonBinaryWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writer = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken*& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____root;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken* const& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____root;
}
constexpr void Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_set__root(::Newtonsoft::Json::Bson::BsonToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____root = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken*& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken* const& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_set__parent(::Newtonsoft::Json::Bson::BsonToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parent = value;
}
constexpr ::StringW& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyName = value;
}
inline ::System::DateTimeKind Newtonsoft::Json::Bson::BsonWriter::get_DateTimeKindHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "get_DateTimeKindHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeKind>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonWriter::set_DateTimeKindHandling(::System::DateTimeKind value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "set_DateTimeKindHandling", {}, { ::i2c::type_of<::System::DateTimeKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Newtonsoft::Json::Bson::BsonWriter::_ctor(::System::IO::BinaryWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void Newtonsoft::Json::Bson::BsonWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteEnd(::Newtonsoft::Json::JsonToken token) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 124 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteStartConstructor(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteRaw(::StringW json) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteRawValue(::StringW json) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 85 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteStartArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteStartObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WritePropertyName(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Bson::BsonWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonWriter::AddParent(::Newtonsoft::Json::Bson::BsonToken* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "AddParent", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Newtonsoft::Json::Bson::BsonWriter::RemoveParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "RemoveParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonWriter::AddValue(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(),
                                                           { "AddValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, type);
}
inline void Newtonsoft::Json::Bson::BsonWriter::AddToken(::Newtonsoft::Json::Bson::BsonToken* token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "AddToken", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 123 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteNull() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteUndefined() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 83 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 86 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 87 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(uint32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 88 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 89 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 90 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 91 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(int16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 94 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(uint16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 95 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(char16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 96 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 97 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(int8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 98 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 99 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 100 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(::System::DateTimeOffset value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 101 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(::ArrayW<uint8_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 121 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 102 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 103 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteValue(::System::Uri* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), 122 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteObjectId(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "WriteObjectId", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteRegex(::StringW pattern, ::StringW options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(), { "WriteRegex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pattern, options);
}
inline ::Newtonsoft::Json::Bson::BsonWriter* Newtonsoft::Json::Bson::BsonWriter::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonWriter*>(stream));
}
inline ::Newtonsoft::Json::Bson::BsonWriter* Newtonsoft::Json::Bson::BsonWriter::New_ctor(::System::IO::BinaryWriter* writer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonWriter*>(writer));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonWriter::BsonWriter() {}
