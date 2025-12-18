#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacter.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BTSCharacter
class CORDL_TYPE BTSCharacter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Field _btsCharacterMaterialSwitcher, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__btsCharacterMaterialSwitcher, put = __cordl_internal_set__btsCharacterMaterialSwitcher)) ::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher>
      _btsCharacterMaterialSwitcher;

  /// @brief Field _characterName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__characterName, put = __cordl_internal_set__characterName)) ::StringW _characterName;

  /// @brief Field _headTransform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__headTransform, put = __cordl_internal_set__headTransform)) ::UnityW<::UnityEngine::Transform> _headTransform;

  /// @brief Field _materialPropertyBlockController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  __declspec(property(get = get_animator)) ::UnityW<::UnityEngine::Animator> animator;

  __declspec(property(get = get_characterName)) ::StringW characterName;

  __declspec(property(get = get_headTransform)) ::UnityW<::UnityEngine::Transform> headTransform;

  __declspec(property(get = get_materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> materialPropertyBlockController;

  static inline ::GlobalNamespace::BTSCharacter* New_ctor();

  /// @brief Method SetAlternativeAnimationAndMaterial, addr 0x31b4a38, size 0x1e4, virtual false, abstract: false, final false
  inline void SetAlternativeAnimationAndMaterial(::UnityEngine::AnimationClip* animation, bool alternativeMaterialOn);

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher> const& __cordl_internal_get__btsCharacterMaterialSwitcher() const;

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher>& __cordl_internal_get__btsCharacterMaterialSwitcher();

  constexpr ::StringW const& __cordl_internal_get__characterName() const;

  constexpr ::StringW& __cordl_internal_get__characterName();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headTransform();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set__btsCharacterMaterialSwitcher(::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher> value);

  constexpr void __cordl_internal_set__characterName(::StringW value);

  constexpr void __cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  /// @brief Method .ctor, addr 0x31b4e30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animator, addr 0x31b4a28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animator> get_animator();

  /// @brief Method get_characterName, addr 0x31b4a18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_characterName();

  /// @brief Method get_headTransform, addr 0x31b4a30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_headTransform();

  /// @brief Method get_materialPropertyBlockController, addr 0x31b4a20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> get_materialPropertyBlockController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacter(BTSCharacter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacter(BTSCharacter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21458 };

  /// @brief Field _characterName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____characterName;

  /// @brief Field _animator, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  /// @brief Field _btsCharacterMaterialSwitcher, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher> ____btsCharacterMaterialSwitcher;

  /// @brief Field _materialPropertyBlockController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _headTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____headTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BTSCharacter, ____characterName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacter, ____animator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacter, ____btsCharacterMaterialSwitcher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacter, ____materialPropertyBlockController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacter, ____headTransform) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacter, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacter*, "", "BTSCharacter");
