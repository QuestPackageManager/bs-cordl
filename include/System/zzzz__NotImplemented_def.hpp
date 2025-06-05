#pragma once
// IWYU pragma private; include "System/NotImplemented.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotImplemented)
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class NotImplemented;
}
// Write type traits
MARK_REF_PTR_T(::System::NotImplemented);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.NotImplemented
class CORDL_TYPE NotImplemented : public ::System::Object {
public:
  // Declarations
  /// @brief Method ByDesignWithMessage, addr 0x4408e9c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* ByDesignWithMessage(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotImplemented();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotImplemented", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotImplemented(NotImplemented&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotImplemented", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotImplemented(NotImplemented const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9183 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NotImplemented, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::NotImplemented);
DEFINE_IL2CPP_ARG_TYPE(::System::NotImplemented*, "System", "NotImplemented");
