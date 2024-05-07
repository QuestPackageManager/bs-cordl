#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewPrefabDynamicContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefabDynamicContext)
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IPrefabProvider;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefabDynamicContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefabDynamicContext);
// Type: Zenject::SubContainerCreatorByNewPrefabDynamicContext
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext*
class CORDL_TYPE SubContainerCreatorByNewPrefabDynamicContext : public ::Zenject::SubContainerCreatorDynamicContext {
public:
  // Declarations
  /// @brief Field _gameObjectBindInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectBindInfo, put = __cordl_internal_set__gameObjectBindInfo))::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  /// @brief Field _prefabProvider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prefabProvider, put = __cordl_internal_set__prefabProvider))::Zenject::IPrefabProvider* _prefabProvider;

  /// @brief Method CreateGameObject, addr 0x365f100, size 0x1c0, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateGameObject(ByRef<bool> shouldMakeActive);

  static inline ::Zenject::SubContainerCreatorByNewPrefabDynamicContext* New_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                                  ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get__gameObjectBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __cordl_internal_get__gameObjectBindInfo() const;

  constexpr ::Zenject::IPrefabProvider*& __cordl_internal_get__prefabProvider();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabProvider*> const& __cordl_internal_get__prefabProvider() const;

  constexpr void __cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set__prefabProvider(::Zenject::IPrefabProvider* value);

  /// @brief Method .ctor, addr 0x365f0c4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewPrefabDynamicContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabDynamicContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewPrefabDynamicContext(SubContainerCreatorByNewPrefabDynamicContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabDynamicContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewPrefabDynamicContext(SubContainerCreatorByNewPrefabDynamicContext const&) = delete;

  /// @brief Field _prefabProvider, offset: 0x18, size: 0x8, def value: None
  ::Zenject::IPrefabProvider* ____prefabProvider;

  /// @brief Field _gameObjectBindInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewPrefabDynamicContext, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefabDynamicContext, ____prefabProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefabDynamicContext, ____gameObjectBindInfo) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewPrefabDynamicContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewPrefabDynamicContext*, "Zenject", "SubContainerCreatorByNewPrefabDynamicContext");
