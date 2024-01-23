#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::ThrowHelper);
// Type: System::ThrowHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2523))
// CS Name: ::System::ThrowHelper*
class CORDL_TYPE ThrowHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ThrowArgumentNullException, addr 0x25c0a94, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArgumentNullException(::System::ExceptionArgument argument);

  /// @brief Method CreateArgumentNullException, addr 0x25cfeb8, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateArgumentNullException(::System::ExceptionArgument argument);

  /// @brief Method ThrowArrayTypeMismatchException, addr 0x25cff64, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArrayTypeMismatchException();

  /// @brief Method CreateArrayTypeMismatchException, addr 0x25cff88, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateArrayTypeMismatchException();

  /// @brief Method ThrowArgumentException_DestinationTooShort, addr 0x25cffe4, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArgumentException_DestinationTooShort();

  /// @brief Method CreateArgumentException_DestinationTooShort, addr 0x25d0008, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateArgumentException_DestinationTooShort();

  /// @brief Method ThrowIndexOutOfRangeException, addr 0x25d007c, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowIndexOutOfRangeException();

  /// @brief Method CreateIndexOutOfRangeException, addr 0x25d00a0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateIndexOutOfRangeException();

  /// @brief Method ThrowArgumentOutOfRangeException, addr 0x25d00fc, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArgumentOutOfRangeException();

  /// @brief Method CreateArgumentOutOfRangeException, addr 0x25d0120, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateArgumentOutOfRangeException();

  /// @brief Method ThrowArgumentOutOfRangeException, addr 0x25d017c, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument argument);

  /// @brief Method CreateArgumentOutOfRangeException, addr 0x25d01a0, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateArgumentOutOfRangeException(::System::ExceptionArgument argument);

  /// @brief Method ThrowNotSupportedException, addr 0x25d024c, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowNotSupportedException();

  /// @brief Method CreateThrowNotSupportedException, addr 0x25d0270, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateThrowNotSupportedException();

  /// @brief Method ThrowWrongKeyTypeArgumentException, addr 0x25d02cc, size 0xd8, virtual false, abstract: false, final false
  static inline void ThrowWrongKeyTypeArgumentException(::System::Object* key, ::System::Type* targetType);

  /// @brief Method ThrowWrongValueTypeArgumentException, addr 0x25d03a4, size 0xd8, virtual false, abstract: false, final false
  static inline void ThrowWrongValueTypeArgumentException(::System::Object* value, ::System::Type* targetType);

  /// @brief Method ThrowArgumentException, addr 0x25d047c, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowArgumentException(::System::ExceptionResource resource);

  /// @brief Method ThrowArgumentException, addr 0x25d0760, size 0x6c, virtual false, abstract: false, final false
  static inline void ThrowArgumentException(::System::ExceptionResource resource, ::System::ExceptionArgument argument);

  /// @brief Method ThrowArgumentOutOfRangeException, addr 0x25d0950, size 0xa4, virtual false, abstract: false, final false
  static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument argument, ::System::ExceptionResource resource);

  /// @brief Method ThrowInvalidOperationException, addr 0x25d09f4, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException(::System::ExceptionResource resource);

  /// @brief Method ThrowSerializationException, addr 0x25d0a4c, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowSerializationException(::System::ExceptionResource resource);

  /// @brief Method ThrowNotSupportedException, addr 0x25d0aa4, size 0x58, virtual false, abstract: false, final false
  static inline void ThrowNotSupportedException(::System::ExceptionResource resource);

  /// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion, addr 0x25d0afc, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion();

  /// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen, addr 0x25d0b4c, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen();

  /// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumNotStarted, addr 0x25d0b9c, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_InvalidOperation_EnumNotStarted();

  /// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumEnded, addr 0x25d0bec, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_InvalidOperation_EnumEnded();

  /// @brief Method ThrowInvalidOperationException_InvalidOperation_NoValue, addr 0x25d0c3c, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_InvalidOperation_NoValue();

  /// @brief Method GetArgumentOutOfRangeException, addr 0x25d0c8c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument argument, ::StringW resource);

  /// @brief Method ThrowArgumentOutOfRange_IndexException, addr 0x25d0d10, size 0x38, virtual false, abstract: false, final false
  static inline void ThrowArgumentOutOfRange_IndexException();

  /// @brief Method ThrowIndexArgumentOutOfRange_NeedNonNegNumException, addr 0x25d0d48, size 0x38, virtual false, abstract: false, final false
  static inline void ThrowIndexArgumentOutOfRange_NeedNonNegNumException();

  /// @brief Method ThrowArgumentException_Argument_InvalidArrayType, addr 0x25d0d80, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowArgumentException_Argument_InvalidArrayType();

  /// @brief Method GetAddingDuplicateWithKeyArgumentException, addr 0x25d0dd0, size 0x98, virtual false, abstract: false, final false
  static inline ::System::ArgumentException* GetAddingDuplicateWithKeyArgumentException(::System::Object* key);

  /// @brief Method ThrowAddingDuplicateWithKeyArgumentException, addr 0x25d0e68, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowAddingDuplicateWithKeyArgumentException(::System::Object* key);

  /// @brief Method GetKeyNotFoundException, addr 0x25d0e8c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::KeyNotFoundException* GetKeyNotFoundException(::System::Object* key);

  /// @brief Method ThrowKeyNotFoundException, addr 0x25d0f0c, size 0x8, virtual false, abstract: false, final false
  static inline void ThrowKeyNotFoundException(::System::Object* key);

  /// @brief Method ThrowInvalidTypeWithPointersNotSupported, addr 0x25d0f14, size 0x68, virtual false, abstract: false, final false
  static inline void ThrowInvalidTypeWithPointersNotSupported(::System::Type* targetType);

  /// @brief Method ThrowInvalidOperationException_ConcurrentOperationsNotSupported, addr 0x25d0f7c, size 0x30, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException_ConcurrentOperationsNotSupported();

  /// @brief Method GetInvalidOperationException, addr 0x25d0fac, size 0x64, virtual false, abstract: false, final false
  static inline ::System::InvalidOperationException* GetInvalidOperationException(::StringW str);

  /// @brief Method ThrowArraySegmentCtorValidationFailedExceptions, addr 0x25d1010, size 0x24, virtual false, abstract: false, final false
  static inline void ThrowArraySegmentCtorValidationFailedExceptions(::System::Array* array, int32_t offset, int32_t count);

  /// @brief Method GetArraySegmentCtorValidationFailedException, addr 0x25d1034, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Exception* GetArraySegmentCtorValidationFailedException(::System::Array* array, int32_t offset, int32_t count);

  /// @brief Method GetArgumentException, addr 0x25d1198, size 0xac, virtual false, abstract: false, final false
  static inline ::System::ArgumentException* GetArgumentException(::System::ExceptionResource resource);

  /// @brief Method GetArgumentNullException, addr 0x25d1064, size 0x74, virtual false, abstract: false, final false
  static inline ::System::ArgumentNullException* GetArgumentNullException(::System::ExceptionArgument argument);

  /// @brief Method IfNullAndNullsAreIllegalThenThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IfNullAndNullsAreIllegalThenThrow(::System::Object* value, ::System::ExceptionArgument argName);

  /// @brief Method GetArgumentName, addr 0x25d07cc, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW GetArgumentName(::System::ExceptionArgument argument);

  /// @brief Method GetArgumentOutOfRangeException, addr 0x25d10d8, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument argument, ::System::ExceptionResource resource);

  /// @brief Method ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index, addr 0x25d1244, size 0x2c, virtual false, abstract: false, final false
  static inline void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index();

  /// @brief Method ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count, addr 0x25d1270, size 0x2c, virtual false, abstract: false, final false
  static inline void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count();

  /// @brief Method GetResourceName, addr 0x25d04d4, size 0x28c, virtual false, abstract: false, final false
  static inline ::StringW GetResourceName(::System::ExceptionResource resource);

  // Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowHelper(ThrowHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowHelper(ThrowHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ThrowHelper, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ThrowHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::ThrowHelper*, "System", "ThrowHelper");
