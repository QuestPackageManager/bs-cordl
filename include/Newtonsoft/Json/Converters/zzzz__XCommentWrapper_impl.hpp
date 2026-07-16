#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XCommentWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XCommentWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Xml/Linq/zzzz__XComment_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XCommentWrapper.get_Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XComment* (::Newtonsoft::Json::Converters::XCommentWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XCommentWrapper::get_Text)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d9f5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), { "get_Text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XCommentWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XCommentWrapper::*)(::System::Xml::Linq::XComment*)>(
    &::Newtonsoft::Json::Converters::XCommentWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9f640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XComment*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XCommentWrapper.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XCommentWrapper::*)()>(&::Newtonsoft::Json::Converters::XCommentWrapper::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d9f648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XCommentWrapper.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XCommentWrapper::*)(::StringW)>(&::Newtonsoft::Json::Converters::XCommentWrapper::set_Value)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d9f664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XCommentWrapper.get_ParentNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XCommentWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XCommentWrapper::get_ParentNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d9f69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), 18 }));
    return ___internal_method;
  }
};
inline ::System::Xml::Linq::XComment* Newtonsoft::Json::Converters::XCommentWrapper::get_Text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), { "get_Text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XComment*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XCommentWrapper::_ctor(::System::Xml::Linq::XComment* text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XComment*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline ::StringW Newtonsoft::Json::Converters::XCommentWrapper::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XCommentWrapper::set_Value(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XCommentWrapper::get_ParentNode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XCommentWrapper*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XCommentWrapper* Newtonsoft::Json::Converters::XCommentWrapper::New_ctor(::System::Xml::Linq::XComment* text) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XCommentWrapper*>(text));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XCommentWrapper::XCommentWrapper() {}
