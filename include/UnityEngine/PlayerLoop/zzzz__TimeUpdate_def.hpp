#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/TimeUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TimeUpdate)
namespace UnityEngine::PlayerLoop {
struct __TimeUpdate__WaitForLastPresentationAndUpdateTime;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct TimeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __TimeUpdate__WaitForLastPresentationAndUpdateTime;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::TimeUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__TimeUpdate__WaitForLastPresentationAndUpdateTime);
// Type: ::WaitForLastPresentationAndUpdateTime
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::TimeUpdate::WaitForLastPresentationAndUpdateTime
#pragma pack(push, 0)
struct CORDL_TYPE __TimeUpdate__WaitForLastPresentationAndUpdateTime {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeUpdate__WaitForLastPresentationAndUpdateTime();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10980 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__TimeUpdate__WaitForLastPresentationAndUpdateTime, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::TimeUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::UnityEngine.PlayerLoop::TimeUpdate
#pragma pack(push, 0)
struct CORDL_TYPE TimeUpdate {
public:
  // Declarations
  using WaitForLastPresentationAndUpdateTime = ::UnityEngine::PlayerLoop::__TimeUpdate__WaitForLastPresentationAndUpdateTime;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10981 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::TimeUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::TimeUpdate, "UnityEngine.PlayerLoop", "TimeUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__TimeUpdate__WaitForLastPresentationAndUpdateTime, "UnityEngine.PlayerLoop", "TimeUpdate/WaitForLastPresentationAndUpdateTime");
