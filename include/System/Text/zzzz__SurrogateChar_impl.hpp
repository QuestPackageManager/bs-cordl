#pragma once
// IWYU pragma private; include "System/Text/SurrogateChar.hpp"
#include "System/Text/zzzz__SurrogateChar_def.hpp"
//  Writing Method size for method: ::System::Text::SurrogateChar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::SurrogateChar::*)(int32_t)>(&::System::Text::SurrogateChar::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6124170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::SurrogateChar>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::SurrogateChar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::SurrogateChar::*)(char16_t, char16_t)>(&::System::Text::SurrogateChar::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x612dc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::SurrogateChar>(), { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::SurrogateChar.get_LowChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::SurrogateChar::*)()>(&::System::Text::SurrogateChar::get_LowChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x612de40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::SurrogateChar>(), { "get_LowChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::SurrogateChar.get_HighChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::SurrogateChar::*)()>(&::System::Text::SurrogateChar::get_HighChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x612de48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::SurrogateChar>(), { "get_HighChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::SurrogateChar.get_Char
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::SurrogateChar::*)()>(&::System::Text::SurrogateChar::get_Char)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x612de50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::SurrogateChar>(), { "get_Char", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Text::SurrogateChar::_ctor(int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::SurrogateChar>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ch);
}
inline void System::Text::SurrogateChar::_ctor(char16_t lowChar, char16_t highChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::SurrogateChar>(), { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lowChar, highChar);
}
inline char16_t System::Text::SurrogateChar::get_LowChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::SurrogateChar>(), { "get_LowChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
inline char16_t System::Text::SurrogateChar::get_HighChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::SurrogateChar>(), { "get_HighChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
inline int32_t System::Text::SurrogateChar::get_Char() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::SurrogateChar>(), { "get_Char", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "lowChar", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "highChar", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::SurrogateChar::SurrogateChar(char16_t lowChar, char16_t highChar) noexcept {
  this->lowChar = lowChar;
  this->highChar = highChar;
}
// Ctor Parameters []
constexpr ::System::Text::SurrogateChar::SurrogateChar() {}
