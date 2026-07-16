#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonReader.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "System/zzzz__DateTimeKind_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonReader_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonReader_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState::BsonReader_BsonReaderState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState::BsonReader_BsonReaderState() {}
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::ReferenceStart{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::ReferenceRef{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::ReferenceId{ static_cast<int32_t>(0x3) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::CodeWScopeStart{ static_cast<int32_t>(0x4) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::CodeWScopeCode{ static_cast<int32_t>(0x5) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::CodeWScopeScope{ static_cast<int32_t>(0x6) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::CodeWScopeScopeObject{ static_cast<int32_t>(0x7) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::CodeWScopeScopeEnd{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader_ContainerContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader_ContainerContext::*)(::Newtonsoft::Json::Bson::BsonType)>(
    &::Newtonsoft::Json::Bson::BsonReader_ContainerContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>() } })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonType& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::Newtonsoft::Json::Bson::BsonType const& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_set_Type(::Newtonsoft::Json::Bson::BsonType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr int32_t& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Length;
}
constexpr int32_t const& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Length;
}
constexpr void Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_set_Length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Length = value;
}
constexpr int32_t& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Position;
}
constexpr int32_t const& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Position;
}
constexpr void Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_set_Position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Position = value;
}
inline void Newtonsoft::Json::Bson::BsonReader_ContainerContext::_ctor(::Newtonsoft::Json::Bson::BsonType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::Newtonsoft::Json::Bson::BsonReader_ContainerContext* Newtonsoft::Json::Bson::BsonReader_ContainerContext::New_ctor(::Newtonsoft::Json::Bson::BsonType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>(type));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonReader_ContainerContext::BsonReader_ContainerContext() {}
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.get_JsonNet35BinaryCompatibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::get_JsonNet35BinaryCompatibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5daa4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "get_JsonNet35BinaryCompatibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.set_JsonNet35BinaryCompatibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(bool)>(&::Newtonsoft::Json::Bson::BsonReader::set_JsonNet35BinaryCompatibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5daa4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "set_JsonNet35BinaryCompatibility", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.get_ReadRootValueAsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::get_ReadRootValueAsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5daa4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "get_ReadRootValueAsArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.set_ReadRootValueAsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(bool)>(&::Newtonsoft::Json::Bson::BsonReader::set_ReadRootValueAsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5daa4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "set_ReadRootValueAsArray", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.get_DateTimeKindHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeKind (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::get_DateTimeKindHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5daa4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "get_DateTimeKindHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.set_DateTimeKindHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::System::DateTimeKind)>(&::Newtonsoft::Json::Bson::BsonReader::set_DateTimeKindHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5daa4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "set_DateTimeKindHandling", {}, { ::i2c::type_of<::System::DateTimeKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::System::IO::Stream*)>(&::Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5daa4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::System::IO::BinaryReader*)>(&::Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5daa5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::System::IO::Stream*, bool, ::System::DateTimeKind)>(
    &::Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5daa4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::DateTimeKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::System::IO::BinaryReader*, bool, ::System::DateTimeKind)>(
    &::Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5daa5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::DateTimeKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5daa6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::Read)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5daa97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::Close)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5dab174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadCodeWScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadCodeWScope)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5daaf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadCodeWScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadReference)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5daad24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadNormal)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5daab1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadNormal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.PopContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::PopContext)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5dab948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "PopContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.PushContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::Newtonsoft::Json::Bson::BsonReader_ContainerContext*)>(
    &::Newtonsoft::Json::Bson::BsonReader::PushContext)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5dab23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(),
                                                                                           { "PushContext", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadByte)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5dab914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::Newtonsoft::Json::Bson::BsonType)>(&::Newtonsoft::Json::Bson::BsonReader::ReadType)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x5dab324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadType", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadBinary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Newtonsoft::Json::Bson::BsonReader::*)(::by_ref<::Newtonsoft::Json::Bson::BsonBinaryType>)>(
    &::Newtonsoft::Json::Bson::BsonReader::ReadBinary)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5daba54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadBinary", {}, { ::i2c::type_of<::by_ref<::Newtonsoft::Json::Bson::BsonBinaryType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadString)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5daa718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadLengthString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadLengthString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5dab1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadLengthString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(&::Newtonsoft::Json::Bson::BsonReader::GetString)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5dabc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "GetString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.GetLastFullCharStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(&::Newtonsoft::Json::Bson::BsonReader::GetLastFullCharStop)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5dabb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "GetLastFullCharStop", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.BytesInSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Bson::BsonReader::*)(uint8_t)>(&::Newtonsoft::Json::Bson::BsonReader::BytesInSequence)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5dabe7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "BytesInSequence", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.EnsureBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::EnsureBuffers)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5dabae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "EnsureBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadDouble)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5daba1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadInt32)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5dab1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadInt32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadInt64)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5dabaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadInt64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadType)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5daa6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.MovePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(&::Newtonsoft::Json::Bson::BsonReader::MovePosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5dab9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "MovePosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(&::Newtonsoft::Json::Bson::BsonReader::ReadBytes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5dab2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IO::BinaryReader*& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr ::System::IO::BinaryReader* const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__reader(::System::IO::BinaryReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reader = value;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>*& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>* const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stack = value;
}
constexpr ::ArrayW<uint8_t>& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteBuffer;
}
constexpr ::ArrayW<uint8_t> const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteBuffer;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__byteBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____byteBuffer = value;
}
constexpr ::ArrayW<char16_t>& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__charBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charBuffer;
}
constexpr ::ArrayW<char16_t> const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__charBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charBuffer;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__charBuffer(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charBuffer = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonType& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__currentElementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElementType;
}
constexpr ::Newtonsoft::Json::Bson::BsonType const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__currentElementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElementType;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__currentElementType(::Newtonsoft::Json::Bson::BsonType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentElementType = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__bsonReaderState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bsonReaderState;
}
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__bsonReaderState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bsonReaderState;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__bsonReaderState(::Newtonsoft::Json::Bson::BsonReader_BsonReaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bsonReaderState = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonReader_ContainerContext*& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__currentContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentContext;
}
constexpr ::Newtonsoft::Json::Bson::BsonReader_ContainerContext* const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__currentContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentContext;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__currentContext(::Newtonsoft::Json::Bson::BsonReader_ContainerContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentContext = value;
}
constexpr bool& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__readRootValueAsArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readRootValueAsArray;
}
constexpr bool const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__readRootValueAsArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readRootValueAsArray;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__readRootValueAsArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readRootValueAsArray = value;
}
constexpr bool& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__jsonNet35BinaryCompatibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jsonNet35BinaryCompatibility;
}
constexpr bool const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__jsonNet35BinaryCompatibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jsonNet35BinaryCompatibility;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__jsonNet35BinaryCompatibility(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jsonNet35BinaryCompatibility = value;
}
constexpr ::System::DateTimeKind& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__dateTimeKindHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeKindHandling;
}
constexpr ::System::DateTimeKind const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__dateTimeKindHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeKindHandling;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__dateTimeKindHandling(::System::DateTimeKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateTimeKindHandling = value;
}
inline void Newtonsoft::Json::Bson::BsonReader::setStaticF_SeqRange1(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SeqRange1", ::Newtonsoft::Json::Bson::BsonReader*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::getStaticF_SeqRange1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SeqRange1", ::Newtonsoft::Json::Bson::BsonReader*>();
}
inline void Newtonsoft::Json::Bson::BsonReader::setStaticF_SeqRange2(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SeqRange2", ::Newtonsoft::Json::Bson::BsonReader*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::getStaticF_SeqRange2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SeqRange2", ::Newtonsoft::Json::Bson::BsonReader*>();
}
inline void Newtonsoft::Json::Bson::BsonReader::setStaticF_SeqRange3(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SeqRange3", ::Newtonsoft::Json::Bson::BsonReader*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::getStaticF_SeqRange3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SeqRange3", ::Newtonsoft::Json::Bson::BsonReader*>();
}
inline void Newtonsoft::Json::Bson::BsonReader::setStaticF_SeqRange4(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SeqRange4", ::Newtonsoft::Json::Bson::BsonReader*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::getStaticF_SeqRange4() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SeqRange4", ::Newtonsoft::Json::Bson::BsonReader*>();
}
inline bool Newtonsoft::Json::Bson::BsonReader::get_JsonNet35BinaryCompatibility() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "get_JsonNet35BinaryCompatibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::set_JsonNet35BinaryCompatibility(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "set_JsonNet35BinaryCompatibility", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Bson::BsonReader::get_ReadRootValueAsArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "get_ReadRootValueAsArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::set_ReadRootValueAsArray(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "set_ReadRootValueAsArray", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTimeKind Newtonsoft::Json::Bson::BsonReader::get_DateTimeKindHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "get_DateTimeKindHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeKind>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::set_DateTimeKindHandling(::System::DateTimeKind value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "set_DateTimeKindHandling", {}, { ::i2c::type_of<::System::DateTimeKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonReader::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Newtonsoft::Json::Bson::BsonReader::_ctor(::System::IO::BinaryReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::Bson::BsonReader::_ctor(::System::IO::Stream* stream, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::DateTimeKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, readRootValueAsArray, dateTimeKindHandling);
}
inline void Newtonsoft::Json::Bson::BsonReader::_ctor(::System::IO::BinaryReader* reader, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::DateTimeKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, readRootValueAsArray, dateTimeKindHandling);
}
inline ::StringW Newtonsoft::Json::Bson::BsonReader::ReadElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Bson::BsonReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Bson::BsonReader::ReadCodeWScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadCodeWScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Bson::BsonReader::ReadReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Bson::BsonReader::ReadNormal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadNormal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::PopContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "PopContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::PushContext(::Newtonsoft::Json::Bson::BsonReader_ContainerContext* newContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "PushContext", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newContext);
}
inline uint8_t Newtonsoft::Json::Bson::BsonReader::ReadByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::ReadType(::Newtonsoft::Json::Bson::BsonType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadType", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::ReadBinary(::by_ref<::Newtonsoft::Json::Bson::BsonBinaryType> binaryType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadBinary", {}, { ::i2c::type_of<::by_ref<::Newtonsoft::Json::Bson::BsonBinaryType>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, binaryType);
}
inline ::StringW Newtonsoft::Json::Bson::BsonReader::ReadString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Bson::BsonReader::ReadLengthString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadLengthString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Bson::BsonReader::GetString(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "GetString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, length);
}
inline int32_t Newtonsoft::Json::Bson::BsonReader::GetLastFullCharStop(int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "GetLastFullCharStop", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, start);
}
inline int32_t Newtonsoft::Json::Bson::BsonReader::BytesInSequence(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "BytesInSequence", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, b);
}
inline void Newtonsoft::Json::Bson::BsonReader::EnsureBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "EnsureBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t Newtonsoft::Json::Bson::BsonReader::ReadDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Bson::BsonReader::ReadInt32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadInt32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t Newtonsoft::Json::Bson::BsonReader::ReadInt64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadInt64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonReader::ReadType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::MovePosition(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "MovePosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonReader::ReadBytes(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonReader*>(), { "ReadBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, count);
}
inline ::Newtonsoft::Json::Bson::BsonReader* Newtonsoft::Json::Bson::BsonReader::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonReader*>(stream));
}
inline ::Newtonsoft::Json::Bson::BsonReader* Newtonsoft::Json::Bson::BsonReader::New_ctor(::System::IO::BinaryReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonReader*>(reader));
}
inline ::Newtonsoft::Json::Bson::BsonReader* Newtonsoft::Json::Bson::BsonReader::New_ctor(::System::IO::Stream* stream, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonReader*>(stream, readRootValueAsArray, dateTimeKindHandling));
}
inline ::Newtonsoft::Json::Bson::BsonReader* Newtonsoft::Json::Bson::BsonReader::New_ctor(::System::IO::BinaryReader* reader, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonReader*>(reader, readRootValueAsArray, dateTimeKindHandling));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonReader::BsonReader() {}
