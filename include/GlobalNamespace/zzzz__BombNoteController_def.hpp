#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BombNoteController)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class CuttableBySaber;
}
namespace UnityEngine {
struct Quaternion;
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
// Type: ::BombNoteController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4761))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4736))
// CS Name: ::BombNoteController*
class CORDL_TYPE BombNoteController : public ::GlobalNamespace::NoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__BombNoteController__Pool;

  /// @brief Field _cuttableBySaber, offset 0x80, size 0x8
  __declspec(property(get = __get__cuttableBySaber, put = __set__cuttableBySaber))::GlobalNamespace::CuttableBySaber* _cuttableBySaber;

  /// @brief Field _wrapperGO, offset 0x88, size 0x8
  __declspec(property(get = __get__wrapperGO, put = __set__wrapperGO))::UnityEngine::GameObject* _wrapperGO;

  constexpr ::GlobalNamespace::CuttableBySaber*& __get__cuttableBySaber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CuttableBySaber*> const& __get__cuttableBySaber() const;

  constexpr void __set__cuttableBySaber(::GlobalNamespace::CuttableBySaber* value);

  constexpr ::UnityEngine::GameObject*& __get__wrapperGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__wrapperGO() const;

  constexpr void __set__wrapperGO(::UnityEngine::GameObject* value);

  /// @brief Method Init addr 0x2378ab8 size 0xd0 virtual false final false
  inline void Init(::GlobalNamespace::NoteData* noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                   float_t moveDuration, float_t jumpDuration, float_t jumpGravity);

  /// @brief Method Awake addr 0x2383008 size 0xfc virtual true final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2383290 size 0xdc virtual true final false
  inline void OnDestroy();

  /// @brief Method NoteDidPassMissedMarker addr 0x2383544 size 0x30 virtual true final false
  inline void NoteDidPassMissedMarker();

  /// @brief Method HandleDidPassHalfJump addr 0x2383740 size 0x24 virtual false final false
  inline void HandleDidPassHalfJump();

  /// @brief Method HandleWasCutBySaber addr 0x2383764 size 0x298 virtual false final false
  inline void HandleWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method NoteDidStartDissolving addr 0x2383bf4 size 0x24 virtual true final false
  inline void NoteDidStartDissolving();

  /// @brief Method HiddenStateDidChange addr 0x2383c18 size 0x24 virtual true final false
  inline void HiddenStateDidChange(bool hide);

  /// @brief Method Pause addr 0x2383c3c size 0x10 virtual true final false
  inline void Pause(bool pause);

  static inline ::GlobalNamespace::BombNoteController* New_ctor();

  /// @brief Method .ctor addr 0x2383c4c size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BombNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombNoteController(BombNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombNoteController(BombNoteController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombNoteController();

public:
  /// @brief Field _cuttableBySaber, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::CuttableBySaber* ____cuttableBySaber;

  /// @brief Field _wrapperGO, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____wrapperGO;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BombNoteController, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2810 }), TypeDefinitionIndex(TypeDefinitionIndex(11050)),
// TypeDefinitionIndex(TypeDefinitionIndex(4736))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4735)) CS Name: ::BombNoteController::Pool*
class CORDL_TYPE __BombNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BombNoteController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BombNoteController__Pool* New_ctor();

  /// @brief Method .ctor addr 0x2383ea8 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BombNoteController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BombNoteController__Pool(__BombNoteController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BombNoteController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BombNoteController__Pool(__BombNoteController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BombNoteController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BombNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombNoteController*, "", "BombNoteController");
NEED_NO_BOX(::GlobalNamespace::__BombNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BombNoteController__Pool*, "", "BombNoteController/Pool");
