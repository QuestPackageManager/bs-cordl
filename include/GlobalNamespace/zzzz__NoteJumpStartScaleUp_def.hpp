#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteJumpStartScaleUp)
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class NoteJump;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpStartScaleUp;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteJumpStartScaleUp);
// Type: ::NoteJumpStartScaleUp
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4900))
// CS Name: ::NoteJumpStartScaleUp*
class CORDL_TYPE NoteJumpStartScaleUp : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fullScaleJumpPart, offset 0x18, size 0x4
  __declspec(property(get = __get__fullScaleJumpPart, put = __set__fullScaleJumpPart)) float_t _fullScaleJumpPart;

  /// @brief Field _targetTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__targetTransform, put = __set__targetTransform))::UnityEngine::Transform* _targetTransform;

  /// @brief Field _noteController, offset 0x28, size 0x8
  __declspec(property(get = __get__noteController, put = __set__noteController))::GlobalNamespace::NoteController* _noteController;

  /// @brief Field _noteJump, offset 0x30, size 0x8
  __declspec(property(get = __get__noteJump, put = __set__noteJump))::GlobalNamespace::NoteJump* _noteJump;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept;

  constexpr float_t& __get__fullScaleJumpPart();

  constexpr float_t const& __get__fullScaleJumpPart() const;

  constexpr void __set__fullScaleJumpPart(float_t value);

  constexpr ::UnityEngine::Transform*& __get__targetTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__targetTransform() const;

  constexpr void __set__targetTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::NoteController*& __get__noteController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> const& __get__noteController() const;

  constexpr void __set__noteController(::GlobalNamespace::NoteController* value);

  constexpr ::GlobalNamespace::NoteJump*& __get__noteJump();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteJump*> const& __get__noteJump() const;

  constexpr void __set__noteJump(::GlobalNamespace::NoteJump* value);

  /// @brief Method Awake addr 0x2256438 size 0xc4 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2256654 size 0x188 virtual false final false
  inline void OnDestroy();

  /// @brief Method UpdateScale addr 0x22564fc size 0x158 virtual false final false
  inline void UpdateScale(float_t progress);

  /// @brief Method HandleNoteJumpDidUpdateProgress addr 0x22567dc size 0x4 virtual false final false
  inline void HandleNoteJumpDidUpdateProgress(float_t progress);

  /// @brief Method HandleNoteControllerDidInit addr 0x22567e0 size 0xd0 virtual true final true
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  static inline ::GlobalNamespace::NoteJumpStartScaleUp* New_ctor();

  /// @brief Method .ctor addr 0x22568b0 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartScaleUp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteJumpStartScaleUp(NoteJumpStartScaleUp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartScaleUp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteJumpStartScaleUp(NoteJumpStartScaleUp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteJumpStartScaleUp();

public:
  /// @brief Field _fullScaleJumpPart, offset: 0x18, size: 0x4, def value: None
  float_t ____fullScaleJumpPart;

  /// @brief Field _targetTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____targetTransform;

  /// @brief Field _noteController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::NoteController* ____noteController;

  /// @brief Field _noteJump, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::NoteJump* ____noteJump;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJumpStartScaleUp, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJumpStartScaleUp, ____fullScaleJumpPart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJumpStartScaleUp, ____targetTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJumpStartScaleUp, ____noteController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJumpStartScaleUp, ____noteJump) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJumpStartScaleUp);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpStartScaleUp*, "", "NoteJumpStartScaleUp");
