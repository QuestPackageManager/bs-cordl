#pragma once
// IWYU pragma private; include "System\Xml\PrefixHandle.hpp"
#include "System/Xml/zzzz__PrefixHandleType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__PrefixHandle_def.hpp"
#include "System/Xml/zzzz__PrefixHandleType_def.hpp"
#include "System/Xml/zzzz__XmlBufferReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::PrefixHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::PrefixHandle::*)(::System::Xml::XmlBufferReader*)>(&::System::Xml::PrefixHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6101d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::PrefixHandle::*)(::System::Xml::PrefixHandleType)>(&::System::Xml::PrefixHandle::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6101d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "SetValue", {}, { ::i2c::type_of<::System::Xml::PrefixHandleType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::PrefixHandle::*)(::System::Xml::PrefixHandle*)>(&::System::Xml::PrefixHandle::SetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6101d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "SetValue", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::PrefixHandle::*)(int32_t, int32_t)>(&::System::Xml::PrefixHandle::SetValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6101d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::PrefixHandle::*)()>(&::System::Xml::PrefixHandle::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6101e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.get_IsXmlns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::PrefixHandle::*)()>(&::System::Xml::PrefixHandle::get_IsXmlns)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6101e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "get_IsXmlns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.get_IsXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::PrefixHandle::*)()>(&::System::Xml::PrefixHandle::get_IsXml)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6101efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "get_IsXml", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.TryGetShortPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::PrefixHandle::*)(::by_ref<::System::Xml::PrefixHandleType>)>(&::System::Xml::PrefixHandle::TryGetShortPrefix)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6101f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "TryGetShortPrefix", {}, { ::i2c::type_of<::by_ref<::System::Xml::PrefixHandleType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::PrefixHandleType)>(&::System::Xml::PrefixHandle::GetString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6101fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "GetString", {}, { ::i2c::type_of<::System::Xml::PrefixHandleType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.GetAlphaPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::PrefixHandleType (*)(int32_t)>(&::System::Xml::PrefixHandle::GetAlphaPrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6101e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "GetAlphaPrefix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Xml::PrefixHandleType, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Xml::PrefixHandle::GetString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x610202c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(),
                                                { "GetString", {}, { ::i2c::type_of<::System::Xml::PrefixHandleType>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::PrefixHandle::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::PrefixHandle::GetString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x61020bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "GetString", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::PrefixHandle::*)()>(&::System::Xml::PrefixHandle::GetString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6102154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "GetString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::PrefixHandle::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Xml::PrefixHandle::GetString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61021d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "GetString", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::PrefixHandle::*)(::System::Xml::PrefixHandle*)>(&::System::Xml::PrefixHandle::CompareTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6102284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::PrefixHandle::*)(::System::Xml::PrefixHandle*)>(&::System::Xml::PrefixHandle::Equals2)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x61022c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "Equals2", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::PrefixHandle::*)(::StringW)>(&::System::Xml::PrefixHandle::Equals2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x610234c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "Equals2", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::PrefixHandle::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::PrefixHandle::Equals2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61023ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "Equals2", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::PrefixHandle*, ::StringW)>(&::System::Xml::PrefixHandle::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6102400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::PrefixHandle*, ::System::Xml::XmlDictionaryString*)>(&::System::Xml::PrefixHandle::op_Equality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6102410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::PrefixHandle*, ::System::Xml::PrefixHandle*)>(&::System::Xml::PrefixHandle::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x610242c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::PrefixHandle::*)(::System::Object*)>(&::System::Xml::PrefixHandle::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x610243c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { ::i2c::class_of<::System::Xml::PrefixHandle*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::PrefixHandle::*)()>(&::System::Xml::PrefixHandle::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61024ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { ::i2c::class_of<::System::Xml::PrefixHandle*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::PrefixHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::PrefixHandle::*)()>(&::System::Xml::PrefixHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61024f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { ::i2c::class_of<::System::Xml::PrefixHandle*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlBufferReader*& System::Xml::PrefixHandle::__cordl_internal_get_bufferReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferReader;
}
constexpr ::System::Xml::XmlBufferReader* const& System::Xml::PrefixHandle::__cordl_internal_get_bufferReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferReader;
}
constexpr void System::Xml::PrefixHandle::__cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferReader = value;
}
constexpr ::System::Xml::PrefixHandleType& System::Xml::PrefixHandle::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Xml::PrefixHandleType const& System::Xml::PrefixHandle::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::PrefixHandle::__cordl_internal_set_type(::System::Xml::PrefixHandleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr int32_t& System::Xml::PrefixHandle::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr int32_t const& System::Xml::PrefixHandle::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void System::Xml::PrefixHandle::__cordl_internal_set_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr int32_t& System::Xml::PrefixHandle::__cordl_internal_get_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr int32_t const& System::Xml::PrefixHandle::__cordl_internal_get_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr void System::Xml::PrefixHandle::__cordl_internal_set_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___length = value;
}
inline void System::Xml::PrefixHandle::setStaticF_prefixStrings(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "prefixStrings", ::System::Xml::PrefixHandle*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::PrefixHandle::getStaticF_prefixStrings() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "prefixStrings", ::System::Xml::PrefixHandle*>();
}
inline void System::Xml::PrefixHandle::setStaticF_prefixBuffer(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "prefixBuffer", ::System::Xml::PrefixHandle*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::PrefixHandle::getStaticF_prefixBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "prefixBuffer", ::System::Xml::PrefixHandle*>();
}
inline void System::Xml::PrefixHandle::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline void System::Xml::PrefixHandle::SetValue(::System::Xml::PrefixHandleType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "SetValue", {}, { ::i2c::type_of<::System::Xml::PrefixHandleType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Xml::PrefixHandle::SetValue(::System::Xml::PrefixHandle* prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "SetValue", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix);
}
inline void System::Xml::PrefixHandle::SetValue(int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset, length);
}
inline bool System::Xml::PrefixHandle::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::PrefixHandle::get_IsXmlns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "get_IsXmlns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::PrefixHandle::get_IsXml() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "get_IsXml", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::PrefixHandle::TryGetShortPrefix(::by_ref<::System::Xml::PrefixHandleType> type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "TryGetShortPrefix", {}, { ::i2c::type_of<::by_ref<::System::Xml::PrefixHandleType>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::StringW System::Xml::PrefixHandle::GetString(::System::Xml::PrefixHandleType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "GetString", {}, { ::i2c::type_of<::System::Xml::PrefixHandleType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::System::Xml::PrefixHandleType System::Xml::PrefixHandle::GetAlphaPrefix(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "GetAlphaPrefix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::PrefixHandleType>(nullptr, ___internal_method, index);
}
inline ::ArrayW<uint8_t> System::Xml::PrefixHandle::GetString(::System::Xml::PrefixHandleType type, ::by_ref<int32_t> offset, ::by_ref<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(),
                                              { "GetString", {}, { ::i2c::type_of<::System::Xml::PrefixHandleType>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, type, offset, length);
}
inline ::StringW System::Xml::PrefixHandle::GetString(::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "GetString", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, nameTable);
}
inline ::StringW System::Xml::PrefixHandle::GetString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "GetString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Xml::PrefixHandle::GetString(::by_ref<int32_t> offset, ::by_ref<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "GetString", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, offset, length);
}
inline int32_t System::Xml::PrefixHandle::CompareTo(::System::Xml::PrefixHandle* that) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, that);
}
inline bool System::Xml::PrefixHandle::Equals2(::System::Xml::PrefixHandle* prefix2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "Equals2", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefix2);
}
inline bool System::Xml::PrefixHandle::Equals2(::StringW prefix2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "Equals2", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefix2);
}
inline bool System::Xml::PrefixHandle::Equals2(::System::Xml::XmlDictionaryString* prefix2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "Equals2", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefix2);
}
inline bool System::Xml::PrefixHandle::op_Equality(::System::Xml::PrefixHandle* prefix1, ::StringW prefix2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, prefix1, prefix2);
}
inline bool System::Xml::PrefixHandle::op_Equality(::System::Xml::PrefixHandle* prefix1, ::System::Xml::XmlDictionaryString* prefix2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, prefix1, prefix2);
}
inline bool System::Xml::PrefixHandle::op_Equality(::System::Xml::PrefixHandle* prefix1, ::System::Xml::PrefixHandle* prefix2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::PrefixHandle*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, prefix1, prefix2);
}
inline bool System::Xml::PrefixHandle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::PrefixHandle*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::StringW System::Xml::PrefixHandle::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::PrefixHandle*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::PrefixHandle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::PrefixHandle*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Xml::PrefixHandle* System::Xml::PrefixHandle::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::PrefixHandle*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::PrefixHandle::PrefixHandle() {}
