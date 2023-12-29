#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4906))
// CS Name: ::RandomNoteRotation*
class CORDL_TYPE RandomNoteRotation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _noteController, offset 0x18, size 0x8
  __declspec(property(get = __get__noteController, put = __set__noteController))::GlobalNamespace::NoteControllerBase* _noteController;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept;

  constexpr ::GlobalNamespace::NoteControllerBase*& __get__noteController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteControllerBase*> const& __get__noteController() const;

  constexpr void __set__noteController(::GlobalNamespace::NoteControllerBase* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method Awake addr 0x225790c size 0xb8 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x22579c4 size 0x100 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleNoteControllerDidInit addr 0x2257ac4 size 0x28 virtual true final true
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  static inline ::GlobalNamespace::RandomNoteRotation* New_ctor();

  /// @brief Method .ctor addr 0x2257aec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RandomNoteRotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomNoteRotation(RandomNoteRotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomNoteRotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomNoteRotation(RandomNoteRotation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomNoteRotation();

public:
  /// @brief Field _noteController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::NoteControllerBase* ____noteController;

  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomNoteRotation, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomNoteRotation, ____noteController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomNoteRotation, ____transform) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomNoteRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomNoteRotation*, "", "RandomNoteRotation");
