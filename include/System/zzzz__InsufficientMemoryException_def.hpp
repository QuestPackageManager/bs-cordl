#pragma once
// IWYU pragma private; include "System\InsufficientMemoryException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__OutOfMemoryException_def.hpp"
CORDL_MODULE_EXPORT(InsufficientMemoryException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class InsufficientMemoryException;
}
// Write type traits
MARK_REF_T(::System::InsufficientMemoryException*);
DEFINE_IL2CPP_CLASS(::System::InsufficientMemoryException*, "System", "InsufficientMemoryException");
// Dependencies System.OutOfMemoryException
namespace System {
// Is value type: false
// CS Name: System.InsufficientMemoryException
class CORDL_TYPE InsufficientMemoryException : public ::System::OutOfMemoryException {
public:
  // Declarations
  static inline ::System::InsufficientMemoryException* New_ctor();

  static inline ::System::InsufficientMemoryException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5c6a294, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5c6a310, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InsufficientMemoryException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InsufficientMemoryException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InsufficientMemoryException(InsufficientMemoryException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InsufficientMemoryException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InsufficientMemoryException(InsufficientMemoryException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2534 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::InsufficientMemoryException) == 0x90, "Size mismatch!");

} // namespace System
