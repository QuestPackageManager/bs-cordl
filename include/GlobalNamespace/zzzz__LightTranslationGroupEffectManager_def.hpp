#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::LightTranslationGroupEffectManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4302))
// CS Name: ::LightTranslationGroupEffectManager*
class CORDL_TYPE LightTranslationGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightTranslationGroups, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightTranslationGroups,
                      put = __cordl_internal_set__lightTranslationGroups))::ArrayW<::UnityW<::GlobalNamespace::LightTranslationGroup>,
                                                                                   ::Array<::UnityW<::GlobalNamespace::LightTranslationGroup>>*> _lightTranslationGroups;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _lightTranslationGroupEffects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightTranslationGroupEffects,
                      put = __cordl_internal_set__lightTranslationGroupEffects))::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>* _lightTranslationGroupEffects;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightTranslationGroup>, ::Array<::UnityW<::GlobalNamespace::LightTranslationGroup>>*>& __cordl_internal_get__lightTranslationGroups();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightTranslationGroup>, ::Array<::UnityW<::GlobalNamespace::LightTranslationGroup>>*> const& __cordl_internal_get__lightTranslationGroups() const;

  constexpr void __cordl_internal_set__lightTranslationGroups(::ArrayW<::UnityW<::GlobalNamespace::LightTranslationGroup>, ::Array<::UnityW<::GlobalNamespace::LightTranslationGroup>>*> value);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*& __cordl_internal_get__lightTranslationGroupEffects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*> const&
  __cordl_internal_get__lightTranslationGroupEffects() const;

  constexpr void __cordl_internal_set__lightTranslationGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>* value);

  /// @brief Method Start, addr 0x236bcb8, size 0x3f4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x236c0ac, size 0x148, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::LightTranslationGroupEffectManager* New_ctor();

  /// @brief Method .ctor, addr 0x236c1f4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationGroupEffectManager(LightTranslationGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationGroupEffectManager(LightTranslationGroupEffectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationGroupEffectManager();

public:
  /// @brief Field _lightTranslationGroups, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightTranslationGroup>, ::Array<::UnityW<::GlobalNamespace::LightTranslationGroup>>*> ____lightTranslationGroups;

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _lightTranslationGroupEffects, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>* ____lightTranslationGroupEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationGroupEffectManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffectManager, ____lightTranslationGroups) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffectManager, ____container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffectManager, ____lightTranslationGroupEffects) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationGroupEffectManager*, "", "LightTranslationGroupEffectManager");
