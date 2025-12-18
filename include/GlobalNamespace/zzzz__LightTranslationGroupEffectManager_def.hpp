#pragma once
// IWYU pragma private; include "GlobalNamespace/LightTranslationGroupEffectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightTranslationGroupEffectManager)
namespace GlobalNamespace {
class LightTranslationGroupEffect;
}
namespace GlobalNamespace {
class LightTranslationGroup;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationGroupEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationGroupEffectManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightTranslationGroupEffectManager
class CORDL_TYPE LightTranslationGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _lightTranslationGroupEffects, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lightTranslationGroupEffects,
                      put = __cordl_internal_set__lightTranslationGroupEffects)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>* _lightTranslationGroupEffects;

  /// @brief Field _lightTranslationGroups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightTranslationGroups,
                      put = __cordl_internal_set__lightTranslationGroups)) ::ArrayW<::UnityW<::GlobalNamespace::LightTranslationGroup>, ::Array<::UnityW<::GlobalNamespace::LightTranslationGroup>>*>
      _lightTranslationGroups;

  static inline ::GlobalNamespace::LightTranslationGroupEffectManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x57e8c10, size 0x104, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x57e8828, size 0x3e8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>* const& __cordl_internal_get__lightTranslationGroupEffects() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*& __cordl_internal_get__lightTranslationGroupEffects();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightTranslationGroup>, ::Array<::UnityW<::GlobalNamespace::LightTranslationGroup>>*> const& __cordl_internal_get__lightTranslationGroups() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightTranslationGroup>, ::Array<::UnityW<::GlobalNamespace::LightTranslationGroup>>*>& __cordl_internal_get__lightTranslationGroups();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__lightTranslationGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>* value);

  constexpr void __cordl_internal_set__lightTranslationGroups(::ArrayW<::UnityW<::GlobalNamespace::LightTranslationGroup>, ::Array<::UnityW<::GlobalNamespace::LightTranslationGroup>>*> value);

  /// @brief Method .ctor, addr 0x57e8d14, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationGroupEffectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationGroupEffectManager(LightTranslationGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationGroupEffectManager(LightTranslationGroupEffectManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5899 };

  /// @brief Field _lightTranslationGroups, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightTranslationGroup>, ::Array<::UnityW<::GlobalNamespace::LightTranslationGroup>>*> ____lightTranslationGroups;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _lightTranslationGroupEffects, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>* ____lightTranslationGroupEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffectManager, ____lightTranslationGroups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffectManager, ____container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffectManager, ____lightTranslationGroupEffects) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationGroupEffectManager, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationGroupEffectManager*, "", "LightTranslationGroupEffectManager");
