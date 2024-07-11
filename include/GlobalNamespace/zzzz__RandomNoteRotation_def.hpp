#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomNoteRotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RandomNoteRotation)
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomNoteRotation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomNoteRotation);
// Type: ::RandomNoteRotation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RandomNoteRotation*
class CORDL_TYPE RandomNoteRotation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _noteController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__noteController, put = __cordl_internal_set__noteController))::UnityW<::GlobalNamespace::NoteControllerBase> _noteController;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept;

  /// @brief Method Awake, addr 0x264fd74, size 0xb8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNoteControllerDidInit, addr 0x264ff2c, size 0x28, virtual true, abstract: false, final true
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  static inline ::GlobalNamespace::RandomNoteRotation* New_ctor();

  /// @brief Method OnDestroy, addr 0x264fe2c, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::NoteControllerBase> const& __cordl_internal_get__noteController() const;

  constexpr ::UnityW<::GlobalNamespace::NoteControllerBase>& __cordl_internal_get__noteController();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__noteController(::UnityW<::GlobalNamespace::NoteControllerBase> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x264ff54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr ::GlobalNamespace::INoteControllerDidInitEvent* i___GlobalNamespace__INoteControllerDidInitEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomNoteRotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomNoteRotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomNoteRotation(RandomNoteRotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomNoteRotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomNoteRotation(RandomNoteRotation const&) = delete;

  /// @brief Field _noteController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteControllerBase> ____noteController;

  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomNoteRotation, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomNoteRotation, ____noteController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomNoteRotation, ____transform) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomNoteRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomNoteRotation*, "", "RandomNoteRotation");
