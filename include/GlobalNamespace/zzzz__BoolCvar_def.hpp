#pragma once
// IWYU pragma private; include "GlobalNamespace\BoolCvar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Cvar_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BoolCvar)
// Forward declare root types
namespace GlobalNamespace {
class BoolCvar;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BoolCvar*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoolCvar*, "", "BoolCvar");
// Dependencies Cvar`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BoolCvar
class CORDL_TYPE BoolCvar : public ::GlobalNamespace::Cvar_1<bool> {
public:
  // Declarations
  /// @brief Method Init, addr 0x3327cb0, size 0x6c, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::GlobalNamespace::BoolCvar* New_ctor(::StringW name, bool initialValue);

  /// @brief Method .ctor, addr 0x3327d1c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool initialValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolCvar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoolCvar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolCvar(BoolCvar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolCvar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolCvar(BoolCvar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20771 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BoolCvar) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
