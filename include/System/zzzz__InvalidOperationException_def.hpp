#pragma once
// IWYU pragma private; include "System/InvalidOperationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidOperationException)
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
namespace System {
class InvalidOperationException;
}
// Write type traits
MARK_REF_PTR_T(::System::InvalidOperationException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.InvalidOperationException
class CORDL_TYPE InvalidOperationException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::InvalidOperationException* New_ctor();

  static inline ::System::InvalidOperationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::InvalidOperationException* New_ctor(::StringW message);

  static inline ::System::InvalidOperationException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x3debe04, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3debea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3debe60, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3debe84, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidOperationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidOperationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidOperationException(InvalidOperationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidOperationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidOperationException(InvalidOperationException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2430 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::InvalidOperationException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::InvalidOperationException);
DEFINE_IL2CPP_ARG_TYPE(::System::InvalidOperationException*, "System", "InvalidOperationException");
