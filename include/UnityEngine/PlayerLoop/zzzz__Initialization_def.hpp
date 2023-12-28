#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Initialization)
namespace UnityEngine::PlayerLoop {
struct __Initialization__SynchronizeInputs;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__AsyncUploadTimeSlicedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__ProfilerStartFrame;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__SynchronizeState;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__UpdateCameraMotionVectors;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__XREarlyUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__DirectorSampleTime;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct Initialization;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__AsyncUploadTimeSlicedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__DirectorSampleTime;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__ProfilerStartFrame;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__SynchronizeInputs;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__SynchronizeState;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__UpdateCameraMotionVectors;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__XREarlyUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::Initialization);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__AsyncUploadTimeSlicedUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__DirectorSampleTime);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__ProfilerStartFrame);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__SynchronizeInputs);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__SynchronizeState);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__UpdateCameraMotionVectors);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__XREarlyUpdate);
// Type: ::ProfilerStartFrame
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10477))
// CS Name: ::Initialization::ProfilerStartFrame
#pragma pack(push, 0)
struct CORDL_TYPE __Initialization__ProfilerStartFrame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Initialization__ProfilerStartFrame();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__ProfilerStartFrame, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateCameraMotionVectors
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10478))
// CS Name: ::Initialization::UpdateCameraMotionVectors
#pragma pack(push, 0)
struct CORDL_TYPE __Initialization__UpdateCameraMotionVectors {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Initialization__UpdateCameraMotionVectors();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__UpdateCameraMotionVectors, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::DirectorSampleTime
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10479))
// CS Name: ::Initialization::DirectorSampleTime
#pragma pack(push, 0)
struct CORDL_TYPE __Initialization__DirectorSampleTime {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Initialization__DirectorSampleTime();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__DirectorSampleTime, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::AsyncUploadTimeSlicedUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10480))
// CS Name: ::Initialization::AsyncUploadTimeSlicedUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __Initialization__AsyncUploadTimeSlicedUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Initialization__AsyncUploadTimeSlicedUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__AsyncUploadTimeSlicedUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::SynchronizeState
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10481))
// CS Name: ::Initialization::SynchronizeState
#pragma pack(push, 0)
struct CORDL_TYPE __Initialization__SynchronizeState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Initialization__SynchronizeState();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__SynchronizeState, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::SynchronizeInputs
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10482))
// CS Name: ::Initialization::SynchronizeInputs
#pragma pack(push, 0)
struct CORDL_TYPE __Initialization__SynchronizeInputs {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Initialization__SynchronizeInputs();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__SynchronizeInputs, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::XREarlyUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10483))
// CS Name: ::Initialization::XREarlyUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __Initialization__XREarlyUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Initialization__XREarlyUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__XREarlyUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::Initialization
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10484))
// CS Name: ::UnityEngine.PlayerLoop::Initialization
#pragma pack(push, 0)
struct CORDL_TYPE Initialization {
public:
  // Declarations
  using XREarlyUpdate = ::UnityEngine::PlayerLoop::__Initialization__XREarlyUpdate;

  using SynchronizeInputs = ::UnityEngine::PlayerLoop::__Initialization__SynchronizeInputs;

  using SynchronizeState = ::UnityEngine::PlayerLoop::__Initialization__SynchronizeState;

  using AsyncUploadTimeSlicedUpdate = ::UnityEngine::PlayerLoop::__Initialization__AsyncUploadTimeSlicedUpdate;

  using DirectorSampleTime = ::UnityEngine::PlayerLoop::__Initialization__DirectorSampleTime;

  using UpdateCameraMotionVectors = ::UnityEngine::PlayerLoop::__Initialization__UpdateCameraMotionVectors;

  using ProfilerStartFrame = ::UnityEngine::PlayerLoop::__Initialization__ProfilerStartFrame;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Initialization();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::Initialization, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Initialization, "UnityEngine.PlayerLoop", "Initialization");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__AsyncUploadTimeSlicedUpdate, "UnityEngine.PlayerLoop", "Initialization/AsyncUploadTimeSlicedUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__DirectorSampleTime, "UnityEngine.PlayerLoop", "Initialization/DirectorSampleTime");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__ProfilerStartFrame, "UnityEngine.PlayerLoop", "Initialization/ProfilerStartFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__SynchronizeInputs, "UnityEngine.PlayerLoop", "Initialization/SynchronizeInputs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__SynchronizeState, "UnityEngine.PlayerLoop", "Initialization/SynchronizeState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__UpdateCameraMotionVectors, "UnityEngine.PlayerLoop", "Initialization/UpdateCameraMotionVectors");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__XREarlyUpdate, "UnityEngine.PlayerLoop", "Initialization/XREarlyUpdate");
