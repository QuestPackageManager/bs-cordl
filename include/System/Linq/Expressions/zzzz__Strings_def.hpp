#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Strings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Strings)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Strings;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Strings);
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Strings
class CORDL_TYPE Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Method AmbiguousJump, addr 0x40c1c4c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW AmbiguousJump(::System::Object* p0);

  /// @brief Method AmbiguousMatchInExpandoObject, addr 0x40bcd30, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW AmbiguousMatchInExpandoObject(::System::Object* p0);

  /// @brief Method BinaryOperatorNotDefined, addr 0x40bf6c8, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW BinaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method BinderNotCompatibleWithCallSite, addr 0x40bd1dc, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW BinderNotCompatibleWithCallSite(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0x40bffdc, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object* p0);

  /// @brief Method CoercionOperatorNotDefined, addr 0x40bf510, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW CoercionOperatorNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method DuplicateVariable, addr 0x40bef80, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW DuplicateVariable(::System::Object* p0);

  /// @brief Method DynamicBinderResultNotAssignable, addr 0x40bd570, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW DynamicBinderResultNotAssignable(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method DynamicBindingNeedsRestrictions, addr 0x40bd2bc, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW DynamicBindingNeedsRestrictions(::System::Object* p0, ::System::Object* p1);

  /// @brief Method DynamicObjectResultNotAssignable, addr 0x40bd3ac, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW DynamicObjectResultNotAssignable(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3);

  /// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0x40c0230, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ExpressionTypeCannotInitializeArrayType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0x40c03e0, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ExpressionTypeDoesNotMatchAssignment(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x40c2c48, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0x40c04b8, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ExpressionTypeDoesNotMatchLabel(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x40c2884, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW ExpressionTypeDoesNotMatchMethodParameter(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x40c29a8, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ExpressionTypeDoesNotMatchParameter(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0x40c0308, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ExpressionTypeDoesNotMatchReturn(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeNotInvocable, addr 0x40c0590, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW ExpressionTypeNotInvocable(::System::Object* p0);

  /// @brief Method ExtensionNodeMustOverrideProperty, addr 0x40bf2b8, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW ExtensionNodeMustOverrideProperty(::System::Object* p0);

  /// @brief Method FieldInfoNotDefinedForType, addr 0x40c0738, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW FieldInfoNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0x40c1604, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GenericMethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method IncorrectNumberOfMethodCallArguments, addr 0x40c2b78, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW IncorrectNumberOfMethodCallArguments(::System::Object* p0);

  /// @brief Method IncorrectTypeForTypeAs, addr 0x40c00a4, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW IncorrectTypeForTypeAs(::System::Object* p0);

  /// @brief Method InstanceAndMethodTypeMismatch, addr 0x40c1034, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW InstanceAndMethodTypeMismatch(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method InstanceFieldNotDefinedForType, addr 0x40c0658, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW InstanceFieldNotDefinedForType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method InstancePropertyNotDefinedForType, addr 0x40c0f54, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW InstancePropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method InvalidLvalue, addr 0x40c1f6c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW InvalidLvalue(::System::Object* p0);

  /// @brief Method InvalidMetaObjectCreated, addr 0x40bcc78, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW InvalidMetaObjectCreated(::System::Object* p0);

  /// @brief Method InvalidNullValue, addr 0x40c2f0c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW InvalidNullValue(::System::Object* p0);

  /// @brief Method InvalidObjectType, addr 0x40c3010, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW InvalidObjectType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method KeyDoesNotExistInExpando, addr 0x40bcec0, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW KeyDoesNotExistInExpando(::System::Object* p0);

  /// @brief Method LabelTargetAlreadyDefined, addr 0x40c1954, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW LabelTargetAlreadyDefined(::System::Object* p0);

  /// @brief Method LabelTargetUndefined, addr 0x40c1a0c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW LabelTargetUndefined(::System::Object* p0);

  /// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0x40c1454, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW LogicalOperatorMustHaveBooleanOperators(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MemberNotFieldOrProperty, addr 0x40c0a74, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW MemberNotFieldOrProperty(::System::Object* p0);

  /// @brief Method MethodContainsGenericParameters, addr 0x40c0b3c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW MethodContainsGenericParameters(::System::Object* p0);

  /// @brief Method MethodIsGeneric, addr 0x40c0c04, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW MethodIsGeneric(::System::Object* p0);

  /// @brief Method MethodWithArgsDoesNotExistOnType, addr 0x40c152c, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW MethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MethodWithMoreThanOneMatch, addr 0x40c16dc, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW MethodWithMoreThanOneMatch(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MustRewriteChildToSameType, addr 0x40c21e8, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW MustRewriteChildToSameType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method MustRewriteToSameNode, addr 0x40c2100, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW MustRewriteToSameNode(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method MustRewriteWithoutMethod, addr 0x40c22c8, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW MustRewriteWithoutMethod(::System::Object* p0, ::System::Object* p1);

  /// @brief Method NonLocalJumpWithValue, addr 0x40c1e8c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW NonLocalJumpWithValue(::System::Object* p0);

  /// @brief Method OperandTypesDoNotMatchParameters, addr 0x40bf880, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW OperandTypesDoNotMatchParameters(::System::Object* p0, ::System::Object* p1);

  /// @brief Method OutOfRange, addr 0x40c188c, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW OutOfRange(::System::Object* p0, ::System::Object* p1);

  /// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0x40bf958, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW OverloadOperatorTypeDoesNotMatchConversionType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ParameterExpressionNotValidAsDelegate, addr 0x40c0d94, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ParameterExpressionNotValidAsDelegate(::System::Object* p0, ::System::Object* p1);

  /// @brief Method PropertyDoesNotHaveAccessor, addr 0x40c0ccc, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW PropertyDoesNotHaveAccessor(::System::Object* p0);

  /// @brief Method PropertyNotDefinedForType, addr 0x40c0e74, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW PropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ReferenceEqualityNotDefined, addr 0x40bf7a8, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ReferenceEqualityNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method SameKeyExistsInExpando, addr 0x40bce08, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW SameKeyExistsInExpando(::System::Object* p0);

  /// @brief Method TypeContainsGenericParameters, addr 0x40c25d0, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW TypeContainsGenericParameters(::System::Object* p0);

  /// @brief Method TypeIsGeneric, addr 0x40c26bc, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW TypeIsGeneric(::System::Object* p0);

  /// @brief Method TypeParameterIsNotDelegate, addr 0x40bda44, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW TypeParameterIsNotDelegate(::System::Object* p0);

  /// @brief Method UnaryOperatorNotDefined, addr 0x40bf5e8, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW UnaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UnhandledBinary, addr 0x40c1114, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW UnhandledBinary(::System::Object* p0);

  /// @brief Method UnhandledUnary, addr 0x40c11dc, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW UnhandledUnary(::System::Object* p0);

  /// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0x40c12a4, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW UserDefinedOpMustHaveConsistentTypes(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0x40c137c, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW UserDefinedOpMustHaveValidReturnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UserDefinedOperatorMustBeStatic, addr 0x40bf380, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW UserDefinedOperatorMustBeStatic(::System::Object* p0);

  /// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0x40bf448, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW UserDefinedOperatorMustNotBeVoid(::System::Object* p0);

  /// @brief Method VariableMustNotBeByRef, addr 0x40bee74, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW VariableMustNotBeByRef(::System::Object* p0, ::System::Object* p1);

  /// @brief Method get_AccessorsCannotHaveByRefArgs, addr 0x40bdcbc, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_AccessorsCannotHaveByRefArgs();

  /// @brief Method get_AccessorsCannotHaveVarArgs, addr 0x40bdbe8, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_AccessorsCannotHaveVarArgs();

  /// @brief Method get_ArgumentCannotBeOfTypeVoid, addr 0x40c17cc, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ArgumentCannotBeOfTypeVoid();

  /// @brief Method get_ArgumentMustBeArray, addr 0x40bfb0c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ArgumentMustBeArray();

  /// @brief Method get_ArgumentMustBeArrayIndexType, addr 0x40bfd98, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ArgumentMustBeArrayIndexType();

  /// @brief Method get_ArgumentMustBeBoolean, addr 0x40bfbe0, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ArgumentMustBeBoolean();

  /// @brief Method get_ArgumentMustBeInteger, addr 0x40bfcb4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ArgumentMustBeInteger();

  /// @brief Method get_ArgumentMustBeSingleDimensionalArrayType, addr 0x40bfe6c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ArgumentMustBeSingleDimensionalArrayType();

  /// @brief Method get_ArgumentMustNotHaveValueType, addr 0x40bea70, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ArgumentMustNotHaveValueType();

  /// @brief Method get_ArgumentTypesMustMatch, addr 0x40bff30, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ArgumentTypesMustMatch();

  /// @brief Method get_BindingCannotBeNull, addr 0x40bd658, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_BindingCannotBeNull();

  /// @brief Method get_BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0x40bf20c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_BodyOfCatchMustHaveSameTypeAsBodyOfTry();

  /// @brief Method get_BothAccessorsMustBeStatic, addr 0x40be4b4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_BothAccessorsMustBeStatic();

  /// @brief Method get_BoundsCannotBeLessThanOne, addr 0x40bdfbc, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_BoundsCannotBeLessThanOne();

  /// @brief Method get_CoalesceUsedOnNonNullType, addr 0x40c0174, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_CoalesceUsedOnNonNullType();

  /// @brief Method get_CollectionModifiedWhileEnumerating, addr 0x40bcf90, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_CollectionModifiedWhileEnumerating();

  /// @brief Method get_CollectionReadOnly, addr 0x40bd054, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_CollectionReadOnly();

  /// @brief Method get_ControlCannotEnterExpression, addr 0x40c1de0, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ControlCannotEnterExpression();

  /// @brief Method get_ControlCannotEnterTry, addr 0x40c1d1c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ControlCannotEnterTry();

  /// @brief Method get_ControlCannotLeaveFilterTest, addr 0x40c1ba0, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ControlCannotLeaveFilterTest();

  /// @brief Method get_ControlCannotLeaveFinally, addr 0x40c1adc, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ControlCannotLeaveFinally();

  /// @brief Method get_ConversionIsNotSupportedForArithmeticTypes, addr 0x40bfa38, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ConversionIsNotSupportedForArithmeticTypes();

  /// @brief Method get_EnumerationIsDone, addr 0x40c2514, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_EnumerationIsDone();

  /// @brief Method get_ExpressionMustBeReadable, addr 0x40c2d6c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ExpressionMustBeReadable();

  /// @brief Method get_ExpressionMustBeWriteable, addr 0x40be99c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ExpressionMustBeWriteable();

  /// @brief Method get_FaultCannotHaveCatchOrFinally, addr 0x40bf084, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_FaultCannotHaveCatchOrFinally();

  /// @brief Method get_FirstArgumentMustBeCallSite, addr 0x40bdb14, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_FirstArgumentMustBeCallSite();

  /// @brief Method get_IncorrectNumberOfConstructorArguments, addr 0x40c27b0, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_IncorrectNumberOfConstructorArguments();

  /// @brief Method get_IncorrectNumberOfIndexes, addr 0x40c0820, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_IncorrectNumberOfIndexes();

  /// @brief Method get_IncorrectNumberOfLambdaArguments, addr 0x40c2abc, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_IncorrectNumberOfLambdaArguments();

  /// @brief Method get_IncorrectNumberOfLambdaDeclarationParameters, addr 0x40c08e4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_IncorrectNumberOfLambdaDeclarationParameters();

  /// @brief Method get_IndexesOfSetGetMustMatch, addr 0x40bd998, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_IndexesOfSetGetMustMatch();

  /// @brief Method get_InvalidArgumentValue, addr 0x40c2e50, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_InvalidArgumentValue();

  /// @brief Method get_InvalidUnboxType, addr 0x40be8c8, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_InvalidUnboxType();

  /// @brief Method get_LabelMustBeVoidOrHaveExpression, addr 0x40bec08, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_LabelMustBeVoidOrHaveExpression();

  /// @brief Method get_LabelTypeMustBeVoid, addr 0x40becdc, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_LabelTypeMustBeVoid();

  /// @brief Method get_LambdaTypeMustBeDerivedFromSystemDelegate, addr 0x40c09b8, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_LambdaTypeMustBeDerivedFromSystemDelegate();

  /// @brief Method get_MustBeReducible, addr 0x40beb34, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_MustBeReducible();

  /// @brief Method get_MustReduceToDifferent, addr 0x40bd118, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_MustReduceToDifferent();

  /// @brief Method get_NoOrInvalidRuleProduced, addr 0x40bdee8, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_NoOrInvalidRuleProduced();

  /// @brief Method get_NonAbstractConstructorRequired, addr 0x40c23fc, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_NonAbstractConstructorRequired();

  /// @brief Method get_OnlyStaticFieldsHaveNullInstance, addr 0x40be588, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_OnlyStaticFieldsHaveNullInstance();

  /// @brief Method get_OnlyStaticMethodsHaveNullInstance, addr 0x40be720, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_OnlyStaticMethodsHaveNullInstance();

  /// @brief Method get_OnlyStaticPropertiesHaveNullInstance, addr 0x40be65c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_OnlyStaticPropertiesHaveNullInstance();

  /// @brief Method get_PropertyCannotHaveRefType, addr 0x40bd8c4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_PropertyCannotHaveRefType();

  /// @brief Method get_PropertyTypeCannotBeVoid, addr 0x40be7f4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_PropertyTypeCannotBeVoid();

  /// @brief Method get_PropertyTypeMustMatchGetter, addr 0x40be30c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_PropertyTypeMustMatchGetter();

  /// @brief Method get_PropertyTypeMustMatchSetter, addr 0x40be3e0, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_PropertyTypeMustMatchSetter();

  /// @brief Method get_QuotedExpressionMustBeLambda, addr 0x40bedb0, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_QuotedExpressionMustBeLambda();

  /// @brief Method get_ReducedNotCompatible, addr 0x40bd71c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ReducedNotCompatible();

  /// @brief Method get_ReducibleMustOverrideReduce, addr 0x40bcbcc, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ReducibleMustOverrideReduce();

  /// @brief Method get_RethrowRequiresCatch, addr 0x40c203c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_RethrowRequiresCatch();

  /// @brief Method get_SetterHasNoParams, addr 0x40bd7f0, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_SetterHasNoParams();

  /// @brief Method get_SetterMustBeVoid, addr 0x40be238, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_SetterMustBeVoid();

  /// @brief Method get_TryMustHaveCatchFinallyOrFault, addr 0x40bf148, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_TryMustHaveCatchFinallyOrFault();

  /// @brief Method get_TypeMustBeDerivedFromSystemDelegate, addr 0x40bde24, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_TypeMustBeDerivedFromSystemDelegate();

  /// @brief Method get_TypeMustNotBeByRef, addr 0x40be090, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_TypeMustNotBeByRef();

  /// @brief Method get_TypeMustNotBePointer, addr 0x40be164, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_TypeMustNotBePointer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Strings(Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Strings(Strings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13735 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Strings, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Strings);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Strings*, "System.Linq.Expressions", "Strings");
