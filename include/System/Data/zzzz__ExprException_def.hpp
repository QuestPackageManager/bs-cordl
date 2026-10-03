#pragma once
// IWYU pragma private; include "System/Data/ExprException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Data::ExprException*);
DEFINE_IL2CPP_CLASS(::System::Data::ExprException*, "System.Data", "ExprException");
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ExprException
class CORDL_TYPE ExprException : public ::System::Object {
public:
  // Declarations
  /// @brief Method AggregateArgument, addr 0x645e374, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* AggregateArgument();

  /// @brief Method AggregateUnbound, addr 0x64525e4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* AggregateUnbound(::StringW expr);

  /// @brief Method AmbiguousBinop, addr 0x645a9d0, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* AmbiguousBinop(int32_t op, ::System::Type* type1, ::System::Type* type2);

  /// @brief Method ArgumentType, addr 0x645f550, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentType(::StringW function, int32_t arg, ::System::Type* type);

  /// @brief Method ArgumentTypeInteger, addr 0x645f61c, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentTypeInteger(::StringW function, int32_t arg);

  /// @brief Method BindFailure, addr 0x645f6c4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Data::EvaluateException* BindFailure(::StringW relationName);

  /// @brief Method ComputeNotAggregate, addr 0x6452c90, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* ComputeNotAggregate(::StringW expr);

  /// @brief Method DatatypeConvertion, addr 0x645f3dc, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* DatatypeConvertion(::System::Type* type1, ::System::Type* type2);

  /// @brief Method DatavalueConvertion, addr 0x645d064, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* DatavalueConvertion(::System::Object* value, ::System::Type* type, ::System::Exception* innerException);

  /// @brief Method EvalNoContext, addr 0x6452bd8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* EvalNoContext();

  /// @brief Method ExpressionTooComplex, addr 0x645e3b8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTooComplex();

  /// @brief Method ExpressionUnbound, addr 0x645f718, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionUnbound(::StringW expr);

  /// @brief Method FilterConvertion, addr 0x645d224, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* FilterConvertion(::StringW expr);

  /// @brief Method FunctionArgumentCount, addr 0x645f388, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* FunctionArgumentCount(::StringW name);

  /// @brief Method FunctionArgumentOutOfRange, addr 0x645f31c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* FunctionArgumentOutOfRange(::StringW arg, ::StringW func);

  /// @brief Method InWithoutList, addr 0x645f50c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InWithoutList();

  /// @brief Method InWithoutParentheses, addr 0x645a6ac, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InWithoutParentheses();

  /// @brief Method InvalidDate, addr 0x645ec08, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidDate(::StringW date);

  /// @brief Method InvalidHoursArgument, addr 0x645f7c0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidHoursArgument();

  /// @brief Method InvalidIsSyntax, addr 0x6458814, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidIsSyntax();

  /// @brief Method InvalidMinutesArgument, addr 0x645f804, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidMinutesArgument();

  /// @brief Method InvalidName, addr 0x645f474, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidName(::StringW name);

  /// @brief Method InvalidNameBracketing, addr 0x645ebb4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidNameBracketing(::StringW name);

  /// @brief Method InvalidPattern, addr 0x645b2b4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidPattern(::StringW pat);

  /// @brief Method InvalidString, addr 0x645ec80, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidString(::StringW str);

  /// @brief Method InvalidTimeZoneRange, addr 0x645f848, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidTimeZoneRange();

  /// @brief Method InvalidType, addr 0x645f76c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidType(::StringW typeName);

  /// @brief Method InvokeArgument, addr 0x645d1dc, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Exception* InvokeArgument();

  /// @brief Method LookupArgument, addr 0x645dd70, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* LookupArgument();

  /// @brief Method MismatchKindandTimeSpan, addr 0x645f88c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* MismatchKindandTimeSpan();

  /// @brief Method MissingOperand, addr 0x645d7cc, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingOperand(::System::Data::OperatorInfo* before);

  /// @brief Method MissingOperandBefore, addr 0x645e270, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingOperandBefore(::StringW op);

  /// @brief Method MissingOperator, addr 0x645dac4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingOperator(::StringW token);

  /// @brief Method MissingRightParen, addr 0x645da80, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* MissingRightParen();

  /// @brief Method NYI, addr 0x645f274, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* NYI(::StringW moreinfo);

  /// @brief Method NonConstantArgument, addr 0x645f4c8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* NonConstantArgument();

  /// @brief Method Overflow, addr 0x645a77c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* Overflow(::System::Type* type);

  /// @brief Method SyntaxError, addr 0x645dec0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* SyntaxError();

  /// @brief Method TooManyRightParentheses, addr 0x645e22c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Exception* TooManyRightParentheses();

  /// @brief Method TypeMismatch, addr 0x645f2c8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMismatch(::StringW expr);

  /// @brief Method TypeMismatchInBinop, addr 0x6458b70, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMismatchInBinop(int32_t op, ::System::Type* type1, ::System::Type* type2);

  /// @brief Method UnboundName, addr 0x645269c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* UnboundName(::StringW name);

  /// @brief Method UndefinedFunction, addr 0x645231c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Exception* UndefinedFunction(::StringW name);

  /// @brief Method UnknownToken, addr 0x645e3fc, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Exception* UnknownToken(::System::Data::Tokens tokExpected, ::System::Data::Tokens tokCurr, int32_t position);

  /// @brief Method UnknownToken, addr 0x645e2cc, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Exception* UnknownToken(::StringW token, int32_t position);

  /// @brief Method UnresolvedRelation, addr 0x6452638, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* UnresolvedRelation(::StringW name, ::StringW expr);

  /// @brief Method UnsupportedDataType, addr 0x645bfb8, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Exception* UnsupportedDataType(::System::Type* type);

  /// @brief Method UnsupportedOperator, addr 0x645a6f0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* UnsupportedOperator(int32_t op);

  /// @brief Method _Eval, addr 0x645f194, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Data::EvaluateException* _Eval(::StringW error);

  /// @brief Method _Eval, addr 0x645f204, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Data::EvaluateException* _Eval(::StringW error, ::System::Exception* innerException);

  /// @brief Method _Expr, addr 0x645f0b4, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Data::InvalidExpressionException* _Expr(::StringW error);

  /// @brief Method _Overflow, addr 0x645f044, size 0x70, virtual false, abstract: false, final false
  static inline ::System::OverflowException* _Overflow(::StringW error);

  /// @brief Method _Syntax, addr 0x645f124, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Data::SyntaxErrorException* _Syntax(::StringW error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExprException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExprException(ExprException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExprException(ExprException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14063 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Data::ExprException) == 0x10, "Size mismatch!");

} // namespace System::Data
