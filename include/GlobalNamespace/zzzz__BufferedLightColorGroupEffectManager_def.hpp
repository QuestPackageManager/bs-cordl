#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BufferedLightColorGroupEffectManager)
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class BufferedLightColorGroupEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class BufferedLightColorGroupEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BufferedLightColorGroupEffectManager);
// Type: ::BufferedLightColorGroupEffectManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5022))
// CS Name: ::BufferedLightColorGroupEffectManager*
class CORDL_TYPE BufferedLightColorGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightGroups, offset 0x18, size 0x8
  __declspec(property(get = __get__lightGroups, put = __set__lightGroups))::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> _lightGroups;

  /// @brief Field _materialPropertyBlockControllers, offset 0x20, size 0x8
  __declspec(property(get = __get__materialPropertyBlockControllers,
                      put = __set__materialPropertyBlockControllers))::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,
                                                                              ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> _materialPropertyBlockControllers;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _bufferedLightColorGroupEffects, offset 0x30, size 0x8
  __declspec(property(get = __get__bufferedLightColorGroupEffects,
                      put = __set__bufferedLightColorGroupEffects))::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*,
                                                                            ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*> _bufferedLightColorGroupEffects;

  constexpr ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*>& __get__lightGroups();

  constexpr ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> const& __get__lightGroups() const;

  constexpr void __set__lightGroups(::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& __get__materialPropertyBlockControllers();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& __get__materialPropertyBlockControllers() const;

  constexpr void __set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*>& __get__bufferedLightColorGroupEffects();

  constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*> const& __get__bufferedLightColorGroupEffects() const;

  constexpr void __set__bufferedLightColorGroupEffects(::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*> value);

  /// @brief Method Start addr 0x226fb94 size 0x1b8 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x226fd4c size 0x5c virtual false final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::BufferedLightColorGroupEffectManager* New_ctor();

  /// @brief Method .ctor addr 0x226fda8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedLightColorGroupEffectManager(BufferedLightColorGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedLightColorGroupEffectManager(BufferedLightColorGroupEffectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedLightColorGroupEffectManager();

public:
  /// @brief Field _lightGroups, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> ____lightGroups;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> ____materialPropertyBlockControllers;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _bufferedLightColorGroupEffects, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*> ____bufferedLightColorGroupEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BufferedLightColorGroupEffectManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffectManager, ____lightGroups) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffectManager, ____materialPropertyBlockControllers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffectManager, ____container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedLightColorGroupEffectManager, ____bufferedLightColorGroupEffects) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BufferedLightColorGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BufferedLightColorGroupEffectManager*, "", "BufferedLightColorGroupEffectManager");
