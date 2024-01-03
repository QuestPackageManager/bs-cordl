#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MirroredSliderController)
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class ISliderDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class __MirroredSliderController__Pool;
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
class __MirroredSliderController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredSliderController);
MARK_REF_PTR_T(::GlobalNamespace::__MirroredSliderController__Pool);
// Type: ::MirroredSliderController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4812))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4758))
// CS Name: ::MirroredSliderController*
class CORDL_TYPE MirroredSliderController : public ::GlobalNamespace::SliderControllerBase {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__MirroredSliderController__Pool;

  /// @brief Field _meshFilter, offset 0x30, size 0x8
  __declspec(property(get = __get__meshFilter, put = __set__meshFilter))::UnityEngine::MeshFilter* _meshFilter;

  /// @brief Field _beatmapObjectSpawnController, offset 0x38, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawnController, put = __set__beatmapObjectSpawnController))::GlobalNamespace::IBeatmapObjectSpawnController* _beatmapObjectSpawnController;

  /// @brief Field _followedSlider, offset 0x40, size 0x8
  __declspec(property(get = __get__followedSlider, put = __set__followedSlider))::GlobalNamespace::SliderController* _followedSlider;

  /// @brief Field _transform, offset 0x48, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _followedTransform, offset 0x50, size 0x8
  __declspec(property(get = __get__followedTransform, put = __set__followedTransform))::UnityEngine::Transform* _followedTransform;

  __declspec(property(put = set_hide)) bool hide;

  /// @brief Convert operator to "::GlobalNamespace::ISliderDidStartDissolvingEvent"
  constexpr operator ::GlobalNamespace::ISliderDidStartDissolvingEvent*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISliderDidStartDissolvingEvent"
  constexpr ::GlobalNamespace::ISliderDidStartDissolvingEvent* i___GlobalNamespace__ISliderDidStartDissolvingEvent() noexcept;

  constexpr ::UnityEngine::MeshFilter*& __get__meshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__meshFilter() const;

  constexpr void __set__meshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& __get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& __get__beatmapObjectSpawnController() const;

  constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value);

  constexpr ::GlobalNamespace::SliderController*& __get__followedSlider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderController*> const& __get__followedSlider() const;

  constexpr void __set__followedSlider(::GlobalNamespace::SliderController* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__followedTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__followedTransform() const;

  constexpr void __set__followedTransform(::UnityEngine::Transform* value);

  /// @brief Method set_hide, addr 0x23827e4, size 0x2c, virtual false, abstract: false, final false
  inline void set_hide(bool value);

  /// @brief Method Awake, addr 0x2386730, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x238674c, size 0xb0, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method OnDestroy, addr 0x238691c, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Mirror, addr 0x2381d50, size 0x20c, virtual false, abstract: false, final false
  inline void Mirror(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method UpdateMaterialPropertyBlock, addr 0x23867fc, size 0x120, virtual false, abstract: false, final false
  inline void UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump);

  /// @brief Method RemoveListeners, addr 0x2386920, size 0xf4, virtual false, abstract: false, final false
  inline void RemoveListeners();

  /// @brief Method HandleSliderDidStartDissolving, addr 0x2386a14, size 0x28, virtual true, abstract: false, final true
  inline void HandleSliderDidStartDissolving(::GlobalNamespace::SliderController* sliderController, float_t duration);

  /// @brief Method Dissolve, addr 0x2386a3c, size 0x28, virtual false, abstract: false, final false
  inline void Dissolve(float_t duration);

  static inline ::GlobalNamespace::MirroredSliderController* New_ctor();

  /// @brief Method .ctor, addr 0x2386a64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MirroredSliderController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredSliderController(MirroredSliderController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredSliderController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredSliderController(MirroredSliderController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredSliderController();

public:
  /// @brief Field _meshFilter, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____meshFilter;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawnController* ____beatmapObjectSpawnController;

  /// @brief Field _followedSlider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SliderController* ____followedSlider;

  /// @brief Field _transform, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _followedTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Transform* ____followedTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredSliderController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____meshFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____beatmapObjectSpawnController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____followedSlider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____transform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredSliderController, ____followedTransform) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4758)), TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst:
// 2817 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4757)) CS Name: ::MirroredSliderController::Pool*
class CORDL_TYPE __MirroredSliderController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MirroredSliderController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MirroredSliderController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x2386a6c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MirroredSliderController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MirroredSliderController__Pool(__MirroredSliderController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MirroredSliderController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MirroredSliderController__Pool(__MirroredSliderController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MirroredSliderController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirroredSliderController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredSliderController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredSliderController*, "", "MirroredSliderController");
NEED_NO_BOX(::GlobalNamespace::__MirroredSliderController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirroredSliderController__Pool*, "", "MirroredSliderController/Pool");
