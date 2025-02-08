#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTracker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTracker)
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct OVRTracker_Frustum;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTracker;
}
namespace GlobalNamespace {
struct OVRTracker_Frustum;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRTracker);
MARK_VAL_T(::GlobalNamespace::OVRTracker_Frustum);
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTracker/Frustum
struct CORDL_TYPE OVRTracker_Frustum {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTracker_Frustum();

  // Ctor Parameters [CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fov", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr OVRTracker_Frustum(float_t nearZ, float_t farZ, ::UnityEngine::Vector2 fov) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8359 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field nearZ, offset: 0x0, size: 0x4, def value: None
  float_t nearZ;

  /// @brief Field farZ, offset: 0x4, size: 0x4, def value: None
  float_t farZ;

  /// @brief Field fov, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 fov;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTracker_Frustum, nearZ) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTracker_Frustum, farZ) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTracker_Frustum, fov) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTracker_Frustum, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTracker
class CORDL_TYPE OVRTracker : public ::System::Object {
public:
  // Declarations
  using Frustum = ::GlobalNamespace::OVRTracker_Frustum;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_isEnabled, put = set_isEnabled)) bool isEnabled;

  __declspec(property(get = get_isPositionTracked)) bool isPositionTracked;

  __declspec(property(get = get_isPresent)) bool isPresent;

  /// @brief Method GetFrustum, addr 0x4025a84, size 0xa4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTracker_Frustum GetFrustum(int32_t tracker);

  /// @brief Method GetPose, addr 0x4025b28, size 0x2b0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPose GetPose(int32_t tracker);

  /// @brief Method GetPoseValid, addr 0x4025dd8, size 0x11c, virtual false, abstract: false, final false
  inline bool GetPoseValid(int32_t tracker);

  /// @brief Method GetPresent, addr 0x4025968, size 0x11c, virtual false, abstract: false, final false
  inline bool GetPresent(int32_t tracker);

  static inline ::GlobalNamespace::OVRTracker* New_ctor();

  /// @brief Method .ctor, addr 0x4025ef4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_count, addr 0x402592c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_isEnabled, addr 0x4025808, size 0x90, virtual false, abstract: false, final false
  inline bool get_isEnabled();

  /// @brief Method get_isPositionTracked, addr 0x40257b8, size 0x50, virtual false, abstract: false, final false
  inline bool get_isPositionTracked();

  /// @brief Method get_isPresent, addr 0x4025728, size 0x90, virtual false, abstract: false, final false
  inline bool get_isPresent();

  /// @brief Method set_isEnabled, addr 0x4025898, size 0x94, virtual false, abstract: false, final false
  inline void set_isEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTracker(OVRTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTracker(OVRTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8360 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTracker, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTracker*, "", "OVRTracker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTracker_Frustum, "", "OVRTracker/Frustum");
