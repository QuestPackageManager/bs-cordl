#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRKeyboard)
namespace GlobalNamespace {
struct OVRKeyboard_TrackedKeyboardInfo;
}
namespace GlobalNamespace {
struct OVRKeyboard_TrackedKeyboardState;
}
namespace GlobalNamespace {
struct OVRPlugin_TrackedKeyboardQueryFlags;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRKeyboard;
}
namespace GlobalNamespace {
struct OVRKeyboard_TrackedKeyboardInfo;
}
namespace GlobalNamespace {
struct OVRKeyboard_TrackedKeyboardState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRKeyboard);
MARK_VAL_T(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo);
MARK_VAL_T(::GlobalNamespace::OVRKeyboard_TrackedKeyboardState);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRKeyboard/TrackedKeyboardState
struct CORDL_TYPE OVRKeyboard_TrackedKeyboardState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRKeyboard_TrackedKeyboardState();

  // Ctor Parameters [CppParam { name: "isPositionValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPositionTracked", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "isOrientationValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isOrientationTracked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "position", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "timeInSeconds", ty:
  // "double_t", modifiers: "", def_value: None }]
  constexpr OVRKeyboard_TrackedKeyboardState(bool isPositionValid, bool isPositionTracked, bool isOrientationValid, bool isOrientationTracked, ::UnityEngine::Vector3 position,
                                             ::UnityEngine::Quaternion rotation, double_t timeInSeconds) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7755 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field isPositionValid, offset: 0x0, size: 0x1, def value: None
  bool isPositionValid;

  /// @brief Field isPositionTracked, offset: 0x1, size: 0x1, def value: None
  bool isPositionTracked;

  /// @brief Field isOrientationValid, offset: 0x2, size: 0x1, def value: None
  bool isOrientationValid;

  /// @brief Field isOrientationTracked, offset: 0x3, size: 0x1, def value: None
  bool isOrientationTracked;

  /// @brief Field position, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field timeInSeconds, offset: 0x20, size: 0x8, def value: None
  double_t timeInSeconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardState, isPositionValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardState, isPositionTracked) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardState, isOrientationValid) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardState, isOrientationTracked) == 0x3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardState, position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardState, rotation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardState, timeInSeconds) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRKeyboard_TrackedKeyboardState, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::TrackedKeyboardFlags, OVRPlugin::TrackedKeyboardPresentationStyles, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRKeyboard/TrackedKeyboardInfo
struct CORDL_TYPE OVRKeyboard_TrackedKeyboardInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRKeyboard_TrackedKeyboardInfo();

  // Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Identifier", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "Dimensions", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "KeyboardFlags", ty: "::GlobalNamespace::OVRPlugin_TrackedKeyboardFlags", modifiers: "", def_value:
  // None }, CppParam { name: "SupportedPresentationStyles", ty: "::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles", modifiers: "", def_value: None }]
  constexpr OVRKeyboard_TrackedKeyboardInfo(::StringW Name, uint64_t Identifier, ::UnityEngine::Vector3 Dimensions, ::GlobalNamespace::OVRPlugin_TrackedKeyboardFlags KeyboardFlags,
                                            ::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles SupportedPresentationStyles) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7756 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Name, offset: 0x0, size: 0x8, def value: None
  ::StringW Name;

  /// @brief Field Identifier, offset: 0x8, size: 0x8, def value: None
  uint64_t Identifier;

  /// @brief Field Dimensions, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 Dimensions;

  /// @brief Field KeyboardFlags, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_TrackedKeyboardFlags KeyboardFlags;

  /// @brief Field SupportedPresentationStyles, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles SupportedPresentationStyles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo, Identifier) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo, Dimensions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo, KeyboardFlags) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo, SupportedPresentationStyles) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRKeyboard
class CORDL_TYPE OVRKeyboard : public ::System::Object {
public:
  // Declarations
  using TrackedKeyboardInfo = ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo;

  using TrackedKeyboardState = ::GlobalNamespace::OVRKeyboard_TrackedKeyboardState;

  /// @brief Method GetKeyboardState, addr 0x5d3148c, size 0xd0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRKeyboard_TrackedKeyboardState GetKeyboardState();

  /// @brief Method GetSystemKeyboardInfo, addr 0x5d3155c, size 0xf4, virtual false, abstract: false, final false
  static inline bool GetSystemKeyboardInfo(::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags keyboardQueryFlags, ::ByRef<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo> keyboardInfo);

  /// @brief Method StopKeyboardTracking, addr 0x5d31650, size 0x54, virtual false, abstract: false, final false
  static inline bool StopKeyboardTracking(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo keyboardInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRKeyboard(OVRKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRKeyboard(OVRKeyboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRKeyboard, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRKeyboard*, "", "OVRKeyboard");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo, "", "OVRKeyboard/TrackedKeyboardInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRKeyboard_TrackedKeyboardState, "", "OVRKeyboard/TrackedKeyboardState");
