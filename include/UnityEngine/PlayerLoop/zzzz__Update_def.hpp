#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/Update.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Update)
namespace UnityEngine::PlayerLoop {
struct Update_DirectorUpdate;
}
namespace UnityEngine::PlayerLoop {
struct Update_ScriptRunBehaviourUpdate;
}
namespace UnityEngine::PlayerLoop {
struct Update_ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct Update_ScriptRunDelayedTasks;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct Update;
}
namespace UnityEngine::PlayerLoop {
struct Update_DirectorUpdate;
}
namespace UnityEngine::PlayerLoop {
struct Update_ScriptRunBehaviourUpdate;
}
namespace UnityEngine::PlayerLoop {
struct Update_ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct Update_ScriptRunDelayedTasks;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::Update);
MARK_VAL_T(::UnityEngine::PlayerLoop::Update_DirectorUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::Update_ScriptRunBehaviourUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::Update_ScriptRunDelayedDynamicFrameRate);
MARK_VAL_T(::UnityEngine::PlayerLoop::Update_ScriptRunDelayedTasks);
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate
#pragma pack(push, 0)
struct CORDL_TYPE Update_ScriptRunBehaviourUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Update_ScriptRunBehaviourUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10542 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::Update_ScriptRunBehaviourUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.Update/DirectorUpdate
#pragma pack(push, 0)
struct CORDL_TYPE Update_DirectorUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Update_DirectorUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10543 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::Update_DirectorUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate
#pragma pack(push, 0)
struct CORDL_TYPE Update_ScriptRunDelayedDynamicFrameRate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Update_ScriptRunDelayedDynamicFrameRate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10544 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::Update_ScriptRunDelayedDynamicFrameRate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks
#pragma pack(push, 0)
struct CORDL_TYPE Update_ScriptRunDelayedTasks {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Update_ScriptRunDelayedTasks();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10545 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::Update_ScriptRunDelayedTasks, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.Update
#pragma pack(push, 0)
struct CORDL_TYPE Update {
public:
  // Declarations
  using DirectorUpdate = ::UnityEngine::PlayerLoop::Update_DirectorUpdate;

  using ScriptRunBehaviourUpdate = ::UnityEngine::PlayerLoop::Update_ScriptRunBehaviourUpdate;

  using ScriptRunDelayedDynamicFrameRate = ::UnityEngine::PlayerLoop::Update_ScriptRunDelayedDynamicFrameRate;

  using ScriptRunDelayedTasks = ::UnityEngine::PlayerLoop::Update_ScriptRunDelayedTasks;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Update();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10546 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::Update, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Update, "UnityEngine.PlayerLoop", "Update");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Update_DirectorUpdate, "UnityEngine.PlayerLoop", "Update/DirectorUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Update_ScriptRunBehaviourUpdate, "UnityEngine.PlayerLoop", "Update/ScriptRunBehaviourUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Update_ScriptRunDelayedDynamicFrameRate, "UnityEngine.PlayerLoop", "Update/ScriptRunDelayedDynamicFrameRate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Update_ScriptRunDelayedTasks, "UnityEngine.PlayerLoop", "Update/ScriptRunDelayedTasks");
