#pragma once
// IWYU pragma private; include "System/Net/InternalException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(InternalException)
// Forward declare root types
namespace System::Net {
class InternalException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::InternalException);
// Dependencies System.SystemException
namespace System::Net {
// Is value type: false
// CS Name: System.Net.InternalException
class CORDL_TYPE InternalException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Net::InternalException* New_ctor();

  /// @brief Method .ctor, addr 0x61eb070, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalException(InternalException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalException(InternalException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11468 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::InternalException, 0x90>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::InternalException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::InternalException*, "System.Net", "InternalException");
