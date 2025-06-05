#pragma once
// IWYU pragma private; include "System/Reflection/AmbiguousMatchException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmbiguousMatchException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Reflection {
class AmbiguousMatchException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AmbiguousMatchException);
// Dependencies System.SystemException
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.AmbiguousMatchException
class CORDL_TYPE AmbiguousMatchException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Reflection::AmbiguousMatchException* New_ctor();

  static inline ::System::Reflection::AmbiguousMatchException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Reflection::AmbiguousMatchException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3d21ef8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d21f78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d21f54, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmbiguousMatchException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmbiguousMatchException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmbiguousMatchException(AmbiguousMatchException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmbiguousMatchException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmbiguousMatchException(AmbiguousMatchException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3442 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AmbiguousMatchException, 0x90>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AmbiguousMatchException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AmbiguousMatchException*, "System.Reflection", "AmbiguousMatchException");
