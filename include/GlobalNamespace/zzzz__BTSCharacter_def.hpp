#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BTSCharacter)
namespace GlobalNamespace {
class BTSCharacterMaterialSwitcher;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15003))
// CS Name: ::BTSCharacter*
class CORDL_TYPE BTSCharacter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _characterName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__characterName, put = __cordl_internal_set__characterName))::StringW _characterName;

  /// @brief Field _animator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator))::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Field _btsCharacterMaterialSwitcher, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__btsCharacterMaterialSwitcher,
                      put = __cordl_internal_set__btsCharacterMaterialSwitcher))::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher> _btsCharacterMaterialSwitcher;

  /// @brief Field _materialPropertyBlockController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _materialPropertyBlockController;

  /// @brief Field _headTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__headTransform, put = __cordl_internal_set__headTransform))::UnityW<::UnityEngine::Transform> _headTransform;

  __declspec(property(get = get_characterName))::StringW characterName;

  __declspec(property(get = get_materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> materialPropertyBlockController;

  __declspec(property(get = get_animator))::UnityW<::UnityEngine::Animator> animator;

  __declspec(property(get = get_headTransform))::UnityW<::UnityEngine::Transform> headTransform;

  constexpr ::StringW& __cordl_internal_get__characterName();

  constexpr ::StringW const& __cordl_internal_get__characterName() const;

  constexpr void __cordl_internal_set__characterName(::StringW value);

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher>& __cordl_internal_get__btsCharacterMaterialSwitcher();

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher> const& __cordl_internal_get__btsCharacterMaterialSwitcher() const;

  constexpr void __cordl_internal_set__btsCharacterMaterialSwitcher(::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher> value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headTransform() const;

  constexpr void __cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method get_characterName, addr 0xe2b090, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_characterName();

  /// @brief Method get_materialPropertyBlockController, addr 0xe2b098, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> get_materialPropertyBlockController();

  /// @brief Method get_animator, addr 0xe2b0a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animator> get_animator();

  /// @brief Method get_headTransform, addr 0xe2b0a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_headTransform();

  /// @brief Method SetAlternativeAnimationAndMaterial, addr 0xe2b0b0, size 0x1f4, virtual false, abstract: false, final false
  inline void SetAlternativeAnimationAndMaterial(::UnityEngine::AnimationClip* animation, bool alternativeMaterialOn);

  static inline ::GlobalNamespace::BTSCharacter* New_ctor();

  /// @brief Method .ctor, addr 0xe2b4f8, size 0x8, virtual false, abstract: false, final false
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
  ::UnityW<::UnityEngine::Animator> ____animator;

  /// @brief Field _btsCharacterMaterialSwitcher, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher> ____btsCharacterMaterialSwitcher;

  /// @brief Field _materialPropertyBlockController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _headTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____headTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacter, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacter, ____characterName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacter, ____animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacter, ____btsCharacterMaterialSwitcher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacter, ____materialPropertyBlockController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacter, ____headTransform) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacter*, "", "BTSCharacter");
