#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifierParamsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameplayModifierParamsSO)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifierParamsSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifierParamsSO
class CORDL_TYPE GameplayModifierParamsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_requires)) ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> _cordl_requires;

  /// @brief Field _descriptionLocalizationKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__descriptionLocalizationKey, put = __cordl_internal_set__descriptionLocalizationKey)) ::StringW _descriptionLocalizationKey;

  /// @brief Field _icon, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__icon, put = __cordl_internal_set__icon)) ::UnityW<::UnityEngine::Sprite> _icon;

  /// @brief Field _isInBeta, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get__isInBeta, put = __cordl_internal_set__isInBeta)) bool _isInBeta;

  /// @brief Field _modifierNameLocalizationKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__modifierNameLocalizationKey, put = __cordl_internal_set__modifierNameLocalizationKey)) ::StringW _modifierNameLocalizationKey;

  /// @brief Field _multiplier, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplier, put = __cordl_internal_set__multiplier)) float_t _multiplier;

  /// @brief Field _multiplierConditionallyValid, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__multiplierConditionallyValid, put = __cordl_internal_set__multiplierConditionallyValid)) bool _multiplierConditionallyValid;

  /// @brief Field _mutuallyExclusives, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mutuallyExclusives,
                      put = __cordl_internal_set__mutuallyExclusives)) ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>
      _mutuallyExclusives;

  /// @brief Field _requiredBy, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__requiredBy,
                      put = __cordl_internal_set__requiredBy)) ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>
      _requiredBy;

  /// @brief Field _requires, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__requires,
                      put = __cordl_internal_set__requires)) ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>
      _requires;

  __declspec(property(get = get_descriptionLocalizationKey)) ::StringW descriptionLocalizationKey;

  __declspec(property(get = get_icon)) ::UnityW<::UnityEngine::Sprite> icon;

  __declspec(property(get = get_isInBeta)) bool isInBeta;

  __declspec(property(get = get_modifierNameLocalizationKey)) ::StringW modifierNameLocalizationKey;

  __declspec(property(get = get_multiplier)) float_t multiplier;

  __declspec(property(get = get_multiplierConditionallyValid)) bool multiplierConditionallyValid;

  __declspec(property(get = get_mutuallyExclusives)) ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>
      mutuallyExclusives;

  __declspec(property(get = get_requiredBy)) ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> requiredBy;

  static inline ::GlobalNamespace::GameplayModifierParamsSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__descriptionLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__descriptionLocalizationKey();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__icon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__icon();

  constexpr bool const& __cordl_internal_get__isInBeta() const;

  constexpr bool& __cordl_internal_get__isInBeta();

  constexpr ::StringW const& __cordl_internal_get__modifierNameLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__modifierNameLocalizationKey();

  constexpr float_t const& __cordl_internal_get__multiplier() const;

  constexpr float_t& __cordl_internal_get__multiplier();

  constexpr bool const& __cordl_internal_get__multiplierConditionallyValid() const;

  constexpr bool& __cordl_internal_get__multiplierConditionallyValid();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> const& __cordl_internal_get__mutuallyExclusives() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>& __cordl_internal_get__mutuallyExclusives();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> const& __cordl_internal_get__requiredBy() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>& __cordl_internal_get__requiredBy();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> const& __cordl_internal_get__requires() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*>& __cordl_internal_get__requires();

  constexpr void __cordl_internal_set__descriptionLocalizationKey(::StringW value);

  constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__isInBeta(bool value);

  constexpr void __cordl_internal_set__modifierNameLocalizationKey(::StringW value);

  constexpr void __cordl_internal_set__multiplier(float_t value);

  constexpr void __cordl_internal_set__multiplierConditionallyValid(bool value);

  constexpr void __cordl_internal_set__mutuallyExclusives(::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> value);

  constexpr void __cordl_internal_set__requiredBy(::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> value);

  constexpr void __cordl_internal_set__requires(::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> value);

  /// @brief Method .ctor, addr 0x26b0fbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_descriptionLocalizationKey, addr 0x26b0f7c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_descriptionLocalizationKey();

  /// @brief Method get_icon, addr 0x26b0f84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_icon();

  /// @brief Method get_isInBeta, addr 0x26b0fb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInBeta();

  /// @brief Method get_modifierNameLocalizationKey, addr 0x26b0f74, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_modifierNameLocalizationKey();

  /// @brief Method get_multiplier, addr 0x26b0fa4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_multiplier();

  /// @brief Method get_multiplierConditionallyValid, addr 0x26b0fac, size 0x8, virtual false, abstract: false, final false
  inline bool get_multiplierConditionallyValid();

  /// @brief Method get_mutuallyExclusives, addr 0x26b0f8c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> get_mutuallyExclusives();

  /// @brief Method get_requiredBy, addr 0x26b0f9c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> get_requiredBy();

  /// @brief Method get_requires, addr 0x26b0f94, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> get_requires();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierParamsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierParamsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifierParamsSO(GameplayModifierParamsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierParamsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifierParamsSO(GameplayModifierParamsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12855 };

  /// @brief Field _modifierNameLocalizationKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ____modifierNameLocalizationKey;

  /// @brief Field _descriptionLocalizationKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ____descriptionLocalizationKey;

  /// @brief Field _icon, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____icon;

  /// @brief Field _mutuallyExclusives, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> ____mutuallyExclusives;

  /// @brief Field _requires, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> ____requires;

  /// @brief Field _requiredBy, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::Array<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> ____requiredBy;

  /// @brief Field _multiplier, offset: 0x48, size: 0x4, def value: None
  float_t ____multiplier;

  /// @brief Field _multiplierConditionallyValid, offset: 0x4c, size: 0x1, def value: None
  bool ____multiplierConditionallyValid;

  /// @brief Field _isInBeta, offset: 0x4d, size: 0x1, def value: None
  bool ____isInBeta;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifierParamsSO, ____modifierNameLocalizationKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierParamsSO, ____descriptionLocalizationKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierParamsSO, ____icon) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierParamsSO, ____mutuallyExclusives) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierParamsSO, ____requires) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierParamsSO, ____requiredBy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierParamsSO, ____multiplier) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierParamsSO, ____multiplierConditionallyValid) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierParamsSO, ____isInBeta) == 0x4d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierParamsSO, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierParamsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierParamsSO*, "", "GameplayModifierParamsSO");
