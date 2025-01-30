#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteJumpStartScaleUp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteJumpStartScaleUp)
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class NoteJump;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpStartScaleUp;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteJumpStartScaleUp);
// Dependencies INoteControllerDidInitEvent, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteJumpStartScaleUp
class CORDL_TYPE NoteJumpStartScaleUp : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fullScaleJumpPart, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__fullScaleJumpPart, put = __cordl_internal_set__fullScaleJumpPart)) float_t _fullScaleJumpPart;

  /// @brief Field _noteController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__noteController, put = __cordl_internal_set__noteController)) ::UnityW<::GlobalNamespace::NoteController> _noteController;

  /// @brief Field _noteJump, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__noteJump, put = __cordl_internal_set__noteJump)) ::UnityW<::GlobalNamespace::NoteJump> _noteJump;

  /// @brief Field _targetTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTransform, put = __cordl_internal_set__targetTransform)) ::UnityW<::UnityEngine::Transform> _targetTransform;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept;

  /// @brief Method Awake, addr 0x3af13e8, size 0xc4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNoteControllerDidInit, addr 0x3af1788, size 0xc8, virtual true, abstract: false, final true
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  /// @brief Method HandleNoteJumpDidUpdateProgress, addr 0x3af1784, size 0x4, virtual false, abstract: false, final false
  inline void HandleNoteJumpDidUpdateProgress(float_t progress);

  static inline ::GlobalNamespace::NoteJumpStartScaleUp* New_ctor();

  /// @brief Method OnDestroy, addr 0x3af1600, size 0x184, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method UpdateScale, addr 0x3af14ac, size 0x154, virtual false, abstract: false, final false
  inline void UpdateScale(float_t progress);

  constexpr float_t const& __cordl_internal_get__fullScaleJumpPart() const;

  constexpr float_t& __cordl_internal_get__fullScaleJumpPart();

  constexpr ::UnityW<::GlobalNamespace::NoteController> const& __cordl_internal_get__noteController() const;

  constexpr ::UnityW<::GlobalNamespace::NoteController>& __cordl_internal_get__noteController();

  constexpr ::UnityW<::GlobalNamespace::NoteJump> const& __cordl_internal_get__noteJump() const;

  constexpr ::UnityW<::GlobalNamespace::NoteJump>& __cordl_internal_get__noteJump();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetTransform();

  constexpr void __cordl_internal_set__fullScaleJumpPart(float_t value);

  constexpr void __cordl_internal_set__noteController(::UnityW<::GlobalNamespace::NoteController> value);

  constexpr void __cordl_internal_set__noteJump(::UnityW<::GlobalNamespace::NoteJump> value);

  constexpr void __cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3af1850, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr ::GlobalNamespace::INoteControllerDidInitEvent* i___GlobalNamespace__INoteControllerDidInitEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteJumpStartScaleUp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartScaleUp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteJumpStartScaleUp(NoteJumpStartScaleUp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartScaleUp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteJumpStartScaleUp(NoteJumpStartScaleUp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4134 };

  /// @brief Field _fullScaleJumpPart, offset: 0x20, size: 0x4, def value: None
  float_t ____fullScaleJumpPart;

  /// @brief Field _targetTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____targetTransform;

  /// @brief Field _noteController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteController> ____noteController;

  /// @brief Field _noteJump, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteJump> ____noteJump;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteJumpStartScaleUp, ____fullScaleJumpPart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJumpStartScaleUp, ____targetTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJumpStartScaleUp, ____noteController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJumpStartScaleUp, ____noteJump) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJumpStartScaleUp, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJumpStartScaleUp);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpStartScaleUp*, "", "NoteJumpStartScaleUp");
