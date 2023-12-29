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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4905))
// CS Name: ::ProModeTrailingCollidersController*
class CORDL_TYPE ProModeTrailingCollidersController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainSmallCuttableBySaber, offset 0x18, size 0x8
  __declspec(property(get = __get__mainSmallCuttableBySaber, put = __set__mainSmallCuttableBySaber))::GlobalNamespace::BoxCuttableBySaber* _mainSmallCuttableBySaber;

  /// @brief Field _trailingSmallCuttableBySaberList, offset 0x20, size 0x8
  __declspec(
      property(get = __get__trailingSmallCuttableBySaberList,
               put = __set__trailingSmallCuttableBySaberList))::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> _trailingSmallCuttableBySaberList;

  /// @brief Field _noteMovement, offset 0x28, size 0x8
  __declspec(property(get = __get__noteMovement, put = __set__noteMovement))::GlobalNamespace::NoteMovement* _noteMovement;

  /// @brief Field _transform, offset 0x30, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  constexpr ::GlobalNamespace::BoxCuttableBySaber*& __get__mainSmallCuttableBySaber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoxCuttableBySaber*> const& __get__mainSmallCuttableBySaber() const;

  constexpr void __set__mainSmallCuttableBySaber(::GlobalNamespace::BoxCuttableBySaber* value);

  constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*>& __get__trailingSmallCuttableBySaberList();

  constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> const& __get__trailingSmallCuttableBySaberList() const;

  constexpr void __set__trailingSmallCuttableBySaberList(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> value);

  constexpr ::GlobalNamespace::NoteMovement*& __get__noteMovement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteMovement*> const& __get__noteMovement() const;

  constexpr void __set__noteMovement(::GlobalNamespace::NoteMovement* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method Start addr 0x225762c size 0x98 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x22576c4 size 0xd0 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleNoteDidMoveInJumpPhase addr 0x2257794 size 0x170 virtual false final false
  inline void HandleNoteDidMoveInJumpPhase();

  static inline ::GlobalNamespace::ProModeTrailingCollidersController* New_ctor();

  /// @brief Method .ctor addr 0x2257904 size 0x8 virtual false final false
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
  ::GlobalNamespace::BoxCuttableBySaber* ____mainSmallCuttableBySaber;

  /// @brief Field _trailingSmallCuttableBySaberList, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> ____trailingSmallCuttableBySaberList;

  /// @brief Field _noteMovement, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::NoteMovement* ____noteMovement;

  /// @brief Field _transform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

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
