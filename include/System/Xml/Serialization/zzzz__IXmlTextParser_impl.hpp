#pragma once
// IWYU pragma private; include "System\Xml\Serialization\IXmlTextParser.hpp"
#include "System/Xml/Serialization/zzzz__IXmlTextParser_def.hpp"
#include "System/Xml/zzzz__WhitespaceHandling_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::IXmlTextParser.get_Normalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::IXmlTextParser::*)()>(&::System::Xml::Serialization::IXmlTextParser::get_Normalized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), { ::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::IXmlTextParser.set_Normalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::IXmlTextParser::*)(bool)>(&::System::Xml::Serialization::IXmlTextParser::set_Normalized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), { ::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::IXmlTextParser.get_WhitespaceHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::WhitespaceHandling (::System::Xml::Serialization::IXmlTextParser::*)()>(
    &::System::Xml::Serialization::IXmlTextParser::get_WhitespaceHandling)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), { ::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::IXmlTextParser.set_WhitespaceHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::IXmlTextParser::*)(::System::Xml::WhitespaceHandling)>(
    &::System::Xml::Serialization::IXmlTextParser::set_WhitespaceHandling)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), { ::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), 3 }));
    return ___internal_method;
  }
};
inline bool System::Xml::Serialization::IXmlTextParser::get_Normalized() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Serialization::IXmlTextParser::set_Normalized(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::WhitespaceHandling System::Xml::Serialization::IXmlTextParser::get_WhitespaceHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WhitespaceHandling>(this, ___internal_method);
}
inline void System::Xml::Serialization::IXmlTextParser::set_WhitespaceHandling(::System::Xml::WhitespaceHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::IXmlTextParser*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
