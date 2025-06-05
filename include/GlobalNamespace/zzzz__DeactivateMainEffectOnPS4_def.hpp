#pragma once
// IWYU pragma private; include "GlobalNamespace/DeactivateMainEffectOnPS4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DeactivateMainEffectOnPS4)
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class MainEffectSO;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateMainEffectOnPS4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeactivateMainEffectOnPS4);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeactivateMainEffectOnPS4
class CORDL_TYPE DeactivateMainEffectOnPS4 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainEffectContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectContainer, put = __cordl_internal_set__mainEffectContainer)) ::UnityW<::GlobalNamespace::MainEffectContainerSO> _mainEffectContainer;

  /// @brief Field _noMainEffect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__noMainEffect, put = __cordl_internal_set__noMainEffect)) ::UnityW<::GlobalNamespace::MainEffectSO> _noMainEffect;

  static inline ::GlobalNamespace::DeactivateMainEffectOnPS4* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get__mainEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get__mainEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& __cordl_internal_get__noMainEffect() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& __cordl_internal_get__noMainEffect();

  constexpr void __cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  constexpr void __cordl_internal_set__noMainEffect(::UnityW<::GlobalNamespace::MainEffectSO> value);

  /// @brief Method .ctor, addr 0x4082860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeactivateMainEffectOnPS4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeactivateMainEffectOnPS4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeactivateMainEffectOnPS4(DeactivateMainEffectOnPS4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateMainEffectOnPS4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeactivateMainEffectOnPS4(DeactivateMainEffectOnPS4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17874 };

  /// @brief Field _noMainEffect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectSO> ____noMainEffect;

  /// @brief Field _mainEffectContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ____mainEffectContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeactivateMainEffectOnPS4, ____noMainEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateMainEffectOnPS4, ____mainEffectContainer) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeactivateMainEffectOnPS4, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeactivateMainEffectOnPS4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateMainEffectOnPS4*, "", "DeactivateMainEffectOnPS4");
