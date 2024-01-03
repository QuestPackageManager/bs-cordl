#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameNoteController)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
namespace GlobalNamespace {
template <typename T> class ICubeNoteControllerInitializable_1;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
class INoteMovementProvider;
}
namespace GlobalNamespace {
class INoteVisualModifierTypeProvider;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class __GameNoteController__Pool;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GameNoteController;
}
namespace GlobalNamespace {
class __GameNoteController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameNoteController);
MARK_REF_PTR_T(::GlobalNamespace::__GameNoteController__Pool);
// Type: ::GameNoteController
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 180, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4749)), TypeDefinitionIndex(TypeDefinitionIndex(4761)), TypeDefinitionIndex(TypeDefinitionIndex(14757))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4744))
// CS Name: ::GameNoteController*
class CORDL_TYPE GameNoteController : public ::GlobalNamespace::NoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__GameNoteController__Pool;

  /// @brief Field _bigCuttableBySaberList, offset 0x80, size 0x8
  __declspec(property(get = __get__bigCuttableBySaberList,
                      put = __set__bigCuttableBySaberList))::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> _bigCuttableBySaberList;

  /// @brief Field _smallCuttableBySaberList, offset 0x88, size 0x8
  __declspec(property(get = __get__smallCuttableBySaberList,
                      put = __set__smallCuttableBySaberList))::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> _smallCuttableBySaberList;

  /// @brief Field _wrapperGO, offset 0x90, size 0x8
  __declspec(property(get = __get__wrapperGO, put = __set__wrapperGO))::UnityEngine::GameObject* _wrapperGO;

  /// @brief Field _audioTimeSyncController, offset 0x98, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field cubeNoteControllerDidInitEvent, offset 0xa0, size 0x8
  __declspec(property(get = __get_cubeNoteControllerDidInitEvent,
                      put = __set_cubeNoteControllerDidInitEvent))::System::Action_1<::GlobalNamespace::GameNoteController*>* cubeNoteControllerDidInitEvent;

  /// @brief Field _noteVisualModifierType, offset 0xa8, size 0x4
  __declspec(property(get = __get__noteVisualModifierType, put = __set__noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType _noteVisualModifierType;

  /// @brief Field _gameplayType, offset 0xac, size 0x4
  __declspec(property(get = __get__gameplayType, put = __set__gameplayType))::GlobalNamespace::__NoteData__GameplayType _gameplayType;

  /// @brief Field _cutAngleTolerance, offset 0xb0, size 0x4
  __declspec(property(get = __get__cutAngleTolerance, put = __set__cutAngleTolerance)) float_t _cutAngleTolerance;

  __declspec(property(get = get_noteMovement))::GlobalNamespace::NoteMovement* noteMovement;

  __declspec(property(get = get_noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  __declspec(property(get = get_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  /// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>"
  constexpr operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>"
  constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>*
  i___GlobalNamespace__ICubeNoteControllerInitializable_1___GlobalNamespace__GameNoteController__() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
  constexpr operator ::GlobalNamespace::INoteMovementProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
  constexpr ::GlobalNamespace::INoteMovementProvider* i___GlobalNamespace__INoteMovementProvider() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IGameNoteMirrorable"
  constexpr operator ::GlobalNamespace::IGameNoteMirrorable*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IGameNoteMirrorable"
  constexpr ::GlobalNamespace::IGameNoteMirrorable* i___GlobalNamespace__IGameNoteMirrorable() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
  constexpr operator ::GlobalNamespace::INoteMirrorable*() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMirrorable"
  constexpr ::GlobalNamespace::INoteMirrorable* i___GlobalNamespace__INoteMirrorable() noexcept;

  constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*>& __get__bigCuttableBySaberList();

  constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> const& __get__bigCuttableBySaberList() const;

  constexpr void __set__bigCuttableBySaberList(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*>& __get__smallCuttableBySaberList();

  constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> const& __get__smallCuttableBySaberList() const;

  constexpr void __set__smallCuttableBySaberList(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> value);

  constexpr ::UnityEngine::GameObject*& __get__wrapperGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__wrapperGO() const;

  constexpr void __set__wrapperGO(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::System::Action_1<::GlobalNamespace::GameNoteController*>*& __get_cubeNoteControllerDidInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::GameNoteController*>*> const& __get_cubeNoteControllerDidInitEvent() const;

  constexpr void __set_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::GameNoteController*>* value);

  constexpr ::GlobalNamespace::NoteVisualModifierType& __get__noteVisualModifierType();

  constexpr ::GlobalNamespace::NoteVisualModifierType const& __get__noteVisualModifierType() const;

  constexpr void __set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value);

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __get__gameplayType();

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __get__gameplayType() const;

  constexpr void __set__gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  constexpr float_t& __get__cutAngleTolerance();

  constexpr float_t const& __get__cutAngleTolerance() const;

  constexpr void __set__cutAngleTolerance(float_t value);

  /// @brief Method add_cubeNoteControllerDidInitEvent, addr 0x23854dc, size 0xb0, virtual true, abstract: false, final true
  inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::GameNoteController*>* value);

  /// @brief Method remove_cubeNoteControllerDidInitEvent, addr 0x238558c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::GameNoteController*>* value);

  /// @brief Method get_noteMovement, addr 0x238563c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteMovement* get_noteMovement();

  /// @brief Method get_noteVisualModifierType, addr 0x2385644, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Method get_gameplayType, addr 0x238564c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType();

  /// @brief Method Init, addr 0x2378648, size 0x2b8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                   float_t moveDuration, float_t jumpDuration, float_t jumpGravity, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t cutAngleTolerance, float_t uniformScale);

  /// @brief Method Awake, addr 0x2385654, size 0x160, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x23857b4, size 0x1cc, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method NoteDidPassMissedMarker, addr 0x2385980, size 0xbc, virtual true, abstract: false, final false
  inline void NoteDidPassMissedMarker();

  /// @brief Method NoteDidStartDissolving, addr 0x2385a3c, size 0xb8, virtual true, abstract: false, final false
  inline void NoteDidStartDissolving();

  /// @brief Method HandleBigWasCutBySaber, addr 0x2385af4, size 0x18, virtual false, abstract: false, final false
  inline void HandleBigWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HandleSmallWasCutBySaber, addr 0x2385fdc, size 0x18, virtual false, abstract: false, final false
  inline void HandleSmallWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HandleCut, addr 0x2385b0c, size 0x4d0, virtual false, abstract: false, final false
  inline void HandleCut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec, bool allowBadCut);

  /// @brief Method NoteDidStartJump, addr 0x2385ff4, size 0xc0, virtual true, abstract: false, final false
  inline void NoteDidStartJump();

  /// @brief Method HiddenStateDidChange, addr 0x23860b4, size 0x24, virtual true, abstract: false, final false
  inline void HiddenStateDidChange(bool hide);

  /// @brief Method Pause, addr 0x23860d8, size 0x10, virtual true, abstract: false, final false
  inline void Pause(bool pause);

  static inline ::GlobalNamespace::GameNoteController* New_ctor();

  /// @brief Method .ctor, addr 0x23860e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameNoteController(GameNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameNoteController(GameNoteController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameNoteController();

public:
  /// @brief Field _bigCuttableBySaberList, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> ____bigCuttableBySaberList;

  /// @brief Field _smallCuttableBySaberList, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> ____smallCuttableBySaberList;

  /// @brief Field _wrapperGO, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____wrapperGO;

  /// @brief Field _audioTimeSyncController, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field cubeNoteControllerDidInitEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::GameNoteController*>* ___cubeNoteControllerDidInitEvent;

  /// @brief Field _noteVisualModifierType, offset: 0xa8, size: 0x4, def value: None
  ::GlobalNamespace::NoteVisualModifierType ____noteVisualModifierType;

  /// @brief Field _gameplayType, offset: 0xac, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__GameplayType ____gameplayType;

  /// @brief Field _cutAngleTolerance, offset: 0xb0, size: 0x4, def value: None
  float_t ____cutAngleTolerance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameNoteController, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____bigCuttableBySaberList) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____smallCuttableBySaberList) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____wrapperGO) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____audioTimeSyncController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ___cubeNoteControllerDidInitEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____noteVisualModifierType) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____gameplayType) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameNoteController, ____cutAngleTolerance) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 310 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4744))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4743)) CS Name: ::GameNoteController::Pool*
class CORDL_TYPE __GameNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::GameNoteController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameNoteController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x23860ec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameNoteController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameNoteController__Pool(__GameNoteController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameNoteController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameNoteController__Pool(__GameNoteController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameNoteController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameNoteController*, "", "GameNoteController");
NEED_NO_BOX(::GlobalNamespace::__GameNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameNoteController__Pool*, "", "GameNoteController/Pool");
