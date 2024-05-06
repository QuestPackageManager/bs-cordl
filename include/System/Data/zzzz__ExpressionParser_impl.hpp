#pragma once
#include "System/Data/zzzz__Tokens_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__ExpressionParser_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/Data/zzzz__ExpressionParser_def.hpp"
#include "System/Data/zzzz__FunctionId_def.hpp"
#include "System/Data/zzzz__OperatorInfo_def.hpp"
#include "System/Data/zzzz__Tokens_def.hpp"
//  Writing Method size for method: ::System::Data::__ExpressionParser__ReservedWords._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::__ExpressionParser__ReservedWords::*)(::StringW, ::System::Data::Tokens, int32_t)>(
    &::System::Data::__ExpressionParser__ReservedWords::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ccb9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__ExpressionParser__ReservedWords>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Tokens>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Data::__ExpressionParser__ReservedWords::_ctor(::StringW word, ::System::Data::Tokens token, int32_t op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__ExpressionParser__ReservedWords>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Tokens>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, word, token, op);
}
// Ctor Parameters [CppParam { name: "_word", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_token", ty: "::System::Data::Tokens", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_op", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::__ExpressionParser__ReservedWords::__ExpressionParser__ReservedWords(::StringW _word, ::System::Data::Tokens _token, int32_t _op) noexcept {
  this->_word = _word;
  this->_token = _token;
  this->_op = _op;
}
// Ctor Parameters []
constexpr ::System::Data::__ExpressionParser__ReservedWords::__ExpressionParser__ReservedWords() {}
//  Writing Method size for method: ::System::Data::ExpressionParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)(::System::Data::DataTable*)>(&::System::Data::ExpressionParser::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2cc8294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.LoadExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)(::StringW)>(&::System::Data::ExpressionParser::LoadExpression)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2cc8338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "LoadExpression", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.StartScan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::StartScan)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cc981c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "StartScan",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::Parse)> {
  constexpr static std::size_t size = 0xd40;
  constexpr static std::size_t addrs = 0x2cc8470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "Parse",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ParseAggregateArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (::System::Data::ExpressionParser::*)(::System::Data::FunctionId)>(
    &::System::Data::ExpressionParser::ParseAggregateArgument)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2cca658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ParseAggregateArgument", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::FunctionId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.NodePop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (::System::Data::ExpressionParser::*)()>(
    &::System::Data::ExpressionParser::NodePop)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cca580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "NodePop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.NodePeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (::System::Data::ExpressionParser::*)()>(
    &::System::Data::ExpressionParser::NodePeek)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cca4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "NodePeek",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.NodePush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)(::System::Data::ExpressionNode*)>(
    &::System::Data::ExpressionParser::NodePush)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2cca33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "NodePush", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.BuildExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)(int32_t)>(&::System::Data::ExpressionParser::BuildExpression)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2cc9d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "BuildExpression", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.CheckToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)(::System::Data::Tokens)>(&::System::Data::ExpressionParser::CheckToken)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cca22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "CheckToken", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Tokens>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.Scan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Tokens (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::Scan)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2cc9904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "Scan",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanNumeric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanNumeric)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ccb254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanNumeric",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ccb5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)(char16_t, char16_t, ::StringW)>(
    &::System::Data::ExpressionParser::ScanName)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2ccb144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanDate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ccafd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanDate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanBinaryConstant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanBinaryConstant)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ccb388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanBinaryConstant",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanReserved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanReserved)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2ccb3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanReserved",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)(char16_t)>(&::System::Data::ExpressionParser::ScanString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2ccb074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)(::System::Data::Tokens)>(&::System::Data::ExpressionParser::ScanToken)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cca010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanToken", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Tokens>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanWhite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanWhite)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ccaf7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanWhite",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.IsWhiteSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ExpressionParser::*)(char16_t)>(&::System::Data::ExpressionParser::IsWhiteSpace)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ccb740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "IsWhiteSpace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.IsAlphaNumeric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ExpressionParser::*)(char16_t)>(&::System::Data::ExpressionParser::IsAlphaNumeric)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ccb580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "IsAlphaNumeric", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.IsDigit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ExpressionParser::*)(char16_t)>(&::System::Data::ExpressionParser::IsDigit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ccb38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "IsDigit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.IsAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ExpressionParser::*)(char16_t)>(&::System::Data::ExpressionParser::IsAlpha)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ccb6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "IsAlpha", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
constexpr char16_t& System::Data::ExpressionParser::__cordl_internal_get__escape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____escape;
}
constexpr char16_t const& System::Data::ExpressionParser::__cordl_internal_get__escape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____escape;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__escape(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____escape = value;
}
constexpr char16_t& System::Data::ExpressionParser::__cordl_internal_get__decimalSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decimalSeparator;
}
constexpr char16_t const& System::Data::ExpressionParser::__cordl_internal_get__decimalSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decimalSeparator;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__decimalSeparator(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decimalSeparator = value;
}
constexpr char16_t& System::Data::ExpressionParser::__cordl_internal_get__listSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listSeparator;
}
constexpr char16_t const& System::Data::ExpressionParser::__cordl_internal_get__listSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listSeparator;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__listSeparator(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____listSeparator = value;
}
constexpr char16_t& System::Data::ExpressionParser::__cordl_internal_get__exponentL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exponentL;
}
constexpr char16_t const& System::Data::ExpressionParser::__cordl_internal_get__exponentL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exponentL;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__exponentL(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exponentL = value;
}
constexpr char16_t& System::Data::ExpressionParser::__cordl_internal_get__exponentU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exponentU;
}
constexpr char16_t const& System::Data::ExpressionParser::__cordl_internal_get__exponentU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exponentU;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__exponentU(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exponentU = value;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Data::ExpressionParser::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Data::ExpressionParser::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__text(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__pos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__pos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__pos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pos = value;
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____start = value;
}
constexpr ::System::Data::Tokens& System::Data::ExpressionParser::__cordl_internal_get__token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr ::System::Data::Tokens const& System::Data::ExpressionParser::__cordl_internal_get__token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__token(::System::Data::Tokens value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____token = value;
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__op() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__op() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__op(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____op = value;
}
constexpr ::ArrayW<::System::Data::OperatorInfo*, ::Array<::System::Data::OperatorInfo*>*>& System::Data::ExpressionParser::__cordl_internal_get__ops() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ops;
}
constexpr ::ArrayW<::System::Data::OperatorInfo*, ::Array<::System::Data::OperatorInfo*>*> const& System::Data::ExpressionParser::__cordl_internal_get__ops() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ops;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__ops(::ArrayW<::System::Data::OperatorInfo*, ::Array<::System::Data::OperatorInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ops)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__topOperator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topOperator;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__topOperator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topOperator;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__topOperator(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topOperator = value;
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__topNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topNode;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__topNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topNode;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__topNode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topNode = value;
}
constexpr ::System::Data::DataTable*& System::Data::ExpressionParser::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& System::Data::ExpressionParser::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*>& System::Data::ExpressionParser::__cordl_internal_get__nodeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeStack;
}
constexpr ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> const& System::Data::ExpressionParser::__cordl_internal_get__nodeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeStack;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__nodeStack(::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodeStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__prevOperand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevOperand;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__prevOperand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevOperand;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__prevOperand(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevOperand = value;
}
constexpr ::System::Data::ExpressionNode*& System::Data::ExpressionParser::__cordl_internal_get__expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::ExpressionNode*> const& System::Data::ExpressionParser::__cordl_internal_get__expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__expression(::System::Data::ExpressionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::ExpressionParser::setStaticF_s_reservedwords(::ArrayW<::System::Data::__ExpressionParser__ReservedWords, ::Array<::System::Data::__ExpressionParser__ReservedWords>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Data::__ExpressionParser__ReservedWords, ::Array<::System::Data::__ExpressionParser__ReservedWords>*>, "s_reservedwords",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get>(
      std::forward<::ArrayW<::System::Data::__ExpressionParser__ReservedWords, ::Array<::System::Data::__ExpressionParser__ReservedWords>*>>(value));
}
inline ::ArrayW<::System::Data::__ExpressionParser__ReservedWords, ::Array<::System::Data::__ExpressionParser__ReservedWords>*> System::Data::ExpressionParser::getStaticF_s_reservedwords() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Data::__ExpressionParser__ReservedWords, ::Array<::System::Data::__ExpressionParser__ReservedWords>*>, "s_reservedwords",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get>();
}
inline ::System::Data::ExpressionParser* System::Data::ExpressionParser::New_ctor(::System::Data::DataTable* table) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::ExpressionParser*>(table));
}
inline void System::Data::ExpressionParser::_ctor(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table);
}
inline void System::Data::ExpressionParser::LoadExpression(::StringW data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "LoadExpression", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void System::Data::ExpressionParser::StartScan() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "StartScan",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Data::ExpressionNode* System::Data::ExpressionParser::Parse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "Parse",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*, false>(this, ___internal_method);
}
inline ::System::Data::ExpressionNode* System::Data::ExpressionParser::ParseAggregateArgument(::System::Data::FunctionId aggregate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ParseAggregateArgument", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::FunctionId>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*, false>(this, ___internal_method, aggregate);
}
inline ::System::Data::ExpressionNode* System::Data::ExpressionParser::NodePop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "NodePop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*, false>(this, ___internal_method);
}
inline ::System::Data::ExpressionNode* System::Data::ExpressionParser::NodePeek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "NodePeek",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*, false>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::NodePush(::System::Data::ExpressionNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "NodePush", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Data::ExpressionParser::BuildExpression(int32_t pri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "BuildExpression",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pri);
}
inline void System::Data::ExpressionParser::CheckToken(::System::Data::Tokens token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "CheckToken", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Tokens>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline ::System::Data::Tokens System::Data::ExpressionParser::Scan() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "Scan",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Tokens, false>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanNumeric() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanNumeric",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanName(char16_t chEnd, char16_t esc, ::StringW charsToEscape) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chEnd, esc, charsToEscape);
}
inline void System::Data::ExpressionParser::ScanDate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanDate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanBinaryConstant() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanBinaryConstant",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanReserved() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanReserved",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanString(char16_t escape) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, escape);
}
inline void System::Data::ExpressionParser::ScanToken(::System::Data::Tokens token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanToken", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Tokens>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void System::Data::ExpressionParser::ScanWhite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "ScanWhite",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Data::ExpressionParser::IsWhiteSpace(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "IsWhiteSpace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ch);
}
inline bool System::Data::ExpressionParser::IsAlphaNumeric(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "IsAlphaNumeric", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ch);
}
inline bool System::Data::ExpressionParser::IsDigit(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "IsDigit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ch);
}
inline bool System::Data::ExpressionParser::IsAlpha(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ExpressionParser*>::get(), "IsAlpha", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ch);
}
// Ctor Parameters []
constexpr ::System::Data::ExpressionParser::ExpressionParser() {}
