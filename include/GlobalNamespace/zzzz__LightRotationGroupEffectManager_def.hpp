#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(LightRotationGroupEffectManager)
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class LightRotationGroup;
}
namespace GlobalNamespace {
class LightRotationGroupEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationGroupEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationGroupEffectManager);
// Type: ::LightRotationGroupEffectManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4942))
// CS Name: ::LightRotationGroupEffectManager*
class CORDL_TYPE LightRotationGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightRotationGroups, offset 0x18, size 0x8
  __declspec(property(get = __get__lightRotationGroups,
                      put = __set__lightRotationGroups))::ArrayW<::GlobalNamespace::LightRotationGroup*, ::Array<::GlobalNamespace::LightRotationGroup*>*> _lightRotationGroups;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _lightRotationGroupEffects, offset 0x28, size 0x8
  __declspec(property(get = __get__lightRotationGroupEffects,
                      put = __set__lightRotationGroupEffects))::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>* _lightRotationGroupEffects;

  constexpr ::ArrayW<::GlobalNamespace::LightRotationGroup*, ::Array<::GlobalNamespace::LightRotationGroup*>*>& __get__lightRotationGroups();

  constexpr ::ArrayW<::GlobalNamespace::LightRotationGroup*, ::Array<::GlobalNamespace::LightRotationGroup*>*> const& __get__lightRotationGroups() const;

  constexpr void __set__lightRotationGroups(::ArrayW<::GlobalNamespace::LightRotationGroup*, ::Array<::GlobalNamespace::LightRotationGroup*>*> value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>*& __get__lightRotationGroupEffects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>*> const& __get__lightRotationGroupEffects() const;

  constexpr void __set__lightRotationGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>* value);

  /// @brief Method Start addr 0x23aa0c0 size 0x564 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x23aa624 size 0x148 virtual false final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::LightRotationGroupEffectManager* New_ctor();

  /// @brief Method .ctor addr 0x23aa76c size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationGroupEffectManager(LightRotationGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationGroupEffectManager(LightRotationGroupEffectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationGroupEffectManager();

public:
  /// @brief Field _lightRotationGroups, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightRotationGroup*, ::Array<::GlobalNamespace::LightRotationGroup*>*> ____lightRotationGroups;

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _lightRotationGroupEffects, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LightRotationGroupEffect*>* ____lightRotationGroupEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationGroupEffectManager, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationGroupEffectManager*, "", "LightRotationGroupEffectManager");
