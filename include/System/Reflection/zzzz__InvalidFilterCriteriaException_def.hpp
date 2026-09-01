#pragma once
// IWYU pragma private; include "System\Reflection\InvalidFilterCriteriaException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Reflection::InvalidFilterCriteriaException*);
DEFINE_IL2CPP_CLASS(::System::Reflection::InvalidFilterCriteriaException*, "System.Reflection", "InvalidFilterCriteriaException");
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

  /// @brief Method .ctor, addr 0x5b7edcc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5b7ee7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5b7ee30, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5b7ee58, size 0x24, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3495 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Reflection::InvalidFilterCriteriaException) == 0x90, "Size mismatch!");

} // namespace System::Reflection
