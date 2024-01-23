#pragma once
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
struct __OVRTracker__Frustum;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTracker;
}
namespace GlobalNamespace {
struct __OVRTracker__Frustum;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRTracker);
MARK_VAL_T(::GlobalNamespace::__OVRTracker__Frustum);
// Type: ::Frustum
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10243))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8044))
// CS Name: ::OVRTracker::Frustum
struct CORDL_TYPE __OVRTracker__Frustum {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fov", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr __OVRTracker__Frustum(float_t nearZ, float_t farZ, ::UnityEngine::Vector2 fov) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTracker__Frustum();

  /// @brief Field nearZ, offset: 0x0, size: 0x4, def value: None
  float_t nearZ;

  /// @brief Field farZ, offset: 0x4, size: 0x4, def value: None
  float_t farZ;

  /// @brief Field fov, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 fov;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTracker__Frustum, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTracker__Frustum, nearZ) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTracker__Frustum, farZ) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTracker__Frustum, fov) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRTracker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8045))
// CS Name: ::OVRTracker*
class CORDL_TYPE OVRTracker : public ::System::Object {
public:
  // Declarations
  using Frustum = ::GlobalNamespace::__OVRTracker__Frustum;

  __declspec(property(get = get_isPresent)) bool isPresent;

  __declspec(property(get = get_isPositionTracked)) bool isPositionTracked;

  __declspec(property(get = get_isEnabled, put = set_isEnabled)) bool isEnabled;

  __declspec(property(get = get_count)) int32_t count;

  /// @brief Method get_isPresent, addr 0x2799420, size 0x90, virtual false, abstract: false, final false
  inline bool get_isPresent();

  /// @brief Method get_isPositionTracked, addr 0x27994b0, size 0x50, virtual false, abstract: false, final false
  inline bool get_isPositionTracked();

  /// @brief Method get_isEnabled, addr 0x2799500, size 0x90, virtual false, abstract: false, final false
  inline bool get_isEnabled();

  /// @brief Method set_isEnabled, addr 0x2799590, size 0x94, virtual false, abstract: false, final false
  inline void set_isEnabled(bool value);

  /// @brief Method get_count, addr 0x2799624, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method GetFrustum, addr 0x2799764, size 0xa4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRTracker__Frustum GetFrustum(int32_t tracker);

  /// @brief Method GetPose, addr 0x2799808, size 0x2b0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPose GetPose(int32_t tracker);

  /// @brief Method GetPoseValid, addr 0x2799ab8, size 0x104, virtual false, abstract: false, final false
  inline bool GetPoseValid(int32_t tracker);

  /// @brief Method GetPresent, addr 0x2799660, size 0x104, virtual false, abstract: false, final false
  inline bool GetPresent(int32_t tracker);

  static inline ::GlobalNamespace::OVRTracker* New_ctor();

  /// @brief Method .ctor, addr 0x2799bbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTracker(OVRTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTracker(OVRTracker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTracker();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTracker, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTracker*, "", "OVRTracker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTracker__Frustum, "", "OVRTracker/Frustum");
