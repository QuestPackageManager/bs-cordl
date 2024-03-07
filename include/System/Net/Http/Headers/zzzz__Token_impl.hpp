#pragma once
#include "System/Net/Http/Headers/zzzz__Token_impl.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::Headers::__Token__Type::__Token__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__Token__Type::__Token__Type() {}
constexpr ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::__Token__Type::Error{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::__Token__Type::End{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::__Token__Type::Token{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::__Token__Type::QuotedString{ static_cast<int32_t>(0x3) };
constexpr ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::__Token__Type::SeparatorEqual{ static_cast<int32_t>(0x4) };
constexpr ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::__Token__Type::SeparatorSemicolon{ static_cast<int32_t>(0x5) };
constexpr ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::__Token__Type::SeparatorSlash{ static_cast<int32_t>(0x6) };
constexpr ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::__Token__Type::SeparatorDash{ static_cast<int32_t>(0x7) };
constexpr ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::__Token__Type::SeparatorComma{ static_cast<int32_t>(0x8) };
constexpr ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::__Token__Type::OpenParens{ static_cast<int32_t>(0x9) };
//  Writing Method size for method: ::System::Net::Http::Headers::Token._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::Token::*)(::System::Net::Http::Headers::__Token__Type, int32_t, int32_t)>(
    &::System::Net::Http::Headers::Token::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2981440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::__Token__Type>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.get_StartPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Http::Headers::Token::*)()>(&::System::Net::Http::Headers::Token::get_StartPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2988b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "get_StartPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.set_StartPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::Token::*)(int32_t)>(&::System::Net::Http::Headers::Token::set_StartPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2988b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "set_StartPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.get_EndPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Http::Headers::Token::*)()>(&::System::Net::Http::Headers::Token::get_EndPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2988b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "get_EndPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.set_EndPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::Token::*)(int32_t)>(&::System::Net::Http::Headers::Token::set_EndPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2988b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "set_EndPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.get_Kind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::__Token__Type (::System::Net::Http::Headers::Token::*)()>(
    &::System::Net::Http::Headers::Token::get_Kind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2988b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "get_Kind",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.op_Implicit___System__Net__Http__Headers____Token__Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::__Token__Type (*)(::System::Net::Http::Headers::Token)>(
    &::System::Net::Http::Headers::Token::op_Implicit___System__Net__Http__Headers____Token__Type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2988b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::Token>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Token.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Http::Headers::Token::*)()>(&::System::Net::Http::Headers::Token::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2988b3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), 3));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::Token::setStaticF_Empty(::System::Net::Http::Headers::Token value) {
  ::cordl_internals::setStaticField<::System::Net::Http::Headers::Token, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get>(
      std::forward<::System::Net::Http::Headers::Token>(value));
}
inline ::System::Net::Http::Headers::Token System::Net::Http::Headers::Token::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Net::Http::Headers::Token, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get>();
}
inline void System::Net::Http::Headers::Token::_ctor(::System::Net::Http::Headers::__Token__Type type, int32_t startPosition, int32_t endPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::__Token__Type>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, startPosition, endPosition);
}
inline int32_t System::Net::Http::Headers::Token::get_StartPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "get_StartPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::Http::Headers::Token::set_StartPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "set_StartPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::Http::Headers::Token::get_EndPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "get_EndPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::Http::Headers::Token::set_EndPosition(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "set_EndPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::Token::get_Kind() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "get_Kind",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::__Token__Type, false>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::__Token__Type System::Net::Http::Headers::Token::op_Implicit___System__Net__Http__Headers____Token__Type(::System::Net::Http::Headers::Token token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::Token>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::__Token__Type, false>(nullptr, ___internal_method, token);
}
inline ::StringW System::Net::Http::Headers::Token::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::Token>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Net::Http::Headers::__Token__Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StartPosition_k__BackingField", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EndPosition_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::Headers::Token::Token(::System::Net::Http::Headers::__Token__Type type, int32_t _StartPosition_k__BackingField, int32_t _EndPosition_k__BackingField) noexcept {
  this->type = type;
  this->_StartPosition_k__BackingField = _StartPosition_k__BackingField;
  this->_EndPosition_k__BackingField = _EndPosition_k__BackingField;
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Token::Token() {}
