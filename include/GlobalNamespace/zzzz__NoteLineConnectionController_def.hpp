#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteLineConnectionController)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class __NoteLineConnectionController__Pool;
}
namespace UnityEngine {
class LineRenderer;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class NoteController;
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
// Type: ::NoteLineConnectionController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 125, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4781))
// CS Name: ::NoteLineConnectionController*
class CORDL_TYPE NoteLineConnectionController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__NoteLineConnectionController__Pool;

  /// @brief Field _lineRenderer, offset 0x18, size 0x8
  __declspec(property(get = __get__lineRenderer, put = __set__lineRenderer))::UnityEngine::LineRenderer* _lineRenderer;

  /// @brief Field _playerTransforms, offset 0x20, size 0x8
  __declspec(property(get = __get__playerTransforms, put = __set__playerTransforms))::GlobalNamespace::PlayerTransforms* _playerTransforms;

  /// @brief Field _audioTimeSyncController, offset 0x28, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _colorManager, offset 0x30, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field didFinishEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>* didFinishEvent;

  /// @brief Field _noteController0, offset 0x40, size 0x8
  __declspec(property(get = __get__noteController0, put = __set__noteController0))::GlobalNamespace::NoteController* _noteController0;

  /// @brief Field _noteController1, offset 0x48, size 0x8
  __declspec(property(get = __get__noteController1, put = __set__noteController1))::GlobalNamespace::NoteController* _noteController1;

  /// @brief Field _color0, offset 0x50, size 0x10
  __declspec(property(get = __get__color0, put = __set__color0))::UnityEngine::Color _color0;

  /// @brief Field _color1, offset 0x60, size 0x10
  __declspec(property(get = __get__color1, put = __set__color1))::UnityEngine::Color _color1;

  /// @brief Field _fadeOutStartDistance, offset 0x70, size 0x4
  __declspec(property(get = __get__fadeOutStartDistance, put = __set__fadeOutStartDistance)) float_t _fadeOutStartDistance;

  /// @brief Field _fadeOutEndDistance, offset 0x74, size 0x4
  __declspec(property(get = __get__fadeOutEndDistance, put = __set__fadeOutEndDistance)) float_t _fadeOutEndDistance;

  /// @brief Field _noteTime, offset 0x78, size 0x4
  __declspec(property(get = __get__noteTime, put = __set__noteTime)) float_t _noteTime;

  /// @brief Field _didFinish, offset 0x7c, size 0x1
  __declspec(property(get = __get__didFinish, put = __set__didFinish)) bool _didFinish;

  constexpr ::UnityEngine::LineRenderer*& __get__lineRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> const& __get__lineRenderer() const;

  constexpr void __set__lineRenderer(::UnityEngine::LineRenderer* value);

  constexpr ::GlobalNamespace::PlayerTransforms*& __get__playerTransforms();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& __get__playerTransforms() const;

  constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>* value);

  constexpr ::GlobalNamespace::NoteController*& __get__noteController0();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> const& __get__noteController0() const;

  constexpr void __set__noteController0(::GlobalNamespace::NoteController* value);

  constexpr ::GlobalNamespace::NoteController*& __get__noteController1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> const& __get__noteController1() const;

  constexpr void __set__noteController1(::GlobalNamespace::NoteController* value);

  constexpr ::UnityEngine::Color& __get__color0();

  constexpr ::UnityEngine::Color const& __get__color0() const;

  constexpr void __set__color0(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__color1();

  constexpr ::UnityEngine::Color const& __get__color1() const;

  constexpr void __set__color1(::UnityEngine::Color value);

  constexpr float_t& __get__fadeOutStartDistance();

  constexpr float_t const& __get__fadeOutStartDistance() const;

  constexpr void __set__fadeOutStartDistance(float_t value);

  constexpr float_t& __get__fadeOutEndDistance();

  constexpr float_t const& __get__fadeOutEndDistance() const;

  constexpr void __set__fadeOutEndDistance(float_t value);

  constexpr float_t& __get__noteTime();

  constexpr float_t const& __get__noteTime() const;

  constexpr void __set__noteTime(float_t value);

  constexpr bool& __get__didFinish();

  constexpr bool const& __get__didFinish() const;

  constexpr void __set__didFinish(bool value);

  /// @brief Method add_didFinishEvent addr 0x238a3dc size 0xb0 virtual false final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>* value);

  /// @brief Method remove_didFinishEvent addr 0x238a48c size 0xb0 virtual false final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>* value);

  /// @brief Method Setup addr 0x238a53c size 0xa4 virtual false final false
  inline void Setup(::GlobalNamespace::NoteController* noteController0, ::GlobalNamespace::NoteController* noteController1, float_t fadeOutStartDistance, float_t fadeOutEndDistance, float_t noteTime);

  /// @brief Method Update addr 0x238a79c size 0x64 virtual false final false
  inline void Update();

  /// @brief Method UpdatePositionsAndColors addr 0x238a5e0 size 0x1bc virtual false final false
  inline void UpdatePositionsAndColors();

  static inline ::GlobalNamespace::NoteLineConnectionController* New_ctor();

  /// @brief Method .ctor addr 0x238a800 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteLineConnectionController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteLineConnectionController(NoteLineConnectionController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteLineConnectionController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteLineConnectionController(NoteLineConnectionController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteLineConnectionController();

public:
  /// @brief Field _lineRenderer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::LineRenderer* ____lineRenderer;

  /// @brief Field _playerTransforms, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerTransforms* ____playerTransforms;

  /// @brief Field _audioTimeSyncController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _colorManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field didFinishEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>* ___didFinishEvent;

  /// @brief Field _noteController0, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::NoteController* ____noteController0;

  /// @brief Field _noteController1, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::NoteController* ____noteController1;

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

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 366 }), TypeDefinitionIndex(TypeDefinitionIndex(4781)),
// TypeDefinitionIndex(TypeDefinitionIndex(11050))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4780)) CS Name: ::NoteLineConnectionController::Pool*
class CORDL_TYPE __NoteLineConnectionController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::NoteLineConnectionController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__NoteLineConnectionController__Pool* New_ctor();

  /// @brief Method .ctor addr 0x238a808 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NoteLineConnectionController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NoteLineConnectionController__Pool(__NoteLineConnectionController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NoteLineConnectionController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NoteLineConnectionController__Pool(__NoteLineConnectionController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteLineConnectionController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteLineConnectionController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteLineConnectionController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteLineConnectionController*, "", "NoteLineConnectionController");
NEED_NO_BOX(::GlobalNamespace::__NoteLineConnectionController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteLineConnectionController__Pool*, "", "NoteLineConnectionController/Pool");
