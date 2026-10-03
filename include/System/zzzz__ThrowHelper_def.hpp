#pragma once
// IWYU pragma private; include "System/ThrowHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowHelper)
namespace System::Collections::Generic {
class KeyNotFoundException;
}
namespace System {
class ArgumentException;
}
namespace System {
class ArgumentNullException;
}
namespace System {
class ArgumentOutOfRangeException;
}
namespace System {
class Array;
}
namespace System {
struct ExceptionArgument;
}
namespace System {
struct ExceptionResource;
}
namespace System {
class Exception;
}
namespace System {
class InvalidOperationException;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class ThrowHelper;
}
// Write type traits
MARK_REF_T(::System::ThrowHelper*);
DEFINE_IL2CPP_CLASS(::System::ThrowHelper*, "System", "ThrowHelper");
// [StackTraceHidden]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ThrowHelper
class CORDL_TYPE ThrowHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateArgumentException_DestinationTooShort, addr 0x60824f0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateArgumentException_DestinationTooShort();

  /// @brief Method CreateArgumentNullException, addr 0x60823ac, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateArgumentNullException(::System::ExceptionArgument argument);

  /// @brief Method CreateArgumentOutOfRangeException, addr 0x608260c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateArgumentOutOfRangeException();

  /// @brief Method CreateArgumentOutOfRangeException, addr 0x6082688, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateArgumentOutOfRangeException(::System::ExceptionArgument argument);

  /// @brief Method CreateArrayTypeMismatchException, addr 0x6082474, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateArrayTypeMismatchException();

  /// @brief Method CreateIndexOutOfRangeException, addr 0x6082590, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateIndexOutOfRangeException();

  /// @brief Method CreateThrowNotSupportedException, addr 0x6082750, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateThrowNotSupportedException();

  /// @brief Method GetAddingDuplicateWithKeyArgumentException, addr 0x6083430, size 0x98, virtual false, abstract: false, final false
  static inline ::System::ArgumentException* GetAddingDuplicateWithKeyArgumentException(::System::Object* key);

  /// @brief Method GetArgumentException, addr 0x60837f0, size 0xac, virtual false, abstract: false, final false
  static inline ::System::ArgumentException* GetArgumentException(::System::ExceptionResource resource);

  /// @brief Method GetArgumentName, addr 0x6082dd0, size 0x234, virtual false, abstract: false, final false
  static inline ::StringW GetArgumentName(::System::ExceptionArgument argument);

  /// @brief Method GetArgumentNullException, addr 0x60836b8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::ArgumentNullException* GetArgumentNullException(::System::ExceptionArgument argument);

  /// @brief Method GetArgumentOutOfRangeException, addr 0x60832ec, size 0x88, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument argument, ::StringW resource);

  /// @brief Method GetArgumentOutOfRangeException, addr 0x6083728, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument argument, ::System::ExceptionResource resource);

  /// @brief Method GetArraySegmentCtorValidationFailedException, addr 0x6083688, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Exception* GetArraySegmentCtorValidationFailedException(::System::Array* array, int32_t offset, int32_t count);

  /// @brief Method GetInvalidOperationException, addr 0x60835fc, size 0x68, virtual false, abstract: false, final false
  static inline ::System::InvalidOperationException* GetInvalidOperationException(::StringW str);

  /// @brief Method GetKeyNotFoundException, addr 0x60834ec, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::KeyNotFoundException* GetKeyNotFoundException(::System::Object* key);

  /// @brief Method GetResourceName, addr 0x6082988, size 0x3ec, virtual false, abstract: false, final false
  static inline ::StringW GetResourceName(::System::ExceptionResource resource);

  /// @brief Method IfNullAndNullsAreIllegalThenThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IfNullAndNullsAreIllegalThenThrow(::System::Object* value, ::System::ExceptionArgument argName);

  /// @brief Method ThrowAddingDuplicateWithKeyArgumentException, addr 0x60834c8, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowAddingDuplicateWithKeyArgumentException(::System::Object* key);

  /// @brief Method ThrowArgumentException, addr 0x6082940, size 0x48, virtual false, abstract: false, final false
  static inline void ThrowArgumentException(::System::ExceptionResource resource);

  /// @brief Method ThrowArgumentException, addr 0x6082d74, size 0x5c, virtual false, abstract: false, final false
  static inline void ThrowArgumentException(::System::ExceptionResource resource, ::System::ExceptionArgument argument);

  /// @brief Method ThrowArgumentException_Argument_InvalidArrayType, addr 0x60833e4, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowArgumentException_Argument_InvalidArrayType();

  /// @brief Method ThrowArgumentException_DestinationTooShort, addr 0x60824cc, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArgumentException_DestinationTooShort();

  /// @brief Method ThrowArgumentNullException, addr 0x6073d68, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArgumentNullException(::System::ExceptionArgument argument);

  /// @brief Method ThrowArgumentOutOfRangeException, addr 0x60825e8, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArgumentOutOfRangeException();

  /// @brief Method ThrowArgumentOutOfRangeException, addr 0x6082664, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument argument);

  /// @brief Method ThrowArgumentOutOfRangeException, addr 0x6083004, size 0x94, virtual false, abstract: false, final false
  static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument argument, ::System::ExceptionResource resource);

  /// @brief Method ThrowArgumentOutOfRange_IndexException, addr 0x6083374, size 0x38, virtual false, abstract: false, final false
  static inline void ThrowArgumentOutOfRange_IndexException();

  /// @brief Method ThrowArraySegmentCtorValidationFailedExceptions, addr 0x6083664, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArraySegmentCtorValidationFailedExceptions(::System::Array* array, int32_t offset, int32_t count);

  /// @brief Method ThrowArrayTypeMismatchException, addr 0x6082450, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArrayTypeMismatchException();

  /// @brief Method ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count, addr 0x60838c8, size 0x2c, virtual false, abstract: false, final false
  static inline void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count();

  /// @brief Method ThrowIndexArgumentOutOfRange_NeedNonNegNumException, addr 0x60833ac, size 0x38, virtual false, abstract: false, final false
  static inline void ThrowIndexArgumentOutOfRange_NeedNonNegNumException();

  /// @brief Method ThrowIndexOutOfRangeException, addr 0x608256c, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowIndexOutOfRangeException();

  /// @brief Method ThrowInvalidOperationException, addr 0x6083098, size 0x48, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException(::System::ExceptionResource resource);

  /// @brief Method ThrowInvalidOperationException_ConcurrentOperationsNotSupported, addr 0x60835cc, size 0x30, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_ConcurrentOperationsNotSupported();

  /// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumEnded, addr 0x6083254, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_InvalidOperation_EnumEnded();

  /// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion, addr 0x6083170, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion();

  /// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumNotStarted, addr 0x6083208, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_InvalidOperation_EnumNotStarted();

  /// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen, addr 0x60831bc, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen();

  /// @brief Method ThrowInvalidOperationException_InvalidOperation_NoValue, addr 0x60832a0, size 0x4c, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_InvalidOperation_NoValue();

  /// @brief Method ThrowInvalidTypeWithPointersNotSupported, addr 0x608356c, size 0x60, virtual false, abstract: false, final false
  static inline void ThrowInvalidTypeWithPointersNotSupported(::System::Type* targetType);

  /// @brief Method ThrowKeyNotFoundException, addr 0x6083564, size 0x8, virtual false, abstract: false, final false
  static inline void ThrowKeyNotFoundException(::System::Object* key);

  /// @brief Method ThrowNotSupportedException, addr 0x608272c, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowNotSupportedException();

  /// @brief Method ThrowNotSupportedException, addr 0x6083128, size 0x48, virtual false, abstract: false, final false
  static inline void ThrowNotSupportedException(::System::ExceptionResource resource);

  /// @brief Method ThrowSerializationException, addr 0x60830e0, size 0x48, virtual false, abstract: false, final false
  static inline void ThrowSerializationException(::System::ExceptionResource resource);

  /// @brief Method ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index, addr 0x608389c, size 0x2c, virtual false, abstract: false, final false
  static inline void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index();

  /// @brief Method ThrowValueArgumentOutOfRange_NeedNonNegNumException, addr 0x60838f4, size 0x2c, virtual false, abstract: false, final false
  static inline void ThrowValueArgumentOutOfRange_NeedNonNegNumException();

  /// @brief Method ThrowWrongKeyTypeArgumentException, addr 0x60827a8, size 0xcc, virtual false, abstract: false, final false
  static inline void ThrowWrongKeyTypeArgumentException(::System::Object* key, ::System::Type* targetType);

  /// @brief Method ThrowWrongValueTypeArgumentException, addr 0x6082874, size 0xcc, virtual false, abstract: false, final false
  static inline void ThrowWrongValueTypeArgumentException(::System::Object* value, ::System::Type* targetType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowHelper(ThrowHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowHelper(ThrowHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2530 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ThrowHelper) == 0x10, "Size mismatch!");

} // namespace System
