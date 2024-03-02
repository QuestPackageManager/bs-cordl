#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PreUpdate)
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__AIUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__CheckTexFieldInput;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__IMGUISendQueuedEvents;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__NewInputUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__Physics2DUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__PhysicsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__SendMouseEvents;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__UpdateVideo;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__WindUpdate;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PreUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__AIUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__CheckTexFieldInput;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__IMGUISendQueuedEvents;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__NewInputUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__Physics2DUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__PhysicsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__SendMouseEvents;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__UpdateVideo;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__WindUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::PreUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__AIUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__CheckTexFieldInput);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__IMGUISendQueuedEvents);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__NewInputUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__Physics2DUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__PhysicsUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__SendMouseEvents);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__UpdateVideo);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__WindUpdate);
// Type: ::PhysicsUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::PreUpdate::PhysicsUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreUpdate__PhysicsUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreUpdate__PhysicsUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__PhysicsUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::Physics2DUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::PreUpdate::Physics2DUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreUpdate__Physics2DUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreUpdate__Physics2DUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__Physics2DUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::CheckTexFieldInput
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::PreUpdate::CheckTexFieldInput
#pragma pack(push, 0)
struct CORDL_TYPE __PreUpdate__CheckTexFieldInput {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreUpdate__CheckTexFieldInput();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__CheckTexFieldInput, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::IMGUISendQueuedEvents
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::PreUpdate::IMGUISendQueuedEvents
#pragma pack(push, 0)
struct CORDL_TYPE __PreUpdate__IMGUISendQueuedEvents {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreUpdate__IMGUISendQueuedEvents();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__IMGUISendQueuedEvents, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::SendMouseEvents
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::PreUpdate::SendMouseEvents
#pragma pack(push, 0)
struct CORDL_TYPE __PreUpdate__SendMouseEvents {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreUpdate__SendMouseEvents();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__SendMouseEvents, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::AIUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::PreUpdate::AIUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreUpdate__AIUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreUpdate__AIUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__AIUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::WindUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::PreUpdate::WindUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreUpdate__WindUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreUpdate__WindUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__WindUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateVideo
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::PreUpdate::UpdateVideo
#pragma pack(push, 0)
struct CORDL_TYPE __PreUpdate__UpdateVideo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreUpdate__UpdateVideo();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__UpdateVideo, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::NewInputUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::PreUpdate::NewInputUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PreUpdate__NewInputUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PreUpdate__NewInputUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__NewInputUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::PreUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: ::UnityEngine.PlayerLoop::PreUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PreUpdate {
public:
  // Declarations
  using AIUpdate = ::UnityEngine::PlayerLoop::__PreUpdate__AIUpdate;

  using CheckTexFieldInput = ::UnityEngine::PlayerLoop::__PreUpdate__CheckTexFieldInput;

  using IMGUISendQueuedEvents = ::UnityEngine::PlayerLoop::__PreUpdate__IMGUISendQueuedEvents;

  using NewInputUpdate = ::UnityEngine::PlayerLoop::__PreUpdate__NewInputUpdate;

  using Physics2DUpdate = ::UnityEngine::PlayerLoop::__PreUpdate__Physics2DUpdate;

  using PhysicsUpdate = ::UnityEngine::PlayerLoop::__PreUpdate__PhysicsUpdate;

  using SendMouseEvents = ::UnityEngine::PlayerLoop::__PreUpdate__SendMouseEvents;

  using UpdateVideo = ::UnityEngine::PlayerLoop::__PreUpdate__UpdateVideo;

  using WindUpdate = ::UnityEngine::PlayerLoop::__PreUpdate__WindUpdate;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PreUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PreUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PreUpdate, "UnityEngine.PlayerLoop", "PreUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__AIUpdate, "UnityEngine.PlayerLoop", "PreUpdate/AIUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__CheckTexFieldInput, "UnityEngine.PlayerLoop", "PreUpdate/CheckTexFieldInput");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__IMGUISendQueuedEvents, "UnityEngine.PlayerLoop", "PreUpdate/IMGUISendQueuedEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__NewInputUpdate, "UnityEngine.PlayerLoop", "PreUpdate/NewInputUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__Physics2DUpdate, "UnityEngine.PlayerLoop", "PreUpdate/Physics2DUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__PhysicsUpdate, "UnityEngine.PlayerLoop", "PreUpdate/PhysicsUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__SendMouseEvents, "UnityEngine.PlayerLoop", "PreUpdate/SendMouseEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__UpdateVideo, "UnityEngine.PlayerLoop", "PreUpdate/UpdateVideo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__WindUpdate, "UnityEngine.PlayerLoop", "PreUpdate/WindUpdate");
