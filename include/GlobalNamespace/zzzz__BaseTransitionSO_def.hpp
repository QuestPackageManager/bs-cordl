#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseTransitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BaseTransitionSO)
namespace GlobalNamespace {
class TransitionTimingSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseTransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseTransitionSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BaseTransitionSO
class CORDL_TYPE BaseTransitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _transitionTiming, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__transitionTiming, put = __cordl_internal_set__transitionTiming)) ::UnityW<::GlobalNamespace::TransitionTimingSO> _transitionTiming;

  /// @brief Method GetTransitionTiming, addr 0x44d80f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::TransitionTimingSO> GetTransitionTiming();

  static inline ::GlobalNamespace::BaseTransitionSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::TransitionTimingSO> const& __cordl_internal_get__transitionTiming() const;

  constexpr ::UnityW<::GlobalNamespace::TransitionTimingSO>& __cordl_internal_get__transitionTiming();

  constexpr void __cordl_internal_set__transitionTiming(::UnityW<::GlobalNamespace::TransitionTimingSO> value);

  /// @brief Method .ctor, addr 0x44d80f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTransitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTransitionSO(BaseTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTransitionSO(BaseTransitionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18210 };

  /// @brief Field _transitionTiming, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TransitionTimingSO> ____transitionTiming;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseTransitionSO, ____transitionTiming) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseTransitionSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseTransitionSO*, "", "BaseTransitionSO");
