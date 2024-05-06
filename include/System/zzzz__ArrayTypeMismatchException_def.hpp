#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(ArrayTypeMismatchException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class ArrayTypeMismatchException;
}
// Write type traits
MARK_REF_PTR_T(::System::ArrayTypeMismatchException);
// Type: System::ArrayTypeMismatchException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::ArrayTypeMismatchException*
class CORDL_TYPE ArrayTypeMismatchException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::ArrayTypeMismatchException* New_ctor();

  static inline ::System::ArrayTypeMismatchException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x289a238, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x289a294, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayTypeMismatchException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayTypeMismatchException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayTypeMismatchException(ArrayTypeMismatchException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayTypeMismatchException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayTypeMismatchException(ArrayTypeMismatchException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArrayTypeMismatchException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ArrayTypeMismatchException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArrayTypeMismatchException*, "System", "ArrayTypeMismatchException");
