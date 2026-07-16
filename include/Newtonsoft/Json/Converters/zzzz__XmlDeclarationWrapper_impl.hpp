#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XmlDeclarationWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlDeclarationWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlDeclaration_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Xml/zzzz__XmlDeclaration_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDeclarationWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)(::System::Xml::XmlDeclaration*)>(
    &::Newtonsoft::Json::Converters::XmlDeclarationWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d9cdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDeclaration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDeclarationWrapper.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)()>(&::Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Version)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d9d340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDeclarationWrapper.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)()>(&::Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Encoding)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d9d358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { "get_Encoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDeclarationWrapper.set_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDeclarationWrapper::set_Encoding)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d9d370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { "set_Encoding", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDeclarationWrapper.get_Standalone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Standalone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d9d39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { "get_Standalone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDeclarationWrapper.set_Standalone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlDeclarationWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDeclarationWrapper::set_Standalone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d9d3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { "set_Standalone", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDeclaration*& Newtonsoft::Json::Converters::XmlDeclarationWrapper::__cordl_internal_get__declaration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declaration;
}
constexpr ::System::Xml::XmlDeclaration* const& Newtonsoft::Json::Converters::XmlDeclarationWrapper::__cordl_internal_get__declaration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declaration;
}
constexpr void Newtonsoft::Json::Converters::XmlDeclarationWrapper::__cordl_internal_set__declaration(::System::Xml::XmlDeclaration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____declaration = value;
}
inline void Newtonsoft::Json::Converters::XmlDeclarationWrapper::_ctor(::System::Xml::XmlDeclaration* declaration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDeclaration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, declaration);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Encoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { "get_Encoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XmlDeclarationWrapper::set_Encoding(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { "set_Encoding", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDeclarationWrapper::get_Standalone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { "get_Standalone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XmlDeclarationWrapper::set_Standalone(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(), { "set_Standalone", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Converters::XmlDeclarationWrapper* Newtonsoft::Json::Converters::XmlDeclarationWrapper::New_ctor(::System::Xml::XmlDeclaration* declaration) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XmlDeclarationWrapper*>(declaration));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDeclaration"
constexpr Newtonsoft::Json::Converters::XmlDeclarationWrapper::operator ::Newtonsoft::Json::Converters::IXmlDeclaration*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlDeclaration*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDeclaration"
constexpr ::Newtonsoft::Json::Converters::IXmlDeclaration* Newtonsoft::Json::Converters::XmlDeclarationWrapper::i___Newtonsoft__Json__Converters__IXmlDeclaration() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlDeclaration*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr Newtonsoft::Json::Converters::XmlDeclarationWrapper::operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDeclarationWrapper::i___Newtonsoft__Json__Converters__IXmlNode() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XmlDeclarationWrapper::XmlDeclarationWrapper() {}
