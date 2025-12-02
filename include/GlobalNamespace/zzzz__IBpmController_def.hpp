#pragma once
// IWYU pragma private; include "GlobalNamespace/IBpmController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IBpmController)
// Forward declare root types
namespace GlobalNamespace {
class IBpmController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBpmController);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBpmController
class CORDL_TYPE IBpmController {
public:
  // Declarations
  __declspec(property(get = get_currentBpm)) float_t currentBpm;

  __declspec(property(get = get_oneBeatDuration)) float_t oneBeatDuration;

  /// @brief Method get_currentBpm, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_currentBpm();

  /// @brief Method get_oneBeatDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_oneBeatDuration();

  // Ctor Parameters [CppParam { name: "", ty: "IBpmController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBpmController(IBpmController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBpmController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBpmController*, "", "IBpmController");
