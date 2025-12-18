#pragma once
// IWYU pragma private; include "System/Runtime/FatalException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FatalException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime {
class FatalException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::FatalException);
// Dependencies System.SystemException
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.FatalException
class CORDL_TYPE FatalException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Runtime::FatalException* New_ctor();

  static inline ::System::Runtime::FatalException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::FatalException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x5fd0e30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5fd0e50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5fd0e40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FatalException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FatalException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FatalException(FatalException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FatalException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FatalException(FatalException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21107 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::FatalException, 0x90>, "Size mismatch!");

} // namespace System::Runtime
NEED_NO_BOX(::System::Runtime::FatalException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::FatalException*, "System.Runtime", "FatalException");
