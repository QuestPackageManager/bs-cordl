#pragma once
// IWYU pragma private; include "Zenject/NoTransitionContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionContext)
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class NoTransitionInstaller;
}
// Forward declare root types
namespace Zenject {
class NoTransitionContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::NoTransitionContext);
// Dependencies UnityEngine.MonoBehaviour
namespace Zenject {
// Is value type: false
// CS Name: Zenject.NoTransitionContext
class CORDL_TYPE NoTransitionContext : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _noScenesTransitionInstaller, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__noScenesTransitionInstaller, put = __cordl_internal_set__noScenesTransitionInstaller)) ::UnityW<::Zenject::NoTransitionInstaller>
      _noScenesTransitionInstaller;

  __declspec(property(get = get_installMethod)) ::System::Action_1<::Zenject::DiContainer*>* installMethod;

  __declspec(property(get = get_postInstallMethod)) ::System::Action_1<::Zenject::DiContainer*>* postInstallMethod;

  /// @brief Method Awake, addr 0x6c4ecb4, size 0x7c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Zenject::NoTransitionContext* New_ctor();

  constexpr ::UnityW<::Zenject::NoTransitionInstaller> const& __cordl_internal_get__noScenesTransitionInstaller() const;

  constexpr ::UnityW<::Zenject::NoTransitionInstaller>& __cordl_internal_get__noScenesTransitionInstaller();

  constexpr void __cordl_internal_set__noScenesTransitionInstaller(::UnityW<::Zenject::NoTransitionInstaller> value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6c4ed34, size 0x148, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6c4ed30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_installMethod, addr 0x6c4ebcc, size 0x74, virtual false, abstract: false, final false
  inline ::System::Action_1<::Zenject::DiContainer*>* get_installMethod();

  /// @brief Method get_postInstallMethod, addr 0x6c4ec40, size 0x74, virtual false, abstract: false, final false
  inline ::System::Action_1<::Zenject::DiContainer*>* get_postInstallMethod();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionContext(NoTransitionContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionContext(NoTransitionContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14498 };

  /// @brief Field _noScenesTransitionInstaller, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Zenject::NoTransitionInstaller> ____noScenesTransitionInstaller;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::NoTransitionContext, ____noScenesTransitionInstaller) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::NoTransitionContext, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::NoTransitionContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NoTransitionContext*, "Zenject", "NoTransitionContext");
