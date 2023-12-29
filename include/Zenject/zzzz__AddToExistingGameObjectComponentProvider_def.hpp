#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_def.hpp"
CORDL_MODULE_EXPORT(AddToExistingGameObjectComponentProvider)
namespace System {
class Type;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace Zenject {
class AddToExistingGameObjectComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AddToExistingGameObjectComponentProvider);
// Type: Zenject::AddToExistingGameObjectComponentProvider
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11113))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11110))
// CS Name: ::Zenject::AddToExistingGameObjectComponentProvider*
class CORDL_TYPE AddToExistingGameObjectComponentProvider : public ::Zenject::AddToGameObjectComponentProviderBase {
public:
  // Declarations
  /// @brief Field _gameObject, offset 0x38, size 0x8
  __declspec(property(get = __get__gameObject, put = __set__gameObject))::UnityEngine::GameObject* _gameObject;

  __declspec(property(get = get_ShouldToggleActive)) bool ShouldToggleActive;

  constexpr ::UnityEngine::GameObject*& __get__gameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__gameObject() const;

  constexpr void __set__gameObject(::UnityEngine::GameObject* value);

  static inline ::Zenject::AddToExistingGameObjectComponentProvider* New_ctor(::UnityEngine::GameObject* gameObject, ::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                              ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                              ::System::Object* concreteIdentifier,
                                                                              ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method .ctor addr 0x2d9e4b8 size 0x38 virtual false final false
  inline void _ctor(::UnityEngine::GameObject* gameObject, ::Zenject::DiContainer* container, ::System::Type* componentType,
                    ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::System::Object* concreteIdentifier,
                    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_ShouldToggleActive addr 0x2d9e5d0 size 0x8 virtual true final false
  inline bool get_ShouldToggleActive();

  /// @brief Method GetGameObject addr 0x2d9e5d8 size 0x8 virtual true final false
  inline ::UnityEngine::GameObject* GetGameObject(::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddToExistingGameObjectComponentProvider(AddToExistingGameObjectComponentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddToExistingGameObjectComponentProvider(AddToExistingGameObjectComponentProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddToExistingGameObjectComponentProvider();

public:
  /// @brief Field _gameObject, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::AddToExistingGameObjectComponentProvider, 0x40>, "Size mismatch!");

static_assert(offsetof(::Zenject::AddToExistingGameObjectComponentProvider, ____gameObject) == 0x38, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::AddToExistingGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToExistingGameObjectComponentProvider*, "Zenject", "AddToExistingGameObjectComponentProvider");
