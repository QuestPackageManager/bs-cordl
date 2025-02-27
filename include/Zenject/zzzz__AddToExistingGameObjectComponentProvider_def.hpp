#pragma once
// IWYU pragma private; include "Zenject/AddToExistingGameObjectComponentProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_def.hpp"
CORDL_MODULE_EXPORT(AddToExistingGameObjectComponentProvider)
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
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class AddToExistingGameObjectComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AddToExistingGameObjectComponentProvider);
// Dependencies Zenject.AddToGameObjectComponentProviderBase
namespace Zenject {
// Is value type: false
// CS Name: Zenject.AddToExistingGameObjectComponentProvider
class CORDL_TYPE AddToExistingGameObjectComponentProvider : public ::Zenject::AddToGameObjectComponentProviderBase {
public:
  // Declarations
  __declspec(property(get = get_ShouldToggleActive)) bool ShouldToggleActive;

  /// @brief Field _gameObject, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObject, put = __cordl_internal_set__gameObject)) ::UnityW<::UnityEngine::GameObject> _gameObject;

  /// @brief Method GetGameObject, addr 0x4b48c90, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetGameObject(::Zenject::InjectContext* context);

  static inline ::Zenject::AddToExistingGameObjectComponentProvider* New_ctor(::UnityEngine::GameObject* gameObject, ::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                              ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                              ::System::Object* concreteIdentifier,
                                                                              ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__gameObject();

  constexpr void __cordl_internal_set__gameObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x4b48b70, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GameObject* gameObject, ::Zenject::DiContainer* container, ::System::Type* componentType,
                    ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::System::Object* concreteIdentifier,
                    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_ShouldToggleActive, addr 0x4b48c88, size 0x8, virtual true, abstract: false, final false
  inline bool get_ShouldToggleActive();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddToExistingGameObjectComponentProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddToExistingGameObjectComponentProvider(AddToExistingGameObjectComponentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddToExistingGameObjectComponentProvider(AddToExistingGameObjectComponentProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12524 };

  /// @brief Field _gameObject, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::AddToExistingGameObjectComponentProvider, ____gameObject) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::AddToExistingGameObjectComponentProvider, 0x40>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::AddToExistingGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToExistingGameObjectComponentProvider*, "Zenject", "AddToExistingGameObjectComponentProvider");
