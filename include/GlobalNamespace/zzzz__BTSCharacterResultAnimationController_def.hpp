#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BTSCharacterResultAnimationController)
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class BTSCharacter;
}
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace GlobalNamespace {
class MaterialPropertyBlockFloatAnimator;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3969))
// CS Name: ::BTSCharacterResultAnimationController*
class CORDL_TYPE BTSCharacterResultAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rimLightColorSetter, offset 0x18, size 0x8
  __declspec(property(get = __get__rimLightColorSetter, put = __set__rimLightColorSetter))::GlobalNamespace::MaterialPropertyBlockColorSetter* _rimLightColorSetter;

  /// @brief Field _rimLightIntensityAnimator, offset 0x20, size 0x8
  __declspec(property(get = __get__rimLightIntensityAnimator, put = __set__rimLightIntensityAnimator))::GlobalNamespace::MaterialPropertyBlockFloatAnimator* _rimLightIntensityAnimator;

  /// @brief Field _rimLightEdgeStartAnimator, offset 0x28, size 0x8
  __declspec(property(get = __get__rimLightEdgeStartAnimator, put = __set__rimLightEdgeStartAnimator))::GlobalNamespace::MaterialPropertyBlockFloatAnimator* _rimLightEdgeStartAnimator;

  /// @brief Field _collidersGameObject, offset 0x30, size 0x8
  __declspec(property(get = __get__collidersGameObject, put = __set__collidersGameObject))::UnityEngine::GameObject* _collidersGameObject;

  constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter*& __get__rimLightColorSetter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> const& __get__rimLightColorSetter() const;

  constexpr void __set__rimLightColorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockFloatAnimator*& __get__rimLightIntensityAnimator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*> const& __get__rimLightIntensityAnimator() const;

  constexpr void __set__rimLightIntensityAnimator(::GlobalNamespace::MaterialPropertyBlockFloatAnimator* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockFloatAnimator*& __get__rimLightEdgeStartAnimator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*> const& __get__rimLightEdgeStartAnimator() const;

  constexpr void __set__rimLightEdgeStartAnimator(::GlobalNamespace::MaterialPropertyBlockFloatAnimator* value);

  constexpr ::UnityEngine::GameObject*& __get__collidersGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__collidersGameObject() const;

  constexpr void __set__collidersGameObject(::UnityEngine::GameObject* value);

  /// @brief Method SetCharacter addr 0x2219ba4 size 0x68 virtual false final false
  inline void SetCharacter(::GlobalNamespace::BTSCharacter* btsCharacter);

  /// @brief Method StopAnimation addr 0x2219c0c size 0x20 virtual false final false
  inline void StopAnimation();

  static inline ::GlobalNamespace::BTSCharacterResultAnimationController* New_ctor();

  /// @brief Method .ctor addr 0x2219c2c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterResultAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterResultAnimationController(BTSCharacterResultAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterResultAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterResultAnimationController(BTSCharacterResultAnimationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterResultAnimationController();

public:
  /// @brief Field _rimLightColorSetter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockColorSetter* ____rimLightColorSetter;

  /// @brief Field _rimLightIntensityAnimator, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockFloatAnimator* ____rimLightIntensityAnimator;

  /// @brief Field _rimLightEdgeStartAnimator, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockFloatAnimator* ____rimLightEdgeStartAnimator;

  /// @brief Field _collidersGameObject, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____collidersGameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterResultAnimationController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterResultAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterResultAnimationController*, "", "BTSCharacterResultAnimationController");
