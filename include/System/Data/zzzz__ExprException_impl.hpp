#pragma once
// IWYU pragma private; include "System\Data\ExprException.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__ExprException_def.hpp"
#include "System/Data/zzzz__EvaluateException_def.hpp"
#include "System/Data/zzzz__InvalidExpressionException_def.hpp"
#include "System/Data/zzzz__OperatorInfo_def.hpp"
#include "System/Data/zzzz__SyntaxErrorException_def.hpp"
#include "System/Data/zzzz__Tokens_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__OverflowException_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::ExprException._Overflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::OverflowException* (*)(::StringW)>(&::System::Data::ExprException::_Overflow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6042cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "_Overflow", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException._Expr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::InvalidExpressionException* (*)(::StringW)>(&::System::Data::ExprException::_Expr)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6042d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "_Expr", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException._Syntax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SyntaxErrorException* (*)(::StringW)>(&::System::Data::ExprException::_Syntax)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6042dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "_Syntax", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException._Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::EvaluateException* (*)(::StringW)>(&::System::Data::ExprException::_Eval)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6042e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "_Eval", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException._Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::EvaluateException* (*)(::StringW, ::System::Exception*)>(&::System::Data::ExprException::_Eval)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6042eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "_Eval", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvokeArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::InvokeArgument)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6040ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvokeArgument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.NYI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::NYI)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6042f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "NYI", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.MissingOperand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::OperatorInfo*)>(&::System::Data::ExprException::MissingOperand)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60414b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "MissingOperand", {}, { ::i2c::type_of<::System::Data::OperatorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.MissingOperator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::MissingOperator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60417b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "MissingOperator", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.TypeMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::TypeMismatch)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6042f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "TypeMismatch", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.FunctionArgumentOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExprException::FunctionArgumentOutOfRange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6042fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "FunctionArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.ExpressionTooComplex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::ExpressionTooComplex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x604206c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "ExpressionTooComplex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.UnboundName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::UnboundName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x603644c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UnboundName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvalidString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::InvalidString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6042934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.UndefinedFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::UndefinedFunction)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60360cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UndefinedFunction", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.SyntaxError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::SyntaxError)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6041bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "SyntaxError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.FunctionArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::FunctionArgumentCount)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x604303c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "FunctionArgumentCount", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.MissingRightParen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::MissingRightParen)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x604176c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "MissingRightParen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.UnknownToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, int32_t)>(&::System::Data::ExprException::UnknownToken)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6041f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UnknownToken", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.UnknownToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Data::Tokens, ::System::Data::Tokens, int32_t)>(&::System::Data::ExprException::UnknownToken)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x60420b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(),
                                                { "UnknownToken", {}, { ::i2c::type_of<::System::Data::Tokens>(), ::i2c::type_of<::System::Data::Tokens>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.DatatypeConvertion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Type*, ::System::Type*)>(&::System::Data::ExprException::DatatypeConvertion)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6043090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "DatatypeConvertion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.DatavalueConvertion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Object*, ::System::Type*, ::System::Exception*)>(&::System::Data::ExprException::DatavalueConvertion)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6040d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(),
                                                { "DatavalueConvertion", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvalidName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::InvalidName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6043128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvalidDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::InvalidDate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60428bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidDate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.NonConstantArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::NonConstantArgument)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x604317c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "NonConstantArgument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvalidPattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::InvalidPattern)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x603f024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidPattern", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InWithoutParentheses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::InWithoutParentheses)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x603e41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InWithoutParentheses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InWithoutList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::InWithoutList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60431c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InWithoutList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvalidIsSyntax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::InvalidIsSyntax)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x603c5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidIsSyntax", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.Overflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Type*)>(&::System::Data::ExprException::Overflow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x603e4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "Overflow", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.ArgumentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, int32_t, ::System::Type*)>(&::System::Data::ExprException::ArgumentType)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6043204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "ArgumentType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.ArgumentTypeInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, int32_t)>(&::System::Data::ExprException::ArgumentTypeInteger)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60432d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "ArgumentTypeInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.TypeMismatchInBinop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t, ::System::Type*, ::System::Type*)>(&::System::Data::ExprException::TypeMismatchInBinop)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x603c920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(),
                                                             { "TypeMismatchInBinop", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.AmbiguousBinop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t, ::System::Type*, ::System::Type*)>(&::System::Data::ExprException::AmbiguousBinop)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x603e740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(),
                                                             { "AmbiguousBinop", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.UnsupportedOperator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t)>(&::System::Data::ExprException::UnsupportedOperator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x603e460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UnsupportedOperator", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvalidNameBracketing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::InvalidNameBracketing)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6042868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidNameBracketing", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.MissingOperandBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::MissingOperandBefore)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6041f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "MissingOperandBefore", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.TooManyRightParentheses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::TooManyRightParentheses)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6041ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "TooManyRightParentheses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.UnresolvedRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW)>(&::System::Data::ExprException::UnresolvedRelation)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60363e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UnresolvedRelation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.BindFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::EvaluateException* (*)(::StringW)>(&::System::Data::ExprException::BindFailure)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6043378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "BindFailure", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.AggregateArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::AggregateArgument)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6042028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "AggregateArgument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.AggregateUnbound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::AggregateUnbound)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6036394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "AggregateUnbound", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.EvalNoContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::EvalNoContext)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6036988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "EvalNoContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.ExpressionUnbound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::ExpressionUnbound)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60433cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "ExpressionUnbound", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.ComputeNotAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::ComputeNotAggregate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6036a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "ComputeNotAggregate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.FilterConvertion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::FilterConvertion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6040f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "FilterConvertion", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.LookupArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::LookupArgument)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6041a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "LookupArgument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvalidType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Data::ExprException::InvalidType)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6043420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvalidHoursArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::InvalidHoursArgument)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6043474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidHoursArgument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvalidMinutesArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::InvalidMinutesArgument)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60434b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidMinutesArgument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.InvalidTimeZoneRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::InvalidTimeZoneRange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60434fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidTimeZoneRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.MismatchKindandTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Data::ExprException::MismatchKindandTimeSpan)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6043540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "MismatchKindandTimeSpan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExprException.UnsupportedDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Type*)>(&::System::Data::ExprException::UnsupportedDataType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x603fd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UnsupportedDataType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::System::OverflowException* System::Data::ExprException::_Overflow(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "_Overflow", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::OverflowException*>(nullptr, ___internal_method, error);
}
inline ::System::Data::InvalidExpressionException* System::Data::ExprException::_Expr(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "_Expr", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::InvalidExpressionException*>(nullptr, ___internal_method, error);
}
inline ::System::Data::SyntaxErrorException* System::Data::ExprException::_Syntax(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "_Syntax", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SyntaxErrorException*>(nullptr, ___internal_method, error);
}
inline ::System::Data::EvaluateException* System::Data::ExprException::_Eval(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "_Eval", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::EvaluateException*>(nullptr, ___internal_method, error);
}
inline ::System::Data::EvaluateException* System::Data::ExprException::_Eval(::StringW error, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "_Eval", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::EvaluateException*>(nullptr, ___internal_method, error, innerException);
}
inline ::System::Exception* System::Data::ExprException::InvokeArgument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvokeArgument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::NYI(::StringW moreinfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "NYI", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, moreinfo);
}
inline ::System::Exception* System::Data::ExprException::MissingOperand(::System::Data::OperatorInfo* before) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "MissingOperand", {}, { ::i2c::type_of<::System::Data::OperatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, before);
}
inline ::System::Exception* System::Data::ExprException::MissingOperator(::StringW token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "MissingOperator", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, token);
}
inline ::System::Exception* System::Data::ExprException::TypeMismatch(::StringW expr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "TypeMismatch", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, expr);
}
inline ::System::Exception* System::Data::ExprException::FunctionArgumentOutOfRange(::StringW arg, ::StringW func) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "FunctionArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, arg, func);
}
inline ::System::Exception* System::Data::ExprException::ExpressionTooComplex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "ExpressionTooComplex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::UnboundName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UnboundName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExprException::InvalidString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, str);
}
inline ::System::Exception* System::Data::ExprException::UndefinedFunction(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UndefinedFunction", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExprException::SyntaxError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "SyntaxError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::FunctionArgumentCount(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "FunctionArgumentCount", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExprException::MissingRightParen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "MissingRightParen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::UnknownToken(::StringW token, int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UnknownToken", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, token, position);
}
inline ::System::Exception* System::Data::ExprException::UnknownToken(::System::Data::Tokens tokExpected, ::System::Data::Tokens tokCurr, int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(),
                                                           { "UnknownToken", {}, { ::i2c::type_of<::System::Data::Tokens>(), ::i2c::type_of<::System::Data::Tokens>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, tokExpected, tokCurr, position);
}
inline ::System::Exception* System::Data::ExprException::DatatypeConvertion(::System::Type* type1, ::System::Type* type2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "DatatypeConvertion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, type1, type2);
}
inline ::System::Exception* System::Data::ExprException::DatavalueConvertion(::System::Object* value, ::System::Type* type, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(),
                                              { "DatavalueConvertion", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, value, type, innerException);
}
inline ::System::Exception* System::Data::ExprException::InvalidName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExprException::InvalidDate(::StringW date) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidDate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, date);
}
inline ::System::Exception* System::Data::ExprException::NonConstantArgument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "NonConstantArgument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::InvalidPattern(::StringW pat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidPattern", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, pat);
}
inline ::System::Exception* System::Data::ExprException::InWithoutParentheses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InWithoutParentheses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::InWithoutList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InWithoutList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::InvalidIsSyntax() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidIsSyntax", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::Overflow(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "Overflow", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, type);
}
inline ::System::Exception* System::Data::ExprException::ArgumentType(::StringW function, int32_t arg, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "ArgumentType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, function, arg, type);
}
inline ::System::Exception* System::Data::ExprException::ArgumentTypeInteger(::StringW function, int32_t arg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "ArgumentTypeInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, function, arg);
}
inline ::System::Exception* System::Data::ExprException::TypeMismatchInBinop(int32_t op, ::System::Type* type1, ::System::Type* type2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(),
                                                           { "TypeMismatchInBinop", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, op, type1, type2);
}
inline ::System::Exception* System::Data::ExprException::AmbiguousBinop(int32_t op, ::System::Type* type1, ::System::Type* type2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(),
                                                           { "AmbiguousBinop", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, op, type1, type2);
}
inline ::System::Exception* System::Data::ExprException::UnsupportedOperator(int32_t op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UnsupportedOperator", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, op);
}
inline ::System::Exception* System::Data::ExprException::InvalidNameBracketing(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidNameBracketing", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Data::ExprException::MissingOperandBefore(::StringW op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "MissingOperandBefore", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, op);
}
inline ::System::Exception* System::Data::ExprException::TooManyRightParentheses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "TooManyRightParentheses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::UnresolvedRelation(::StringW name, ::StringW expr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UnresolvedRelation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name, expr);
}
inline ::System::Data::EvaluateException* System::Data::ExprException::BindFailure(::StringW relationName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "BindFailure", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::EvaluateException*>(nullptr, ___internal_method, relationName);
}
inline ::System::Exception* System::Data::ExprException::AggregateArgument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "AggregateArgument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::AggregateUnbound(::StringW expr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "AggregateUnbound", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, expr);
}
inline ::System::Exception* System::Data::ExprException::EvalNoContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "EvalNoContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::ExpressionUnbound(::StringW expr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "ExpressionUnbound", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, expr);
}
inline ::System::Exception* System::Data::ExprException::ComputeNotAggregate(::StringW expr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "ComputeNotAggregate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, expr);
}
inline ::System::Exception* System::Data::ExprException::FilterConvertion(::StringW expr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "FilterConvertion", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, expr);
}
inline ::System::Exception* System::Data::ExprException::LookupArgument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "LookupArgument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::InvalidType(::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, typeName);
}
inline ::System::Exception* System::Data::ExprException::InvalidHoursArgument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidHoursArgument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::InvalidMinutesArgument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidMinutesArgument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::InvalidTimeZoneRange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "InvalidTimeZoneRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::MismatchKindandTimeSpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "MismatchKindandTimeSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Data::ExprException::UnsupportedDataType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExprException*>(), { "UnsupportedDataType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Data::ExprException::ExprException() {}
