#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredSliderController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ISliderDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MirroredSliderController)
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace GlobalNamespace {
class IVariableMovementDataProvider;
}
namespace GlobalNamespace {
class MirroredSliderController_Pool;
}
namespace GlobalNamespace {
class SliderController;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredSliderController;
}
namespace GlobalNamespace {
class MirroredSliderController_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredSliderController);
MARK_REF_PTR_T(::GlobalNamespace::MirroredSliderController_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirroredSliderController/Pool
class CORDL_TYPE MirroredSliderController_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MirroredSliderController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::MirroredSliderController_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3ae8c94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredSliderController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirroredSliderController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredSliderController_Pool(MirroredSliderController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredSliderController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredSliderController_Pool(MirroredSliderController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4109 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredSliderController_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ISliderDidStartDissolvingEvent, SliderControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirroredSliderController
class CORDL_TYPE MirroredSliderController : public ::GlobalNamespace::SliderControllerBase {
public:
  // Declarations
  using Pool = ::GlobalNamespace::MirroredSliderController_Pool;

  /// @brief Field _followedSlider, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__followedSlider, put = __cordl_internal_set__followedSlider)) ::UnityW<::GlobalNamespace::SliderController> _followedSlider;

  /// @brief Field _followedTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__followedTransform, put = __cordl_internal_set__followedTransform)) ::UnityW<::UnityEngine::Transform> _followedTransform;

  /// @brief Field _jumpOffsetYProvider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__jumpOffsetYProvider, put = __cordl_internal_set__jumpOffsetYProvider)) ::GlobalNamespace::IJumpOffsetYProvider* _jumpOffsetYProvider;

  /// @brief Field _meshFilter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  /// @brief Field _transform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _variableMovementDataProvider, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::IVariableMovementDataProvider* _variableMovementDataProvider;

  __declspec(property(put = set_hide)) bool hide;

  /// @brief Convert operator to "::GlobalNamespace::ISliderDidStartDissolvingEvent"
  constexpr operator ::GlobalNamespace::ISliderDidStartDissolvingEvent*() noexcept;

  /// @brief Method Awake, addr 0x3ae89c8, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Dissolve, addr 0x3ae8c64, size 0x28, virtual false, abstract: false, final false
  inline void Dissolve(float_t duration);

  /// @brief Method HandleSliderDidStartDissolving, addr 0x3ae8c3c, size 0x28, virtual true, abstract: false, final true
  inline void HandleSliderDidStartDissolving(::GlobalNamespace::SliderController* sliderController, float_t duration);

  /// @brief Method Mirror, addr 0x3ae23ac, size 0x180, virtual false, abstract: false, final false
  inline void Mirror(::GlobalNamespace::SliderController* sliderController);

  static inline ::GlobalNamespace::MirroredSliderController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ae8b44, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RemoveListeners, addr 0x3ae8b48, size 0xf4, virtual false, abstract: false, final false
  inline void RemoveListeners();

  /// @brief Method Update, addr 0x3ae89e4, size 0xb0, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateMaterialPropertyBlock, addr 0x3ae8a94, size 0xb0, virtual false, abstract: false, final false
  inline void UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump);

  constexpr ::UnityW<::GlobalNamespace::SliderController> const& __cordl_internal_get__followedSlider() const;

  constexpr ::UnityW<::GlobalNamespace::SliderController>& __cordl_internal_get__followedSlider();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__followedTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__followedTransform();

  constexpr ::GlobalNamespace::IJumpOffsetYProvider* const& __cordl_internal_get__jumpOffsetYProvider() const;

  constexpr ::GlobalNamespace::IJumpOffsetYProvider*& __cordl_internal_get__jumpOffsetYProvider();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::IVariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr void __cordl_internal_set__followedSlider(::UnityW<::GlobalNamespace::SliderController> value);

  constexpr void __cordl_internal_set__followedTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value);

  constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value);

  /// @brief Method .ctor, addr 0x3ae8c8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::ISliderDidStartDissolvingEvent"
  constexpr ::GlobalNamespace::ISliderDidStartDissolvingEvent* i___GlobalNamespace__ISliderDidStartDissolvingEvent() noexcept;

  /// @brief Method set_hide, addr 0x3ae2d10, size 0x2c, virtual false, abstract: false, final false
  inline void set_hide(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredSliderController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirroredSliderController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredSliderController(MirroredSliderController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredSliderController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredSliderController(MirroredSliderController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4110 };

  /// @brief Field _meshFilter, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  /// @brief Field _jumpOffsetYProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IJumpOffsetYProvider* ____jumpOffsetYProvider;

  /// @brief Field _variableMovementDataProvider, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IVariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _followedSlider, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderController> ____followedSlider;

  /// @brief Field _transform, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _followedTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____followedTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____meshFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____jumpOffsetYProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____variableMovementDataProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____followedSlider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____transform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____followedTransform) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredSliderController, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredSliderController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredSliderController*, "", "MirroredSliderController");
NEED_NO_BOX(::GlobalNamespace::MirroredSliderController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredSliderController_Pool*, "", "MirroredSliderController/Pool");
