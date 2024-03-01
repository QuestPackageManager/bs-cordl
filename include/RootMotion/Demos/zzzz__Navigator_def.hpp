#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/Demos/zzzz__Navigator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Navigator)
namespace RootMotion::Demos {
struct __Navigator__State;
}
namespace UnityEngine::AI {
class NavMeshPath;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::Demos {
struct __Navigator__State;
}
namespace RootMotion::Demos {
class Navigator;
}
// Write type traits
MARK_VAL_T(::RootMotion::Demos::__Navigator__State);
MARK_REF_PTR_T(::RootMotion::Demos::Navigator);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::Demos {
// Is value type: true
// CS Name: ::Navigator::State
struct CORDL_TYPE __Navigator__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Navigator__State_Unwrapped
  enum struct ____Navigator__State_Unwrapped : int32_t {
    __E_Idle = static_cast<int32_t>(0x0),
    __E_Seeking = static_cast<int32_t>(0x1),
    __E_OnPath = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Navigator__State_Unwrapped() const noexcept {
    return static_cast<____Navigator__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____Navigator__State_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Navigator__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Navigator__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Idle value: static_cast<int32_t>(0x0)
  static ::RootMotion::Demos::__Navigator__State const Idle;

  /// @brief Field OnPath value: static_cast<int32_t>(0x2)
  static ::RootMotion::Demos::__Navigator__State const OnPath;

  /// @brief Field Seeking value: static_cast<int32_t>(0x1)
  static ::RootMotion::Demos::__Navigator__State const Seeking;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::Demos::__Navigator__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::Demos::__Navigator__State, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion::Demos
// Type: RootMotion.Demos::Navigator
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::Demos {
// Is value type: false
// CS Name: ::RootMotion.Demos::Navigator*
class CORDL_TYPE Navigator : public ::System::Object {
public:
  // Declarations
  using State = ::RootMotion::Demos::__Navigator__State;

  /// @brief Field <normalizedDeltaPosition>k__BackingField, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__normalizedDeltaPosition_k__BackingField,
                      put = __cordl_internal_set__normalizedDeltaPosition_k__BackingField))::UnityEngine::Vector3 _normalizedDeltaPosition_k__BackingField;

  /// @brief Field <state>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__state_k__BackingField, put = __cordl_internal_set__state_k__BackingField))::RootMotion::Demos::__Navigator__State _state_k__BackingField;

  /// @brief Field activeTargetSeeking, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_activeTargetSeeking, put = __cordl_internal_set_activeTargetSeeking)) bool activeTargetSeeking;

  /// @brief Field cornerIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_cornerIndex, put = __cordl_internal_set_cornerIndex)) int32_t cornerIndex;

  /// @brief Field cornerRadius, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_cornerRadius, put = __cordl_internal_set_cornerRadius)) float_t cornerRadius;

  /// @brief Field corners, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_corners, put = __cordl_internal_set_corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> corners;

  /// @brief Field initiated, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_initiated, put = __cordl_internal_set_initiated)) bool initiated;

  /// @brief Field lastTargetPosition, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_lastTargetPosition, put = __cordl_internal_set_lastTargetPosition))::UnityEngine::Vector3 lastTargetPosition;

  /// @brief Field maxSampleDistance, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxSampleDistance, put = __cordl_internal_set_maxSampleDistance)) float_t maxSampleDistance;

  /// @brief Field nextPathInterval, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nextPathInterval, put = __cordl_internal_set_nextPathInterval)) float_t nextPathInterval;

  /// @brief Field nextPathTime, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_nextPathTime, put = __cordl_internal_set_nextPathTime)) float_t nextPathTime;

  __declspec(property(get = get_normalizedDeltaPosition, put = set_normalizedDeltaPosition))::UnityEngine::Vector3 normalizedDeltaPosition;

  /// @brief Field path, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path))::UnityEngine::AI::NavMeshPath* path;

  /// @brief Field recalculateOnPathDistance, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_recalculateOnPathDistance, put = __cordl_internal_set_recalculateOnPathDistance)) float_t recalculateOnPathDistance;

  __declspec(property(get = get_state, put = set_state))::RootMotion::Demos::__Navigator__State state;

  /// @brief Field transform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Method CalculatePath, addr 0x131d148, size 0x64, virtual false, abstract: false, final false
  inline void CalculatePath(::UnityEngine::Vector3 targetPosition);

  /// @brief Method Find, addr 0x131d1ac, size 0x134, virtual false, abstract: false, final false
  inline bool Find(::UnityEngine::Vector3 targetPosition);

  /// @brief Method HorDistance, addr 0x131d0cc, size 0x7c, virtual false, abstract: false, final false
  inline float_t HorDistance(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  /// @brief Method Initiate, addr 0x131cb78, size 0xb4, virtual false, abstract: false, final false
  inline void Initiate(::UnityEngine::Transform* transform);

  static inline ::RootMotion::Demos::Navigator* New_ctor();

  /// @brief Method Stop, addr 0x131d070, size 0x5c, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Update, addr 0x131cc2c, size 0x444, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Vector3 targetPosition);

  /// @brief Method Visualize, addr 0x131d2e0, size 0x1c4, virtual false, abstract: false, final false
  inline void Visualize();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__normalizedDeltaPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__normalizedDeltaPosition_k__BackingField();

  constexpr ::RootMotion::Demos::__Navigator__State const& __cordl_internal_get__state_k__BackingField() const;

  constexpr ::RootMotion::Demos::__Navigator__State& __cordl_internal_get__state_k__BackingField();

  constexpr bool const& __cordl_internal_get_activeTargetSeeking() const;

  constexpr bool& __cordl_internal_get_activeTargetSeeking();

  constexpr int32_t const& __cordl_internal_get_cornerIndex() const;

  constexpr int32_t& __cordl_internal_get_cornerIndex();

  constexpr float_t const& __cordl_internal_get_cornerRadius() const;

  constexpr float_t& __cordl_internal_get_cornerRadius();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_corners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_corners();

  constexpr bool const& __cordl_internal_get_initiated() const;

  constexpr bool& __cordl_internal_get_initiated();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastTargetPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastTargetPosition();

  constexpr float_t const& __cordl_internal_get_maxSampleDistance() const;

  constexpr float_t& __cordl_internal_get_maxSampleDistance();

  constexpr float_t const& __cordl_internal_get_nextPathInterval() const;

  constexpr float_t& __cordl_internal_get_nextPathInterval();

  constexpr float_t const& __cordl_internal_get_nextPathTime() const;

  constexpr float_t& __cordl_internal_get_nextPathTime();

  constexpr ::UnityEngine::AI::NavMeshPath*& __cordl_internal_get_path();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AI::NavMeshPath*> const& __cordl_internal_get_path() const;

  constexpr float_t const& __cordl_internal_get_recalculateOnPathDistance() const;

  constexpr float_t& __cordl_internal_get_recalculateOnPathDistance();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr void __cordl_internal_set__normalizedDeltaPosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__state_k__BackingField(::RootMotion::Demos::__Navigator__State value);

  constexpr void __cordl_internal_set_activeTargetSeeking(bool value);

  constexpr void __cordl_internal_set_cornerIndex(int32_t value);

  constexpr void __cordl_internal_set_cornerRadius(float_t value);

  constexpr void __cordl_internal_set_corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_initiated(bool value);

  constexpr void __cordl_internal_set_lastTargetPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_maxSampleDistance(float_t value);

  constexpr void __cordl_internal_set_nextPathInterval(float_t value);

  constexpr void __cordl_internal_set_nextPathTime(float_t value);

  constexpr void __cordl_internal_set_path(::UnityEngine::AI::NavMeshPath* value);

  constexpr void __cordl_internal_set_recalculateOnPathDistance(float_t value);

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x131d4a4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_normalizedDeltaPosition, addr 0x131cb50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normalizedDeltaPosition();

  /// @brief Method get_state, addr 0x131cb68, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::Demos::__Navigator__State get_state();

  /// @brief Method set_normalizedDeltaPosition, addr 0x131cb5c, size 0xc, virtual false, abstract: false, final false
  inline void set_normalizedDeltaPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_state, addr 0x131cb70, size 0x8, virtual false, abstract: false, final false
  inline void set_state(::RootMotion::Demos::__Navigator__State value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Navigator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Navigator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Navigator(Navigator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Navigator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Navigator(Navigator const&) = delete;

  /// @brief Field activeTargetSeeking, offset: 0x10, size: 0x1, def value: None
  bool ___activeTargetSeeking;

  /// @brief Field cornerRadius, offset: 0x14, size: 0x4, def value: None
  float_t ___cornerRadius;

  /// @brief Field recalculateOnPathDistance, offset: 0x18, size: 0x4, def value: None
  float_t ___recalculateOnPathDistance;

  /// @brief Field maxSampleDistance, offset: 0x1c, size: 0x4, def value: None
  float_t ___maxSampleDistance;

  /// @brief Field nextPathInterval, offset: 0x20, size: 0x4, def value: None
  float_t ___nextPathInterval;

  /// @brief Field <normalizedDeltaPosition>k__BackingField, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____normalizedDeltaPosition_k__BackingField;

  /// @brief Field <state>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::RootMotion::Demos::__Navigator__State ____state_k__BackingField;

  /// @brief Field transform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field cornerIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___cornerIndex;

  /// @brief Field corners, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___corners;

  /// @brief Field path, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AI::NavMeshPath* ___path;

  /// @brief Field lastTargetPosition, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastTargetPosition;

  /// @brief Field initiated, offset: 0x64, size: 0x1, def value: None
  bool ___initiated;

  /// @brief Field nextPathTime, offset: 0x68, size: 0x4, def value: None
  float_t ___nextPathTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::Demos::Navigator, 0x70>, "Size mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___activeTargetSeeking) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___cornerRadius) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___recalculateOnPathDistance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___maxSampleDistance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___nextPathInterval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ____normalizedDeltaPosition_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ____state_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___transform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___cornerIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___corners) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___path) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___lastTargetPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___initiated) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Demos::Navigator, ___nextPathTime) == 0x68, "Offset mismatch!");

} // namespace RootMotion::Demos
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Demos::__Navigator__State, "RootMotion.Demos", "Navigator/State");
NEED_NO_BOX(::RootMotion::Demos::Navigator);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Demos::Navigator*, "RootMotion.Demos", "Navigator");
