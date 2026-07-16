#pragma once
// IWYU pragma private; include "System/UnauthorizedAccessException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnauthorizedAccessException)
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
class UnauthorizedAccessException;
}
// Write type traits
MARK_REF_T(::System::UnauthorizedAccessException*);
DEFINE_IL2CPP_CLASS(::System::UnauthorizedAccessException*, "System", "UnauthorizedAccessException");
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.UnauthorizedAccessException
class CORDL_TYPE UnauthorizedAccessException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::UnauthorizedAccessException* New_ctor();

  static inline ::System::UnauthorizedAccessException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::UnauthorizedAccessException* New_ctor(::StringW message);

  static inline ::System::UnauthorizedAccessException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x5c645a0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5c6463c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5c645fc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5c6461c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnauthorizedAccessException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnauthorizedAccessException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnauthorizedAccessException(UnauthorizedAccessException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnauthorizedAccessException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnauthorizedAccessException(UnauthorizedAccessException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2506 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::UnauthorizedAccessException) == 0x90, "Size mismatch!");

} // namespace System
