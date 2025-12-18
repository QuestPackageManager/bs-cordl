#pragma once
// IWYU pragma private; include "System/Data/ExprException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExprException)
namespace System::Data {
class EvaluateException;
}
namespace System::Data {
class InvalidExpressionException;
}
namespace System::Data {
class OperatorInfo;
}
namespace System::Data {
class SyntaxErrorException;
}
namespace System::Data {
struct Tokens;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class OverflowException;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class ExprException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ExprException);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ExprException
class CORDL_TYPE ExprException : public ::System::Object {
public:
  // Declarations
  /// @brief Method AggregateArgument, addr 0x5e8d4d0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* AggregateArgument();

  /// @brief Method AggregateUnbound, addr 0x5e8183c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* AggregateUnbound(::StringW expr);

  /// @brief Method AmbiguousBinop, addr 0x5e89be8, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* AmbiguousBinop(int32_t op, ::System::Type* type1, ::System::Type* type2);

  /// @brief Method ArgumentType, addr 0x5e8e6ac, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentType(::StringW function, int32_t arg, ::System::Type* type);

  /// @brief Method ArgumentTypeInteger, addr 0x5e8e778, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentTypeInteger(::StringW function, int32_t arg);

  /// @brief Method BindFailure, addr 0x5e8e820, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Data::EvaluateException* BindFailure(::StringW relationName);

  /// @brief Method ComputeNotAggregate, addr 0x5e81ee8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* ComputeNotAggregate(::StringW expr);

  /// @brief Method DatatypeConvertion, addr 0x5e8e538, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* DatatypeConvertion(::System::Type* type1, ::System::Type* type2);

  /// @brief Method DatavalueConvertion, addr 0x5e8c1f8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* DatavalueConvertion(::System::Object* value, ::System::Type* type, ::System::Exception* innerException);

  /// @brief Method EvalNoContext, addr 0x5e81e30, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* EvalNoContext();

  /// @brief Method ExpressionTooComplex, addr 0x5e8d514, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTooComplex();

  /// @brief Method ExpressionUnbound, addr 0x5e8e874, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionUnbound(::StringW expr);

  /// @brief Method FilterConvertion, addr 0x5e8c3b8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* FilterConvertion(::StringW expr);

  /// @brief Method FunctionArgumentCount, addr 0x5e8e4e4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* FunctionArgumentCount(::StringW name);

  /// @brief Method FunctionArgumentOutOfRange, addr 0x5e8e478, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* FunctionArgumentOutOfRange(::StringW arg, ::StringW func);

  /// @brief Method InWithoutList, addr 0x5e8e668, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InWithoutList();

  /// @brief Method InWithoutParentheses, addr 0x5e898c4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InWithoutParentheses();

  /// @brief Method InvalidDate, addr 0x5e8dd64, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidDate(::StringW date);

  /// @brief Method InvalidHoursArgument, addr 0x5e8e91c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidHoursArgument();

  /// @brief Method InvalidIsSyntax, addr 0x5e87a6c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidIsSyntax();

  /// @brief Method InvalidMinutesArgument, addr 0x5e8e960, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidMinutesArgument();

  /// @brief Method InvalidName, addr 0x5e8e5d0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidName(::StringW name);

  /// @brief Method InvalidNameBracketing, addr 0x5e8dd10, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidNameBracketing(::StringW name);

  /// @brief Method InvalidPattern, addr 0x5e8a4cc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidPattern(::StringW pat);

  /// @brief Method InvalidString, addr 0x5e8dddc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidString(::StringW str);

  /// @brief Method InvalidTimeZoneRange, addr 0x5e8e9a4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidTimeZoneRange();

  /// @brief Method InvalidType, addr 0x5e8e8c8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidType(::StringW typeName);

  /// @brief Method InvokeArgument, addr 0x5e8c370, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Exception* InvokeArgument();

  /// @brief Method LookupArgument, addr 0x5e8cf04, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* LookupArgument();

  /// @brief Method MismatchKindandTimeSpan, addr 0x5e8e9e8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* MismatchKindandTimeSpan();

  /// @brief Method MissingOperand, addr 0x5e8c960, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingOperand(::System::Data::OperatorInfo* before);

  /// @brief Method MissingOperandBefore, addr 0x5e8d3cc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingOperandBefore(::StringW op);

  /// @brief Method MissingOperator, addr 0x5e8cc58, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingOperator(::StringW token);

  /// @brief Method MissingRightParen, addr 0x5e8cc14, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingRightParen();

  /// @brief Method NYI, addr 0x5e8e3d0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* NYI(::StringW moreinfo);

  /// @brief Method NonConstantArgument, addr 0x5e8e624, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NonConstantArgument();

  /// @brief Method Overflow, addr 0x5e89994, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* Overflow(::System::Type* type);

  /// @brief Method SyntaxError, addr 0x5e8d054, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* SyntaxError();

  /// @brief Method TooManyRightParentheses, addr 0x5e8d388, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* TooManyRightParentheses();

  /// @brief Method TypeMismatch, addr 0x5e8e424, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMismatch(::StringW expr);

  /// @brief Method TypeMismatchInBinop, addr 0x5e87dc8, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMismatchInBinop(int32_t op, ::System::Type* type1, ::System::Type* type2);

  /// @brief Method UnboundName, addr 0x5e818f4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* UnboundName(::StringW name);

  /// @brief Method UndefinedFunction, addr 0x5e81574, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* UndefinedFunction(::StringW name);

  /// @brief Method UnknownToken, addr 0x5e8d558, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Exception* UnknownToken(::System::Data::Tokens tokExpected, ::System::Data::Tokens tokCurr, int32_t position);

  /// @brief Method UnknownToken, addr 0x5e8d428, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Exception* UnknownToken(::StringW token, int32_t position);

  /// @brief Method UnresolvedRelation, addr 0x5e81890, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* UnresolvedRelation(::StringW name, ::StringW expr);

  /// @brief Method UnsupportedDataType, addr 0x5e8b1d0, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Exception* UnsupportedDataType(::System::Type* type);

  /// @brief Method UnsupportedOperator, addr 0x5e89908, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* UnsupportedOperator(int32_t op);

  /// @brief Method _Eval, addr 0x5e8e2f0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Data::EvaluateException* _Eval(::StringW error);

  /// @brief Method _Eval, addr 0x5e8e360, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Data::EvaluateException* _Eval(::StringW error, ::System::Exception* innerException);

  /// @brief Method _Expr, addr 0x5e8e210, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Data::InvalidExpressionException* _Expr(::StringW error);

  /// @brief Method _Overflow, addr 0x5e8e1a0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::OverflowException* _Overflow(::StringW error);

  /// @brief Method _Syntax, addr 0x5e8e280, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Data::SyntaxErrorException* _Syntax(::StringW error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExprException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExprException(ExprException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExprException(ExprException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13797 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ExprException, 0x10>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ExprException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ExprException*, "System.Data", "ExprException");
