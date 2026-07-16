#pragma once
// IWYU pragma private; include "System/Xml/XmlConfiguration/XmlReaderSection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/XmlConfiguration/zzzz__XmlReaderSection_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlConfiguration::XmlReaderSection.get_ProhibitDefaultUrlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Xml::XmlConfiguration::XmlReaderSection::get_ProhibitDefaultUrlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6310f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConfiguration::XmlReaderSection*>(), { "get_ProhibitDefaultUrlResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConfiguration::XmlReaderSection.CreateDefaultResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlResolver* (*)()>(&::System::Xml::XmlConfiguration::XmlReaderSection::CreateDefaultResolver)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6310f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConfiguration::XmlReaderSection*>(), { "CreateDefaultResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConfiguration::XmlReaderSection.get_CollapseWhiteSpaceIntoEmptyString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Xml::XmlConfiguration::XmlReaderSection::get_CollapseWhiteSpaceIntoEmptyString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6310f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConfiguration::XmlReaderSection*>(), { "get_CollapseWhiteSpaceIntoEmptyString", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Xml::XmlConfiguration::XmlReaderSection::get_ProhibitDefaultUrlResolver() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConfiguration::XmlReaderSection*>(), { "get_ProhibitDefaultUrlResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Xml::XmlResolver* System::Xml::XmlConfiguration::XmlReaderSection::CreateDefaultResolver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConfiguration::XmlReaderSection*>(), { "CreateDefaultResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlResolver*>(nullptr, ___internal_method);
}
inline bool System::Xml::XmlConfiguration::XmlReaderSection::get_CollapseWhiteSpaceIntoEmptyString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConfiguration::XmlReaderSection*>(), { "get_CollapseWhiteSpaceIntoEmptyString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlConfiguration::XmlReaderSection::XmlReaderSection() {}
