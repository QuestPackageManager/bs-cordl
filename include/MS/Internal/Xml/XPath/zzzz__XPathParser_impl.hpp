#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/XPathParser.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Function_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__XPathParser_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Axis_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Function_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__XPathParser_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__XPathScanner_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser_ParamInfo.get_FType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::Function_FunctionType (::MS::Internal::Xml::XPath::XPathParser_ParamInfo::*)()>(
    &::MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_FType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6274b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(), { "get_FType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser_ParamInfo.get_Minargs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MS::Internal::Xml::XPath::XPathParser_ParamInfo::*)()>(&::MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_Minargs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6274b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(), { "get_Minargs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser_ParamInfo.get_Maxargs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MS::Internal::Xml::XPath::XPathParser_ParamInfo::*)()>(&::MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_Maxargs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6274b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(), { "get_Maxargs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser_ParamInfo.get_ArgTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::XPath::XPathResultType> (::MS::Internal::Xml::XPath::XPathParser_ParamInfo::*)()>(
    &::MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_ArgTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6274b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(), { "get_ArgTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser_ParamInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::XPathParser_ParamInfo::*)(
    ::MS::Internal::Xml::XPath::Function_FunctionType, int32_t, int32_t, ::ArrayW<::System::Xml::XPath::XPathResultType>)>(&::MS::Internal::Xml::XPath::XPathParser_ParamInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6274508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::MS::Internal::Xml::XPath::Function_FunctionType>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Xml::XPath::XPathResultType>>() } })));
    return ___internal_method;
  }
};
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType& MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_get__ftype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ftype;
}
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType const& MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_get__ftype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ftype;
}
constexpr void MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_set__ftype(::MS::Internal::Xml::XPath::Function_FunctionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ftype = value;
}
constexpr int32_t& MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_get__minargs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minargs;
}
constexpr int32_t const& MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_get__minargs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minargs;
}
constexpr void MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_set__minargs(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minargs = value;
}
constexpr int32_t& MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_get__maxargs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxargs;
}
constexpr int32_t const& MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_get__maxargs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxargs;
}
constexpr void MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_set__maxargs(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxargs = value;
}
constexpr ::ArrayW<::System::Xml::XPath::XPathResultType>& MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_get__argTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argTypes;
}
constexpr ::ArrayW<::System::Xml::XPath::XPathResultType> const& MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_get__argTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argTypes;
}
constexpr void MS::Internal::Xml::XPath::XPathParser_ParamInfo::__cordl_internal_set__argTypes(::ArrayW<::System::Xml::XPath::XPathResultType> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____argTypes = value;
}
inline ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_FType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(), { "get_FType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::Function_FunctionType>(this, ___internal_method);
}
inline int32_t MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_Minargs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(), { "get_Minargs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_Maxargs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(), { "get_Maxargs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::XPathParser_ParamInfo::get_ArgTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(), { "get_ArgTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XPath::XPathResultType>>(this, ___internal_method);
}
inline void MS::Internal::Xml::XPath::XPathParser_ParamInfo::_ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype, int32_t minargs, int32_t maxargs,
                                                                   ::ArrayW<::System::Xml::XPath::XPathResultType> argTypes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::MS::Internal::Xml::XPath::Function_FunctionType>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Xml::XPath::XPathResultType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ftype, minargs, maxargs, argTypes);
}
inline ::MS::Internal::Xml::XPath::XPathParser_ParamInfo* MS::Internal::Xml::XPath::XPathParser_ParamInfo::New_ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype, int32_t minargs,
                                                                                                                    int32_t maxargs, ::ArrayW<::System::Xml::XPath::XPathResultType> argTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>(ftype, minargs, maxargs, argTypes));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::XPathParser_ParamInfo::XPathParser_ParamInfo() {}
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::XPathScanner*)>(&::MS::Internal::Xml::XPath::XPathParser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6271738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { ".ctor", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseXPathExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (*)(::StringW)>(&::MS::Internal::Xml::XPath::XPathParser::ParseXPathExpression)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6271740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseXPathExpression", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseExpression)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6271898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseExpression", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseOrExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseOrExpr)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x62718fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseOrExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseAndExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseAndExpr)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x62719f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseAndExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseEqualityExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseEqualityExpr)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6271b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseEqualityExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseRelationalExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseRelationalExpr)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6271c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseRelationalExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseAdditiveExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseAdditiveExpr)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6271d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseAdditiveExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseMultiplicativeExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseMultiplicativeExpr)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6271ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseMultiplicativeExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseUnaryExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseUnaryExpr)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6271f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseUnaryExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseUnionExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseUnionExpr)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6271ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseUnionExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.IsNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MS::Internal::Xml::XPath::XPathScanner*)>(&::MS::Internal::Xml::XPath::XPathParser::IsNodeType)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6272298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "IsNodeType", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParsePathExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParsePathExpr)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x62720f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParsePathExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseFilterExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseFilterExpr)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6272440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseFilterExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParsePredicate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParsePredicate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6272984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParsePredicate", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseLocationPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseLocationPath)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x62725e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseLocationPath", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseRelativeLocationPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseRelativeLocationPath)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x62724e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(),
                                                                                           { "ParseRelativeLocationPath", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.IsStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MS::Internal::Xml::XPath::XPathScanner_LexKind)>(&::MS::Internal::Xml::XPath::XPathParser::IsStep)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6272a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "IsStep", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner_LexKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseStep)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6272a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseStep", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseNodeTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (
    ::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::Axis_AxisType, ::System::Xml::XPath::XPathNodeType)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseNodeTest)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x6272cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(),
                                                             { "ParseNodeTest",
                                                               {},
                                                               { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>(), ::i2c::type_of<::MS::Internal::Xml::XPath::Axis_AxisType>(),
                                                                 ::i2c::type_of<::System::Xml::XPath::XPathNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.IsPrimaryExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MS::Internal::Xml::XPath::XPathScanner*)>(&::MS::Internal::Xml::XPath::XPathParser::IsPrimaryExpr)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x627238c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "IsPrimaryExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParsePrimaryExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParsePrimaryExpr)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6272750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParsePrimaryExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.ParseMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::XPathParser::ParseMethod)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x6273008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseMethod", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.CheckToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::XPathScanner_LexKind)>(
    &::MS::Internal::Xml::XPath::XPathParser::CheckToken)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6272fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "CheckToken", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner_LexKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.PassToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::XPathScanner_LexKind)>(
    &::MS::Internal::Xml::XPath::XPathParser::PassToken)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62729f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "PassToken", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner_LexKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.NextLex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::XPathParser::*)()>(&::MS::Internal::Xml::XPath::XPathParser::NextLex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6271b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "NextLex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.TestOp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MS::Internal::Xml::XPath::XPathParser::*)(::StringW)>(&::MS::Internal::Xml::XPath::XPathParser::TestOp)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6271ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "TestOp", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.CheckNodeSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::XPathParser::*)(::System::Xml::XPath::XPathResultType)>(
    &::MS::Internal::Xml::XPath::XPathParser::CheckNodeSet)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x627223c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "CheckNodeSet", {}, { ::i2c::type_of<::System::Xml::XPath::XPathResultType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.CreateFunctionTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>* (*)()>(
    &::MS::Internal::Xml::XPath::XPathParser::CreateFunctionTable)> {
  constexpr static std::size_t size = 0xb88;
  constexpr static std::size_t addrs = 0x6273980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "CreateFunctionTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.CreateAxesTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis_AxisType>* (*)()>(
    &::MS::Internal::Xml::XPath::XPathParser::CreateAxesTable)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x6274518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "CreateAxesTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathParser.GetAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::Axis_AxisType (::MS::Internal::Xml::XPath::XPathParser::*)()>(&::MS::Internal::Xml::XPath::XPathParser::GetAxis)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6272bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "GetAxis", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::MS::Internal::Xml::XPath::XPathScanner*& MS::Internal::Xml::XPath::XPathParser::__cordl_internal_get__scanner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scanner;
}
constexpr ::MS::Internal::Xml::XPath::XPathScanner* const& MS::Internal::Xml::XPath::XPathParser::__cordl_internal_get__scanner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scanner;
}
constexpr void MS::Internal::Xml::XPath::XPathParser::__cordl_internal_set__scanner(::MS::Internal::Xml::XPath::XPathScanner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scanner = value;
}
constexpr int32_t& MS::Internal::Xml::XPath::XPathParser::__cordl_internal_get__parseDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parseDepth;
}
constexpr int32_t const& MS::Internal::Xml::XPath::XPathParser::__cordl_internal_get__parseDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parseDepth;
}
constexpr void MS::Internal::Xml::XPath::XPathParser::__cordl_internal_set__parseDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parseDepth = value;
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_temparray1(::ArrayW<::System::Xml::XPath::XPathResultType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray1", ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::ArrayW<::System::Xml::XPath::XPathResultType>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::XPathParser::getStaticF_s_temparray1() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray1", ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_temparray2(::ArrayW<::System::Xml::XPath::XPathResultType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray2", ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::ArrayW<::System::Xml::XPath::XPathResultType>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::XPathParser::getStaticF_s_temparray2() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray2", ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_temparray3(::ArrayW<::System::Xml::XPath::XPathResultType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray3", ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::ArrayW<::System::Xml::XPath::XPathResultType>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::XPathParser::getStaticF_s_temparray3() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray3", ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_temparray4(::ArrayW<::System::Xml::XPath::XPathResultType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray4", ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::ArrayW<::System::Xml::XPath::XPathResultType>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::XPathParser::getStaticF_s_temparray4() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray4", ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_temparray5(::ArrayW<::System::Xml::XPath::XPathResultType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray5", ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::ArrayW<::System::Xml::XPath::XPathResultType>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::XPathParser::getStaticF_s_temparray5() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray5", ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_temparray6(::ArrayW<::System::Xml::XPath::XPathResultType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray6", ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::ArrayW<::System::Xml::XPath::XPathResultType>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::XPathParser::getStaticF_s_temparray6() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray6", ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_temparray7(::ArrayW<::System::Xml::XPath::XPathResultType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray7", ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::ArrayW<::System::Xml::XPath::XPathResultType>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::XPathParser::getStaticF_s_temparray7() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray7", ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_temparray8(::ArrayW<::System::Xml::XPath::XPathResultType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray8", ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::ArrayW<::System::Xml::XPath::XPathResultType>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::XPathParser::getStaticF_s_temparray8() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray8", ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_temparray9(::ArrayW<::System::Xml::XPath::XPathResultType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray9", ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::ArrayW<::System::Xml::XPath::XPathResultType>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::XPathParser::getStaticF_s_temparray9() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "s_temparray9", ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_functionTable(::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>*, "s_functionTable",
                                    ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>* MS::Internal::Xml::XPath::XPathParser::getStaticF_s_functionTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>*, "s_functionTable",
                                           ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::setStaticF_s_AxesTable(::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis_AxisType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis_AxisType>*, "s_AxesTable", ::MS::Internal::Xml::XPath::XPathParser*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis_AxisType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis_AxisType>* MS::Internal::Xml::XPath::XPathParser::getStaticF_s_AxesTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis_AxisType>*, "s_AxesTable",
                                           ::MS::Internal::Xml::XPath::XPathParser*>();
}
inline void MS::Internal::Xml::XPath::XPathParser::_ctor(::MS::Internal::Xml::XPath::XPathScanner* scanner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { ".ctor", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scanner);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseXPathExpression(::StringW xpathExpression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseXPathExpression", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(nullptr, ___internal_method, xpathExpression);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseExpression(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseExpression", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseOrExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseOrExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseAndExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseAndExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseEqualityExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseEqualityExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseRelationalExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseRelationalExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseAdditiveExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseAdditiveExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseMultiplicativeExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseMultiplicativeExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseUnaryExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseUnaryExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseUnionExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseUnionExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline bool MS::Internal::Xml::XPath::XPathParser::IsNodeType(::MS::Internal::Xml::XPath::XPathScanner* scaner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "IsNodeType", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scaner);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParsePathExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParsePathExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseFilterExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseFilterExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParsePredicate(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParsePredicate", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseLocationPath(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseLocationPath", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseRelativeLocationPath(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseRelativeLocationPath", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline bool MS::Internal::Xml::XPath::XPathParser::IsStep(::MS::Internal::Xml::XPath::XPathScanner_LexKind lexKind) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "IsStep", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner_LexKind>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lexKind);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseStep(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseStep", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseNodeTest(::MS::Internal::Xml::XPath::AstNode* qyInput, ::MS::Internal::Xml::XPath::Axis_AxisType axisType,
                                                                                                 ::System::Xml::XPath::XPathNodeType nodeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(),
                                                           { "ParseNodeTest",
                                                             {},
                                                             { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>(), ::i2c::type_of<::MS::Internal::Xml::XPath::Axis_AxisType>(),
                                                               ::i2c::type_of<::System::Xml::XPath::XPathNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput, axisType, nodeType);
}
inline bool MS::Internal::Xml::XPath::XPathParser::IsPrimaryExpr(::MS::Internal::Xml::XPath::XPathScanner* scanner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "IsPrimaryExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scanner);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParsePrimaryExpr(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParsePrimaryExpr", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::XPathParser::ParseMethod(::MS::Internal::Xml::XPath::AstNode* qyInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "ParseMethod", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*>(this, ___internal_method, qyInput);
}
inline void MS::Internal::Xml::XPath::XPathParser::CheckToken(::MS::Internal::Xml::XPath::XPathScanner_LexKind t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "CheckToken", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner_LexKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void MS::Internal::Xml::XPath::XPathParser::PassToken(::MS::Internal::Xml::XPath::XPathScanner_LexKind t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "PassToken", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::XPathScanner_LexKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void MS::Internal::Xml::XPath::XPathParser::NextLex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "NextLex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool MS::Internal::Xml::XPath::XPathParser::TestOp(::StringW op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "TestOp", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, op);
}
inline void MS::Internal::Xml::XPath::XPathParser::CheckNodeSet(::System::Xml::XPath::XPathResultType t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "CheckNodeSet", {}, { ::i2c::type_of<::System::Xml::XPath::XPathResultType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>* MS::Internal::Xml::XPath::XPathParser::CreateFunctionTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "CreateFunctionTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser_ParamInfo*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis_AxisType>* MS::Internal::Xml::XPath::XPathParser::CreateAxesTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "CreateAxesTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis_AxisType>*>(nullptr, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::XPathParser::GetAxis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::XPathParser*>(), { "GetAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::Axis_AxisType>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::XPathParser* MS::Internal::Xml::XPath::XPathParser::New_ctor(::MS::Internal::Xml::XPath::XPathScanner* scanner) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::XPathParser*>(scanner));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::XPathParser::XPathParser() {}
