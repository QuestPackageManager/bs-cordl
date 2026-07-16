#pragma once
// IWYU pragma private; include "GlobalNamespace/ExceptionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ExceptionExtensions)
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
class ExceptionExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ExceptionExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExceptionExtensions*, "", "ExceptionExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ExceptionExtensions
class CORDL_TYPE ExceptionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GenerateFullStackMessage, addr 0x330a284, size 0x1bc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20426 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ExceptionExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
