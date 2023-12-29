#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Update)
namespace UnityEngine::PlayerLoop {
struct __Update__DirectorUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunDelayedTasks;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunBehaviourUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunDelayedDynamicFrameRate;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct Update;
}
namespace UnityEngine::PlayerLoop {
struct __Update__DirectorUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunBehaviourUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunDelayedTasks;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::Update);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Update__DirectorUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Update__ScriptRunBehaviourUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedDynamicFrameRate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedTasks);
// Type: ::ScriptRunBehaviourUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10463))
// CS Name: ::Update::ScriptRunBehaviourUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __Update__ScriptRunBehaviourUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Update__ScriptRunBehaviourUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Update__ScriptRunBehaviourUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::DirectorUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10464))
// CS Name: ::Update::DirectorUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __Update__DirectorUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Update__DirectorUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Update__DirectorUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ScriptRunDelayedDynamicFrameRate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10465))
// CS Name: ::Update::ScriptRunDelayedDynamicFrameRate
#pragma pack(push, 0)
struct CORDL_TYPE __Update__ScriptRunDelayedDynamicFrameRate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Update__ScriptRunDelayedDynamicFrameRate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedDynamicFrameRate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ScriptRunDelayedTasks
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10466))
// CS Name: ::Update::ScriptRunDelayedTasks
#pragma pack(push, 0)
struct CORDL_TYPE __Update__ScriptRunDelayedTasks {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Update__ScriptRunDelayedTasks();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedTasks, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::Update
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10467))
// CS Name: ::UnityEngine.PlayerLoop::Update
#pragma pack(push, 0)
struct CORDL_TYPE Update {
public:
  // Declarations
  using ScriptRunDelayedTasks = ::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedTasks;

  using ScriptRunDelayedDynamicFrameRate = ::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedDynamicFrameRate;

  using DirectorUpdate = ::UnityEngine::PlayerLoop::__Update__DirectorUpdate;

  using ScriptRunBehaviourUpdate = ::UnityEngine::PlayerLoop::__Update__ScriptRunBehaviourUpdate;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Update();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::Update, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Update, "UnityEngine.PlayerLoop", "Update");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Update__DirectorUpdate, "UnityEngine.PlayerLoop", "Update/DirectorUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Update__ScriptRunBehaviourUpdate, "UnityEngine.PlayerLoop", "Update/ScriptRunBehaviourUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedDynamicFrameRate, "UnityEngine.PlayerLoop", "Update/ScriptRunDelayedDynamicFrameRate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedTasks, "UnityEngine.PlayerLoop", "Update/ScriptRunDelayedTasks");
