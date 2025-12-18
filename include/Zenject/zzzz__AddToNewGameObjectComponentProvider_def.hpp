#pragma once
// IWYU pragma private; include "Zenject/AddToNewGameObjectComponentProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_def.hpp"
CORDL_MODULE_EXPORT(AddToNewGameObjectComponentProvider)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
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
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class AddToNewGameObjectComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AddToNewGameObjectComponentProvider);
// Dependencies Zenject.AddToGameObjectComponentProviderBase
namespace Zenject {
// Is value type: false
// CS Name: Zenject.AddToNewGameObjectComponentProvider
class CORDL_TYPE AddToNewGameObjectComponentProvider : public ::Zenject::AddToGameObjectComponentProviderBase {
public:
  // Declarations
  __declspec(property(get = get_ShouldToggleActive)) bool ShouldToggleActive;

  /// @brief Field _gameObjectBindInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectBindInfo, put = __cordl_internal_set__gameObjectBindInfo)) ::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  /// @brief Method GetGameObject, addr 0x6cb9b84, size 0x5c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetGameObject(::Zenject::InjectContext* context);

  static inline ::Zenject::AddToNewGameObjectComponentProvider* New_ctor(::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                         ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                         ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Object* concreteIdentifier,
                                                                         ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get__gameObjectBindInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get__gameObjectBindInfo();

  constexpr void __cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  /// @brief Method .ctor, addr 0x6cb9b50, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Type* componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                    ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Object* concreteIdentifier,
                    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_ShouldToggleActive, addr 0x6cb9b7c, size 0x8, virtual true, abstract: false, final false
  inline bool get_ShouldToggleActive();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddToNewGameObjectComponentProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddToNewGameObjectComponentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddToNewGameObjectComponentProvider(AddToNewGameObjectComponentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddToNewGameObjectComponentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddToNewGameObjectComponentProvider(AddToNewGameObjectComponentProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14513 };

  /// @brief Field _gameObjectBindInfo, offset: 0x38, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::AddToNewGameObjectComponentProvider, ____gameObjectBindInfo) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::AddToNewGameObjectComponentProvider, 0x40>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::AddToNewGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToNewGameObjectComponentProvider*, "Zenject", "AddToNewGameObjectComponentProvider");
