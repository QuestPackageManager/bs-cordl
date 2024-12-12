#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerEnvironmentResizeController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerEnvironmentResizeController)
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
class MultiplayerCenterResizeController;
}
namespace GlobalNamespace {
class MultiplayerEnvironmentResizeController_ResizeData;
}
namespace GlobalNamespace {
struct MultiplayerEnvironmentResizeController_ResizeType;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerEnvironmentResizeController_ResizeType;
}
namespace GlobalNamespace {
class MultiplayerEnvironmentResizeController;
}
namespace GlobalNamespace {
class MultiplayerEnvironmentResizeController_ResizeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerEnvironmentResizeController);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerEnvironmentResizeController/ResizeType
struct CORDL_TYPE MultiplayerEnvironmentResizeController_ResizeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerEnvironmentResizeController_ResizeType_Unwrapped
  enum struct __MultiplayerEnvironmentResizeController_ResizeType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Position = static_cast<int32_t>(0x1),
    __E_Length = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerEnvironmentResizeController_ResizeType_Unwrapped() const noexcept {
    return static_cast<__MultiplayerEnvironmentResizeController_ResizeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerEnvironmentResizeController_ResizeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerEnvironmentResizeController_ResizeType(int32_t value__) noexcept;

  /// @brief Field Length value: I32(2)
  static ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType const Length;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType const None;

  /// @brief Field Position value: I32(1)
  static ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType const Position;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4563 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerEnvironmentResizeController::ResizeType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerEnvironmentResizeController/ResizeData
class CORDL_TYPE MultiplayerEnvironmentResizeController_ResizeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lights, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lights,
                      put = __cordl_internal_set__lights)) ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>
      _lights;

  /// @brief Field _offset, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__offset, put = __cordl_internal_set__offset)) float_t _offset;

  /// @brief Field _otherTransforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__otherTransforms,
                      put = __cordl_internal_set__otherTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
      _otherTransforms;

  /// @brief Field _resizeType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__resizeType, put = __cordl_internal_set__resizeType)) ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType _resizeType;

  __declspec(property(get = get_lights)) ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> lights;

  __declspec(property(get = get_offset)) float_t offset;

  __declspec(property(get = get_otherTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> otherTransforms;

  __declspec(property(get = get_resizeType)) ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType resizeType;

  static inline ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const& __cordl_internal_get__lights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>& __cordl_internal_get__lights();

  constexpr float_t const& __cordl_internal_get__offset() const;

  constexpr float_t& __cordl_internal_get__offset();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__otherTransforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__otherTransforms();

  constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType const& __cordl_internal_get__resizeType() const;

  constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType& __cordl_internal_get__resizeType();

  constexpr void __cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value);

  constexpr void __cordl_internal_set__offset(float_t value);

  constexpr void __cordl_internal_set__otherTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set__resizeType(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType value);

  /// @brief Method .ctor, addr 0x3bcfeb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lights, addr 0x3bcfea4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> get_lights();

  /// @brief Method get_offset, addr 0x3bcfe9c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_offset();

  /// @brief Method get_otherTransforms, addr 0x3bcfeac, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> get_otherTransforms();

  /// @brief Method get_resizeType, addr 0x3bcfe94, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType get_resizeType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerEnvironmentResizeController_ResizeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentResizeController_ResizeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerEnvironmentResizeController_ResizeData(MultiplayerEnvironmentResizeController_ResizeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentResizeController_ResizeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerEnvironmentResizeController_ResizeData(MultiplayerEnvironmentResizeController_ResizeData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4564 };

  /// @brief Field _resizeType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType ____resizeType;

  /// @brief Field _offset, offset: 0x14, size: 0x4, def value: None
  float_t ____offset;

  /// @brief Field _lights, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____lights;

  /// @brief Field _otherTransforms, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____otherTransforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData, ____resizeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData, ____offset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData, ____lights) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData, ____otherTransforms) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerEnvironmentResizeController
class CORDL_TYPE MultiplayerEnvironmentResizeController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ResizeData = ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData;

  using ResizeType = ::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType;

  /// @brief Field _beatmapObjectSpawnCenter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnCenter, put = __cordl_internal_set__beatmapObjectSpawnCenter)) ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>
      _beatmapObjectSpawnCenter;

  /// @brief Field _centerResizeController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__centerResizeController, put = __cordl_internal_set__centerResizeController)) ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController>
      _centerResizeController;

  /// @brief Field _edgeDistanceFromCenterFound, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__edgeDistanceFromCenterFound, put = __cordl_internal_set__edgeDistanceFromCenterFound)) bool _edgeDistanceFromCenterFound;

  /// @brief Field _isResizingFinished, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isResizingFinished, put = __cordl_internal_set__isResizingFinished)) bool _isResizingFinished;

  /// @brief Field _platformEnd, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__platformEnd, put = __cordl_internal_set__platformEnd)) ::UnityW<::UnityEngine::Transform> _platformEnd;

  /// @brief Field _resizeData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__resizeData, put = __cordl_internal_set__resizeData)) ::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*,
                                                                                                                ::Array<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>*>
      _resizeData;

  /// @brief Field _spawnCenterDistanceFound, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get__spawnCenterDistanceFound, put = __cordl_internal_set__spawnCenterDistanceFound)) bool _spawnCenterDistanceFound;

  __declspec(property(get = get_isResizingFinished)) bool isResizingFinished;

  /// @brief Field resizingDidFinishEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_resizingDidFinishEvent, put = __cordl_internal_set_resizingDidFinishEvent)) ::System::Action* resizingDidFinishEvent;

  /// @brief Method HandleEdgeDistanceFromCenterWasCalculated, addr 0x3bcfb10, size 0x18, virtual false, abstract: false, final false
  inline void HandleEdgeDistanceFromCenterWasCalculated(float_t edgeDistanceFromCenter);

  /// @brief Method HandleSpawnCenterDistanceWasFound, addr 0x3bcfb28, size 0x18, virtual false, abstract: false, final false
  inline void HandleSpawnCenterDistanceWasFound(float_t distance);

  static inline ::GlobalNamespace::MultiplayerEnvironmentResizeController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bcfb40, size 0x14c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Resize, addr 0x3bcfca4, size 0x1e8, virtual false, abstract: false, final false
  inline void Resize();

  /// @brief Method Start, addr 0x3bcf9e0, size 0x130, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryResize, addr 0x3bcfc8c, size 0x18, virtual false, abstract: false, final false
  inline void TryResize();

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> const& __cordl_internal_get__beatmapObjectSpawnCenter() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>& __cordl_internal_get__beatmapObjectSpawnCenter();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> const& __cordl_internal_get__centerResizeController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController>& __cordl_internal_get__centerResizeController();

  constexpr bool const& __cordl_internal_get__edgeDistanceFromCenterFound() const;

  constexpr bool& __cordl_internal_get__edgeDistanceFromCenterFound();

  constexpr bool const& __cordl_internal_get__isResizingFinished() const;

  constexpr bool& __cordl_internal_get__isResizingFinished();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__platformEnd() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__platformEnd();

  constexpr ::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*, ::Array<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>*> const&
  __cordl_internal_get__resizeData() const;

  constexpr ::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*, ::Array<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>*>&
  __cordl_internal_get__resizeData();

  constexpr bool const& __cordl_internal_get__spawnCenterDistanceFound() const;

  constexpr bool& __cordl_internal_get__spawnCenterDistanceFound();

  constexpr ::System::Action* const& __cordl_internal_get_resizingDidFinishEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_resizingDidFinishEvent();

  constexpr void __cordl_internal_set__beatmapObjectSpawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> value);

  constexpr void __cordl_internal_set__centerResizeController(::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> value);

  constexpr void __cordl_internal_set__edgeDistanceFromCenterFound(bool value);

  constexpr void __cordl_internal_set__isResizingFinished(bool value);

  constexpr void __cordl_internal_set__platformEnd(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__resizeData(
      ::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*, ::Array<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>*> value);

  constexpr void __cordl_internal_set__spawnCenterDistanceFound(bool value);

  constexpr void __cordl_internal_set_resizingDidFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3bcfe8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_resizingDidFinishEvent, addr 0x3bcf8a8, size 0x9c, virtual false, abstract: false, final false
  inline void add_resizingDidFinishEvent(::System::Action* value);

  /// @brief Method get_isResizingFinished, addr 0x3bcf8a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isResizingFinished();

  /// @brief Method remove_resizingDidFinishEvent, addr 0x3bcf944, size 0x9c, virtual false, abstract: false, final false
  inline void remove_resizingDidFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerEnvironmentResizeController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentResizeController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerEnvironmentResizeController(MultiplayerEnvironmentResizeController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentResizeController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerEnvironmentResizeController(MultiplayerEnvironmentResizeController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4565 };

  /// @brief Field _platformEnd, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____platformEnd;

  /// @brief Field _resizeData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*, ::Array<::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*>*> ____resizeData;

  /// @brief Field _centerResizeController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> ____centerResizeController;

  /// @brief Field _beatmapObjectSpawnCenter, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> ____beatmapObjectSpawnCenter;

  /// @brief Field resizingDidFinishEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___resizingDidFinishEvent;

  /// @brief Field _isResizingFinished, offset: 0x48, size: 0x1, def value: None
  bool ____isResizingFinished;

  /// @brief Field _edgeDistanceFromCenterFound, offset: 0x49, size: 0x1, def value: None
  bool ____edgeDistanceFromCenterFound;

  /// @brief Field _spawnCenterDistanceFound, offset: 0x4a, size: 0x1, def value: None
  bool ____spawnCenterDistanceFound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____platformEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____resizeData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____centerResizeController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____beatmapObjectSpawnCenter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ___resizingDidFinishEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____isResizingFinished) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____edgeDistanceFromCenterFound) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____spawnCenterDistanceFound) == 0x4a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerEnvironmentResizeController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeType, "", "MultiplayerEnvironmentResizeController/ResizeType");
NEED_NO_BOX(::GlobalNamespace::MultiplayerEnvironmentResizeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentResizeController*, "", "MultiplayerEnvironmentResizeController");
NEED_NO_BOX(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentResizeController_ResizeData*, "", "MultiplayerEnvironmentResizeController/ResizeData");
