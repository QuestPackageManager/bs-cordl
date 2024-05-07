#pragma once
// IWYU pragma private; include "Zenject/IPrefabInstantiator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IPrefabInstantiator)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
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
class IPrefabInstantiator;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IPrefabInstantiator);
// Type: Zenject::IPrefabInstantiator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::IPrefabInstantiator*
class CORDL_TYPE IPrefabInstantiator {
public:
  // Declarations
  __declspec(property(get = get_ArgumentTarget))::System::Type* ArgumentTarget;

  __declspec(property(get = get_ExtraArguments))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ExtraArguments;

  __declspec(property(get = get_GameObjectCreationParameters))::Zenject::GameObjectCreationParameters* GameObjectCreationParameters;

  /// @brief Method GetPrefab, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::Object> GetPrefab();

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::GameObject> Instantiate(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                         ByRef<::System::Action*> injectAction);

  /// @brief Method get_ArgumentTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_ArgumentTarget();

  /// @brief Method get_ExtraArguments, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* get_ExtraArguments();

  /// @brief Method get_GameObjectCreationParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();

  // Ctor Parameters [CppParam { name: "", ty: "IPrefabInstantiator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPrefabInstantiator(IPrefabInstantiator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPrefabInstantiator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPrefabInstantiator(IPrefabInstantiator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IPrefabInstantiator);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IPrefabInstantiator*, "Zenject", "IPrefabInstantiator");
