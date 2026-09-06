#pragma once
// IWYU pragma private; include "GlobalNamespace/IBpmController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IBpmController)
// Forward declare root types
namespace GlobalNamespace {
class IBpmController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IBpmController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IBpmController*, "", "IBpmController");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBpmController
class CORDL_TYPE IBpmController {
public:
  // Declarations
  __declspec(property(get = get_currentBpm)) float_t currentBpm;

  __declspec(property(get = get_oneBeatDuration)) float_t oneBeatDuration;

  /// @brief Method get_currentBpm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_currentBpm();

  /// @brief Method get_oneBeatDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_oneBeatDuration();

  // Ctor Parameters [CppParam { name: "", ty: "IBpmController", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBpmController(IBpmControllerconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5746 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
