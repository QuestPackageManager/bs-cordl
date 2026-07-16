#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XTextWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XTextWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Xml/Linq/zzzz__XText_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XTextWrapper.get_Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XText* (::Newtonsoft::Json::Converters::XTextWrapper::*)()>(&::Newtonsoft::Json::Converters::XTextWrapper::get_Text)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d9f15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), { "get_Text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XTextWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XTextWrapper::*)(::System::Xml::Linq::XText*)>(&::Newtonsoft::Json::Converters::XTextWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9f1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XText*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XTextWrapper.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XTextWrapper::*)()>(&::Newtonsoft::Json::Converters::XTextWrapper::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d9f1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XTextWrapper.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XTextWrapper::*)(::StringW)>(&::Newtonsoft::Json::Converters::XTextWrapper::set_Value)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d9f1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XTextWrapper.get_ParentNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XTextWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XTextWrapper::get_ParentNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d9f234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), 18 }));
    return ___internal_method;
  }
};
inline ::System::Xml::Linq::XText* Newtonsoft::Json::Converters::XTextWrapper::get_Text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), { "get_Text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XText*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XTextWrapper::_ctor(::System::Xml::Linq::XText* text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XText*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline ::StringW Newtonsoft::Json::Converters::XTextWrapper::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XTextWrapper::set_Value(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XTextWrapper::get_ParentNode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XTextWrapper*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XTextWrapper* Newtonsoft::Json::Converters::XTextWrapper::New_ctor(::System::Xml::Linq::XText* text) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XTextWrapper*>(text));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XTextWrapper::XTextWrapper() {}
