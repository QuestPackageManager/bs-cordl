#pragma once
// IWYU pragma private; include "System\Configuration\IgnoreSection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Configuration/zzzz__IgnoreSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationSaveMode_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Configuration::IgnoreSection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IgnoreSection::*)()>(&::System::Configuration::IgnoreSection::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f579ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Configuration::IgnoreSection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Configuration::IgnoreSection::*)()>(
    &::System::Configuration::IgnoreSection::get_Properties)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f57a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Configuration::IgnoreSection*>(), { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.DeserializeSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IgnoreSection::*)(::System::Xml::XmlReader*)>(&::System::Configuration::IgnoreSection::DeserializeSection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f57a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Configuration::IgnoreSection*>(), { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.IsModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::IgnoreSection::*)()>(&::System::Configuration::IgnoreSection::IsModified)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f57aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Configuration::IgnoreSection*>(), { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IgnoreSection::*)(::System::Configuration::ConfigurationElement*)>(
    &::System::Configuration::IgnoreSection::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f57adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Configuration::IgnoreSection*>(), { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.ResetModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IgnoreSection::*)()>(&::System::Configuration::IgnoreSection::ResetModified)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f57b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Configuration::IgnoreSection*>(), { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.SerializeSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::IgnoreSection::*)(
    ::System::Configuration::ConfigurationElement*, ::StringW, ::System::Configuration::ConfigurationSaveMode)>(&::System::Configuration::IgnoreSection::SerializeSection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f57b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Configuration::IgnoreSection*>(), { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 9 }));
    return ___internal_method;
  }
};
inline void System::Configuration::IgnoreSection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Configuration::IgnoreSection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Configuration::IgnoreSection::get_Properties() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline void System::Configuration::IgnoreSection::DeserializeSection(::System::Xml::XmlReader* xmlReader) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlReader);
}
inline bool System::Configuration::IgnoreSection::IsModified() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Configuration::IgnoreSection::Reset(::System::Configuration::ConfigurationElement* parentSection) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentSection);
}
inline void System::Configuration::IgnoreSection::ResetModified() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Configuration::IgnoreSection::SerializeSection(::System::Configuration::ConfigurationElement* parentSection, ::StringW name,
                                                                        ::System::Configuration::ConfigurationSaveMode saveMode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Configuration::IgnoreSection*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, parentSection, name, saveMode);
}
inline ::System::Configuration::IgnoreSection* System::Configuration::IgnoreSection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::IgnoreSection*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::IgnoreSection::IgnoreSection() {}
