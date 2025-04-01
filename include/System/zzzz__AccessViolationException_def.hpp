#pragma once
// IWYU pragma private; include "System/AccessViolationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(AccessViolationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class AccessViolationException;
}
// Write type traits
MARK_REF_PTR_T(::System::AccessViolationException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.AccessViolationException
class CORDL_TYPE AccessViolationException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::AccessViolationException* New_ctor();

  static inline ::System::AccessViolationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d4f7dc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d4f838, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccessViolationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccessViolationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccessViolationException(AccessViolationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccessViolationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccessViolationException(AccessViolationException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2322 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AccessViolationException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::AccessViolationException);
DEFINE_IL2CPP_ARG_TYPE(::System::AccessViolationException*, "System", "AccessViolationException");
