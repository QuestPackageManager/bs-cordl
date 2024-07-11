#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerEnvironmentResizeController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class __MultiplayerEnvironmentResizeController__ResizeData;
}
namespace GlobalNamespace {
struct __MultiplayerEnvironmentResizeController__ResizeType;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerEnvironmentResizeController__ResizeType;
}
namespace GlobalNamespace {
class MultiplayerEnvironmentResizeController;
}
namespace GlobalNamespace {
class __MultiplayerEnvironmentResizeController__ResizeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerEnvironmentResizeController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData);
// Type: ::ResizeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerEnvironmentResizeController::ResizeType
struct CORDL_TYPE __MultiplayerEnvironmentResizeController__ResizeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerEnvironmentResizeController__ResizeType_Unwrapped
  enum struct ____MultiplayerEnvironmentResizeController__ResizeType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Position = static_cast<int32_t>(0x1),
    __E_Length = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerEnvironmentResizeController__ResizeType_Unwrapped() const noexcept {
    return static_cast<____MultiplayerEnvironmentResizeController__ResizeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerEnvironmentResizeController__ResizeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerEnvironmentResizeController__ResizeType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Length value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const Length;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const None;

  /// @brief Field Position value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const Position;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ResizeData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerEnvironmentResizeController::ResizeData*
class CORDL_TYPE __MultiplayerEnvironmentResizeController__ResizeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lights, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lights,
                      put = __cordl_internal_set__lights))::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> _lights;

  /// @brief Field _offset, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__offset, put = __cordl_internal_set__offset)) float_t _offset;

  /// @brief Field _otherTransforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__otherTransforms,
                      put = __cordl_internal_set__otherTransforms))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> _otherTransforms;

  /// @brief Field _resizeType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__resizeType, put = __cordl_internal_set__resizeType))::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType _resizeType;

  __declspec(property(get = get_lights))::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> lights;

  __declspec(property(get = get_offset)) float_t offset;

  __declspec(property(get = get_otherTransforms))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> otherTransforms;

  __declspec(property(get = get_resizeType))::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType resizeType;

  static inline ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const& __cordl_internal_get__lights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>& __cordl_internal_get__lights();

  constexpr float_t const& __cordl_internal_get__offset() const;

  constexpr float_t& __cordl_internal_get__offset();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__otherTransforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__otherTransforms();

  constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const& __cordl_internal_get__resizeType() const;

  constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType& __cordl_internal_get__resizeType();

  constexpr void __cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value);

  constexpr void __cordl_internal_set__offset(float_t value);

  constexpr void __cordl_internal_set__otherTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set__resizeType(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType value);

  /// @brief Method .ctor, addr 0x2739e60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lights, addr 0x2739e50, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> get_lights();

  /// @brief Method get_offset, addr 0x2739e48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_offset();

  /// @brief Method get_otherTransforms, addr 0x2739e58, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> get_otherTransforms();

  /// @brief Method get_resizeType, addr 0x2739e40, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType get_resizeType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerEnvironmentResizeController__ResizeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerEnvironmentResizeController__ResizeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerEnvironmentResizeController__ResizeData(__MultiplayerEnvironmentResizeController__ResizeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerEnvironmentResizeController__ResizeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerEnvironmentResizeController__ResizeData(__MultiplayerEnvironmentResizeController__ResizeData const&) = delete;

  /// @brief Field _resizeType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType ____resizeType;

  /// @brief Field _offset, offset: 0x14, size: 0x4, def value: None
  float_t ____offset;

  /// @brief Field _lights, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____lights;

  /// @brief Field _otherTransforms, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____otherTransforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData, ____resizeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData, ____offset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData, ____lights) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData, ____otherTransforms) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerEnvironmentResizeController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 67, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerEnvironmentResizeController*
class CORDL_TYPE MultiplayerEnvironmentResizeController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ResizeData = ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData;

  using ResizeType = ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType;

  /// @brief Field _beatmapObjectSpawnCenter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnCenter,
                      put = __cordl_internal_set__beatmapObjectSpawnCenter))::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> _beatmapObjectSpawnCenter;

  /// @brief Field _centerResizeController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__centerResizeController,
                      put = __cordl_internal_set__centerResizeController))::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> _centerResizeController;

  /// @brief Field _edgeDistanceFromCenterFound, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__edgeDistanceFromCenterFound, put = __cordl_internal_set__edgeDistanceFromCenterFound)) bool _edgeDistanceFromCenterFound;

  /// @brief Field _isResizingFinished, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isResizingFinished, put = __cordl_internal_set__isResizingFinished)) bool _isResizingFinished;

  /// @brief Field _platformEnd, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platformEnd, put = __cordl_internal_set__platformEnd))::UnityW<::UnityEngine::Transform> _platformEnd;

  /// @brief Field _resizeData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__resizeData,
                      put = __cordl_internal_set__resizeData))::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,
                                                                       ::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*> _resizeData;

  /// @brief Field _spawnCenterDistanceFound, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get__spawnCenterDistanceFound, put = __cordl_internal_set__spawnCenterDistanceFound)) bool _spawnCenterDistanceFound;

  __declspec(property(get = get_isResizingFinished)) bool isResizingFinished;

  /// @brief Field resizingDidFinishEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_resizingDidFinishEvent, put = __cordl_internal_set_resizingDidFinishEvent))::System::Action* resizingDidFinishEvent;

  /// @brief Method HandleEdgeDistanceFromCenterWasCalculated, addr 0x2739ab8, size 0x18, virtual false, abstract: false, final false
  inline void HandleEdgeDistanceFromCenterWasCalculated(float_t edgeDistanceFromCenter);

  /// @brief Method HandleSpawnCenterDistanceWasFound, addr 0x2739ad0, size 0x18, virtual false, abstract: false, final false
  inline void HandleSpawnCenterDistanceWasFound(float_t distance);

  static inline ::GlobalNamespace::MultiplayerEnvironmentResizeController* New_ctor();

  /// @brief Method OnDestroy, addr 0x2739ae8, size 0x150, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Resize, addr 0x2739c50, size 0x1e8, virtual false, abstract: false, final false
  inline void Resize();

  /// @brief Method Start, addr 0x273997c, size 0x13c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryResize, addr 0x2739c38, size 0x18, virtual false, abstract: false, final false
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

  constexpr ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*, ::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*> const&
  __cordl_internal_get__resizeData() const;

  constexpr ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*, ::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>&
  __cordl_internal_get__resizeData();

  constexpr bool const& __cordl_internal_get__spawnCenterDistanceFound() const;

  constexpr bool& __cordl_internal_get__spawnCenterDistanceFound();

  constexpr ::System::Action*& __cordl_internal_get_resizingDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_resizingDidFinishEvent() const;

  constexpr void __cordl_internal_set__beatmapObjectSpawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> value);

  constexpr void __cordl_internal_set__centerResizeController(::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> value);

  constexpr void __cordl_internal_set__edgeDistanceFromCenterFound(bool value);

  constexpr void __cordl_internal_set__isResizingFinished(bool value);

  constexpr void __cordl_internal_set__platformEnd(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__resizeData(
      ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*, ::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*> value);

  constexpr void __cordl_internal_set__spawnCenterDistanceFound(bool value);

  constexpr void __cordl_internal_set_resizingDidFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x2739e38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_resizingDidFinishEvent, addr 0x2739844, size 0x9c, virtual false, abstract: false, final false
  inline void add_resizingDidFinishEvent(::System::Action* value);

  /// @brief Method get_isResizingFinished, addr 0x273983c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isResizingFinished();

  /// @brief Method remove_resizingDidFinishEvent, addr 0x27398e0, size 0x9c, virtual false, abstract: false, final false
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

  /// @brief Field _platformEnd, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____platformEnd;

  /// @brief Field _resizeData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*, ::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*> ____resizeData;

  /// @brief Field _centerResizeController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> ____centerResizeController;

  /// @brief Field _beatmapObjectSpawnCenter, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> ____beatmapObjectSpawnCenter;

  /// @brief Field resizingDidFinishEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___resizingDidFinishEvent;

  /// @brief Field _isResizingFinished, offset: 0x40, size: 0x1, def value: None
  bool ____isResizingFinished;

  /// @brief Field _edgeDistanceFromCenterFound, offset: 0x41, size: 0x1, def value: None
  bool ____edgeDistanceFromCenterFound;

  /// @brief Field _spawnCenterDistanceFound, offset: 0x42, size: 0x1, def value: None
  bool ____spawnCenterDistanceFound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerEnvironmentResizeController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____platformEnd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____resizeData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____centerResizeController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____beatmapObjectSpawnCenter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ___resizingDidFinishEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____isResizingFinished) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____edgeDistanceFromCenterFound) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerEnvironmentResizeController, ____spawnCenterDistanceFound) == 0x42, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, "", "MultiplayerEnvironmentResizeController/ResizeType");
NEED_NO_BOX(::GlobalNamespace::MultiplayerEnvironmentResizeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentResizeController*, "", "MultiplayerEnvironmentResizeController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*, "", "MultiplayerEnvironmentResizeController/ResizeData");
