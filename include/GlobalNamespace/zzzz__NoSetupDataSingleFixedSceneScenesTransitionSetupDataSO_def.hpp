#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO)
// Forward declare root types
namespace GlobalNamespace {
class NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO);
// Type: ::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*
class CORDL_TYPE NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Method Init, addr 0xf7ee20, size 0x8, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0xf7ee18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO(NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO(NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO*, "", "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO");
