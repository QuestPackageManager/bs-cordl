#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_def.hpp"
CORDL_MODULE_EXPORT(AddToExistingGameObjectComponentProviderGetter)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
class AddToExistingGameObjectComponentProviderGetter;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AddToExistingGameObjectComponentProviderGetter);
// Type: Zenject::AddToExistingGameObjectComponentProviderGetter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11183))
// CS Name: ::Zenject::AddToExistingGameObjectComponentProviderGetter*
class CORDL_TYPE AddToExistingGameObjectComponentProviderGetter : public ::Zenject::AddToGameObjectComponentProviderBase {
public:
  // Declarations
  /// @brief Field _gameObjectGetter, offset 0x38, size 0x8
  __declspec(property(get = __get__gameObjectGetter, put = __set__gameObjectGetter))::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* _gameObjectGetter;

  __declspec(property(get = get_ShouldToggleActive)) bool ShouldToggleActive;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*& __get__gameObjectGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*> const& __get__gameObjectGetter() const;

  constexpr void __set__gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* value);

  static inline ::Zenject::AddToExistingGameObjectComponentProviderGetter* New_ctor(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter,
                                                                                    ::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                                    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArguments,
                                                                                    ::System::Object* concreteIdentifier,
                                                                                    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method .ctor, addr 0x2f063b0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter, ::Zenject::DiContainer* container, ::System::Type* componentType,
                    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArguments, ::System::Object* concreteIdentifier,
                    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_ShouldToggleActive, addr 0x2f063e8, size 0x8, virtual true, abstract: false, final false
  inline bool get_ShouldToggleActive();

  /// @brief Method GetGameObject, addr 0x2f063f0, size 0x78, virtual true, abstract: false, final false
  inline ::UnityEngine::GameObject* GetGameObject(::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProviderGetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddToExistingGameObjectComponentProviderGetter(AddToExistingGameObjectComponentProviderGetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProviderGetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddToExistingGameObjectComponentProviderGetter(AddToExistingGameObjectComponentProviderGetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddToExistingGameObjectComponentProviderGetter();

public:
  /// @brief Field _gameObjectGetter, offset: 0x38, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* ____gameObjectGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::AddToExistingGameObjectComponentProviderGetter, 0x40>, "Size mismatch!");

static_assert(offsetof(::Zenject::AddToExistingGameObjectComponentProviderGetter, ____gameObjectGetter) == 0x38, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::AddToExistingGameObjectComponentProviderGetter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToExistingGameObjectComponentProviderGetter*, "Zenject", "AddToExistingGameObjectComponentProviderGetter");
