#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationGroupEffectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightRotationGroupEffectManager)
namespace GlobalNamespace {
class LightRotationGroupEffect;
}
namespace GlobalNamespace {
class LightRotationGroup;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationGroupEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationGroupEffectManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightRotationGroupEffectManager
class CORDL_TYPE LightRotationGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _lightRotationGroupEffects, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lightRotationGroupEffects,
                      put = __cordl_internal_set__lightRotationGroupEffects)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>* _lightRotationGroupEffects;

  /// @brief Field _lightRotationGroups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightRotationGroups,
                      put = __cordl_internal_set__lightRotationGroups)) ::ArrayW<::UnityW<::GlobalNamespace::LightRotationGroup>, ::Array<::UnityW<::GlobalNamespace::LightRotationGroup>>*>
      _lightRotationGroups;

  static inline ::GlobalNamespace::LightRotationGroupEffectManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b923ac, size 0x148, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b91e60, size 0x54c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>* const& __cordl_internal_get__lightRotationGroupEffects() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>*& __cordl_internal_get__lightRotationGroupEffects();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightRotationGroup>, ::Array<::UnityW<::GlobalNamespace::LightRotationGroup>>*> const& __cordl_internal_get__lightRotationGroups() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightRotationGroup>, ::Array<::UnityW<::GlobalNamespace::LightRotationGroup>>*>& __cordl_internal_get__lightRotationGroups();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__lightRotationGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>* value);

  constexpr void __cordl_internal_set__lightRotationGroups(::ArrayW<::UnityW<::GlobalNamespace::LightRotationGroup>, ::Array<::UnityW<::GlobalNamespace::LightRotationGroup>>*> value);

  /// @brief Method .ctor, addr 0x3b924f4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationGroupEffectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationGroupEffectManager(LightRotationGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationGroupEffectManager(LightRotationGroupEffectManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4310 };

  /// @brief Field _lightRotationGroups, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightRotationGroup>, ::Array<::UnityW<::GlobalNamespace::LightRotationGroup>>*> ____lightRotationGroups;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _lightRotationGroupEffects, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>* ____lightRotationGroupEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightRotationGroupEffectManager, ____lightRotationGroups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationGroupEffectManager, ____container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationGroupEffectManager, ____lightRotationGroupEffects) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationGroupEffectManager, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationGroupEffectManager*, "", "LightRotationGroupEffectManager");
