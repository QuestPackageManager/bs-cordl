#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BTSCharacter)
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Animator;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class BTSCharacterMaterialSwitcher;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacter);
// Type: ::BTSCharacter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3962))
// CS Name: ::BTSCharacter*
class CORDL_TYPE BTSCharacter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _characterName, offset 0x18, size 0x8
  __declspec(property(get = __get__characterName, put = __set__characterName))::StringW _characterName;

  /// @brief Field _animator, offset 0x20, size 0x8
  __declspec(property(get = __get__animator, put = __set__animator))::UnityEngine::Animator* _animator;

  /// @brief Field _btsCharacterMaterialSwitcher, offset 0x28, size 0x8
  __declspec(property(get = __get__btsCharacterMaterialSwitcher, put = __set__btsCharacterMaterialSwitcher))::GlobalNamespace::BTSCharacterMaterialSwitcher* _btsCharacterMaterialSwitcher;

  /// @brief Field _materialPropertyBlockController, offset 0x30, size 0x8
  __declspec(property(get = __get__materialPropertyBlockController, put = __set__materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _materialPropertyBlockController;

  /// @brief Field _headTransform, offset 0x38, size 0x8
  __declspec(property(get = __get__headTransform, put = __set__headTransform))::UnityEngine::Transform* _headTransform;

  __declspec(property(get = get_characterName))::StringW characterName;

  __declspec(property(get = get_materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;

  __declspec(property(get = get_animator))::UnityEngine::Animator* animator;

  __declspec(property(get = get_headTransform))::UnityEngine::Transform* headTransform;

  constexpr ::StringW& __get__characterName();

  constexpr ::StringW const& __get__characterName() const;

  constexpr void __set__characterName(::StringW value);

  constexpr ::UnityEngine::Animator*& __get__animator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& __get__animator() const;

  constexpr void __set__animator(::UnityEngine::Animator* value);

  constexpr ::GlobalNamespace::BTSCharacterMaterialSwitcher*& __get__btsCharacterMaterialSwitcher();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacterMaterialSwitcher*> const& __get__btsCharacterMaterialSwitcher() const;

  constexpr void __set__btsCharacterMaterialSwitcher(::GlobalNamespace::BTSCharacterMaterialSwitcher* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__materialPropertyBlockController() const;

  constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr ::UnityEngine::Transform*& __get__headTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__headTransform() const;

  constexpr void __set__headTransform(::UnityEngine::Transform* value);

  /// @brief Method get_characterName addr 0x221963c size 0x8 virtual false final false
  inline ::StringW get_characterName();

  /// @brief Method get_materialPropertyBlockController addr 0x2219644 size 0x8 virtual false final false
  inline ::GlobalNamespace::MaterialPropertyBlockController* get_materialPropertyBlockController();

  /// @brief Method get_animator addr 0x221964c size 0x8 virtual false final false
  inline ::UnityEngine::Animator* get_animator();

  /// @brief Method get_headTransform addr 0x2219654 size 0x8 virtual false final false
  inline ::UnityEngine::Transform* get_headTransform();

  /// @brief Method SetAlternativeAnimationAndMaterial addr 0x221965c size 0x1f4 virtual false final false
  inline void SetAlternativeAnimationAndMaterial(::UnityEngine::AnimationClip* animation, bool alternativeMaterialOn);

  static inline ::GlobalNamespace::BTSCharacter* New_ctor();

  /// @brief Method .ctor addr 0x2219aa4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacter(BTSCharacter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacter(BTSCharacter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacter();

public:
  /// @brief Field _characterName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____characterName;

  /// @brief Field _animator, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Animator* ____animator;

  /// @brief Field _btsCharacterMaterialSwitcher, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BTSCharacterMaterialSwitcher* ____btsCharacterMaterialSwitcher;

  /// @brief Field _materialPropertyBlockController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____materialPropertyBlockController;

  /// @brief Field _headTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ____headTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacter, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacter*, "", "BTSCharacter");
