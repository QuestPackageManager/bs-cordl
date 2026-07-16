#pragma once
// IWYU pragma private; include "GlobalNamespace/BoolSignal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
CORDL_MODULE_EXPORT(BoolSignal)
// Forward declare root types
namespace GlobalNamespace {
class BoolSignal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BoolSignal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoolSignal*, "", "BoolSignal");
// Dependencies GenericSignal`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BoolSignal
class CORDL_TYPE BoolSignal : public ::GlobalNamespace::GenericSignal_1<bool> {
public:
  // Declarations
  static inline ::GlobalNamespace::BoolSignal* New_ctor();

  /// @brief Method .ctor, addr 0x585b57c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolSignal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoolSignal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolSignal(BoolSignal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolSignal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolSignal(BoolSignal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21379 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BoolSignal) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
