#pragma once
// IWYU pragma private; include "Zenject/NoTransitionInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionInstaller)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class NoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::NoTransitionInstaller);
// Dependencies UnityEngine.MonoBehaviour
namespace Zenject {
// Is value type: false
// CS Name: Zenject.NoTransitionInstaller
class CORDL_TYPE NoTransitionInstaller : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x4b3ae6c, size 0x4, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::Zenject::NoTransitionInstaller* New_ctor();

  /// @brief Method PostInstall, addr 0x4b3ae70, size 0x4, virtual true, abstract: false, final false
  inline void PostInstall(::Zenject::DiContainer* container);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b3ae7c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b3ae74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionInstaller(NoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionInstaller(NoTransitionInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12518 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::NoTransitionInstaller, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::NoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NoTransitionInstaller*, "Zenject", "NoTransitionInstaller");
