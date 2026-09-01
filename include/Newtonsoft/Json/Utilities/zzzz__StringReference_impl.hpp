#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\StringReference.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringReference.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Newtonsoft::Json::Utilities::StringReference::*)(int32_t)>(&::Newtonsoft::Json::Utilities::StringReference::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d33838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringReference.get_Chars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::Newtonsoft::Json::Utilities::StringReference::*)()>(&::Newtonsoft::Json::Utilities::StringReference::get_Chars)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d33868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), { "get_Chars", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringReference.get_StartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Utilities::StringReference::*)()>(&::Newtonsoft::Json::Utilities::StringReference::get_StartIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d33870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), { "get_StartIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringReference.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Utilities::StringReference::*)()>(&::Newtonsoft::Json::Utilities::StringReference::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d33878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::StringReference::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::Newtonsoft::Json::Utilities::StringReference::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d33880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringReference.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Utilities::StringReference::*)()>(&::Newtonsoft::Json::Utilities::StringReference::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d3388c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), { ::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), 3 }));
    return ___internal_method;
  }
};
inline char16_t Newtonsoft::Json::Utilities::StringReference::get_Item(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method, i);
}
inline ::ArrayW<char16_t> Newtonsoft::Json::Utilities::StringReference::get_Chars() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), { "get_Chars", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(*this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Utilities::StringReference::get_StartIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), { "get_StartIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Utilities::StringReference::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Utilities::StringReference::_ctor(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chars, startIndex, length);
}
inline ::StringW Newtonsoft::Json::Utilities::StringReference::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::StringReference>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_chars", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_startIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::StringReference::StringReference(::ArrayW<char16_t> _chars, int32_t _startIndex, int32_t _length) noexcept {
  this->_chars = _chars;
  this->_startIndex = _startIndex;
  this->_length = _length;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::StringReference::StringReference() {}
