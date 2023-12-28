#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneContextRegistry)
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace Zenject {
class SceneContext;
}
// Forward declare root types
namespace Zenject {
class SceneContextRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SceneContextRegistry);
// Type: Zenject::SceneContextRegistry
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11332))
// CS Name: ::Zenject::SceneContextRegistry*
class CORDL_TYPE SceneContextRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _map, offset 0x10, size 0x8
  __declspec(property(get = __get__map, put = __set__map))::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>* _map;

  __declspec(property(get = get_SceneContexts))::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>* SceneContexts;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>*& __get__map();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>*> const& __get__map() const;

  constexpr void __set__map(::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>* value);

  /// @brief Method get_SceneContexts addr 0x2f1641c size 0x50 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>* get_SceneContexts();

  /// @brief Method Add addr 0x2f18178 size 0xd0 virtual false final false
  inline void Add(::Zenject::SceneContext* context);

  /// @brief Method GetSceneContextForScene addr 0x2f18248 size 0xb0 virtual false final false
  inline ::Zenject::SceneContext* GetSceneContextForScene(::StringW name);

  /// @brief Method GetSceneContextForScene addr 0x2f182f8 size 0x58 virtual false final false
  inline ::Zenject::SceneContext* GetSceneContextForScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method TryGetSceneContextForScene addr 0x2f18350 size 0xb0 virtual false final false
  inline ::Zenject::SceneContext* TryGetSceneContextForScene(::StringW name);

  /// @brief Method TryGetSceneContextForScene addr 0x2f18400 size 0x78 virtual false final false
  inline ::Zenject::SceneContext* TryGetSceneContextForScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetContainerForScene addr 0x2f18478 size 0xa4 virtual false final false
  inline ::Zenject::DiContainer* GetContainerForScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method TryGetContainerForScene addr 0x2f1851c size 0xec virtual false final false
  inline ::Zenject::DiContainer* TryGetContainerForScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method Remove addr 0x2f18608 size 0xfc virtual false final false
  inline void Remove(::Zenject::SceneContext* context);

  static inline ::Zenject::SceneContextRegistry* New_ctor();

  /// @brief Method .ctor addr 0x2f18704 size 0x7c virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreate addr 0x2f18780 size 0x58 virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f187d8 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneContextRegistry(SceneContextRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneContextRegistry(SceneContextRegistry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneContextRegistry();

public:
  /// @brief Field _map, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>* ____map;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SceneContextRegistry, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SceneContextRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContextRegistry*, "Zenject", "SceneContextRegistry");
