#pragma once
// IWYU pragma private; include "System\Xml\Serialization\CodeIdentifier.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__CodeIdentifier_def.hpp"
#include "Microsoft/CSharp/zzzz__CodeDomProvider_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::CodeIdentifier.MakePascal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Serialization::CodeIdentifier::MakePascal)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x62ea8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::CodeIdentifier*>(), { "MakePascal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::CodeIdentifier.MakeValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Serialization::CodeIdentifier::MakeValid)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x62eaa4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::CodeIdentifier*>(), { "MakeValid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::CodeIdentifier.IsValidStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Xml::Serialization::CodeIdentifier::IsValidStart)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62eac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::CodeIdentifier*>(), { "IsValidStart", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::CodeIdentifier.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Xml::Serialization::CodeIdentifier::IsValid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x62eabc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::CodeIdentifier*>(), { "IsValid", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::CodeIdentifier::setStaticF_csharp(::Microsoft::CSharp::CodeDomProvider* value) {
  ::cordl_internals::setStaticField<::Microsoft::CSharp::CodeDomProvider*, "csharp", ::System::Xml::Serialization::CodeIdentifier*>(std::forward<::Microsoft::CSharp::CodeDomProvider*>(value));
}
inline ::Microsoft::CSharp::CodeDomProvider* System::Xml::Serialization::CodeIdentifier::getStaticF_csharp() {
  return ::cordl_internals::getStaticField<::Microsoft::CSharp::CodeDomProvider*, "csharp", ::System::Xml::Serialization::CodeIdentifier*>();
}
inline ::StringW System::Xml::Serialization::CodeIdentifier::MakePascal(::StringW identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::CodeIdentifier*>(), { "MakePascal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, identifier);
}
inline ::StringW System::Xml::Serialization::CodeIdentifier::MakeValid(::StringW identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::CodeIdentifier*>(), { "MakeValid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, identifier);
}
inline bool System::Xml::Serialization::CodeIdentifier::IsValidStart(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::CodeIdentifier*>(), { "IsValidStart", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool System::Xml::Serialization::CodeIdentifier::IsValid(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::CodeIdentifier*>(), { "IsValid", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::CodeIdentifier::CodeIdentifier() {}
