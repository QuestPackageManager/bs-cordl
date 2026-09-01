#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JTokenWriter.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenWriter_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::JsonReader*, bool, bool, bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteTokenAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5d86cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.get_CurrentToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::get_CurrentToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { "get_CurrentToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.get_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::get_Token)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d86e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { "get_Token", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::Linq::JContainer*)>(&::Newtonsoft::Json::Linq::JTokenWriter::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d86e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d86ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d86f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d86f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.AddParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::Linq::JContainer*)>(&::Newtonsoft::Json::Linq::JTokenWriter::AddParent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d86fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { "AddParent", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.RemoveParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::RemoveParent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d87020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { "RemoveParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d87074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteStartConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d87100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8719c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d871a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.AddRawValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Object*, ::Newtonsoft::Json::Linq::JTokenType, ::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::AddRawValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d87290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                            { "AddRawValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JTokenType>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.AddJValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::AddJValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d87370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                                                             { "AddJValue", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d87458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 123 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteNull)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d87504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteUndefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d87540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 83 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d875d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteComment)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d87648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 124 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d876dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 86 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int32_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d87774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 87 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint32_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d877d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 88 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int64_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d8782c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 89 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint64_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d87930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 90 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(float_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d87a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 91 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(double_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d87af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(bool)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d87bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int16_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d87cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 94 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint16_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d87d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 95 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(char16_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d87db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 96 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint8_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d87ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 97 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int8_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d87f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 98 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Decimal)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d87f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 99 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d88070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 100 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d881ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 101 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::ArrayW<uint8_t>)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d882b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 121 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::TimeSpan)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d88338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 103 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Guid)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d88430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 102 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d8853c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 122 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::JsonReader*, bool, bool, bool)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteToken)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5d88630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 77 }));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JContainer*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr ::Newtonsoft::Json::Linq::JContainer* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__token(::Newtonsoft::Json::Linq::JContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____token = value;
}
constexpr ::Newtonsoft::Json::Linq::JContainer*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::Newtonsoft::Json::Linq::JContainer* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parent = value;
}
constexpr ::Newtonsoft::Json::Linq::JValue*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::Newtonsoft::Json::Linq::JValue* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__value(::Newtonsoft::Json::Linq::JValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__current(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Linq::JTokenWriter::WriteTokenAsync(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate,
                                                                                               bool writeComments, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, reader, writeChildren, writeDateConstructorAsDate, writeComments, cancellationToken);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JTokenWriter::get_CurrentToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { "get_CurrentToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JTokenWriter::get_Token() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { "get_Token", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::_ctor(::Newtonsoft::Json::Linq::JContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteStartObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::AddParent(::Newtonsoft::Json::Linq::JContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { "AddParent", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::RemoveParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), { "RemoveParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteStartArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteStartConstructor(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteEnd(::Newtonsoft::Json::JsonToken token) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WritePropertyName(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::AddRawValue(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type, ::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                          { "AddRawValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JTokenType>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, type, token);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::AddJValue(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(),
                                                           { "AddJValue", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JValue*>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, token);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 123 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteNull() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteUndefined() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 83 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteRaw(::StringW json) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 124 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 86 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 87 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 88 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 89 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 90 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 91 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 94 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 95 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(char16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 96 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 97 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 98 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 99 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 100 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::DateTimeOffset value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 101 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::ArrayW<uint8_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 121 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 103 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 102 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Uri* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 122 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JTokenWriter*>(), 77 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, writeChildren, writeDateConstructorAsDate, writeComments);
}
inline ::Newtonsoft::Json::Linq::JTokenWriter* Newtonsoft::Json::Linq::JTokenWriter::New_ctor(::Newtonsoft::Json::Linq::JContainer* container) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JTokenWriter*>(container));
}
inline ::Newtonsoft::Json::Linq::JTokenWriter* Newtonsoft::Json::Linq::JTokenWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JTokenWriter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter() {}
