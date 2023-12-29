#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(ArrayTypeMismatchException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2479))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2350))
// CS Name: ::System::ArrayTypeMismatchException*
class CORDL_TYPE ArrayTypeMismatchException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::ArrayTypeMismatchException* New_ctor();

  /// @brief Method .ctor addr 0x23c7e30 size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::ArrayTypeMismatchException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x23c7e8c size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "ArrayTypeMismatchException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayTypeMismatchException(ArrayTypeMismatchException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayTypeMismatchException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayTypeMismatchException(ArrayTypeMismatchException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayTypeMismatchException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArrayTypeMismatchException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ArrayTypeMismatchException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArrayTypeMismatchException*, "System", "ArrayTypeMismatchException");
