#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionResource)
// Forward declare root types
namespace System {
struct ExceptionResource;
}
// Write type traits
MARK_VAL_T(::System::ExceptionResource);
// Type: System::ExceptionResource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2569))
// CS Name: ::System::ExceptionResource
struct CORDL_TYPE ExceptionResource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExceptionResource_Unwrapped
  enum struct __ExceptionResource_Unwrapped : int32_t {
    __E_Argument_ImplementIComparable = static_cast<int32_t>(0x0),
    __E_Argument_InvalidType = static_cast<int32_t>(0x1),
    __E_Argument_InvalidArgumentForComparison = static_cast<int32_t>(0x2),
    __E_Argument_InvalidRegistryKeyPermissionCheck = static_cast<int32_t>(0x3),
    __E_ArgumentOutOfRange_NeedNonNegNum = static_cast<int32_t>(0x4),
    __E_Arg_ArrayPlusOffTooSmall = static_cast<int32_t>(0x5),
    __E_Arg_NonZeroLowerBound = static_cast<int32_t>(0x6),
    __E_Arg_RankMultiDimNotSupported = static_cast<int32_t>(0x7),
    __E_Arg_RegKeyDelHive = static_cast<int32_t>(0x8),
    __E_Arg_RegKeyStrLenBug = static_cast<int32_t>(0x9),
    __E_Arg_RegSetStrArrNull = static_cast<int32_t>(0xa),
    __E_Arg_RegSetMismatchedKind = static_cast<int32_t>(0xb),
    __E_Arg_RegSubKeyAbsent = static_cast<int32_t>(0xc),
    __E_Arg_RegSubKeyValueAbsent = static_cast<int32_t>(0xd),
    __E_Argument_AddingDuplicate = static_cast<int32_t>(0xe),
    __E_Serialization_InvalidOnDeser = static_cast<int32_t>(0xf),
    __E_Serialization_MissingKeys = static_cast<int32_t>(0x10),
    __E_Serialization_NullKey = static_cast<int32_t>(0x11),
    __E_Argument_InvalidArrayType = static_cast<int32_t>(0x12),
    __E_NotSupported_KeyCollectionSet = static_cast<int32_t>(0x13),
    __E_NotSupported_ValueCollectionSet = static_cast<int32_t>(0x14),
    __E_ArgumentOutOfRange_SmallCapacity = static_cast<int32_t>(0x15),
    __E_ArgumentOutOfRange_Index = static_cast<int32_t>(0x16),
    __E_Argument_InvalidOffLen = static_cast<int32_t>(0x17),
    __E_Argument_ItemNotExist = static_cast<int32_t>(0x18),
    __E_ArgumentOutOfRange_Count = static_cast<int32_t>(0x19),
    __E_ArgumentOutOfRange_InvalidThreshold = static_cast<int32_t>(0x1a),
    __E_ArgumentOutOfRange_ListInsert = static_cast<int32_t>(0x1b),
    __E_NotSupported_ReadOnlyCollection = static_cast<int32_t>(0x1c),
    __E_InvalidOperation_CannotRemoveFromStackOrQueue = static_cast<int32_t>(0x1d),
    __E_InvalidOperation_EmptyQueue = static_cast<int32_t>(0x1e),
    __E_InvalidOperation_EnumOpCantHappen = static_cast<int32_t>(0x1f),
    __E_InvalidOperation_EnumFailedVersion = static_cast<int32_t>(0x20),
    __E_InvalidOperation_EmptyStack = static_cast<int32_t>(0x21),
    __E_ArgumentOutOfRange_BiggerThanCollection = static_cast<int32_t>(0x22),
    __E_InvalidOperation_EnumNotStarted = static_cast<int32_t>(0x23),
    __E_InvalidOperation_EnumEnded = static_cast<int32_t>(0x24),
    __E_NotSupported_SortedListNestedWrite = static_cast<int32_t>(0x25),
    __E_InvalidOperation_NoValue = static_cast<int32_t>(0x26),
    __E_InvalidOperation_RegRemoveSubKey = static_cast<int32_t>(0x27),
    __E_Security_RegistryPermission = static_cast<int32_t>(0x28),
    __E_UnauthorizedAccess_RegistryNoWrite = static_cast<int32_t>(0x29),
    __E_ObjectDisposed_RegKeyClosed = static_cast<int32_t>(0x2a),
    __E_NotSupported_InComparableType = static_cast<int32_t>(0x2b),
    __E_Argument_InvalidRegistryOptionsCheck = static_cast<int32_t>(0x2c),
    __E_Argument_InvalidRegistryViewCheck = static_cast<int32_t>(0x2d),
    __E_TaskT_TransitionToFinal_AlreadyCompleted = static_cast<int32_t>(0x2e),
    __E_TaskCompletionSourceT_TrySetException_NullException = static_cast<int32_t>(0x2f),
    __E_TaskCompletionSourceT_TrySetException_NoExceptions = static_cast<int32_t>(0x30),
    __E_NotSupported_StringComparison = static_cast<int32_t>(0x31),
    __E_InvalidOperation_NullArray = static_cast<int32_t>(0x32),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExceptionResource_Unwrapped() const noexcept {
    return static_cast<__ExceptionResource_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExceptionResource(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionResource();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Argument_ImplementIComparable value: static_cast<int32_t>(0x0)
  static ::System::ExceptionResource const Argument_ImplementIComparable;

  /// @brief Field Argument_InvalidType value: static_cast<int32_t>(0x1)
  static ::System::ExceptionResource const Argument_InvalidType;

  /// @brief Field Argument_InvalidArgumentForComparison value: static_cast<int32_t>(0x2)
  static ::System::ExceptionResource const Argument_InvalidArgumentForComparison;

  /// @brief Field Argument_InvalidRegistryKeyPermissionCheck value: static_cast<int32_t>(0x3)
  static ::System::ExceptionResource const Argument_InvalidRegistryKeyPermissionCheck;

  /// @brief Field ArgumentOutOfRange_NeedNonNegNum value: static_cast<int32_t>(0x4)
  static ::System::ExceptionResource const ArgumentOutOfRange_NeedNonNegNum;

  /// @brief Field Arg_ArrayPlusOffTooSmall value: static_cast<int32_t>(0x5)
  static ::System::ExceptionResource const Arg_ArrayPlusOffTooSmall;

  /// @brief Field Arg_NonZeroLowerBound value: static_cast<int32_t>(0x6)
  static ::System::ExceptionResource const Arg_NonZeroLowerBound;

  /// @brief Field Arg_RankMultiDimNotSupported value: static_cast<int32_t>(0x7)
  static ::System::ExceptionResource const Arg_RankMultiDimNotSupported;

  /// @brief Field Arg_RegKeyDelHive value: static_cast<int32_t>(0x8)
  static ::System::ExceptionResource const Arg_RegKeyDelHive;

  /// @brief Field Arg_RegKeyStrLenBug value: static_cast<int32_t>(0x9)
  static ::System::ExceptionResource const Arg_RegKeyStrLenBug;

  /// @brief Field Arg_RegSetStrArrNull value: static_cast<int32_t>(0xa)
  static ::System::ExceptionResource const Arg_RegSetStrArrNull;

  /// @brief Field Arg_RegSetMismatchedKind value: static_cast<int32_t>(0xb)
  static ::System::ExceptionResource const Arg_RegSetMismatchedKind;

  /// @brief Field Arg_RegSubKeyAbsent value: static_cast<int32_t>(0xc)
  static ::System::ExceptionResource const Arg_RegSubKeyAbsent;

  /// @brief Field Arg_RegSubKeyValueAbsent value: static_cast<int32_t>(0xd)
  static ::System::ExceptionResource const Arg_RegSubKeyValueAbsent;

  /// @brief Field Argument_AddingDuplicate value: static_cast<int32_t>(0xe)
  static ::System::ExceptionResource const Argument_AddingDuplicate;

  /// @brief Field Serialization_InvalidOnDeser value: static_cast<int32_t>(0xf)
  static ::System::ExceptionResource const Serialization_InvalidOnDeser;

  /// @brief Field Serialization_MissingKeys value: static_cast<int32_t>(0x10)
  static ::System::ExceptionResource const Serialization_MissingKeys;

  /// @brief Field Serialization_NullKey value: static_cast<int32_t>(0x11)
  static ::System::ExceptionResource const Serialization_NullKey;

  /// @brief Field Argument_InvalidArrayType value: static_cast<int32_t>(0x12)
  static ::System::ExceptionResource const Argument_InvalidArrayType;

  /// @brief Field NotSupported_KeyCollectionSet value: static_cast<int32_t>(0x13)
  static ::System::ExceptionResource const NotSupported_KeyCollectionSet;

  /// @brief Field NotSupported_ValueCollectionSet value: static_cast<int32_t>(0x14)
  static ::System::ExceptionResource const NotSupported_ValueCollectionSet;

  /// @brief Field ArgumentOutOfRange_SmallCapacity value: static_cast<int32_t>(0x15)
  static ::System::ExceptionResource const ArgumentOutOfRange_SmallCapacity;

  /// @brief Field ArgumentOutOfRange_Index value: static_cast<int32_t>(0x16)
  static ::System::ExceptionResource const ArgumentOutOfRange_Index;

  /// @brief Field Argument_InvalidOffLen value: static_cast<int32_t>(0x17)
  static ::System::ExceptionResource const Argument_InvalidOffLen;

  /// @brief Field Argument_ItemNotExist value: static_cast<int32_t>(0x18)
  static ::System::ExceptionResource const Argument_ItemNotExist;

  /// @brief Field ArgumentOutOfRange_Count value: static_cast<int32_t>(0x19)
  static ::System::ExceptionResource const ArgumentOutOfRange_Count;

  /// @brief Field ArgumentOutOfRange_InvalidThreshold value: static_cast<int32_t>(0x1a)
  static ::System::ExceptionResource const ArgumentOutOfRange_InvalidThreshold;

  /// @brief Field ArgumentOutOfRange_ListInsert value: static_cast<int32_t>(0x1b)
  static ::System::ExceptionResource const ArgumentOutOfRange_ListInsert;

  /// @brief Field NotSupported_ReadOnlyCollection value: static_cast<int32_t>(0x1c)
  static ::System::ExceptionResource const NotSupported_ReadOnlyCollection;

  /// @brief Field InvalidOperation_CannotRemoveFromStackOrQueue value: static_cast<int32_t>(0x1d)
  static ::System::ExceptionResource const InvalidOperation_CannotRemoveFromStackOrQueue;

  /// @brief Field InvalidOperation_EmptyQueue value: static_cast<int32_t>(0x1e)
  static ::System::ExceptionResource const InvalidOperation_EmptyQueue;

  /// @brief Field InvalidOperation_EnumOpCantHappen value: static_cast<int32_t>(0x1f)
  static ::System::ExceptionResource const InvalidOperation_EnumOpCantHappen;

  /// @brief Field InvalidOperation_EnumFailedVersion value: static_cast<int32_t>(0x20)
  static ::System::ExceptionResource const InvalidOperation_EnumFailedVersion;

  /// @brief Field InvalidOperation_EmptyStack value: static_cast<int32_t>(0x21)
  static ::System::ExceptionResource const InvalidOperation_EmptyStack;

  /// @brief Field ArgumentOutOfRange_BiggerThanCollection value: static_cast<int32_t>(0x22)
  static ::System::ExceptionResource const ArgumentOutOfRange_BiggerThanCollection;

  /// @brief Field InvalidOperation_EnumNotStarted value: static_cast<int32_t>(0x23)
  static ::System::ExceptionResource const InvalidOperation_EnumNotStarted;

  /// @brief Field InvalidOperation_EnumEnded value: static_cast<int32_t>(0x24)
  static ::System::ExceptionResource const InvalidOperation_EnumEnded;

  /// @brief Field NotSupported_SortedListNestedWrite value: static_cast<int32_t>(0x25)
  static ::System::ExceptionResource const NotSupported_SortedListNestedWrite;

  /// @brief Field InvalidOperation_NoValue value: static_cast<int32_t>(0x26)
  static ::System::ExceptionResource const InvalidOperation_NoValue;

  /// @brief Field InvalidOperation_RegRemoveSubKey value: static_cast<int32_t>(0x27)
  static ::System::ExceptionResource const InvalidOperation_RegRemoveSubKey;

  /// @brief Field Security_RegistryPermission value: static_cast<int32_t>(0x28)
  static ::System::ExceptionResource const Security_RegistryPermission;

  /// @brief Field UnauthorizedAccess_RegistryNoWrite value: static_cast<int32_t>(0x29)
  static ::System::ExceptionResource const UnauthorizedAccess_RegistryNoWrite;

  /// @brief Field ObjectDisposed_RegKeyClosed value: static_cast<int32_t>(0x2a)
  static ::System::ExceptionResource const ObjectDisposed_RegKeyClosed;

  /// @brief Field NotSupported_InComparableType value: static_cast<int32_t>(0x2b)
  static ::System::ExceptionResource const NotSupported_InComparableType;

  /// @brief Field Argument_InvalidRegistryOptionsCheck value: static_cast<int32_t>(0x2c)
  static ::System::ExceptionResource const Argument_InvalidRegistryOptionsCheck;

  /// @brief Field Argument_InvalidRegistryViewCheck value: static_cast<int32_t>(0x2d)
  static ::System::ExceptionResource const Argument_InvalidRegistryViewCheck;

  /// @brief Field TaskT_TransitionToFinal_AlreadyCompleted value: static_cast<int32_t>(0x2e)
  static ::System::ExceptionResource const TaskT_TransitionToFinal_AlreadyCompleted;

  /// @brief Field TaskCompletionSourceT_TrySetException_NullException value: static_cast<int32_t>(0x2f)
  static ::System::ExceptionResource const TaskCompletionSourceT_TrySetException_NullException;

  /// @brief Field TaskCompletionSourceT_TrySetException_NoExceptions value: static_cast<int32_t>(0x30)
  static ::System::ExceptionResource const TaskCompletionSourceT_TrySetException_NoExceptions;

  /// @brief Field NotSupported_StringComparison value: static_cast<int32_t>(0x31)
  static ::System::ExceptionResource const NotSupported_StringComparison;

  /// @brief Field InvalidOperation_NullArray value: static_cast<int32_t>(0x32)
  static ::System::ExceptionResource const InvalidOperation_NullArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ExceptionResource, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::ExceptionResource, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ExceptionResource, "System", "ExceptionResource");
