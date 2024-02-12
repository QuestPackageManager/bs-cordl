#pragma once
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
// Type: Zenject::NoTransitionInstaller
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10318))
// CS Name: ::Zenject::NoTransitionInstaller*
class CORDL_TYPE NoTransitionInstaller : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x2f20df8, size 0x4, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  /// @brief Method PostInstall, addr 0x2f20dfc, size 0x4, virtual true, abstract: false, final false
  inline void PostInstall(::Zenject::DiContainer* container);

  static inline ::Zenject::NoTransitionInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x2f20e00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f20e08, size 0x178, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionInstaller(NoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionInstaller(NoTransitionInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionInstaller();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::NoTransitionInstaller, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::NoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NoTransitionInstaller*, "Zenject", "NoTransitionInstaller");
