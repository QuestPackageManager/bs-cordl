#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\XDocumentTypeWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XDocumentTypeWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlDocumentType_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Xml/Linq/zzzz__XDocumentType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentTypeWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XDocumentTypeWrapper::*)(::System::Xml::Linq::XDocumentType*)>(
    &::Newtonsoft::Json::Converters::XDocumentTypeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XDocumentType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentTypeWrapper.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XDocumentTypeWrapper::*)()>(&::Newtonsoft::Json::Converters::XDocumentTypeWrapper::get_Name)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5da0370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentTypeWrapper.get_System
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XDocumentTypeWrapper::*)()>(&::Newtonsoft::Json::Converters::XDocumentTypeWrapper::get_System)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5da0388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), { "get_System", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentTypeWrapper.get_Public
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XDocumentTypeWrapper::*)()>(&::Newtonsoft::Json::Converters::XDocumentTypeWrapper::get_Public)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5da03a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), { "get_Public", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentTypeWrapper.get_InternalSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XDocumentTypeWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XDocumentTypeWrapper::get_InternalSubset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5da03b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), { "get_InternalSubset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentTypeWrapper.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XDocumentTypeWrapper::*)()>(&::Newtonsoft::Json::Converters::XDocumentTypeWrapper::get_LocalName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5da03d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), 15 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Linq::XDocumentType*& Newtonsoft::Json::Converters::XDocumentTypeWrapper::__cordl_internal_get__documentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____documentType;
}
constexpr ::System::Xml::Linq::XDocumentType* const& Newtonsoft::Json::Converters::XDocumentTypeWrapper::__cordl_internal_get__documentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____documentType;
}
constexpr void Newtonsoft::Json::Converters::XDocumentTypeWrapper::__cordl_internal_set__documentType(::System::Xml::Linq::XDocumentType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____documentType = value;
}
inline void Newtonsoft::Json::Converters::XDocumentTypeWrapper::_ctor(::System::Xml::Linq::XDocumentType* documentType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XDocumentType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, documentType);
}
inline ::StringW Newtonsoft::Json::Converters::XDocumentTypeWrapper::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XDocumentTypeWrapper::get_System() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), { "get_System", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XDocumentTypeWrapper::get_Public() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), { "get_Public", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XDocumentTypeWrapper::get_InternalSubset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), { "get_InternalSubset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XDocumentTypeWrapper::get_LocalName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XDocumentTypeWrapper* Newtonsoft::Json::Converters::XDocumentTypeWrapper::New_ctor(::System::Xml::Linq::XDocumentType* documentType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XDocumentTypeWrapper*>(documentType));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocumentType"
constexpr Newtonsoft::Json::Converters::XDocumentTypeWrapper::operator ::Newtonsoft::Json::Converters::IXmlDocumentType*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlDocumentType*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDocumentType"
constexpr ::Newtonsoft::Json::Converters::IXmlDocumentType* Newtonsoft::Json::Converters::XDocumentTypeWrapper::i___Newtonsoft__Json__Converters__IXmlDocumentType() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlDocumentType*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr Newtonsoft::Json::Converters::XDocumentTypeWrapper::operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentTypeWrapper::i___Newtonsoft__Json__Converters__IXmlNode() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XDocumentTypeWrapper::XDocumentTypeWrapper() {}
