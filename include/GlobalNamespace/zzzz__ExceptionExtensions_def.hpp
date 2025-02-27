#pragma once
// IWYU pragma private; include "GlobalNamespace/ExceptionExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExceptionExtensions)
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
class ExceptionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExceptionExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ExceptionExtensions
class CORDL_TYPE ExceptionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GenerateFullStackMessage, addr 0x22a2e84, size 0x1c0, virtual false, abstract: false, final false
  static inline ::StringW GenerateFullStackMessage(::System::Exception* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionExtensions(ExceptionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionExtensions(ExceptionExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16919 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExceptionExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExceptionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExceptionExtensions*, "", "ExceptionExtensions");
