#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ProModeTrailingCollidersController)
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ProModeTrailingCollidersController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProModeTrailingCollidersController);
// Type: ::ProModeTrailingCollidersController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4784))
// CS Name: ::ProModeTrailingCollidersController*
class CORDL_TYPE ProModeTrailingCollidersController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainSmallCuttableBySaber, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSmallCuttableBySaber,
                      put = __cordl_internal_set__mainSmallCuttableBySaber))::UnityW<::GlobalNamespace::BoxCuttableBySaber> _mainSmallCuttableBySaber;

  /// @brief Field _trailingSmallCuttableBySaberList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__trailingSmallCuttableBySaberList,
                      put = __cordl_internal_set__trailingSmallCuttableBySaberList))::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>,
                                                                                             ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> _trailingSmallCuttableBySaberList;

  /// @brief Field _noteMovement, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__noteMovement, put = __cordl_internal_set__noteMovement))::UnityW<::GlobalNamespace::NoteMovement> _noteMovement;

  /// @brief Field _transform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber>& __cordl_internal_get__mainSmallCuttableBySaber();

  constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber> const& __cordl_internal_get__mainSmallCuttableBySaber() const;

  constexpr void __cordl_internal_set__mainSmallCuttableBySaber(::UnityW<::GlobalNamespace::BoxCuttableBySaber> value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>& __cordl_internal_get__trailingSmallCuttableBySaberList();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> const& __cordl_internal_get__trailingSmallCuttableBySaberList() const;

  constexpr void __cordl_internal_set__trailingSmallCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> value);

  constexpr ::UnityW<::GlobalNamespace::NoteMovement>& __cordl_internal_get__noteMovement();

  constexpr ::UnityW<::GlobalNamespace::NoteMovement> const& __cordl_internal_get__noteMovement() const;

  constexpr void __cordl_internal_set__noteMovement(::UnityW<::GlobalNamespace::NoteMovement> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method Start, addr 0x238b9e4, size 0x98, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x238ba7c, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleNoteDidMoveInJumpPhase, addr 0x238bb4c, size 0x170, virtual false, abstract: false, final false
  inline void HandleNoteDidMoveInJumpPhase();

  static inline ::GlobalNamespace::ProModeTrailingCollidersController* New_ctor();

  /// @brief Method .ctor, addr 0x238bcbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ProModeTrailingCollidersController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProModeTrailingCollidersController(ProModeTrailingCollidersController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProModeTrailingCollidersController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProModeTrailingCollidersController(ProModeTrailingCollidersController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProModeTrailingCollidersController();

public:
  /// @brief Field _mainSmallCuttableBySaber, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoxCuttableBySaber> ____mainSmallCuttableBySaber;

  /// @brief Field _trailingSmallCuttableBySaberList, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> ____trailingSmallCuttableBySaberList;

  /// @brief Field _noteMovement, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteMovement> ____noteMovement;

  /// @brief Field _transform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProModeTrailingCollidersController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ProModeTrailingCollidersController, ____mainSmallCuttableBySaber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProModeTrailingCollidersController, ____trailingSmallCuttableBySaberList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProModeTrailingCollidersController, ____noteMovement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProModeTrailingCollidersController, ____transform) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProModeTrailingCollidersController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProModeTrailingCollidersController*, "", "ProModeTrailingCollidersController");
