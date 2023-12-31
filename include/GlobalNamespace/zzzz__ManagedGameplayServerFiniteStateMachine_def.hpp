#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
CORDL_MODULE_EXPORT(ManagedGameplayServerFiniteStateMachine)
namespace GlobalNamespace {
struct __GameplayServerFiniteStateMachine__InitParams;
}
// Forward declare root types
namespace GlobalNamespace {
class ManagedGameplayServerFiniteStateMachine;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ManagedGameplayServerFiniteStateMachine);
// Type: ::ManagedGameplayServerFiniteStateMachine
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12762))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12766))
// CS Name: ::ManagedGameplayServerFiniteStateMachine*
class CORDL_TYPE ManagedGameplayServerFiniteStateMachine : public ::GlobalNamespace::GameplayServerFiniteStateMachine {
public:
  // Declarations
  static inline ::GlobalNamespace::ManagedGameplayServerFiniteStateMachine* New_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams);

  /// @brief Method .ctor, addr 0xe3c1cc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams);

  // Ctor Parameters [CppParam { name: "", ty: "ManagedGameplayServerFiniteStateMachine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManagedGameplayServerFiniteStateMachine(ManagedGameplayServerFiniteStateMachine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManagedGameplayServerFiniteStateMachine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManagedGameplayServerFiniteStateMachine(ManagedGameplayServerFiniteStateMachine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManagedGameplayServerFiniteStateMachine();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ManagedGameplayServerFiniteStateMachine, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ManagedGameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ManagedGameplayServerFiniteStateMachine*, "", "ManagedGameplayServerFiniteStateMachine");
