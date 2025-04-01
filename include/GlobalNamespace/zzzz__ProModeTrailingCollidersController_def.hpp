#pragma once
// IWYU pragma private; include "GlobalNamespace/ProModeTrailingCollidersController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProModeTrailingCollidersController
class CORDL_TYPE ProModeTrailingCollidersController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainSmallCuttableBySaber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSmallCuttableBySaber, put = __cordl_internal_set__mainSmallCuttableBySaber)) ::UnityW<::GlobalNamespace::BoxCuttableBySaber>
      _mainSmallCuttableBySaber;

  /// @brief Field _noteMovement, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__noteMovement, put = __cordl_internal_set__noteMovement)) ::UnityW<::GlobalNamespace::NoteMovement> _noteMovement;

  /// @brief Field _trailingSmallCuttableBySaberList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__trailingSmallCuttableBySaberList,
                      put =
                          __cordl_internal_set__trailingSmallCuttableBySaberList)) ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>
      _trailingSmallCuttableBySaberList;

  /// @brief Field _transform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method HandleNoteDidMoveInJumpPhase, addr 0x3aeb300, size 0x170, virtual false, abstract: false, final false
  inline void HandleNoteDidMoveInJumpPhase();

  static inline ::GlobalNamespace::ProModeTrailingCollidersController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3aeb234, size 0xcc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3aeb198, size 0x9c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber> const& __cordl_internal_get__mainSmallCuttableBySaber() const;

  constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber>& __cordl_internal_get__mainSmallCuttableBySaber();

  constexpr ::UnityW<::GlobalNamespace::NoteMovement> const& __cordl_internal_get__noteMovement() const;

  constexpr ::UnityW<::GlobalNamespace::NoteMovement>& __cordl_internal_get__noteMovement();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> const& __cordl_internal_get__trailingSmallCuttableBySaberList() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>& __cordl_internal_get__trailingSmallCuttableBySaberList();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__mainSmallCuttableBySaber(::UnityW<::GlobalNamespace::BoxCuttableBySaber> value);

  constexpr void __cordl_internal_set__noteMovement(::UnityW<::GlobalNamespace::NoteMovement> value);

  constexpr void __cordl_internal_set__trailingSmallCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3aeb470, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProModeTrailingCollidersController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProModeTrailingCollidersController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProModeTrailingCollidersController(ProModeTrailingCollidersController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProModeTrailingCollidersController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProModeTrailingCollidersController(ProModeTrailingCollidersController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4138 };

  /// @brief Field _mainSmallCuttableBySaber, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoxCuttableBySaber> ____mainSmallCuttableBySaber;

  /// @brief Field _trailingSmallCuttableBySaberList, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> ____trailingSmallCuttableBySaberList;

  /// @brief Field _noteMovement, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteMovement> ____noteMovement;

  /// @brief Field _transform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProModeTrailingCollidersController, ____mainSmallCuttableBySaber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProModeTrailingCollidersController, ____trailingSmallCuttableBySaberList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProModeTrailingCollidersController, ____noteMovement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProModeTrailingCollidersController, ____transform) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProModeTrailingCollidersController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProModeTrailingCollidersController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProModeTrailingCollidersController*, "", "ProModeTrailingCollidersController");
