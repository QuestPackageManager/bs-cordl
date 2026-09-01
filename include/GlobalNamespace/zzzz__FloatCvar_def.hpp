#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatCvar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Cvar_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatCvar)
// Forward declare root types
namespace GlobalNamespace {
class FloatCvar;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FloatCvar*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloatCvar*, "", "FloatCvar");
// Dependencies Cvar`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatCvar
class CORDL_TYPE FloatCvar : public ::GlobalNamespace::Cvar_1<float_t> {
public:
  // Declarations
  /// @brief Method Init, addr 0x3327da8, size 0x6c, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::GlobalNamespace::FloatCvar* New_ctor(::StringW name, float_t initialValue);

  /// @brief Method .ctor, addr 0x3327e14, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, float_t initialValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatCvar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatCvar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatCvar(FloatCvar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatCvar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatCvar(FloatCvar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20772 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FloatCvar) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
