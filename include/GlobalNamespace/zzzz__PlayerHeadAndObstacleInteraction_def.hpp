#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerHeadAndObstacleInteraction)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerHeadAndObstacleInteraction);
// Type: ::PlayerHeadAndObstacleInteraction
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5272))
// CS Name: ::PlayerHeadAndObstacleInteraction*
class CORDL_TYPE PlayerHeadAndObstacleInteraction : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerTransforms, offset 0x18, size 0x8
  __declspec(property(get = __get__playerTransforms, put = __set__playerTransforms))::GlobalNamespace::PlayerTransforms* _playerTransforms;

  /// @brief Field _beatmapObjectManager, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field headDidEnterObstaclesEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_headDidEnterObstaclesEvent, put = __set_headDidEnterObstaclesEvent))::System::Action* headDidEnterObstaclesEvent;

  /// @brief Field headDidEnterObstacleEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_headDidEnterObstacleEvent, put = __set_headDidEnterObstacleEvent))::System::Action_1<::GlobalNamespace::ObstacleController*>* headDidEnterObstacleEvent;

  /// @brief Field _lastFrameNumCheck, offset 0x38, size 0x4
  __declspec(property(get = __get__lastFrameNumCheck, put = __set__lastFrameNumCheck)) int32_t _lastFrameNumCheck;

  /// @brief Field _intersectingObstacles, offset 0x40, size 0x8
  __declspec(property(get = __get__intersectingObstacles, put = __set__intersectingObstacles))::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>* _intersectingObstacles;

  /// @brief Field _prevFrameNumberOfIntersectingObstaclesCount, offset 0x48, size 0x4
  __declspec(property(get = __get__prevFrameNumberOfIntersectingObstaclesCount, put = __set__prevFrameNumberOfIntersectingObstaclesCount)) int32_t _prevFrameNumberOfIntersectingObstaclesCount;

  __declspec(property(get = get_playerHeadIsInObstacle)) bool playerHeadIsInObstacle;

  constexpr ::GlobalNamespace::PlayerTransforms*& __get__playerTransforms();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& __get__playerTransforms() const;

  constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::System::Action*& __get_headDidEnterObstaclesEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_headDidEnterObstaclesEvent() const;

  constexpr void __set_headDidEnterObstaclesEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>*& __get_headDidEnterObstacleEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> const& __get_headDidEnterObstacleEvent() const;

  constexpr void __set_headDidEnterObstacleEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr int32_t& __get__lastFrameNumCheck();

  constexpr int32_t const& __get__lastFrameNumCheck() const;

  constexpr void __set__lastFrameNumCheck(int32_t value);

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>*& __get__intersectingObstacles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>*> const& __get__intersectingObstacles() const;

  constexpr void __set__intersectingObstacles(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr int32_t& __get__prevFrameNumberOfIntersectingObstaclesCount();

  constexpr int32_t const& __get__prevFrameNumberOfIntersectingObstaclesCount() const;

  constexpr void __set__prevFrameNumberOfIntersectingObstaclesCount(int32_t value);

  /// @brief Method add_headDidEnterObstaclesEvent, addr 0x2260110, size 0x9c, virtual false, abstract: false, final false
  inline void add_headDidEnterObstaclesEvent(::System::Action* value);

  /// @brief Method remove_headDidEnterObstaclesEvent, addr 0x22601ac, size 0x9c, virtual false, abstract: false, final false
  inline void remove_headDidEnterObstaclesEvent(::System::Action* value);

  /// @brief Method add_headDidEnterObstacleEvent, addr 0x2260248, size 0xb0, virtual false, abstract: false, final false
  inline void add_headDidEnterObstacleEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method remove_headDidEnterObstacleEvent, addr 0x22602f8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_headDidEnterObstacleEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method get_playerHeadIsInObstacle, addr 0x225f81c, size 0x50, virtual false, abstract: false, final false
  inline bool get_playerHeadIsInObstacle();

  /// @brief Method RefreshIntersectingObstacles, addr 0x22603a8, size 0x300, virtual false, abstract: false, final false
  inline void RefreshIntersectingObstacles(::UnityEngine::Vector3 worldPos);

  /// @brief Method Update, addr 0x22606a8, size 0x8c, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::PlayerHeadAndObstacleInteraction* New_ctor();

  /// @brief Method .ctor, addr 0x2260734, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeadAndObstacleInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerHeadAndObstacleInteraction(PlayerHeadAndObstacleInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeadAndObstacleInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerHeadAndObstacleInteraction(PlayerHeadAndObstacleInteraction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerHeadAndObstacleInteraction();

public:
  /// @brief Field _playerTransforms, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerTransforms* ____playerTransforms;

  /// @brief Field _beatmapObjectManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field headDidEnterObstaclesEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___headDidEnterObstaclesEvent;

  /// @brief Field headDidEnterObstacleEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleController*>* ___headDidEnterObstacleEvent;

  /// @brief Field _lastFrameNumCheck, offset: 0x38, size: 0x4, def value: None
  int32_t ____lastFrameNumCheck;

  /// @brief Field _intersectingObstacles, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>* ____intersectingObstacles;

  /// @brief Field _prevFrameNumberOfIntersectingObstaclesCount, offset: 0x48, size: 0x4, def value: None
  int32_t ____prevFrameNumberOfIntersectingObstaclesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeadAndObstacleInteraction, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ____playerTransforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ____beatmapObjectManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ___headDidEnterObstaclesEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ___headDidEnterObstacleEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ____lastFrameNumCheck) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ____intersectingObstacles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadAndObstacleInteraction, ____prevFrameNumberOfIntersectingObstaclesCount) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeadAndObstacleInteraction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeadAndObstacleInteraction*, "", "PlayerHeadAndObstacleInteraction");
