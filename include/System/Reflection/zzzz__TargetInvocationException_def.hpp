#pragma once
// IWYU pragma private; include "System/Reflection/TargetInvocationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TargetInvocationException)
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
class TargetInvocationException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::TargetInvocationException);
// Dependencies System.ApplicationException
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.TargetInvocationException
class CORDL_TYPE TargetInvocationException : public ::System::ApplicationException {
public:
  // Declarations
  static inline ::System::Reflection::TargetInvocationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Reflection::TargetInvocationException* New_ctor(::System::Exception* inner);

  static inline ::System::Reflection::TargetInvocationException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x3d23974, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d238e4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* inner);

  /// @brief Method .ctor, addr 0x3d23950, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TargetInvocationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TargetInvocationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TargetInvocationException(TargetInvocationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TargetInvocationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TargetInvocationException(TargetInvocationException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3500 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::TargetInvocationException, 0x90>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::TargetInvocationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TargetInvocationException*, "System.Reflection", "TargetInvocationException");
