#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(NoteBigCuttableColliderSize)
namespace UnityEngine {
class BoxCollider;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteBigCuttableColliderSize;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteBigCuttableColliderSize);
// Type: ::NoteBigCuttableColliderSize
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4759))
// CS Name: ::NoteBigCuttableColliderSize*
class CORDL_TYPE NoteBigCuttableColliderSize : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _noteController, offset 0x18, size 0x8
  __declspec(property(get = __get__noteController, put = __set__noteController))::GlobalNamespace::NoteController* _noteController;

  /// @brief Field _boxCollider, offset 0x20, size 0x8
  __declspec(property(get = __get__boxCollider, put = __set__boxCollider))::UnityEngine::BoxCollider* _boxCollider;

  /// @brief Field _defaultColliderSize, offset 0x28, size 0xc
  __declspec(property(get = __get__defaultColliderSize, put = __set__defaultColliderSize))::UnityEngine::Vector3 _defaultColliderSize;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
  constexpr operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept;

  constexpr ::GlobalNamespace::NoteController*& __get__noteController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> const& __get__noteController() const;

  constexpr void __set__noteController(::GlobalNamespace::NoteController* value);

  constexpr ::UnityEngine::BoxCollider*& __get__boxCollider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::BoxCollider*> const& __get__boxCollider() const;

  constexpr void __set__boxCollider(::UnityEngine::BoxCollider* value);

  constexpr ::UnityEngine::Vector3& __get__defaultColliderSize();

  constexpr ::UnityEngine::Vector3 const& __get__defaultColliderSize() const;

  constexpr void __set__defaultColliderSize(::UnityEngine::Vector3 value);

  /// @brief Method Awake, addr 0x2386ab4, size 0xd0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x2386b84, size 0x104, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleNoteControllerDidInit, addr 0x2386c88, size 0x74, virtual true, abstract: false, final true
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  static inline ::GlobalNamespace::NoteBigCuttableColliderSize* New_ctor();

  /// @brief Method .ctor, addr 0x2386cfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteBigCuttableColliderSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteBigCuttableColliderSize(NoteBigCuttableColliderSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteBigCuttableColliderSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteBigCuttableColliderSize(NoteBigCuttableColliderSize const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteBigCuttableColliderSize();

public:
  /// @brief Field _noteController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::NoteController* ____noteController;

  /// @brief Field _boxCollider, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::BoxCollider* ____boxCollider;

  /// @brief Field _defaultColliderSize, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____defaultColliderSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteBigCuttableColliderSize, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteBigCuttableColliderSize, ____noteController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteBigCuttableColliderSize, ____boxCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteBigCuttableColliderSize, ____defaultColliderSize) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteBigCuttableColliderSize);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteBigCuttableColliderSize*, "", "NoteBigCuttableColliderSize");
