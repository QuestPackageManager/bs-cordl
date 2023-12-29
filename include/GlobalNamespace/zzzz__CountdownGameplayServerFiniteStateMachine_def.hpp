#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
CORDL_MODULE_EXPORT(CountdownGameplayServerFiniteStateMachine)
namespace GlobalNamespace {
struct __GameplayServerFiniteStateMachine__InitParams;
}
// Forward declare root types
namespace GlobalNamespace {
class CountdownGameplayServerFiniteStateMachine;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CountdownGameplayServerFiniteStateMachine);
// Type: ::CountdownGameplayServerFiniteStateMachine
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 121, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12691))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12689))
// CS Name: ::CountdownGameplayServerFiniteStateMachine*
class CORDL_TYPE CountdownGameplayServerFiniteStateMachine : public ::GlobalNamespace::GameplayServerFiniteStateMachine {
public:
  // Declarations
  static inline ::GlobalNamespace::CountdownGameplayServerFiniteStateMachine* New_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams);

  /// @brief Method .ctor addr 0xdb6870 size 0x30 virtual false final false
  inline void _ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams);

  // Ctor Parameters [CppParam { name: "", ty: "CountdownGameplayServerFiniteStateMachine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CountdownGameplayServerFiniteStateMachine(CountdownGameplayServerFiniteStateMachine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CountdownGameplayServerFiniteStateMachine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CountdownGameplayServerFiniteStateMachine(CountdownGameplayServerFiniteStateMachine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CountdownGameplayServerFiniteStateMachine();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CountdownGameplayServerFiniteStateMachine, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CountdownGameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CountdownGameplayServerFiniteStateMachine*, "", "CountdownGameplayServerFiniteStateMachine");
