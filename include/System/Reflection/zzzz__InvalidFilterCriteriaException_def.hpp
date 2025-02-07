#pragma once
// IWYU pragma private; include "System/Reflection/InvalidFilterCriteriaException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidFilterCriteriaException)
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
namespace System::Reflection {
class InvalidFilterCriteriaException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::InvalidFilterCriteriaException);
// Dependencies System.ApplicationException
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.InvalidFilterCriteriaException
class CORDL_TYPE InvalidFilterCriteriaException : public ::System::ApplicationException {
public:
  // Declarations
  static inline ::System::Reflection::InvalidFilterCriteriaException* New_ctor();

  static inline ::System::Reflection::InvalidFilterCriteriaException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Reflection::InvalidFilterCriteriaException* New_ctor(::StringW message);

  static inline ::System::Reflection::InvalidFilterCriteriaException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x3d280a8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d28154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d28108, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3d28130, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidFilterCriteriaException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidFilterCriteriaException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidFilterCriteriaException(InvalidFilterCriteriaException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidFilterCriteriaException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidFilterCriteriaException(InvalidFilterCriteriaException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3474 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::InvalidFilterCriteriaException, 0x90>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::InvalidFilterCriteriaException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::InvalidFilterCriteriaException*, "System.Reflection", "InvalidFilterCriteriaException");
