#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteLineConnectionController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteLineConnectionController)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class __NoteLineConnectionController__Pool;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteLineConnectionController;
}
namespace GlobalNamespace {
class __NoteLineConnectionController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteLineConnectionController);
MARK_REF_PTR_T(::GlobalNamespace::__NoteLineConnectionController__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteLineConnectionController::Pool*
class CORDL_TYPE __NoteLineConnectionController__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__NoteLineConnectionController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x2622c24, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteLineConnectionController__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NoteLineConnectionController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NoteLineConnectionController__Pool(__NoteLineConnectionController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NoteLineConnectionController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NoteLineConnectionController__Pool(__NoteLineConnectionController__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteLineConnectionController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteLineConnectionController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 125, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteLineConnectionController*
class CORDL_TYPE NoteLineConnectionController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__NoteLineConnectionController__Pool;

  /// @brief Field _audioTimeSyncController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController,
                      put = __cordl_internal_set__audioTimeSyncController))::UnityW<::GlobalNamespace::AudioTimeSyncController> _audioTimeSyncController;

  /// @brief Field _color0, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__color0, put = __cordl_internal_set__color0))::UnityEngine::Color _color0;

  /// @brief Field _color1, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__color1, put = __cordl_internal_set__color1))::UnityEngine::Color _color1;

  /// @brief Field _colorManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _didFinish, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get__didFinish, put = __cordl_internal_set__didFinish)) bool _didFinish;

  /// @brief Field _fadeOutEndDistance, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutEndDistance, put = __cordl_internal_set__fadeOutEndDistance)) float_t _fadeOutEndDistance;

  /// @brief Field _fadeOutStartDistance, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutStartDistance, put = __cordl_internal_set__fadeOutStartDistance)) float_t _fadeOutStartDistance;

  /// @brief Field _lineRenderer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lineRenderer, put = __cordl_internal_set__lineRenderer))::UnityW<::UnityEngine::LineRenderer> _lineRenderer;

  /// @brief Field _noteController0, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__noteController0, put = __cordl_internal_set__noteController0))::UnityW<::GlobalNamespace::NoteController> _noteController0;

  /// @brief Field _noteController1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__noteController1, put = __cordl_internal_set__noteController1))::UnityW<::GlobalNamespace::NoteController> _noteController1;

  /// @brief Field _noteTime, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__noteTime, put = __cordl_internal_set__noteTime)) float_t _noteTime;

  /// @brief Field _playerTransforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms))::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field didFinishEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent))::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>* didFinishEvent;

  static inline ::GlobalNamespace::NoteLineConnectionController* New_ctor();

  /// @brief Method Setup, addr 0x2622958, size 0xa4, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::NoteController* noteController0, ::GlobalNamespace::NoteController* noteController1, float_t fadeOutStartDistance, float_t fadeOutEndDistance, float_t noteTime);

  /// @brief Method Update, addr 0x2622bb8, size 0x64, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePositionsAndColors, addr 0x26229fc, size 0x1bc, virtual false, abstract: false, final false
  inline void UpdatePositionsAndColors();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color1();

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr bool const& __cordl_internal_get__didFinish() const;

  constexpr bool& __cordl_internal_get__didFinish();

  constexpr float_t const& __cordl_internal_get__fadeOutEndDistance() const;

  constexpr float_t& __cordl_internal_get__fadeOutEndDistance();

  constexpr float_t const& __cordl_internal_get__fadeOutStartDistance() const;

  constexpr float_t& __cordl_internal_get__fadeOutStartDistance();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__lineRenderer() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__lineRenderer();

  constexpr ::UnityW<::GlobalNamespace::NoteController> const& __cordl_internal_get__noteController0() const;

  constexpr ::UnityW<::GlobalNamespace::NoteController>& __cordl_internal_get__noteController0();

  constexpr ::UnityW<::GlobalNamespace::NoteController> const& __cordl_internal_get__noteController1() const;

  constexpr ::UnityW<::GlobalNamespace::NoteController>& __cordl_internal_get__noteController1();

  constexpr float_t const& __cordl_internal_get__noteTime() const;

  constexpr float_t& __cordl_internal_get__noteTime();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__color0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__color1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__didFinish(bool value);

  constexpr void __cordl_internal_set__fadeOutEndDistance(float_t value);

  constexpr void __cordl_internal_set__fadeOutStartDistance(float_t value);

  constexpr void __cordl_internal_set__lineRenderer(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set__noteController0(::UnityW<::GlobalNamespace::NoteController> value);

  constexpr void __cordl_internal_set__noteController1(::UnityW<::GlobalNamespace::NoteController> value);

  constexpr void __cordl_internal_set__noteTime(float_t value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>* value);

  /// @brief Method .ctor, addr 0x2622c1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x26227f8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>* value);

  /// @brief Method remove_didFinishEvent, addr 0x26228a8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteLineConnectionController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteLineConnectionController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteLineConnectionController(NoteLineConnectionController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteLineConnectionController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteLineConnectionController(NoteLineConnectionController const&) = delete;

  /// @brief Field _lineRenderer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ____lineRenderer;

  /// @brief Field _playerTransforms, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _audioTimeSyncController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _colorManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field didFinishEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>* ___didFinishEvent;

  /// @brief Field _noteController0, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteController> ____noteController0;

  /// @brief Field _noteController1, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteController> ____noteController1;

  /// @brief Field _color0, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____color0;

  /// @brief Field _color1, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____color1;

  /// @brief Field _fadeOutStartDistance, offset: 0x70, size: 0x4, def value: None
  float_t ____fadeOutStartDistance;

  /// @brief Field _fadeOutEndDistance, offset: 0x74, size: 0x4, def value: None
  float_t ____fadeOutEndDistance;

  /// @brief Field _noteTime, offset: 0x78, size: 0x4, def value: None
  float_t ____noteTime;

  /// @brief Field _didFinish, offset: 0x7c, size: 0x1, def value: None
  bool ____didFinish;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteLineConnectionController, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____lineRenderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____playerTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____audioTimeSyncController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____colorManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ___didFinishEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____noteController0) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____noteController1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____color0) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____color1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____fadeOutStartDistance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____fadeOutEndDistance) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____noteTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteLineConnectionController, ____didFinish) == 0x7c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteLineConnectionController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteLineConnectionController*, "", "NoteLineConnectionController");
NEED_NO_BOX(::GlobalNamespace::__NoteLineConnectionController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteLineConnectionController__Pool*, "", "NoteLineConnectionController/Pool");
