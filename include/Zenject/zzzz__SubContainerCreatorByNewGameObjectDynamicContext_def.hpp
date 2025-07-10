#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewGameObjectDynamicContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewGameObjectDynamicContext)
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewGameObjectDynamicContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewGameObjectDynamicContext);
// Dependencies Zenject.SubContainerCreatorDynamicContext
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerCreatorByNewGameObjectDynamicContext
class CORDL_TYPE SubContainerCreatorByNewGameObjectDynamicContext : public ::Zenject::SubContainerCreatorDynamicContext {
public:
  // Declarations
  /// @brief Field _gameObjectBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectBindInfo, put = __cordl_internal_set__gameObjectBindInfo)) ::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  /// @brief Method CreateGameObject, addr 0x4b41990, size 0x4c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateGameObject(::ByRef<bool> shouldMakeActive);

  static inline ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext* New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get__gameObjectBindInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get__gameObjectBindInfo();

  constexpr void __cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  /// @brief Method .ctor, addr 0x4b4193c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewGameObjectDynamicContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectDynamicContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewGameObjectDynamicContext(SubContainerCreatorByNewGameObjectDynamicContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectDynamicContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewGameObjectDynamicContext(SubContainerCreatorByNewGameObjectDynamicContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12597 };

  /// @brief Field _gameObjectBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerCreatorByNewGameObjectDynamicContext, ____gameObjectBindInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewGameObjectDynamicContext, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewGameObjectDynamicContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewGameObjectDynamicContext*, "Zenject", "SubContainerCreatorByNewGameObjectDynamicContext");
