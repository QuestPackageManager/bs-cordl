#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Error.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Error)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Error;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Error*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Error*, "System.Linq.Expressions", "Error");
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Error
class CORDL_TYPE Error : public ::System::Object {
public:
  // Declarations
  /// @brief Method AccessorsCannotHaveByRefArgs, addr 0x63d4c64, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW paramName);

  /// @brief Method AccessorsCannotHaveByRefArgs, addr 0x63d4d48, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW paramName, int32_t index);

  /// @brief Method AccessorsCannotHaveVarArgs, addr 0x63d4b80, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* AccessorsCannotHaveVarArgs(::StringW paramName);

  /// @brief Method AmbiguousJump, addr 0x63d920c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* AmbiguousJump(::System::Object* p0);

  /// @brief Method AmbiguousMatchInExpandoObject, addr 0x63d3b8c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object* p0);

  /// @brief Method ArgumentCannotBeOfTypeVoid, addr 0x63d8ce8, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentCannotBeOfTypeVoid(::StringW paramName);

  /// @brief Method ArgumentMustBeArray, addr 0x63d6d74, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeArray(::StringW paramName);

  /// @brief Method ArgumentMustBeArrayIndexType, addr 0x63d7030, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeArrayIndexType(::StringW paramName);

  /// @brief Method ArgumentMustBeBoolean, addr 0x63d6e58, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeBoolean(::StringW paramName);

  /// @brief Method ArgumentMustBeInteger, addr 0x63d6f3c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeInteger(::StringW paramName);

  /// @brief Method ArgumentMustBeInteger, addr 0x63d7020, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeInteger(::StringW paramName, int32_t index);

  /// @brief Method ArgumentMustBeSingleDimensionalArrayType, addr 0x63d7114, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::StringW paramName);

  /// @brief Method ArgumentMustNotHaveValueType, addr 0x63d5b4c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustNotHaveValueType(::StringW paramName);

  /// @brief Method ArgumentOutOfRange, addr 0x63d1b64, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentOutOfRange(::StringW paramName);

  /// @brief Method ArgumentTypesMustMatch, addr 0x63d71f8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentTypesMustMatch();

  /// @brief Method BinaryOperatorNotDefined, addr 0x63d68d8, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* BinaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method BinderNotCompatibleWithCallSite, addr 0x63d40a4, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* BinderNotCompatibleWithCallSite(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method BindingCannotBeNull, addr 0x63d4574, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* BindingCannotBeNull();

  /// @brief Method BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0x63d63a0, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry();

  /// @brief Method BothAccessorsMustBeStatic, addr 0x63d5518, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* BothAccessorsMustBeStatic(::StringW paramName);

  /// @brief Method BoundsCannotBeLessThanOne, addr 0x63d4fc0, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* BoundsCannotBeLessThanOne(::StringW paramName);

  /// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0x63d72d4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object* p0);

  /// @brief Method CoalesceUsedOnNonNullType, addr 0x63d747c, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* CoalesceUsedOnNonNullType();

  /// @brief Method CoercionOperatorNotDefined, addr 0x63d6700, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* CoercionOperatorNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method CollectionModifiedWhileEnumerating, addr 0x63d3e10, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* CollectionModifiedWhileEnumerating();

  /// @brief Method CollectionReadOnly, addr 0x63d3eec, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* CollectionReadOnly();

  /// @brief Method ControlCannotEnterExpression, addr 0x63d93b4, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotEnterExpression();

  /// @brief Method ControlCannotEnterTry, addr 0x63d92d8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotEnterTry();

  /// @brief Method ControlCannotLeaveFilterTest, addr 0x63d9130, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotLeaveFilterTest();

  /// @brief Method ControlCannotLeaveFinally, addr 0x63d9054, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotLeaveFinally();

  /// @brief Method ConversionIsNotSupportedForArithmeticTypes, addr 0x63d6c98, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* ConversionIsNotSupportedForArithmeticTypes();

  /// @brief Method DuplicateVariable, addr 0x63d60e0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateVariable(::System::Object* p0, ::StringW paramName);

  /// @brief Method DuplicateVariable, addr 0x63d61bc, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateVariable(::System::Object* p0, ::StringW paramName, int32_t index);

  /// @brief Method DynamicBinderResultNotAssignable, addr 0x63d4478, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* DynamicBinderResultNotAssignable(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method DynamicBindingNeedsRestrictions, addr 0x63d41a0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* DynamicBindingNeedsRestrictions(::System::Object* p0, ::System::Object* p1);

  /// @brief Method DynamicObjectResultNotAssignable, addr 0x63d428c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Exception* DynamicObjectResultNotAssignable(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3);

  /// @brief Method EnumerationIsDone, addr 0x63d9ba0, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* EnumerationIsDone();

  /// @brief Method ExpressionMustBeReadable, addr 0x63da4a8, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionMustBeReadable(::StringW paramName);

  /// @brief Method ExpressionMustBeReadable, addr 0x63da58c, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionMustBeReadable(::StringW paramName, int32_t index);

  /// @brief Method ExpressionMustBeWriteable, addr 0x63d5a68, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionMustBeWriteable(::StringW paramName);

  /// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0x63d7558, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0x63d7730, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x63da380, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x63da474, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName, int32_t index);

  /// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0x63d781c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x63d9f58, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::StringW paramName);

  /// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x63da064, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::StringW paramName, int32_t index);

  /// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x63da0a0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x63da194, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName, int32_t index);

  /// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0x63d7644, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeNotInvocable, addr 0x63d7908, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeNotInvocable(::System::Object* p0, ::StringW paramName);

  /// @brief Method ExtensionNodeMustOverrideProperty, addr 0x63d647c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object* p0);

  /// @brief Method FaultCannotHaveCatchOrFinally, addr 0x63d61e0, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* FaultCannotHaveCatchOrFinally(::StringW paramName);

  /// @brief Method FieldInfoNotDefinedForType, addr 0x63d7ad0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* FieldInfoNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method FirstArgumentMustBeCallSite, addr 0x63d4aa4, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* FirstArgumentMustBeCallSite();

  /// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0x63d8b10, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method GetParamName, addr 0x63d4d58, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW GetParamName(::StringW paramName, int32_t index);

  /// @brief Method IncorrectNumberOfConstructorArguments, addr 0x63d9e7c, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfConstructorArguments();

  /// @brief Method IncorrectNumberOfIndexes, addr 0x63d7bcc, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfIndexes();

  /// @brief Method IncorrectNumberOfLambdaArguments, addr 0x63da1c8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfLambdaArguments();

  /// @brief Method IncorrectNumberOfLambdaDeclarationParameters, addr 0x63d7ca8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfLambdaDeclarationParameters();

  /// @brief Method IncorrectNumberOfMethodCallArguments, addr 0x63da2a4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object* p0, ::StringW paramName);

  /// @brief Method IncorrectTypeForTypeAs, addr 0x63d73a0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectTypeForTypeAs(::System::Object* p0, ::StringW paramName);

  /// @brief Method IndexesOfSetGetMustMatch, addr 0x63d48f4, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* IndexesOfSetGetMustMatch(::StringW paramName);

  /// @brief Method InstanceAndMethodTypeMismatch, addr 0x63d84ac, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method InstanceFieldNotDefinedForType, addr 0x63d79e4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* InstanceFieldNotDefinedForType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method InstancePropertyNotDefinedForType, addr 0x63d83b8, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* InstancePropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method InvalidArgumentValue, addr 0x63da59c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidArgumentValue(::StringW paramName);

  /// @brief Method InvalidLvalue, addr 0x63d955c, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType p0);

  /// @brief Method InvalidMetaObjectCreated, addr 0x63d3ac0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidMetaObjectCreated(::System::Object* p0);

  /// @brief Method InvalidNullValue, addr 0x63da680, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidNullValue(::System::Type* type, ::StringW paramName);

  /// @brief Method InvalidProgram, addr 0x63d9b48, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidProgram();

  /// @brief Method InvalidTypeException, addr 0x63da75c, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidTypeException(::System::Object* value, ::System::Type* type, ::StringW paramName);

  /// @brief Method InvalidUnboxType, addr 0x63d5984, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidUnboxType(::StringW paramName);

  /// @brief Method KeyDoesNotExistInExpando, addr 0x63d3d44, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyDoesNotExistInExpando(::System::Object* p0);

  /// @brief Method LabelMustBeVoidOrHaveExpression, addr 0x63d5d0c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelMustBeVoidOrHaveExpression(::StringW paramName);

  /// @brief Method LabelTargetAlreadyDefined, addr 0x63d8ebc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelTargetAlreadyDefined(::System::Object* p0);

  /// @brief Method LabelTargetUndefined, addr 0x63d8f88, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelTargetUndefined(::System::Object* p0);

  /// @brief Method LabelTypeMustBeVoid, addr 0x63d5df0, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelTypeMustBeVoid(::StringW paramName);

  /// @brief Method LambdaTypeMustBeDerivedFromSystemDelegate, addr 0x63d7d84, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::StringW paramName);

  /// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0x63d8938, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MemberNotFieldOrProperty, addr 0x63d7e68, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MemberNotFieldOrProperty(::System::Object* p0, ::StringW paramName);

  /// @brief Method MethodContainsGenericParameters, addr 0x63d7f44, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodContainsGenericParameters(::System::Object* p0, ::StringW paramName);

  /// @brief Method MethodIsGeneric, addr 0x63d8020, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodIsGeneric(::System::Object* p0, ::StringW paramName);

  /// @brief Method MethodWithArgsDoesNotExistOnType, addr 0x63d8a24, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MethodWithMoreThanOneMatch, addr 0x63d8bfc, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodWithMoreThanOneMatch(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MustBeReducible, addr 0x63d5c30, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* MustBeReducible();

  /// @brief Method MustReduceToDifferent, addr 0x63d3fc8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* MustReduceToDifferent();

  /// @brief Method MustRewriteChildToSameType, addr 0x63d982c, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* MustRewriteChildToSameType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method MustRewriteToSameNode, addr 0x63d9730, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* MustRewriteToSameNode(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method MustRewriteWithoutMethod, addr 0x63d9928, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MustRewriteWithoutMethod(::System::Object* p0, ::System::Object* p1);

  /// @brief Method NoOrInvalidRuleProduced, addr 0x63d4ee4, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* NoOrInvalidRuleProduced();

  /// @brief Method NonAbstractConstructorRequired, addr 0x63d9a6c, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* NonAbstractConstructorRequired();

  /// @brief Method NonLocalJumpWithValue, addr 0x63d9490, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* NonLocalJumpWithValue(::System::Object* p0);

  /// @brief Method NotSupported, addr 0x63d9a14, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* NotSupported();

  /// @brief Method OnlyStaticFieldsHaveNullInstance, addr 0x63d55fc, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* OnlyStaticFieldsHaveNullInstance(::StringW paramName);

  /// @brief Method OnlyStaticMethodsHaveNullInstance, addr 0x63d57c4, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* OnlyStaticMethodsHaveNullInstance();

  /// @brief Method OnlyStaticPropertiesHaveNullInstance, addr 0x63d56e0, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::StringW paramName);

  /// @brief Method OperandTypesDoNotMatchParameters, addr 0x63d6ac0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object* p0, ::System::Object* p1);

  /// @brief Method OutOfRange, addr 0x63d8dcc, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Exception* OutOfRange(::StringW paramName, ::System::Object* p1);

  /// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0x63d6bac, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ParameterExpressionNotValidAsDelegate, addr 0x63d81d8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object* p0, ::System::Object* p1);

  /// @brief Method PropertyCannotHaveRefType, addr 0x63d4810, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyCannotHaveRefType(::StringW paramName);

  /// @brief Method PropertyDoesNotHaveAccessor, addr 0x63d80fc, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object* p0, ::StringW paramName);

  /// @brief Method PropertyNotDefinedForType, addr 0x63d82c4, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method PropertyTypeCannotBeVoid, addr 0x63d58a0, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyTypeCannotBeVoid(::StringW paramName);

  /// @brief Method PropertyTypeMustMatchGetter, addr 0x63d5350, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyTypeMustMatchGetter(::StringW paramName);

  /// @brief Method PropertyTypeMustMatchSetter, addr 0x63d5434, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyTypeMustMatchSetter(::StringW paramName);

  /// @brief Method QuotedExpressionMustBeLambda, addr 0x63d5ed4, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* QuotedExpressionMustBeLambda(::StringW paramName);

  /// @brief Method ReducedNotCompatible, addr 0x63d4650, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* ReducedNotCompatible();

  /// @brief Method ReducibleMustOverrideReduce, addr 0x63d39e4, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* ReducibleMustOverrideReduce();

  /// @brief Method ReferenceEqualityNotDefined, addr 0x63d69d4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ReferenceEqualityNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method RethrowRequiresCatch, addr 0x63d9654, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* RethrowRequiresCatch();

  /// @brief Method SameKeyExistsInExpando, addr 0x63d3c58, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* SameKeyExistsInExpando(::System::Object* key);

  /// @brief Method SetterHasNoParams, addr 0x63d472c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* SetterHasNoParams(::StringW paramName);

  /// @brief Method SetterMustBeVoid, addr 0x63d526c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* SetterMustBeVoid(::StringW paramName);

  /// @brief Method TryMustHaveCatchFinallyOrFault, addr 0x63d62c4, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* TryMustHaveCatchFinallyOrFault();

  /// @brief Method TypeContainsGenericParameters, addr 0x63d9c7c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeContainsGenericParameters(::System::Object* p0, ::StringW paramName);

  /// @brief Method TypeContainsGenericParameters, addr 0x63d9d58, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeContainsGenericParameters(::System::Object* p0, ::StringW paramName, int32_t index);

  /// @brief Method TypeIsGeneric, addr 0x63d9d7c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeIsGeneric(::System::Object* p0, ::StringW paramName);

  /// @brief Method TypeIsGeneric, addr 0x63d9e58, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeIsGeneric(::System::Object* p0, ::StringW paramName, int32_t index);

  /// @brief Method TypeMustBeDerivedFromSystemDelegate, addr 0x63d4e08, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMustBeDerivedFromSystemDelegate();

  /// @brief Method TypeMustNotBeByRef, addr 0x63d50a4, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMustNotBeByRef(::StringW paramName);

  /// @brief Method TypeMustNotBePointer, addr 0x63d5188, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMustNotBePointer(::StringW paramName);

  /// @brief Method TypeParameterIsNotDelegate, addr 0x63d49d8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeParameterIsNotDelegate(::System::Object* p0);

  /// @brief Method UnaryOperatorNotDefined, addr 0x63d67ec, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* UnaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UnhandledBinary, addr 0x63d85a8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* UnhandledBinary(::System::Object* p0, ::StringW paramName);

  /// @brief Method UnhandledUnary, addr 0x63d8684, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* UnhandledUnary(::System::Object* p0, ::StringW paramName);

  /// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0x63d8760, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0x63d884c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UserDefinedOperatorMustBeStatic, addr 0x63d6548, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object* p0, ::StringW paramName);

  /// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0x63d6624, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object* p0, ::StringW paramName);

  /// @brief Method VariableMustNotBeByRef, addr 0x63d5fb8, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* VariableMustNotBeByRef(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method VariableMustNotBeByRef, addr 0x63d60ac, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Exception* VariableMustNotBeByRef(::System::Object* p0, ::System::Object* p1, ::StringW paramName, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Error();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Error(Error&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Error(Error const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16717 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Error) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
