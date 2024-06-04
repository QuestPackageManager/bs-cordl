#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Error.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Linq::Expressions::Error);
// Type: System.Linq.Expressions::Error
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::Error*
class CORDL_TYPE Error : public ::System::Object {
public:
  // Declarations
  /// @brief Method AccessorsCannotHaveByRefArgs, addr 0x2c20154, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW paramName);

  /// @brief Method AccessorsCannotHaveByRefArgs, addr 0x2c20230, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW paramName, int32_t index);

  /// @brief Method AccessorsCannotHaveVarArgs, addr 0x2c20078, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* AccessorsCannotHaveVarArgs(::StringW paramName);

  /// @brief Method AmbiguousJump, addr 0x2c24374, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* AmbiguousJump(::System::Object* p0);

  /// @brief Method AmbiguousMatchInExpandoObject, addr 0x2c1f168, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object* p0);

  /// @brief Method ArgumentCannotBeOfTypeVoid, addr 0x2c23e9c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentCannotBeOfTypeVoid(::StringW paramName);

  /// @brief Method ArgumentMustBeArray, addr 0x2c220c4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeArray(::StringW paramName);

  /// @brief Method ArgumentMustBeArrayIndexType, addr 0x2c22368, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeArrayIndexType(::StringW paramName);

  /// @brief Method ArgumentMustBeBoolean, addr 0x2c221a0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeBoolean(::StringW paramName);

  /// @brief Method ArgumentMustBeInteger, addr 0x2c2227c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeInteger(::StringW paramName);

  /// @brief Method ArgumentMustBeInteger, addr 0x2c22358, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeInteger(::StringW paramName, int32_t index);

  /// @brief Method ArgumentMustBeSingleDimensionalArrayType, addr 0x2c22444, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::StringW paramName);

  /// @brief Method ArgumentMustNotHaveValueType, addr 0x2c20f88, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustNotHaveValueType(::StringW paramName);

  /// @brief Method ArgumentOutOfRange, addr 0x2c1d0fc, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentOutOfRange(::StringW paramName);

  /// @brief Method ArgumentTypesMustMatch, addr 0x2c22520, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentTypesMustMatch();

  /// @brief Method BinaryOperatorNotDefined, addr 0x2c21c68, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* BinaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method BinderNotCompatibleWithCallSite, addr 0x2c1f624, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* BinderNotCompatibleWithCallSite(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method BindingCannotBeNull, addr 0x2c1fac0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* BindingCannotBeNull();

  /// @brief Method BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0x2c2177c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry();

  /// @brief Method BothAccessorsMustBeStatic, addr 0x2c20994, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* BothAccessorsMustBeStatic(::StringW paramName);

  /// @brief Method BoundsCannotBeLessThanOne, addr 0x2c2046c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* BoundsCannotBeLessThanOne(::StringW paramName);

  /// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0x2c225ec, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object* p0);

  /// @brief Method CoalesceUsedOnNonNullType, addr 0x2c2277c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* CoalesceUsedOnNonNullType();

  /// @brief Method CoercionOperatorNotDefined, addr 0x2c21aa8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* CoercionOperatorNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method CollectionModifiedWhileEnumerating, addr 0x2c1f3c0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* CollectionModifiedWhileEnumerating();

  /// @brief Method CollectionReadOnly, addr 0x2c1f48c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* CollectionReadOnly();

  /// @brief Method ControlCannotEnterExpression, addr 0x2c24500, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotEnterExpression();

  /// @brief Method ControlCannotEnterTry, addr 0x2c24434, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotEnterTry();

  /// @brief Method ControlCannotLeaveFilterTest, addr 0x2c242a8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotLeaveFilterTest();

  /// @brief Method ControlCannotLeaveFinally, addr 0x2c241dc, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotLeaveFinally();

  /// @brief Method ConversionIsNotSupportedForArithmeticTypes, addr 0x2c21ff8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ConversionIsNotSupportedForArithmeticTypes();

  /// @brief Method DuplicateVariable, addr 0x2c214e0, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateVariable(::System::Object* p0, ::StringW paramName);

  /// @brief Method DuplicateVariable, addr 0x2c215b0, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateVariable(::System::Object* p0, ::StringW paramName, int32_t index);

  /// @brief Method DynamicBinderResultNotAssignable, addr 0x2c1f9d0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* DynamicBinderResultNotAssignable(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method DynamicBindingNeedsRestrictions, addr 0x2c1f714, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* DynamicBindingNeedsRestrictions(::System::Object* p0, ::System::Object* p1);

  /// @brief Method DynamicObjectResultNotAssignable, addr 0x2c1f7f4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* DynamicObjectResultNotAssignable(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3);

  /// @brief Method EnumerationIsDone, addr 0x2c24c84, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* EnumerationIsDone();

  /// @brief Method ExpressionMustBeReadable, addr 0x2c25514, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionMustBeReadable(::StringW paramName);

  /// @brief Method ExpressionMustBeReadable, addr 0x2c255f0, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionMustBeReadable(::StringW paramName, int32_t index);

  /// @brief Method ExpressionMustBeWriteable, addr 0x2c20eac, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionMustBeWriteable(::StringW paramName);

  /// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0x2c22848, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0x2c22a08, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x2c253f8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x2c254e0, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName, int32_t index);

  /// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0x2c22ae8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x2c25004, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::StringW paramName);

  /// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x2c25104, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::StringW paramName, int32_t index);

  /// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x2c25140, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x2c25228, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName, int32_t index);

  /// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0x2c22928, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeNotInvocable, addr 0x2c22bc8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeNotInvocable(::System::Object* p0, ::StringW paramName);

  /// @brief Method ExtensionNodeMustOverrideProperty, addr 0x2c21848, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object* p0);

  /// @brief Method FaultCannotHaveCatchOrFinally, addr 0x2c215d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* FaultCannotHaveCatchOrFinally(::StringW paramName);

  /// @brief Method FieldInfoNotDefinedForType, addr 0x2c22d78, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* FieldInfoNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method FirstArgumentMustBeCallSite, addr 0x2c1ffac, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* FirstArgumentMustBeCallSite();

  /// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0x2c23cdc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method GetParamName, addr 0x2c20240, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetParamName(::StringW paramName, int32_t index);

  /// @brief Method IncorrectNumberOfConstructorArguments, addr 0x2c24f38, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfConstructorArguments();

  /// @brief Method IncorrectNumberOfIndexes, addr 0x2c22e68, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfIndexes();

  /// @brief Method IncorrectNumberOfLambdaArguments, addr 0x2c2525c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfLambdaArguments();

  /// @brief Method IncorrectNumberOfLambdaDeclarationParameters, addr 0x2c22f34, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfLambdaDeclarationParameters();

  /// @brief Method IncorrectNumberOfMethodCallArguments, addr 0x2c25328, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object* p0, ::StringW paramName);

  /// @brief Method IncorrectTypeForTypeAs, addr 0x2c226ac, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectTypeForTypeAs(::System::Object* p0, ::StringW paramName);

  /// @brief Method IndexesOfSetGetMustMatch, addr 0x2c1fe10, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* IndexesOfSetGetMustMatch(::StringW paramName);

  /// @brief Method InstanceAndMethodTypeMismatch, addr 0x2c236cc, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method InstanceFieldNotDefinedForType, addr 0x2c22c98, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* InstanceFieldNotDefinedForType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method InstancePropertyNotDefinedForType, addr 0x2c235e4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* InstancePropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method InvalidArgumentValue, addr 0x2c25600, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidArgumentValue(::StringW paramName);

  /// @brief Method InvalidLvalue, addr 0x2c2468c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType p0);

  /// @brief Method InvalidMetaObjectCreated, addr 0x2c1f0a8, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidMetaObjectCreated(::System::Object* p0);

  /// @brief Method InvalidNullValue, addr 0x2c256dc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidNullValue(::System::Type* type, ::StringW paramName);

  /// @brief Method InvalidProgram, addr 0x2c24c28, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidProgram();

  /// @brief Method InvalidTypeException, addr 0x2c257ac, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidTypeException(::System::Object* value, ::System::Type* type, ::StringW paramName);

  /// @brief Method InvalidUnboxType, addr 0x2c20dd0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidUnboxType(::StringW paramName);

  /// @brief Method KeyDoesNotExistInExpando, addr 0x2c1f300, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyDoesNotExistInExpando(::System::Object* p0);

  /// @brief Method LabelMustBeVoidOrHaveExpression, addr 0x2c21130, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelMustBeVoidOrHaveExpression(::StringW paramName);

  /// @brief Method LabelTargetAlreadyDefined, addr 0x2c2405c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelTargetAlreadyDefined(::System::Object* p0);

  /// @brief Method LabelTargetUndefined, addr 0x2c2411c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelTargetUndefined(::System::Object* p0);

  /// @brief Method LabelTypeMustBeVoid, addr 0x2c2120c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelTypeMustBeVoid(::StringW paramName);

  /// @brief Method LambdaTypeMustBeDerivedFromSystemDelegate, addr 0x2c23000, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::StringW paramName);

  /// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0x2c23b1c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MemberNotFieldOrProperty, addr 0x2c230dc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MemberNotFieldOrProperty(::System::Object* p0, ::StringW paramName);

  /// @brief Method MethodContainsGenericParameters, addr 0x2c231ac, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodContainsGenericParameters(::System::Object* p0, ::StringW paramName);

  /// @brief Method MethodIsGeneric, addr 0x2c2327c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodIsGeneric(::System::Object* p0, ::StringW paramName);

  /// @brief Method MethodWithArgsDoesNotExistOnType, addr 0x2c23bfc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MethodWithMoreThanOneMatch, addr 0x2c23dbc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodWithMoreThanOneMatch(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MustBeReducible, addr 0x2c21064, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MustBeReducible();

  /// @brief Method MustReduceToDifferent, addr 0x2c1f558, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MustReduceToDifferent();

  /// @brief Method MustRewriteChildToSameType, addr 0x2c24930, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MustRewriteChildToSameType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method MustRewriteToSameNode, addr 0x2c24840, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MustRewriteToSameNode(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method MustRewriteWithoutMethod, addr 0x2c24a20, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MustRewriteWithoutMethod(::System::Object* p0, ::System::Object* p1);

  /// @brief Method NoOrInvalidRuleProduced, addr 0x2c203a0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* NoOrInvalidRuleProduced();

  /// @brief Method NonAbstractConstructorRequired, addr 0x2c24b5c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* NonAbstractConstructorRequired();

  /// @brief Method NonLocalJumpWithValue, addr 0x2c245cc, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* NonLocalJumpWithValue(::System::Object* p0);

  /// @brief Method NotSupported, addr 0x2c24b00, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* NotSupported();

  /// @brief Method OnlyStaticFieldsHaveNullInstance, addr 0x2c20a70, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* OnlyStaticFieldsHaveNullInstance(::StringW paramName);

  /// @brief Method OnlyStaticMethodsHaveNullInstance, addr 0x2c20c28, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* OnlyStaticMethodsHaveNullInstance();

  /// @brief Method OnlyStaticPropertiesHaveNullInstance, addr 0x2c20b4c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::StringW paramName);

  /// @brief Method OperandTypesDoNotMatchParameters, addr 0x2c21e38, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object* p0, ::System::Object* p1);

  /// @brief Method OutOfRange, addr 0x2c23f78, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Exception* OutOfRange(::StringW paramName, ::System::Object* p1);

  /// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0x2c21f18, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ParameterExpressionNotValidAsDelegate, addr 0x2c2341c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object* p0, ::System::Object* p1);

  /// @brief Method PropertyCannotHaveRefType, addr 0x2c1fd34, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyCannotHaveRefType(::StringW paramName);

  /// @brief Method PropertyDoesNotHaveAccessor, addr 0x2c2334c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object* p0, ::StringW paramName);

  /// @brief Method PropertyNotDefinedForType, addr 0x2c234fc, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method PropertyTypeCannotBeVoid, addr 0x2c20cf4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyTypeCannotBeVoid(::StringW paramName);

  /// @brief Method PropertyTypeMustMatchGetter, addr 0x2c207dc, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyTypeMustMatchGetter(::StringW paramName);

  /// @brief Method PropertyTypeMustMatchSetter, addr 0x2c208b8, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyTypeMustMatchSetter(::StringW paramName);

  /// @brief Method QuotedExpressionMustBeLambda, addr 0x2c212e8, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* QuotedExpressionMustBeLambda(::StringW paramName);

  /// @brief Method ReducedNotCompatible, addr 0x2c1fb8c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ReducedNotCompatible();

  /// @brief Method ReducibleMustOverrideReduce, addr 0x2c1efdc, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ReducibleMustOverrideReduce();

  /// @brief Method ReferenceEqualityNotDefined, addr 0x2c21d58, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ReferenceEqualityNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method RethrowRequiresCatch, addr 0x2c24774, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* RethrowRequiresCatch();

  /// @brief Method SameKeyExistsInExpando, addr 0x2c1f228, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* SameKeyExistsInExpando(::System::Object* key);

  /// @brief Method SetterHasNoParams, addr 0x2c1fc58, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* SetterHasNoParams(::StringW paramName);

  /// @brief Method SetterMustBeVoid, addr 0x2c20700, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* SetterMustBeVoid(::StringW paramName);

  /// @brief Method TryMustHaveCatchFinallyOrFault, addr 0x2c216b0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryMustHaveCatchFinallyOrFault();

  /// @brief Method TypeContainsGenericParameters, addr 0x2c24d50, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeContainsGenericParameters(::System::Object* p0, ::StringW paramName);

  /// @brief Method TypeContainsGenericParameters, addr 0x2c24e20, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeContainsGenericParameters(::System::Object* p0, ::StringW paramName, int32_t index);

  /// @brief Method TypeIsGeneric, addr 0x2c24e44, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeIsGeneric(::System::Object* p0, ::StringW paramName);

  /// @brief Method TypeIsGeneric, addr 0x2c24f14, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeIsGeneric(::System::Object* p0, ::StringW paramName, int32_t index);

  /// @brief Method TypeMustBeDerivedFromSystemDelegate, addr 0x2c202d4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMustBeDerivedFromSystemDelegate();

  /// @brief Method TypeMustNotBeByRef, addr 0x2c20548, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMustNotBeByRef(::StringW paramName);

  /// @brief Method TypeMustNotBePointer, addr 0x2c20624, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMustNotBePointer(::StringW paramName);

  /// @brief Method TypeParameterIsNotDelegate, addr 0x2c1feec, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeParameterIsNotDelegate(::System::Object* p0);

  /// @brief Method UnaryOperatorNotDefined, addr 0x2c21b88, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UnaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UnhandledBinary, addr 0x2c237bc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UnhandledBinary(::System::Object* p0, ::StringW paramName);

  /// @brief Method UnhandledUnary, addr 0x2c2388c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UnhandledUnary(::System::Object* p0, ::StringW paramName);

  /// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0x2c2395c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0x2c23a3c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UserDefinedOperatorMustBeStatic, addr 0x2c21908, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object* p0, ::StringW paramName);

  /// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0x2c219d8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object* p0, ::StringW paramName);

  /// @brief Method VariableMustNotBeByRef, addr 0x2c213c4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* VariableMustNotBeByRef(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method VariableMustNotBeByRef, addr 0x2c214ac, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Exception* VariableMustNotBeByRef(::System::Object* p0, ::System::Object* p1, ::StringW paramName, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Error();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Error(Error&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Error(Error const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Error, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Error);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Error*, "System.Linq.Expressions", "Error");
