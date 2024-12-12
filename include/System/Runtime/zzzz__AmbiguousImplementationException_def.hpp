#pragma once
// IWYU pragma private; include "System/Runtime/AmbiguousImplementationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmbiguousImplementationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime {
class AmbiguousImplementationException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::AmbiguousImplementationException);
// Dependencies System.Exception
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.AmbiguousImplementationException
class CORDL_TYPE AmbiguousImplementationException : public ::System::Exception {
public:
  // Declarations
  static inline ::System::Runtime::AmbiguousImplementationException* New_ctor();

  static inline ::System::Runtime::AmbiguousImplementationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::AmbiguousImplementationException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3cc563c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cc5734, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3cc56bc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmbiguousImplementationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmbiguousImplementationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmbiguousImplementationException(AmbiguousImplementationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmbiguousImplementationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmbiguousImplementationException(AmbiguousImplementationException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3049 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::AmbiguousImplementationException, 0x90>, "Size mismatch!");

} // namespace System::Runtime
NEED_NO_BOX(::System::Runtime::AmbiguousImplementationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::AmbiguousImplementationException*, "System.Runtime", "AmbiguousImplementationException");
