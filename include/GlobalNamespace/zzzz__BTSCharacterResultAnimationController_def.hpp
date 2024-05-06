#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacterResultAnimationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BTSCharacterResultAnimationController)
namespace GlobalNamespace {
class BTSCharacter;
}
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace GlobalNamespace {
class MaterialPropertyBlockFloatAnimator;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterResultAnimationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterResultAnimationController);
// Type: ::BTSCharacterResultAnimationController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BTSCharacterResultAnimationController*
class CORDL_TYPE BTSCharacterResultAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _collidersGameObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__collidersGameObject, put = __cordl_internal_set__collidersGameObject))::UnityW<::UnityEngine::GameObject> _collidersGameObject;

  /// @brief Field _rimLightColorSetter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rimLightColorSetter,
                      put = __cordl_internal_set__rimLightColorSetter))::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> _rimLightColorSetter;

  /// @brief Field _rimLightEdgeStartAnimator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rimLightEdgeStartAnimator,
                      put = __cordl_internal_set__rimLightEdgeStartAnimator))::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> _rimLightEdgeStartAnimator;

  /// @brief Field _rimLightIntensityAnimator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rimLightIntensityAnimator,
                      put = __cordl_internal_set__rimLightIntensityAnimator))::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> _rimLightIntensityAnimator;

  static inline ::GlobalNamespace::BTSCharacterResultAnimationController* New_ctor();

  /// @brief Method SetCharacter, addr 0x1053574, size 0x68, virtual false, abstract: false, final false
  inline void SetCharacter(::GlobalNamespace::BTSCharacter* btsCharacter);

  /// @brief Method StopAnimation, addr 0x10535dc, size 0x20, virtual false, abstract: false, final false
  inline void StopAnimation();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__collidersGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__collidersGameObject();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& __cordl_internal_get__rimLightColorSetter() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& __cordl_internal_get__rimLightColorSetter();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> const& __cordl_internal_get__rimLightEdgeStartAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator>& __cordl_internal_get__rimLightEdgeStartAnimator();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> const& __cordl_internal_get__rimLightIntensityAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator>& __cordl_internal_get__rimLightIntensityAnimator();

  constexpr void __cordl_internal_set__collidersGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__rimLightColorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value);

  constexpr void __cordl_internal_set__rimLightEdgeStartAnimator(::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> value);

  constexpr void __cordl_internal_set__rimLightIntensityAnimator(::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> value);

  /// @brief Method .ctor, addr 0x10535fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterResultAnimationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterResultAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterResultAnimationController(BTSCharacterResultAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterResultAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterResultAnimationController(BTSCharacterResultAnimationController const&) = delete;

  /// @brief Field _rimLightColorSetter, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> ____rimLightColorSetter;

  /// @brief Field _rimLightIntensityAnimator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> ____rimLightIntensityAnimator;

  /// @brief Field _rimLightEdgeStartAnimator, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> ____rimLightEdgeStartAnimator;

  /// @brief Field _collidersGameObject, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____collidersGameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterResultAnimationController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterResultAnimationController, ____rimLightColorSetter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterResultAnimationController, ____rimLightIntensityAnimator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterResultAnimationController, ____rimLightEdgeStartAnimator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterResultAnimationController, ____collidersGameObject) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterResultAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterResultAnimationController*, "", "BTSCharacterResultAnimationController");
