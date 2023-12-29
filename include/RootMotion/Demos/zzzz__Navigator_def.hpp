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
namespace UnityEngine::AI {
class NavMeshPath;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::Demos {
struct __Navigator__State;
}
namespace UnityEngine {
class Transform;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12432))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Navigator__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Navigator__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Idle value: static_cast<int32_t>(0x0)
  static ::RootMotion::Demos::__Navigator__State const Idle;

  /// @brief Field Seeking value: static_cast<int32_t>(0x1)
  static ::RootMotion::Demos::__Navigator__State const Seeking;

  /// @brief Field OnPath value: static_cast<int32_t>(0x2)
  static ::RootMotion::Demos::__Navigator__State const OnPath;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12432)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12433))
// CS Name: ::RootMotion.Demos::Navigator*
class CORDL_TYPE Navigator : public ::System::Object {
public:
  // Declarations
  using State = ::RootMotion::Demos::__Navigator__State;

  /// @brief Field activeTargetSeeking, offset 0x10, size 0x1
  __declspec(property(get = __get_activeTargetSeeking, put = __set_activeTargetSeeking)) bool activeTargetSeeking;

  /// @brief Field cornerRadius, offset 0x14, size 0x4
  __declspec(property(get = __get_cornerRadius, put = __set_cornerRadius)) float_t cornerRadius;

  /// @brief Field recalculateOnPathDistance, offset 0x18, size 0x4
  __declspec(property(get = __get_recalculateOnPathDistance, put = __set_recalculateOnPathDistance)) float_t recalculateOnPathDistance;

  /// @brief Field maxSampleDistance, offset 0x1c, size 0x4
  __declspec(property(get = __get_maxSampleDistance, put = __set_maxSampleDistance)) float_t maxSampleDistance;

  /// @brief Field nextPathInterval, offset 0x20, size 0x4
  __declspec(property(get = __get_nextPathInterval, put = __set_nextPathInterval)) float_t nextPathInterval;

  /// @brief Field <normalizedDeltaPosition>k__BackingField, offset 0x24, size 0xc
  __declspec(property(get = __get__normalizedDeltaPosition_k__BackingField, put = __set__normalizedDeltaPosition_k__BackingField))::UnityEngine::Vector3 _normalizedDeltaPosition_k__BackingField;

  /// @brief Field <state>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __get__state_k__BackingField, put = __set__state_k__BackingField))::RootMotion::Demos::__Navigator__State _state_k__BackingField;

  /// @brief Field transform, offset 0x38, size 0x8
  __declspec(property(get = __get_transform, put = __set_transform))::UnityEngine::Transform* transform;

  /// @brief Field cornerIndex, offset 0x40, size 0x4
  __declspec(property(get = __get_cornerIndex, put = __set_cornerIndex)) int32_t cornerIndex;

  /// @brief Field corners, offset 0x48, size 0x8
  __declspec(property(get = __get_corners, put = __set_corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> corners;

  /// @brief Field path, offset 0x50, size 0x8
  __declspec(property(get = __get_path, put = __set_path))::UnityEngine::AI::NavMeshPath* path;

  /// @brief Field lastTargetPosition, offset 0x58, size 0xc
  __declspec(property(get = __get_lastTargetPosition, put = __set_lastTargetPosition))::UnityEngine::Vector3 lastTargetPosition;

  /// @brief Field initiated, offset 0x64, size 0x1
  __declspec(property(get = __get_initiated, put = __set_initiated)) bool initiated;

  /// @brief Field nextPathTime, offset 0x68, size 0x4
  __declspec(property(get = __get_nextPathTime, put = __set_nextPathTime)) float_t nextPathTime;

  __declspec(property(get = get_normalizedDeltaPosition, put = set_normalizedDeltaPosition))::UnityEngine::Vector3 normalizedDeltaPosition;

  __declspec(property(get = get_state, put = set_state))::RootMotion::Demos::__Navigator__State state;

  constexpr bool& __get_activeTargetSeeking();

  constexpr bool const& __get_activeTargetSeeking() const;

  constexpr void __set_activeTargetSeeking(bool value);

  constexpr float_t& __get_cornerRadius();

  constexpr float_t const& __get_cornerRadius() const;

  constexpr void __set_cornerRadius(float_t value);

  constexpr float_t& __get_recalculateOnPathDistance();

  constexpr float_t const& __get_recalculateOnPathDistance() const;

  constexpr void __set_recalculateOnPathDistance(float_t value);

  constexpr float_t& __get_maxSampleDistance();

  constexpr float_t const& __get_maxSampleDistance() const;

  constexpr void __set_maxSampleDistance(float_t value);

  constexpr float_t& __get_nextPathInterval();

  constexpr float_t const& __get_nextPathInterval() const;

  constexpr void __set_nextPathInterval(float_t value);

  constexpr ::UnityEngine::Vector3& __get__normalizedDeltaPosition_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __get__normalizedDeltaPosition_k__BackingField() const;

  constexpr void __set__normalizedDeltaPosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr ::RootMotion::Demos::__Navigator__State& __get__state_k__BackingField();

  constexpr ::RootMotion::Demos::__Navigator__State const& __get__state_k__BackingField() const;

  constexpr void __set__state_k__BackingField(::RootMotion::Demos::__Navigator__State value);

  constexpr ::UnityEngine::Transform*& __get_transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_transform() const;

  constexpr void __set_transform(::UnityEngine::Transform* value);

  constexpr int32_t& __get_cornerIndex();

  constexpr int32_t const& __get_cornerIndex() const;

  constexpr void __set_cornerIndex(int32_t value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_corners();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_corners() const;

  constexpr void __set_corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::UnityEngine::AI::NavMeshPath*& __get_path();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AI::NavMeshPath*> const& __get_path() const;

  constexpr void __set_path(::UnityEngine::AI::NavMeshPath* value);

  constexpr ::UnityEngine::Vector3& __get_lastTargetPosition();

  constexpr ::UnityEngine::Vector3 const& __get_lastTargetPosition() const;

  constexpr void __set_lastTargetPosition(::UnityEngine::Vector3 value);

  constexpr bool& __get_initiated();

  constexpr bool const& __get_initiated() const;

  constexpr void __set_initiated(bool value);

  constexpr float_t& __get_nextPathTime();

  constexpr float_t const& __get_nextPathTime() const;

  constexpr void __set_nextPathTime(float_t value);

  /// @brief Method get_normalizedDeltaPosition addr 0x11d0788 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_normalizedDeltaPosition();

  /// @brief Method set_normalizedDeltaPosition addr 0x11d0794 size 0xc virtual false final false
  inline void set_normalizedDeltaPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_state addr 0x11d07a0 size 0x8 virtual false final false
  inline ::RootMotion::Demos::__Navigator__State get_state();

  /// @brief Method set_state addr 0x11d07a8 size 0x8 virtual false final false
  inline void set_state(::RootMotion::Demos::__Navigator__State value);

  /// @brief Method Initiate addr 0x11d07b0 size 0xb4 virtual false final false
  inline void Initiate(::UnityEngine::Transform* transform);

  /// @brief Method Update addr 0x11d0864 size 0x444 virtual false final false
  inline void Update(::UnityEngine::Vector3 targetPosition);

  /// @brief Method CalculatePath addr 0x11d0d80 size 0x64 virtual false final false
  inline void CalculatePath(::UnityEngine::Vector3 targetPosition);

  /// @brief Method Find addr 0x11d0de4 size 0x134 virtual false final false
  inline bool Find(::UnityEngine::Vector3 targetPosition);

  /// @brief Method Stop addr 0x11d0ca8 size 0x5c virtual false final false
  inline void Stop();

  /// @brief Method HorDistance addr 0x11d0d04 size 0x7c virtual false final false
  inline float_t HorDistance(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  /// @brief Method Visualize addr 0x11d0f18 size 0x1c4 virtual false final false
  inline void Visualize();

  static inline ::RootMotion::Demos::Navigator* New_ctor();

  /// @brief Method .ctor addr 0x11d10dc size 0x64 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Navigator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Navigator(Navigator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Navigator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Navigator(Navigator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Navigator();

public:
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
  ::UnityEngine::Transform* ___transform;

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
