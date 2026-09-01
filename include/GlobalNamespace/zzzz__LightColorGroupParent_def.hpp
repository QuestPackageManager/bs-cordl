#pragma once
// IWYU pragma private; include "GlobalNamespace\LightColorGroupParent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightColorGroupParent)
namespace GlobalNamespace {
class IEditTimeValidated;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorGroupParent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightColorGroupParent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightColorGroupParent*, "", "LightColorGroupParent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorGroupParent
class CORDL_TYPE LightColorGroupParent : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
  constexpr operator ::GlobalNamespace::IEditTimeValidated*() noexcept;

  static inline ::GlobalNamespace::LightColorGroupParent* New_ctor();

  /// @brief Method .ctor, addr 0x5999f38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IEditTimeValidated"
  constexpr ::GlobalNamespace::IEditTimeValidated* i___GlobalNamespace__IEditTimeValidated() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorGroupParent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroupParent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorGroupParent(LightColorGroupParent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroupParent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorGroupParent(LightColorGroupParent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5895 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LightColorGroupParent) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
