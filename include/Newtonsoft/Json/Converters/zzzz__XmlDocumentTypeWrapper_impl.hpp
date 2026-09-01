#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\XmlDocumentTypeWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlDocumentTypeWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlDocumentType_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Xml/zzzz__XmlDocumentType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)(::System::Xml::XmlDocumentType*)>(
    &::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d9f094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocumentType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)()>(&::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_Name)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d9f5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper.get_System
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)()>(&::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_System)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d9f610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), { "get_System", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper.get_Public
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)()>(&::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_Public)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d9f628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), { "get_Public", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper.get_InternalSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_InternalSubset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d9f640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), { "get_InternalSubset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_LocalName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d9f658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDocumentType*& Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::__cordl_internal_get__documentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____documentType;
}
constexpr ::System::Xml::XmlDocumentType* const& Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::__cordl_internal_get__documentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____documentType;
}
constexpr void Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::__cordl_internal_set__documentType(::System::Xml::XmlDocumentType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____documentType = value;
}
inline void Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::_ctor(::System::Xml::XmlDocumentType* documentType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocumentType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, documentType);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_System() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), { "get_System", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_Public() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), { "get_Public", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_InternalSubset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), { "get_InternalSubset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::get_LocalName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper* Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::New_ctor(::System::Xml::XmlDocumentType* documentType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*>(documentType));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocumentType"
constexpr Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::operator ::Newtonsoft::Json::Converters::IXmlDocumentType*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlDocumentType*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDocumentType"
constexpr ::Newtonsoft::Json::Converters::IXmlDocumentType* Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::i___Newtonsoft__Json__Converters__IXmlDocumentType() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlDocumentType*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::i___Newtonsoft__Json__Converters__IXmlNode() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper::XmlDocumentTypeWrapper() {}
