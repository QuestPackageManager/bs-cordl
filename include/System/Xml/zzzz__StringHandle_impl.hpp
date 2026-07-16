#pragma once
// IWYU pragma private; include "System/Xml/StringHandle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__StringHandle_def.hpp"
#include "System/Xml/zzzz__PrefixHandle_def.hpp"
#include "System/Xml/zzzz__StringHandle_def.hpp"
#include "System/Xml/zzzz__XmlBufferReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::StringHandle_StringHandleType::StringHandle_StringHandleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::StringHandle_StringHandleType::StringHandle_StringHandleType() {}
constexpr ::System::Xml::StringHandle_StringHandleType System::Xml::StringHandle_StringHandleType::Dictionary{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::StringHandle_StringHandleType System::Xml::StringHandle_StringHandleType::UTF8{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::StringHandle_StringHandleType System::Xml::StringHandle_StringHandleType::EscapedUTF8{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::StringHandle_StringHandleType System::Xml::StringHandle_StringHandleType::ConstString{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Xml::StringHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::StringHandle::*)(::System::Xml::XmlBufferReader*)>(&::System::Xml::StringHandle::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60fd204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::StringHandle::*)(int32_t, int32_t)>(&::System::Xml::StringHandle::SetValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60fd218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::StringHandle::*)(int32_t, int32_t, bool)>(&::System::Xml::StringHandle::SetValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60fd228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::StringHandle::*)(::System::Xml::StringHandle*)>(&::System::Xml::StringHandle::SetValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60fd24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "SetValue", {}, { ::i2c::type_of<::System::Xml::StringHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::StringHandle::*)()>(&::System::Xml::StringHandle::get_IsEmpty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60fd264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.get_IsXmlns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::StringHandle::*)()>(&::System::Xml::StringHandle::get_IsXmlns)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x60fd304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "get_IsXmlns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.ToPrefixHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::StringHandle::*)(::System::Xml::PrefixHandle*)>(&::System::Xml::StringHandle::ToPrefixHandle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60fd424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "ToPrefixHandle", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::StringHandle::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::StringHandle::GetString)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x60fd440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "GetString", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::StringHandle::*)()>(&::System::Xml::StringHandle::GetString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60fd56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "GetString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::StringHandle::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Xml::StringHandle::GetString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60fd660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "GetString", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.TryGetDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::StringHandle::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(&::System::Xml::StringHandle::TryGetDictionaryString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60fd7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "TryGetDictionaryString", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::StringHandle::*)()>(&::System::Xml::StringHandle::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60fd894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { ::i2c::class_of<::System::Xml::StringHandle*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::StringHandle::*)(int32_t, ::System::Xml::XmlBufferReader*)>(&::System::Xml::StringHandle::Equals2)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x60fd898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::StringHandle::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::StringHandle::Equals2)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60fd970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "Equals2", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::StringHandle::*)(::StringW)>(&::System::Xml::StringHandle::Equals2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60fd294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "Equals2", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::StringHandle::*)(int32_t, int32_t, ::System::Xml::XmlBufferReader*)>(&::System::Xml::StringHandle::Equals2)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60fda18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(),
                                                             { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::StringHandle::*)(::System::Xml::StringHandle*)>(&::System::Xml::StringHandle::Equals2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60fdaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "Equals2", {}, { ::i2c::type_of<::System::Xml::StringHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::StringHandle*, ::System::Xml::XmlDictionaryString*)>(&::System::Xml::StringHandle::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60fdb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::StringHandle*, ::StringW)>(&::System::Xml::StringHandle::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60fdb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::StringHandle*, ::StringW)>(&::System::Xml::StringHandle::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60fdb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::StringHandle*, ::System::Xml::StringHandle*)>(&::System::Xml::StringHandle::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60fdb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::StringHandle::*)(::System::Xml::StringHandle*)>(&::System::Xml::StringHandle::CompareTo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60fdbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Xml::StringHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::StringHandle::*)(::System::Object*)>(&::System::Xml::StringHandle::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60fdc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { ::i2c::class_of<::System::Xml::StringHandle*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::StringHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::StringHandle::*)()>(&::System::Xml::StringHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60fdce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { ::i2c::class_of<::System::Xml::StringHandle*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlBufferReader*& System::Xml::StringHandle::__cordl_internal_get_bufferReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferReader;
}
constexpr ::System::Xml::XmlBufferReader* const& System::Xml::StringHandle::__cordl_internal_get_bufferReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferReader;
}
constexpr void System::Xml::StringHandle::__cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferReader = value;
}
constexpr ::System::Xml::StringHandle_StringHandleType& System::Xml::StringHandle::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Xml::StringHandle_StringHandleType const& System::Xml::StringHandle::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::StringHandle::__cordl_internal_set_type(::System::Xml::StringHandle_StringHandleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr int32_t& System::Xml::StringHandle::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr int32_t const& System::Xml::StringHandle::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void System::Xml::StringHandle::__cordl_internal_set_key(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr int32_t& System::Xml::StringHandle::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr int32_t const& System::Xml::StringHandle::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void System::Xml::StringHandle::__cordl_internal_set_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr int32_t& System::Xml::StringHandle::__cordl_internal_get_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr int32_t const& System::Xml::StringHandle::__cordl_internal_get_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr void System::Xml::StringHandle::__cordl_internal_set_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___length = value;
}
inline void System::Xml::StringHandle::setStaticF_constStrings(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "constStrings", ::System::Xml::StringHandle*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::StringHandle::getStaticF_constStrings() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "constStrings", ::System::Xml::StringHandle*>();
}
inline void System::Xml::StringHandle::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline void System::Xml::StringHandle::SetValue(int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset, length);
}
inline void System::Xml::StringHandle::SetValue(int32_t offset, int32_t length, bool escaped) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset, length, escaped);
}
inline void System::Xml::StringHandle::SetValue(::System::Xml::StringHandle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "SetValue", {}, { ::i2c::type_of<::System::Xml::StringHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::StringHandle::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::StringHandle::get_IsXmlns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "get_IsXmlns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::StringHandle::ToPrefixHandle(::System::Xml::PrefixHandle* prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "ToPrefixHandle", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::StringHandle::GetString(::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "GetString", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, nameTable);
}
inline ::StringW System::Xml::StringHandle::GetString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "GetString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Xml::StringHandle::GetString(::by_ref<int32_t> offset, ::by_ref<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "GetString", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, offset, length);
}
inline bool System::Xml::StringHandle::TryGetDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "TryGetDictionaryString", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::StringW System::Xml::StringHandle::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::StringHandle*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::StringHandle::Equals2(int32_t key2, ::System::Xml::XmlBufferReader* bufferReader2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key2, bufferReader2);
}
inline bool System::Xml::StringHandle::Equals2(::System::Xml::XmlDictionaryString* xmlString2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "Equals2", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlString2);
}
inline bool System::Xml::StringHandle::Equals2(::StringW s2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "Equals2", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s2);
}
inline bool System::Xml::StringHandle::Equals2(int32_t offset2, int32_t length2, ::System::Xml::XmlBufferReader* bufferReader2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(),
                                                           { "Equals2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offset2, length2, bufferReader2);
}
inline bool System::Xml::StringHandle::Equals2(::System::Xml::StringHandle* s2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "Equals2", {}, { ::i2c::type_of<::System::Xml::StringHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s2);
}
inline bool System::Xml::StringHandle::op_Equality(::System::Xml::StringHandle* s1, ::System::Xml::XmlDictionaryString* xmlString2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s1, xmlString2);
}
inline bool System::Xml::StringHandle::op_Equality(::System::Xml::StringHandle* s1, ::StringW s2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s1, s2);
}
inline bool System::Xml::StringHandle::op_Inequality(::System::Xml::StringHandle* s1, ::StringW s2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s1, s2);
}
inline bool System::Xml::StringHandle::op_Equality(::System::Xml::StringHandle* s1, ::System::Xml::StringHandle* s2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s1, s2);
}
inline int32_t System::Xml::StringHandle::CompareTo(::System::Xml::StringHandle* that) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::StringHandle*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Xml::StringHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, that);
}
inline bool System::Xml::StringHandle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::StringHandle*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Xml::StringHandle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::StringHandle*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Xml::StringHandle* System::Xml::StringHandle::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::StringHandle*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::StringHandle::StringHandle() {}
