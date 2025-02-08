#pragma once
// IWYU pragma private; include "GlobalNamespace/BufferedLightColorGroupEffectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BufferedLightColorGroupEffectManager)
namespace GlobalNamespace {
class BufferedLightColorGroupEffect;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class BufferedLightColorGroupEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BufferedLightColorGroupEffectManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BufferedLightColorGroupEffectManager
class CORDL_TYPE BufferedLightColorGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bufferedLightColorGroupEffects, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bufferedLightColorGroupEffects,
      put = __cordl_internal_set__bufferedLightColorGroupEffects)) ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*>
      _bufferedLightColorGroupEffects;

  /// @brief Field _container, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _lightGroups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroups,
                      put = __cordl_internal_set__lightGroups)) ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*>
      _lightGroups;

  /// @brief Field _materialPropertyBlockControllers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockControllers,
                      put = __cordl_internal_set__materialPropertyBlockControllers)) ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>,
                                                                                              ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>
      _materialPropertyBlockControllers;

  static inline ::GlobalNamespace::BufferedLightColorGroupEffectManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b94a28, size 0x5c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b94874, size 0x1b4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*> const&
  __cordl_internal_get__bufferedLightColorGroupEffects() const;

  constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*>& __cordl_internal_get__bufferedLightColorGroupEffects();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> const& __cordl_internal_get__lightGroups() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*>& __cordl_internal_get__lightGroups();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> const&
  __cordl_internal_get__materialPropertyBlockControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>&
  __cordl_internal_get__materialPropertyBlockControllers();

  constexpr void __cordl_internal_set__bufferedLightColorGroupEffects(::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*> value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__lightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> value);

  constexpr void __cordl_internal_set__materialPropertyBlockControllers(
      ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> value);

  /// @brief Method .ctor, addr 0x3b94a84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedLightColorGroupEffectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedLightColorGroupEffectManager(BufferedLightColorGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedLightColorGroupEffectManager(BufferedLightColorGroupEffectManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4287 };

  /// @brief Field _lightGroups, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> ____lightGroups;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> ____materialPropertyBlockControllers;

  /// @brief Field _container, offset: 0x30, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _bufferedLightColorGroupEffects, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*> ____bufferedLightColorGroupEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffectManager, ____lightGroups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffectManager, ____materialPropertyBlockControllers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffectManager, ____container) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffectManager, ____bufferedLightColorGroupEffects) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BufferedLightColorGroupEffectManager, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BufferedLightColorGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BufferedLightColorGroupEffectManager*, "", "BufferedLightColorGroupEffectManager");
