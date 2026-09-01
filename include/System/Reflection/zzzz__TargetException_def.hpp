#pragma once
// IWYU pragma private; include "System\Reflection\TargetException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TargetException)
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
class TargetException;
}
// Write type traits
MARK_REF_T(::System::Reflection::TargetException*);
DEFINE_IL2CPP_CLASS(::System::Reflection::TargetException*, "System.Reflection", "TargetException");
// Dependencies System.ApplicationException
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.TargetException
class CORDL_TYPE TargetException : public ::System::ApplicationException {
public:
  // Declarations
  static inline ::System::Reflection::TargetException* New_ctor();

  static inline ::System::Reflection::TargetException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Reflection::TargetException* New_ctor(::StringW message);

  static inline ::System::Reflection::TargetException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x5b83d60, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5b83dd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5b83d8c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5b83db4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TargetException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TargetException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TargetException(TargetException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TargetException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TargetException(TargetException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3522 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Reflection::TargetException) == 0x90, "Size mismatch!");

} // namespace System::Reflection
