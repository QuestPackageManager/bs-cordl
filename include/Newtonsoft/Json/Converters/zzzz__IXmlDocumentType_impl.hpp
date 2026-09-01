#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\IXmlDocumentType.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlDocumentType_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::IXmlDocumentType.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::IXmlDocumentType::*)()>(&::Newtonsoft::Json::Converters::IXmlDocumentType::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::IXmlDocumentType.get_System
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::IXmlDocumentType::*)()>(&::Newtonsoft::Json::Converters::IXmlDocumentType::get_System)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::IXmlDocumentType.get_Public
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::IXmlDocumentType::*)()>(&::Newtonsoft::Json::Converters::IXmlDocumentType::get_Public)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::IXmlDocumentType.get_InternalSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::IXmlDocumentType::*)()>(&::Newtonsoft::Json::Converters::IXmlDocumentType::get_InternalSubset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW Newtonsoft::Json::Converters::IXmlDocumentType::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::IXmlDocumentType::get_System() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::IXmlDocumentType::get_Public() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::IXmlDocumentType::get_InternalSubset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::IXmlDocumentType*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr Newtonsoft::Json::Converters::IXmlDocumentType::operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::IXmlDocumentType::i___Newtonsoft__Json__Converters__IXmlNode() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
