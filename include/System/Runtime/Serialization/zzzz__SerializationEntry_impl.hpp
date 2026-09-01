#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\SerializationEntry.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEntry_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationEntry::*)(::StringW, ::System::Object*, ::System::Type*)>(
    &::System::Runtime::Serialization::SerializationEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4bd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEntry>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEntry.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::SerializationEntry::*)()>(
    &::System::Runtime::Serialization::SerializationEntry::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4bd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEntry>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEntry.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::SerializationEntry::*)()>(&::System::Runtime::Serialization::SerializationEntry::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4bd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEntry>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::SerializationEntry::_ctor(::StringW entryName, ::System::Object* entryValue, ::System::Type* entryType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEntry>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entryName, entryValue, entryType);
}
inline ::System::Object* System::Runtime::Serialization::SerializationEntry::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEntry>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::SerializationEntry::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEntry>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_value", ty: "::System::Object*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_type", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::SerializationEntry::SerializationEntry(::StringW _name, ::System::Object* _value, ::System::Type* _type) noexcept {
  this->_name = _name;
  this->_value = _value;
  this->_type = _type;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationEntry::SerializationEntry() {}
