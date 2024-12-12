#pragma once
// IWYU pragma private; include "System/ExceptionResource.hpp"
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
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.ExceptionResource
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionResource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExceptionResource(int32_t value__) noexcept;

  /// @brief Field Arg_ArrayPlusOffTooSmall value: I32(5)
  static ::System::ExceptionResource const Arg_ArrayPlusOffTooSmall;

  /// @brief Field Arg_NonZeroLowerBound value: I32(6)
  static ::System::ExceptionResource const Arg_NonZeroLowerBound;

  /// @brief Field Arg_RankMultiDimNotSupported value: I32(7)
  static ::System::ExceptionResource const Arg_RankMultiDimNotSupported;

  /// @brief Field Arg_RegKeyDelHive value: I32(8)
  static ::System::ExceptionResource const Arg_RegKeyDelHive;

  /// @brief Field Arg_RegKeyStrLenBug value: I32(9)
  static ::System::ExceptionResource const Arg_RegKeyStrLenBug;

  /// @brief Field Arg_RegSetMismatchedKind value: I32(11)
  static ::System::ExceptionResource const Arg_RegSetMismatchedKind;

  /// @brief Field Arg_RegSetStrArrNull value: I32(10)
  static ::System::ExceptionResource const Arg_RegSetStrArrNull;

  /// @brief Field Arg_RegSubKeyAbsent value: I32(12)
  static ::System::ExceptionResource const Arg_RegSubKeyAbsent;

  /// @brief Field Arg_RegSubKeyValueAbsent value: I32(13)
  static ::System::ExceptionResource const Arg_RegSubKeyValueAbsent;

  /// @brief Field ArgumentOutOfRange_BiggerThanCollection value: I32(34)
  static ::System::ExceptionResource const ArgumentOutOfRange_BiggerThanCollection;

  /// @brief Field ArgumentOutOfRange_Count value: I32(25)
  static ::System::ExceptionResource const ArgumentOutOfRange_Count;

  /// @brief Field ArgumentOutOfRange_Index value: I32(22)
  static ::System::ExceptionResource const ArgumentOutOfRange_Index;

  /// @brief Field ArgumentOutOfRange_InvalidThreshold value: I32(26)
  static ::System::ExceptionResource const ArgumentOutOfRange_InvalidThreshold;

  /// @brief Field ArgumentOutOfRange_ListInsert value: I32(27)
  static ::System::ExceptionResource const ArgumentOutOfRange_ListInsert;

  /// @brief Field ArgumentOutOfRange_NeedNonNegNum value: I32(4)
  static ::System::ExceptionResource const ArgumentOutOfRange_NeedNonNegNum;

  /// @brief Field ArgumentOutOfRange_SmallCapacity value: I32(21)
  static ::System::ExceptionResource const ArgumentOutOfRange_SmallCapacity;

  /// @brief Field Argument_AddingDuplicate value: I32(14)
  static ::System::ExceptionResource const Argument_AddingDuplicate;

  /// @brief Field Argument_ImplementIComparable value: I32(0)
  static ::System::ExceptionResource const Argument_ImplementIComparable;

  /// @brief Field Argument_InvalidArgumentForComparison value: I32(2)
  static ::System::ExceptionResource const Argument_InvalidArgumentForComparison;

  /// @brief Field Argument_InvalidArrayType value: I32(18)
  static ::System::ExceptionResource const Argument_InvalidArrayType;

  /// @brief Field Argument_InvalidOffLen value: I32(23)
  static ::System::ExceptionResource const Argument_InvalidOffLen;

  /// @brief Field Argument_InvalidRegistryKeyPermissionCheck value: I32(3)
  static ::System::ExceptionResource const Argument_InvalidRegistryKeyPermissionCheck;

  /// @brief Field Argument_InvalidRegistryOptionsCheck value: I32(44)
  static ::System::ExceptionResource const Argument_InvalidRegistryOptionsCheck;

  /// @brief Field Argument_InvalidRegistryViewCheck value: I32(45)
  static ::System::ExceptionResource const Argument_InvalidRegistryViewCheck;

  /// @brief Field Argument_InvalidType value: I32(1)
  static ::System::ExceptionResource const Argument_InvalidType;

  /// @brief Field Argument_ItemNotExist value: I32(24)
  static ::System::ExceptionResource const Argument_ItemNotExist;

  /// @brief Field InvalidOperation_CannotRemoveFromStackOrQueue value: I32(29)
  static ::System::ExceptionResource const InvalidOperation_CannotRemoveFromStackOrQueue;

  /// @brief Field InvalidOperation_EmptyQueue value: I32(30)
  static ::System::ExceptionResource const InvalidOperation_EmptyQueue;

  /// @brief Field InvalidOperation_EmptyStack value: I32(33)
  static ::System::ExceptionResource const InvalidOperation_EmptyStack;

  /// @brief Field InvalidOperation_EnumEnded value: I32(36)
  static ::System::ExceptionResource const InvalidOperation_EnumEnded;

  /// @brief Field InvalidOperation_EnumFailedVersion value: I32(32)
  static ::System::ExceptionResource const InvalidOperation_EnumFailedVersion;

  /// @brief Field InvalidOperation_EnumNotStarted value: I32(35)
  static ::System::ExceptionResource const InvalidOperation_EnumNotStarted;

  /// @brief Field InvalidOperation_EnumOpCantHappen value: I32(31)
  static ::System::ExceptionResource const InvalidOperation_EnumOpCantHappen;

  /// @brief Field InvalidOperation_NoValue value: I32(38)
  static ::System::ExceptionResource const InvalidOperation_NoValue;

  /// @brief Field InvalidOperation_NullArray value: I32(50)
  static ::System::ExceptionResource const InvalidOperation_NullArray;

  /// @brief Field InvalidOperation_RegRemoveSubKey value: I32(39)
  static ::System::ExceptionResource const InvalidOperation_RegRemoveSubKey;

  /// @brief Field NotSupported_InComparableType value: I32(43)
  static ::System::ExceptionResource const NotSupported_InComparableType;

  /// @brief Field NotSupported_KeyCollectionSet value: I32(19)
  static ::System::ExceptionResource const NotSupported_KeyCollectionSet;

  /// @brief Field NotSupported_ReadOnlyCollection value: I32(28)
  static ::System::ExceptionResource const NotSupported_ReadOnlyCollection;

  /// @brief Field NotSupported_SortedListNestedWrite value: I32(37)
  static ::System::ExceptionResource const NotSupported_SortedListNestedWrite;

  /// @brief Field NotSupported_StringComparison value: I32(49)
  static ::System::ExceptionResource const NotSupported_StringComparison;

  /// @brief Field NotSupported_ValueCollectionSet value: I32(20)
  static ::System::ExceptionResource const NotSupported_ValueCollectionSet;

  /// @brief Field ObjectDisposed_RegKeyClosed value: I32(42)
  static ::System::ExceptionResource const ObjectDisposed_RegKeyClosed;

  /// @brief Field Security_RegistryPermission value: I32(40)
  static ::System::ExceptionResource const Security_RegistryPermission;

  /// @brief Field Serialization_InvalidOnDeser value: I32(15)
  static ::System::ExceptionResource const Serialization_InvalidOnDeser;

  /// @brief Field Serialization_MissingKeys value: I32(16)
  static ::System::ExceptionResource const Serialization_MissingKeys;

  /// @brief Field Serialization_NullKey value: I32(17)
  static ::System::ExceptionResource const Serialization_NullKey;

  /// @brief Field TaskCompletionSourceT_TrySetException_NoExceptions value: I32(48)
  static ::System::ExceptionResource const TaskCompletionSourceT_TrySetException_NoExceptions;

  /// @brief Field TaskCompletionSourceT_TrySetException_NullException value: I32(47)
  static ::System::ExceptionResource const TaskCompletionSourceT_TrySetException_NullException;

  /// @brief Field TaskT_TransitionToFinal_AlreadyCompleted value: I32(46)
  static ::System::ExceptionResource const TaskT_TransitionToFinal_AlreadyCompleted;

  /// @brief Field UnauthorizedAccess_RegistryNoWrite value: I32(41)
  static ::System::ExceptionResource const UnauthorizedAccess_RegistryNoWrite;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2572 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ExceptionResource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ExceptionResource, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ExceptionResource, "System", "ExceptionResource");
