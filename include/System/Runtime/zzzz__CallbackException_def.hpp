#pragma once
// IWYU pragma private; include "System/Runtime/CallbackException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/zzzz__FatalException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CallbackException)
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
class CallbackException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CallbackException);
// Dependencies System.Runtime.FatalException
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.CallbackException
class CORDL_TYPE CallbackException : public ::System::Runtime::FatalException {
public:
  // Declarations
  static inline ::System::Runtime::CallbackException* New_ctor();

  static inline ::System::Runtime::CallbackException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::CallbackException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x5f6929c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5f692bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5f692ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallbackException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallbackException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallbackException(CallbackException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallbackException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallbackException(CallbackException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21078 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CallbackException, 0x90>, "Size mismatch!");

} // namespace System::Runtime
NEED_NO_BOX(::System::Runtime::CallbackException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CallbackException*, "System.Runtime", "CallbackException");
