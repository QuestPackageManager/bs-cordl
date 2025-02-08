#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteWaiting.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteWaiting)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class IVariableMovementDataProvider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteWaiting;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteWaiting);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteWaiting
class CORDL_TYPE NoteWaiting : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _beatTime, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__beatTime, put = __cordl_internal_set__beatTime)) float_t _beatTime;

  /// @brief Field _variableMovementDataProvider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::IVariableMovementDataProvider* _variableMovementDataProvider;

  /// @brief Field _waitingPosition, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__waitingPosition, put = __cordl_internal_set__waitingPosition)) ::UnityEngine::Vector3 _waitingPosition;

  __declspec(property(get = get_localPosition)) ::UnityEngine::Vector3 localPosition;

  /// @brief Method Init, addr 0x3af4d30, size 0x8, virtual false, abstract: false, final false
  inline void Init(float_t beatTime);

  /// @brief Method ManualUpdate, addr 0x3af4cf0, size 0x2c, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::NoteWaiting* New_ctor();

  /// @brief Method ShouldWait, addr 0x3af4b44, size 0x1ac, virtual false, abstract: false, final false
  inline bool ShouldWait();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSyncController();

  constexpr float_t const& __cordl_internal_get__beatTime() const;

  constexpr float_t& __cordl_internal_get__beatTime();

  constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::IVariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__waitingPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__waitingPosition();

  constexpr void __cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatTime(float_t value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value);

  constexpr void __cordl_internal_set__waitingPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x3af4d38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localPosition, addr 0x3af4d24, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteWaiting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteWaiting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteWaiting(NoteWaiting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteWaiting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteWaiting(NoteWaiting const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4137 };

  /// @brief Field _waitingPosition, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____waitingPosition;

  /// @brief Field _variableMovementDataProvider, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IVariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _audioTimeSyncController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _beatTime, offset: 0x40, size: 0x4, def value: None
  float_t ____beatTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteWaiting, ____waitingPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteWaiting, ____variableMovementDataProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteWaiting, ____audioTimeSyncController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteWaiting, ____beatTime) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteWaiting, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteWaiting);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteWaiting*, "", "NoteWaiting");
