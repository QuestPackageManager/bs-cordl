#pragma once
// IWYU pragma private; include "System/FormatException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FormatException)
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
class FormatException;
}
// Write type traits
MARK_REF_PTR_T(::System::FormatException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.FormatException
class CORDL_TYPE FormatException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::FormatException* New_ctor();

  static inline ::System::FormatException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::FormatException* New_ctor(::StringW message);

  static inline ::System::FormatException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x3dd4dd0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dd4e74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dd4e2c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3dd4e50, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormatException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormatException(FormatException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormatException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormatException(FormatException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2384 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::FormatException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::FormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::FormatException*, "System", "FormatException");
