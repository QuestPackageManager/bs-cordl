#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderMovement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderMovement)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class IVariableMovementDataProvider;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct SliderSpawnData;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMovement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderMovement);
// Dependencies SliderSpawnData, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderMovement
class CORDL_TYPE SliderMovement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _headDidMovePastCutMarkReported, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__headDidMovePastCutMarkReported, put = __cordl_internal_set__headDidMovePastCutMarkReported)) bool _headDidMovePastCutMarkReported;

  /// @brief Field _localPosition, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__localPosition, put = __cordl_internal_set__localPosition)) ::UnityEngine::Vector3 _localPosition;

  /// @brief Field _movementEndReported, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__movementEndReported, put = __cordl_internal_set__movementEndReported)) bool _movementEndReported;

  /// @brief Field _sliderData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderData, put = __cordl_internal_set__sliderData)) ::GlobalNamespace::SliderData* _sliderData;

  /// @brief Field _sliderSpawnData, offset 0x78, size 0x20
  __declspec(property(get = __cordl_internal_get__sliderSpawnData, put = __cordl_internal_set__sliderSpawnData)) ::GlobalNamespace::SliderSpawnData _sliderSpawnData;

  /// @brief Field _tailDidMovePastCutMarkReported, offset 0xa2, size 0x1
  __declspec(property(get = __cordl_internal_get__tailDidMovePastCutMarkReported, put = __cordl_internal_set__tailDidMovePastCutMarkReported)) bool _tailDidMovePastCutMarkReported;

  /// @brief Field _timeSinceHeadNoteJump, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__timeSinceHeadNoteJump, put = __cordl_internal_set__timeSinceHeadNoteJump)) float_t _timeSinceHeadNoteJump;

  /// @brief Field _transform, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _variableMovementDataProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::IVariableMovementDataProvider* _variableMovementDataProvider;

  /// @brief Field _worldRotation, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get__worldRotation, put = __cordl_internal_set__worldRotation)) ::UnityEngine::Quaternion _worldRotation;

  /// @brief Field headDidMovePastCutMarkEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_headDidMovePastCutMarkEvent, put = __cordl_internal_set_headDidMovePastCutMarkEvent)) ::System::Action* headDidMovePastCutMarkEvent;

  /// @brief Field movementDidFinishEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_movementDidFinishEvent, put = __cordl_internal_set_movementDidFinishEvent)) ::System::Action* movementDidFinishEvent;

  /// @brief Field movementDidMoveEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_movementDidMoveEvent, put = __cordl_internal_set_movementDidMoveEvent)) ::System::Action_1<float_t>* movementDidMoveEvent;

  /// @brief Field tailDidMovePastCutMarkEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_tailDidMovePastCutMarkEvent, put = __cordl_internal_set_tailDidMovePastCutMarkEvent)) ::System::Action* tailDidMovePastCutMarkEvent;

  __declspec(property(get = get_timeSinceHeadNoteJump)) float_t timeSinceHeadNoteJump;

  /// @brief Method Init, addr 0x3b78b30, size 0x118, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::SliderData* sliderData, ::ByRef<::GlobalNamespace::SliderSpawnData> sliderSpawnData);

  /// @brief Method ManualUpdate, addr 0x3b7a308, size 0x480, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::SliderMovement* New_ctor();

  /// @brief Method StartMovement, addr 0x3b796ec, size 0x28, virtual false, abstract: false, final false
  inline void StartMovement();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSyncController();

  constexpr bool const& __cordl_internal_get__headDidMovePastCutMarkReported() const;

  constexpr bool& __cordl_internal_get__headDidMovePastCutMarkReported();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPosition();

  constexpr bool const& __cordl_internal_get__movementEndReported() const;

  constexpr bool& __cordl_internal_get__movementEndReported();

  constexpr ::GlobalNamespace::SliderData* const& __cordl_internal_get__sliderData() const;

  constexpr ::GlobalNamespace::SliderData*& __cordl_internal_get__sliderData();

  constexpr ::GlobalNamespace::SliderSpawnData const& __cordl_internal_get__sliderSpawnData() const;

  constexpr ::GlobalNamespace::SliderSpawnData& __cordl_internal_get__sliderSpawnData();

  constexpr bool const& __cordl_internal_get__tailDidMovePastCutMarkReported() const;

  constexpr bool& __cordl_internal_get__tailDidMovePastCutMarkReported();

  constexpr float_t const& __cordl_internal_get__timeSinceHeadNoteJump() const;

  constexpr float_t& __cordl_internal_get__timeSinceHeadNoteJump();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::IVariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__worldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__worldRotation();

  constexpr ::System::Action* const& __cordl_internal_get_headDidMovePastCutMarkEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_headDidMovePastCutMarkEvent();

  constexpr ::System::Action* const& __cordl_internal_get_movementDidFinishEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_movementDidFinishEvent();

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_movementDidMoveEvent() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_movementDidMoveEvent();

  constexpr ::System::Action* const& __cordl_internal_get_tailDidMovePastCutMarkEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_tailDidMovePastCutMarkEvent();

  constexpr void __cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__headDidMovePastCutMarkReported(bool value);

  constexpr void __cordl_internal_set__localPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__movementEndReported(bool value);

  constexpr void __cordl_internal_set__sliderData(::GlobalNamespace::SliderData* value);

  constexpr void __cordl_internal_set__sliderSpawnData(::GlobalNamespace::SliderSpawnData value);

  constexpr void __cordl_internal_set__tailDidMovePastCutMarkReported(bool value);

  constexpr void __cordl_internal_set__timeSinceHeadNoteJump(float_t value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value);

  constexpr void __cordl_internal_set__worldRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_headDidMovePastCutMarkEvent(::System::Action* value);

  constexpr void __cordl_internal_set_movementDidFinishEvent(::System::Action* value);

  constexpr void __cordl_internal_set_movementDidMoveEvent(::System::Action_1<float_t>* value);

  constexpr void __cordl_internal_set_tailDidMovePastCutMarkEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3b7e074, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_headDidMovePastCutMarkEvent, addr 0x3b79900, size 0x9c, virtual false, abstract: false, final false
  inline void add_headDidMovePastCutMarkEvent(::System::Action* value);

  /// @brief Method add_movementDidFinishEvent, addr 0x3b79864, size 0x9c, virtual false, abstract: false, final false
  inline void add_movementDidFinishEvent(::System::Action* value);

  /// @brief Method add_movementDidMoveEvent, addr 0x3b7df0c, size 0xb0, virtual false, abstract: false, final false
  inline void add_movementDidMoveEvent(::System::Action_1<float_t>* value);

  /// @brief Method add_tailDidMovePastCutMarkEvent, addr 0x3b7999c, size 0x9c, virtual false, abstract: false, final false
  inline void add_tailDidMovePastCutMarkEvent(::System::Action* value);

  /// @brief Method get_timeSinceHeadNoteJump, addr 0x3b7e06c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeSinceHeadNoteJump();

  /// @brief Method remove_headDidMovePastCutMarkEvent, addr 0x3b79f44, size 0x9c, virtual false, abstract: false, final false
  inline void remove_headDidMovePastCutMarkEvent(::System::Action* value);

  /// @brief Method remove_movementDidFinishEvent, addr 0x3b79ea8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_movementDidFinishEvent(::System::Action* value);

  /// @brief Method remove_movementDidMoveEvent, addr 0x3b7dfbc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_movementDidMoveEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_tailDidMovePastCutMarkEvent, addr 0x3b79fe0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_tailDidMovePastCutMarkEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderMovement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderMovement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderMovement(SliderMovement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderMovement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderMovement(SliderMovement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4178 };

  /// @brief Field _audioTimeSyncController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _variableMovementDataProvider, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IVariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field movementDidFinishEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___movementDidFinishEvent;

  /// @brief Field movementDidMoveEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___movementDidMoveEvent;

  /// @brief Field headDidMovePastCutMarkEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___headDidMovePastCutMarkEvent;

  /// @brief Field tailDidMovePastCutMarkEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___tailDidMovePastCutMarkEvent;

  /// @brief Field _localPosition, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPosition;

  /// @brief Field _worldRotation, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldRotation;

  /// @brief Field _sliderData, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::SliderData* ____sliderData;

  /// @brief Field _sliderSpawnData, offset: 0x78, size: 0x20, def value: None
  ::GlobalNamespace::SliderSpawnData ____sliderSpawnData;

  /// @brief Field _transform, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _movementEndReported, offset: 0xa0, size: 0x1, def value: None
  bool ____movementEndReported;

  /// @brief Field _headDidMovePastCutMarkReported, offset: 0xa1, size: 0x1, def value: None
  bool ____headDidMovePastCutMarkReported;

  /// @brief Field _tailDidMovePastCutMarkReported, offset: 0xa2, size: 0x1, def value: None
  bool ____tailDidMovePastCutMarkReported;

  /// @brief Field _timeSinceHeadNoteJump, offset: 0xa4, size: 0x4, def value: None
  float_t ____timeSinceHeadNoteJump;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderMovement, ____audioTimeSyncController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____variableMovementDataProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ___movementDidFinishEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ___movementDidMoveEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ___headDidMovePastCutMarkEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ___tailDidMovePastCutMarkEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____localPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____worldRotation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____sliderData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____sliderSpawnData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____transform) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____movementEndReported) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____headDidMovePastCutMarkReported) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____tailDidMovePastCutMarkReported) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderMovement, ____timeSinceHeadNoteJump) == 0xa4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMovement, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMovement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMovement*, "", "SliderMovement");
