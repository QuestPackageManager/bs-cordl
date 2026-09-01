#pragma once
// IWYU pragma private; include "GlobalNamespace\IntCvar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Cvar_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntCvar)
// Forward declare root types
namespace GlobalNamespace {
class IntCvar;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IntCvar*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IntCvar*, "", "IntCvar");
// Dependencies Cvar`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: IntCvar
class CORDL_TYPE IntCvar : public ::GlobalNamespace::Cvar_1<int32_t> {
public:
  // Declarations
  /// @brief Method Init, addr 0x3327ea8, size 0x6c, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::GlobalNamespace::IntCvar* New_ctor(::StringW name, int32_t initialValue);

  /// @brief Method .ctor, addr 0x3327f14, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, int32_t initialValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntCvar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntCvar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntCvar(IntCvar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntCvar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntCvar(IntCvar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::IntCvar) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
