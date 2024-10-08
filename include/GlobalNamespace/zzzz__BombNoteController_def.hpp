#pragma once
// IWYU pragma private; include "GlobalNamespace/BombNoteController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BombNoteController)
namespace GlobalNamespace {
class CuttableBySaber;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class __BombNoteController__Pool;
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
class BombNoteController;
}
namespace GlobalNamespace {
class __BombNoteController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BombNoteController);
MARK_REF_PTR_T(::GlobalNamespace::__BombNoteController__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BombNoteController::Pool*
class CORDL_TYPE __BombNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::BombNoteController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BombNoteController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3a78790, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BombNoteController__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BombNoteController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BombNoteController__Pool(__BombNoteController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BombNoteController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BombNoteController__Pool(__BombNoteController__Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4073 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BombNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BombNoteController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BombNoteController*
class CORDL_TYPE BombNoteController : public ::GlobalNamespace::NoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__BombNoteController__Pool;

  /// @brief Field _cuttableBySaber, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__cuttableBySaber, put = __cordl_internal_set__cuttableBySaber)) ::UnityW<::GlobalNamespace::CuttableBySaber> _cuttableBySaber;

  /// @brief Field _wrapperGO, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__wrapperGO, put = __cordl_internal_set__wrapperGO)) ::UnityW<::UnityEngine::GameObject> _wrapperGO;

  /// @brief Method Awake, addr 0x3a77898, size 0xf0, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleDidPassHalfJump, addr 0x3a78024, size 0x24, virtual false, abstract: false, final false
  inline void HandleDidPassHalfJump();

  /// @brief Method HandleWasCutBySaber, addr 0x3a78048, size 0x26c, virtual false, abstract: false, final false
  inline void HandleWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HiddenStateDidChange, addr 0x3a78504, size 0x24, virtual true, abstract: false, final false
  inline void HiddenStateDidChange(bool hide);

  /// @brief Method Init, addr 0x3a77474, size 0xd0, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                   float_t moveDuration, float_t jumpDuration, float_t jumpGravity);

  static inline ::GlobalNamespace::BombNoteController* New_ctor();

  /// @brief Method NoteDidPassMissedMarker, addr 0x3a77e28, size 0x30, virtual true, abstract: false, final false
  inline void NoteDidPassMissedMarker();

  /// @brief Method NoteDidStartDissolving, addr 0x3a784e0, size 0x24, virtual true, abstract: false, final false
  inline void NoteDidStartDissolving();

  /// @brief Method OnDestroy, addr 0x3a77b98, size 0xd8, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x3a78528, size 0x10, virtual true, abstract: false, final false
  inline void Pause(bool pause);

  constexpr ::UnityW<::GlobalNamespace::CuttableBySaber> const& __cordl_internal_get__cuttableBySaber() const;

  constexpr ::UnityW<::GlobalNamespace::CuttableBySaber>& __cordl_internal_get__cuttableBySaber();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__wrapperGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__wrapperGO();

  constexpr void __cordl_internal_set__cuttableBySaber(::UnityW<::GlobalNamespace::CuttableBySaber> value);

  constexpr void __cordl_internal_set__wrapperGO(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x3a78538, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombNoteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BombNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombNoteController(BombNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombNoteController(BombNoteController const&) = delete;

  /// @brief Field _cuttableBySaber, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CuttableBySaber> ____cuttableBySaber;

  /// @brief Field _wrapperGO, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____wrapperGO;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4074 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BombNoteController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BombNoteController, ____cuttableBySaber) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BombNoteController, ____wrapperGO) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombNoteController*, "", "BombNoteController");
NEED_NO_BOX(::GlobalNamespace::__BombNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BombNoteController__Pool*, "", "BombNoteController/Pool");
