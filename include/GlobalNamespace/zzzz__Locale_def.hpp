#pragma once
// IWYU pragma private; include "GlobalNamespace\Locale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Locale)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class Locale;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Locale*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Locale*, "", "Locale");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Locale
class CORDL_TYPE Locale : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetText, addr 0x5aad204, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetText(::StringW fmt, ::ArrayW<::System::Object*> args);

  /// @brief Method GetText, addr 0x5aad200, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetText(::StringW msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Locale();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Locale", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Locale(Locale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Locale", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Locale(Locale const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Locale) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
