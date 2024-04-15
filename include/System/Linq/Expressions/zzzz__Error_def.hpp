#pragma once
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
  /// @brief Method AccessorsCannotHaveByRefArgs, addr 0x2b02164, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW paramName);

  /// @brief Method AccessorsCannotHaveByRefArgs, addr 0x2b02240, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW paramName, int32_t index);

  /// @brief Method AccessorsCannotHaveVarArgs, addr 0x2b02088, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* AccessorsCannotHaveVarArgs(::StringW paramName);

  /// @brief Method AmbiguousJump, addr 0x2b06384, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* AmbiguousJump(::System::Object* p0);

  /// @brief Method AmbiguousMatchInExpandoObject, addr 0x2b01178, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object* p0);

  /// @brief Method ArgumentCannotBeOfTypeVoid, addr 0x2b05eac, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentCannotBeOfTypeVoid(::StringW paramName);

  /// @brief Method ArgumentMustBeArray, addr 0x2b040d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeArray(::StringW paramName);

  /// @brief Method ArgumentMustBeArrayIndexType, addr 0x2b04378, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeArrayIndexType(::StringW paramName);

  /// @brief Method ArgumentMustBeBoolean, addr 0x2b041b0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeBoolean(::StringW paramName);

  /// @brief Method ArgumentMustBeInteger, addr 0x2b0428c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeInteger(::StringW paramName);

  /// @brief Method ArgumentMustBeInteger, addr 0x2b04368, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeInteger(::StringW paramName, int32_t index);

  /// @brief Method ArgumentMustBeSingleDimensionalArrayType, addr 0x2b04454, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::StringW paramName);

  /// @brief Method ArgumentMustNotHaveValueType, addr 0x2b02f98, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentMustNotHaveValueType(::StringW paramName);

  /// @brief Method ArgumentOutOfRange, addr 0x2aff10c, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentOutOfRange(::StringW paramName);

  /// @brief Method ArgumentTypesMustMatch, addr 0x2b04530, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ArgumentTypesMustMatch();

  /// @brief Method BinaryOperatorNotDefined, addr 0x2b03c78, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* BinaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method BinderNotCompatibleWithCallSite, addr 0x2b01634, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* BinderNotCompatibleWithCallSite(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method BindingCannotBeNull, addr 0x2b01ad0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* BindingCannotBeNull();

  /// @brief Method BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0x2b0378c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry();

  /// @brief Method BothAccessorsMustBeStatic, addr 0x2b029a4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* BothAccessorsMustBeStatic(::StringW paramName);

  /// @brief Method BoundsCannotBeLessThanOne, addr 0x2b0247c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* BoundsCannotBeLessThanOne(::StringW paramName);

  /// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0x2b045fc, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object* p0);

  /// @brief Method CoalesceUsedOnNonNullType, addr 0x2b0478c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* CoalesceUsedOnNonNullType();

  /// @brief Method CoercionOperatorNotDefined, addr 0x2b03ab8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* CoercionOperatorNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method CollectionModifiedWhileEnumerating, addr 0x2b013d0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* CollectionModifiedWhileEnumerating();

  /// @brief Method CollectionReadOnly, addr 0x2b0149c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* CollectionReadOnly();

  /// @brief Method ControlCannotEnterExpression, addr 0x2b06510, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotEnterExpression();

  /// @brief Method ControlCannotEnterTry, addr 0x2b06444, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotEnterTry();

  /// @brief Method ControlCannotLeaveFilterTest, addr 0x2b062b8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotLeaveFilterTest();

  /// @brief Method ControlCannotLeaveFinally, addr 0x2b061ec, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ControlCannotLeaveFinally();

  /// @brief Method ConversionIsNotSupportedForArithmeticTypes, addr 0x2b04008, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ConversionIsNotSupportedForArithmeticTypes();

  /// @brief Method DuplicateVariable, addr 0x2b034f0, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateVariable(::System::Object* p0, ::StringW paramName);

  /// @brief Method DuplicateVariable, addr 0x2b035c0, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Exception* DuplicateVariable(::System::Object* p0, ::StringW paramName, int32_t index);

  /// @brief Method DynamicBinderResultNotAssignable, addr 0x2b019e0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* DynamicBinderResultNotAssignable(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method DynamicBindingNeedsRestrictions, addr 0x2b01724, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* DynamicBindingNeedsRestrictions(::System::Object* p0, ::System::Object* p1);

  /// @brief Method DynamicObjectResultNotAssignable, addr 0x2b01804, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* DynamicObjectResultNotAssignable(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3);

  /// @brief Method EnumerationIsDone, addr 0x2b06c94, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* EnumerationIsDone();

  /// @brief Method ExpressionMustBeReadable, addr 0x2b07524, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionMustBeReadable(::StringW paramName);

  /// @brief Method ExpressionMustBeReadable, addr 0x2b07600, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionMustBeReadable(::StringW paramName, int32_t index);

  /// @brief Method ExpressionMustBeWriteable, addr 0x2b02ebc, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionMustBeWriteable(::StringW paramName);

  /// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0x2b04858, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0x2b04a18, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x2b07408, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x2b074f0, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName, int32_t index);

  /// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0x2b04af8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x2b07014, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::StringW paramName);

  /// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x2b07114, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::StringW paramName, int32_t index);

  /// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x2b07150, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x2b07238, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object* p0, ::System::Object* p1, ::StringW paramName, int32_t index);

  /// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0x2b04938, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ExpressionTypeNotInvocable, addr 0x2b04bd8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ExpressionTypeNotInvocable(::System::Object* p0, ::StringW paramName);

  /// @brief Method ExtensionNodeMustOverrideProperty, addr 0x2b03858, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object* p0);

  /// @brief Method FaultCannotHaveCatchOrFinally, addr 0x2b035e4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* FaultCannotHaveCatchOrFinally(::StringW paramName);

  /// @brief Method FieldInfoNotDefinedForType, addr 0x2b04d88, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* FieldInfoNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method FirstArgumentMustBeCallSite, addr 0x2b01fbc, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* FirstArgumentMustBeCallSite();

  /// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0x2b05cec, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method GetParamName, addr 0x2b02250, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetParamName(::StringW paramName, int32_t index);

  /// @brief Method IncorrectNumberOfConstructorArguments, addr 0x2b06f48, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfConstructorArguments();

  /// @brief Method IncorrectNumberOfIndexes, addr 0x2b04e78, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfIndexes();

  /// @brief Method IncorrectNumberOfLambdaArguments, addr 0x2b0726c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfLambdaArguments();

  /// @brief Method IncorrectNumberOfLambdaDeclarationParameters, addr 0x2b04f44, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfLambdaDeclarationParameters();

  /// @brief Method IncorrectNumberOfMethodCallArguments, addr 0x2b07338, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object* p0, ::StringW paramName);

  /// @brief Method IncorrectTypeForTypeAs, addr 0x2b046bc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* IncorrectTypeForTypeAs(::System::Object* p0, ::StringW paramName);

  /// @brief Method IndexesOfSetGetMustMatch, addr 0x2b01e20, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* IndexesOfSetGetMustMatch(::StringW paramName);

  /// @brief Method InstanceAndMethodTypeMismatch, addr 0x2b056dc, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method InstanceFieldNotDefinedForType, addr 0x2b04ca8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* InstanceFieldNotDefinedForType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method InstancePropertyNotDefinedForType, addr 0x2b055f4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* InstancePropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method InvalidArgumentValue, addr 0x2b07610, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidArgumentValue(::StringW paramName);

  /// @brief Method InvalidLvalue, addr 0x2b0669c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType p0);

  /// @brief Method InvalidMetaObjectCreated, addr 0x2b010b8, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidMetaObjectCreated(::System::Object* p0);

  /// @brief Method InvalidNullValue, addr 0x2b076ec, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidNullValue(::System::Type* type, ::StringW paramName);

  /// @brief Method InvalidProgram, addr 0x2b06c38, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidProgram();

  /// @brief Method InvalidTypeException, addr 0x2b077bc, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidTypeException(::System::Object* value, ::System::Type* type, ::StringW paramName);

  /// @brief Method InvalidUnboxType, addr 0x2b02de0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* InvalidUnboxType(::StringW paramName);

  /// @brief Method KeyDoesNotExistInExpando, addr 0x2b01310, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* KeyDoesNotExistInExpando(::System::Object* p0);

  /// @brief Method LabelMustBeVoidOrHaveExpression, addr 0x2b03140, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelMustBeVoidOrHaveExpression(::StringW paramName);

  /// @brief Method LabelTargetAlreadyDefined, addr 0x2b0606c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelTargetAlreadyDefined(::System::Object* p0);

  /// @brief Method LabelTargetUndefined, addr 0x2b0612c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelTargetUndefined(::System::Object* p0);

  /// @brief Method LabelTypeMustBeVoid, addr 0x2b0321c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* LabelTypeMustBeVoid(::StringW paramName);

  /// @brief Method LambdaTypeMustBeDerivedFromSystemDelegate, addr 0x2b05010, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::StringW paramName);

  /// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0x2b05b2c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MemberNotFieldOrProperty, addr 0x2b050ec, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MemberNotFieldOrProperty(::System::Object* p0, ::StringW paramName);

  /// @brief Method MethodContainsGenericParameters, addr 0x2b051bc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodContainsGenericParameters(::System::Object* p0, ::StringW paramName);

  /// @brief Method MethodIsGeneric, addr 0x2b0528c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodIsGeneric(::System::Object* p0, ::StringW paramName);

  /// @brief Method MethodWithArgsDoesNotExistOnType, addr 0x2b05c0c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MethodWithMoreThanOneMatch, addr 0x2b05dcc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MethodWithMoreThanOneMatch(::System::Object* p0, ::System::Object* p1);

  /// @brief Method MustBeReducible, addr 0x2b03074, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MustBeReducible();

  /// @brief Method MustReduceToDifferent, addr 0x2b01568, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MustReduceToDifferent();

  /// @brief Method MustRewriteChildToSameType, addr 0x2b06940, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MustRewriteChildToSameType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method MustRewriteToSameNode, addr 0x2b06850, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* MustRewriteToSameNode(::System::Object* p0, ::System::Object* p1, ::System::Object* p2);

  /// @brief Method MustRewriteWithoutMethod, addr 0x2b06a30, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* MustRewriteWithoutMethod(::System::Object* p0, ::System::Object* p1);

  /// @brief Method NoOrInvalidRuleProduced, addr 0x2b023b0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* NoOrInvalidRuleProduced();

  /// @brief Method NonAbstractConstructorRequired, addr 0x2b06b6c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* NonAbstractConstructorRequired();

  /// @brief Method NonLocalJumpWithValue, addr 0x2b065dc, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* NonLocalJumpWithValue(::System::Object* p0);

  /// @brief Method NotSupported, addr 0x2b06b10, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* NotSupported();

  /// @brief Method OnlyStaticFieldsHaveNullInstance, addr 0x2b02a80, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* OnlyStaticFieldsHaveNullInstance(::StringW paramName);

  /// @brief Method OnlyStaticMethodsHaveNullInstance, addr 0x2b02c38, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* OnlyStaticMethodsHaveNullInstance();

  /// @brief Method OnlyStaticPropertiesHaveNullInstance, addr 0x2b02b5c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::StringW paramName);

  /// @brief Method OperandTypesDoNotMatchParameters, addr 0x2b03e48, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object* p0, ::System::Object* p1);

  /// @brief Method OutOfRange, addr 0x2b05f88, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Exception* OutOfRange(::StringW paramName, ::System::Object* p1);

  /// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0x2b03f28, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method ParameterExpressionNotValidAsDelegate, addr 0x2b0542c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object* p0, ::System::Object* p1);

  /// @brief Method PropertyCannotHaveRefType, addr 0x2b01d44, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyCannotHaveRefType(::StringW paramName);

  /// @brief Method PropertyDoesNotHaveAccessor, addr 0x2b0535c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object* p0, ::StringW paramName);

  /// @brief Method PropertyNotDefinedForType, addr 0x2b0550c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method PropertyTypeCannotBeVoid, addr 0x2b02d04, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyTypeCannotBeVoid(::StringW paramName);

  /// @brief Method PropertyTypeMustMatchGetter, addr 0x2b027ec, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyTypeMustMatchGetter(::StringW paramName);

  /// @brief Method PropertyTypeMustMatchSetter, addr 0x2b028c8, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* PropertyTypeMustMatchSetter(::StringW paramName);

  /// @brief Method QuotedExpressionMustBeLambda, addr 0x2b032f8, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* QuotedExpressionMustBeLambda(::StringW paramName);

  /// @brief Method ReducedNotCompatible, addr 0x2b01b9c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ReducedNotCompatible();

  /// @brief Method ReducibleMustOverrideReduce, addr 0x2b00fec, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* ReducibleMustOverrideReduce();

  /// @brief Method ReferenceEqualityNotDefined, addr 0x2b03d68, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* ReferenceEqualityNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method RethrowRequiresCatch, addr 0x2b06784, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* RethrowRequiresCatch();

  /// @brief Method SameKeyExistsInExpando, addr 0x2b01238, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* SameKeyExistsInExpando(::System::Object* key);

  /// @brief Method SetterHasNoParams, addr 0x2b01c68, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* SetterHasNoParams(::StringW paramName);

  /// @brief Method SetterMustBeVoid, addr 0x2b02710, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* SetterMustBeVoid(::StringW paramName);

  /// @brief Method TryMustHaveCatchFinallyOrFault, addr 0x2b036c0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryMustHaveCatchFinallyOrFault();

  /// @brief Method TypeContainsGenericParameters, addr 0x2b06d60, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeContainsGenericParameters(::System::Object* p0, ::StringW paramName);

  /// @brief Method TypeContainsGenericParameters, addr 0x2b06e30, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeContainsGenericParameters(::System::Object* p0, ::StringW paramName, int32_t index);

  /// @brief Method TypeIsGeneric, addr 0x2b06e54, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeIsGeneric(::System::Object* p0, ::StringW paramName);

  /// @brief Method TypeIsGeneric, addr 0x2b06f24, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeIsGeneric(::System::Object* p0, ::StringW paramName, int32_t index);

  /// @brief Method TypeMustBeDerivedFromSystemDelegate, addr 0x2b022e4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMustBeDerivedFromSystemDelegate();

  /// @brief Method TypeMustNotBeByRef, addr 0x2b02558, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMustNotBeByRef(::StringW paramName);

  /// @brief Method TypeMustNotBePointer, addr 0x2b02634, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeMustNotBePointer(::StringW paramName);

  /// @brief Method TypeParameterIsNotDelegate, addr 0x2b01efc, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* TypeParameterIsNotDelegate(::System::Object* p0);

  /// @brief Method UnaryOperatorNotDefined, addr 0x2b03b98, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UnaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UnhandledBinary, addr 0x2b057cc, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UnhandledBinary(::System::Object* p0, ::StringW paramName);

  /// @brief Method UnhandledUnary, addr 0x2b0589c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UnhandledUnary(::System::Object* p0, ::StringW paramName);

  /// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0x2b0596c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0x2b05a4c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object* p0, ::System::Object* p1);

  /// @brief Method UserDefinedOperatorMustBeStatic, addr 0x2b03918, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object* p0, ::StringW paramName);

  /// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0x2b039e8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object* p0, ::StringW paramName);

  /// @brief Method VariableMustNotBeByRef, addr 0x2b033d4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Exception* VariableMustNotBeByRef(::System::Object* p0, ::System::Object* p1, ::StringW paramName);

  /// @brief Method VariableMustNotBeByRef, addr 0x2b034bc, size 0x34, virtual false, abstract: false, final false
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
