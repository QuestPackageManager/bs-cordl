#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/Token.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::Headers::Token_Type::Token_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Token_Type::Token_Type() {}
constexpr ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token_Type::Error{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token_Type::End{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token_Type::Token{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token_Type::QuotedString{ static_cast<int32_t>(0x3) };
constexpr ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token_Type::SeparatorEqual{ static_cast<int32_t>(0x4) };
constexpr ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token_Type::SeparatorSemicolon{ static_cast<int32_t>(0x5) };
constexpr ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token_Type::SeparatorSlash{ static_cast<int32_t>(0x6) };
constexpr ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token_Type::SeparatorDash{ static_cast<int32_t>(0x7) };
constexpr ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token_Type::SeparatorComma{ static_cast<int32_t>(0x8) };
constexpr ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token_Type::OpenParens{ static_cast<int32_t>(0x9) };
//  Writing Method size for method: ::System::Net::Http::Headers::Token._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::Token::*)(::System::Net::Http::Headers::Token_Type, int32_t, int32_t)>(
    &::System::Net::Http::Headers::Token::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60dd328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token_Type>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.get_StartPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::Token::*)()>(&::System::Net::Http::Headers::Token::get_StartPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e5484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "get_StartPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.set_StartPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::Token::*)(int32_t)>(&::System::Net::Http::Headers::Token::set_StartPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e548c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "set_StartPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.get_EndPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::Token::*)()>(&::System::Net::Http::Headers::Token::get_EndPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e5494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "get_EndPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.set_EndPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::Token::*)(int32_t)>(&::System::Net::Http::Headers::Token::set_EndPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e549c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "set_EndPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.get_Kind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::Token_Type (::System::Net::Http::Headers::Token::*)()>(&::System::Net::Http::Headers::Token::get_Kind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e54a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "get_Kind", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.op_Implicit___System__Net__Http__Headers__Token_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::Token_Type (*)(::System::Net::Http::Headers::Token)>(
    &::System::Net::Http::Headers::Token::op_Implicit___System__Net__Http__Headers__Token_Type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e54ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::Token::*)()>(&::System::Net::Http::Headers::Token::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60e54b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { ::i2c::class_of<::System::Net::Http::Headers::Token>(), 3 }));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::Token::setStaticF_Empty(::System::Net::Http::Headers::Token value) {
  ::cordl_internals::setStaticField<::System::Net::Http::Headers::Token, "Empty", ::System::Net::Http::Headers::Token>(std::forward<::System::Net::Http::Headers::Token>(value));
}
inline ::System::Net::Http::Headers::Token System::Net::Http::Headers::Token::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Net::Http::Headers::Token, "Empty", ::System::Net::Http::Headers::Token>();
}
inline void System::Net::Http::Headers::Token::_ctor(::System::Net::Http::Headers::Token_Type type, int32_t startPosition, int32_t endPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token_Type>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, startPosition, endPosition);
}
inline int32_t System::Net::Http::Headers::Token::get_StartPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "get_StartPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void System::Net::Http::Headers::Token::set_StartPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "set_StartPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t System::Net::Http::Headers::Token::get_EndPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "get_EndPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void System::Net::Http::Headers::Token::set_EndPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "set_EndPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token::get_Kind() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "get_Kind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::Token_Type>(*this, ___internal_method);
}
inline ::System::Net::Http::Headers::Token_Type System::Net::Http::Headers::Token::op_Implicit___System__Net__Http__Headers__Token_Type(::System::Net::Http::Headers::Token token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Token>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::Token_Type>(nullptr, ___internal_method, token);
}
inline ::StringW System::Net::Http::Headers::Token::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::Token>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Net::Http::Headers::Token_Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StartPosition_k__BackingField", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_EndPosition_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::Headers::Token::Token(::System::Net::Http::Headers::Token_Type type, int32_t _StartPosition_k__BackingField, int32_t _EndPosition_k__BackingField) noexcept {
  this->type = type;
  this->_StartPosition_k__BackingField = _StartPosition_k__BackingField;
  this->_EndPosition_k__BackingField = _EndPosition_k__BackingField;
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Token::Token() {}
