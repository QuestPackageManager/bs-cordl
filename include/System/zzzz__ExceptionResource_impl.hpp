#pragma once
// IWYU pragma private; include "System/ExceptionResource.hpp"
#include "System/zzzz__ExceptionResource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ExceptionResource::ExceptionResource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ExceptionResource::ExceptionResource()   {
}
constexpr ::System::ExceptionResource  System::ExceptionResource::Argument_ImplementIComparable{static_cast<int32_t>(0x0)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Argument_InvalidType{static_cast<int32_t>(0x1)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Argument_InvalidArgumentForComparison{static_cast<int32_t>(0x2)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Argument_InvalidRegistryKeyPermissionCheck{static_cast<int32_t>(0x3)};
constexpr ::System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_NeedNonNegNum{static_cast<int32_t>(0x4)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Arg_ArrayPlusOffTooSmall{static_cast<int32_t>(0x5)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Arg_NonZeroLowerBound{static_cast<int32_t>(0x6)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Arg_RankMultiDimNotSupported{static_cast<int32_t>(0x7)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Arg_RegKeyDelHive{static_cast<int32_t>(0x8)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Arg_RegKeyStrLenBug{static_cast<int32_t>(0x9)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Arg_RegSetStrArrNull{static_cast<int32_t>(0xa)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Arg_RegSetMismatchedKind{static_cast<int32_t>(0xb)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Arg_RegSubKeyAbsent{static_cast<int32_t>(0xc)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Arg_RegSubKeyValueAbsent{static_cast<int32_t>(0xd)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Argument_AddingDuplicate{static_cast<int32_t>(0xe)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Serialization_InvalidOnDeser{static_cast<int32_t>(0xf)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Serialization_MissingKeys{static_cast<int32_t>(0x10)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Serialization_NullKey{static_cast<int32_t>(0x11)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Argument_InvalidArrayType{static_cast<int32_t>(0x12)};
constexpr ::System::ExceptionResource  System::ExceptionResource::NotSupported_KeyCollectionSet{static_cast<int32_t>(0x13)};
constexpr ::System::ExceptionResource  System::ExceptionResource::NotSupported_ValueCollectionSet{static_cast<int32_t>(0x14)};
constexpr ::System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_SmallCapacity{static_cast<int32_t>(0x15)};
constexpr ::System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_Index{static_cast<int32_t>(0x16)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Argument_InvalidOffLen{static_cast<int32_t>(0x17)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Argument_ItemNotExist{static_cast<int32_t>(0x18)};
constexpr ::System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_Count{static_cast<int32_t>(0x19)};
constexpr ::System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_InvalidThreshold{static_cast<int32_t>(0x1a)};
constexpr ::System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_ListInsert{static_cast<int32_t>(0x1b)};
constexpr ::System::ExceptionResource  System::ExceptionResource::NotSupported_ReadOnlyCollection{static_cast<int32_t>(0x1c)};
constexpr ::System::ExceptionResource  System::ExceptionResource::InvalidOperation_CannotRemoveFromStackOrQueue{static_cast<int32_t>(0x1d)};
constexpr ::System::ExceptionResource  System::ExceptionResource::InvalidOperation_EmptyQueue{static_cast<int32_t>(0x1e)};
constexpr ::System::ExceptionResource  System::ExceptionResource::InvalidOperation_EnumOpCantHappen{static_cast<int32_t>(0x1f)};
constexpr ::System::ExceptionResource  System::ExceptionResource::InvalidOperation_EnumFailedVersion{static_cast<int32_t>(0x20)};
constexpr ::System::ExceptionResource  System::ExceptionResource::InvalidOperation_EmptyStack{static_cast<int32_t>(0x21)};
constexpr ::System::ExceptionResource  System::ExceptionResource::ArgumentOutOfRange_BiggerThanCollection{static_cast<int32_t>(0x22)};
constexpr ::System::ExceptionResource  System::ExceptionResource::InvalidOperation_EnumNotStarted{static_cast<int32_t>(0x23)};
constexpr ::System::ExceptionResource  System::ExceptionResource::InvalidOperation_EnumEnded{static_cast<int32_t>(0x24)};
constexpr ::System::ExceptionResource  System::ExceptionResource::NotSupported_SortedListNestedWrite{static_cast<int32_t>(0x25)};
constexpr ::System::ExceptionResource  System::ExceptionResource::InvalidOperation_NoValue{static_cast<int32_t>(0x26)};
constexpr ::System::ExceptionResource  System::ExceptionResource::InvalidOperation_RegRemoveSubKey{static_cast<int32_t>(0x27)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Security_RegistryPermission{static_cast<int32_t>(0x28)};
constexpr ::System::ExceptionResource  System::ExceptionResource::UnauthorizedAccess_RegistryNoWrite{static_cast<int32_t>(0x29)};
constexpr ::System::ExceptionResource  System::ExceptionResource::ObjectDisposed_RegKeyClosed{static_cast<int32_t>(0x2a)};
constexpr ::System::ExceptionResource  System::ExceptionResource::NotSupported_InComparableType{static_cast<int32_t>(0x2b)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Argument_InvalidRegistryOptionsCheck{static_cast<int32_t>(0x2c)};
constexpr ::System::ExceptionResource  System::ExceptionResource::Argument_InvalidRegistryViewCheck{static_cast<int32_t>(0x2d)};
constexpr ::System::ExceptionResource  System::ExceptionResource::TaskT_TransitionToFinal_AlreadyCompleted{static_cast<int32_t>(0x2e)};
constexpr ::System::ExceptionResource  System::ExceptionResource::TaskCompletionSourceT_TrySetException_NullException{static_cast<int32_t>(0x2f)};
constexpr ::System::ExceptionResource  System::ExceptionResource::TaskCompletionSourceT_TrySetException_NoExceptions{static_cast<int32_t>(0x30)};
constexpr ::System::ExceptionResource  System::ExceptionResource::NotSupported_StringComparison{static_cast<int32_t>(0x31)};
constexpr ::System::ExceptionResource  System::ExceptionResource::InvalidOperation_NullArray{static_cast<int32_t>(0x32)};
