#pragma once
// IWYU pragma private; include "Zenject/SceneContextRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneContextRegistry)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
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
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SceneContextRegistry
class CORDL_TYPE SceneContextRegistry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SceneContexts)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* SceneContexts;

  /// @brief Field _map, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__map,
                      put = __cordl_internal_set__map)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::UnityW<::Zenject::SceneContext>>* _map;

  /// @brief Method Add, addr 0x4b4e1ac, size 0xd0, virtual false, abstract: false, final false
  inline void Add(::Zenject::SceneContext* context);

  /// @brief Method GetContainerForScene, addr 0x4b4e4a4, size 0xa4, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* GetContainerForScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetSceneContextForScene, addr 0x4b4e27c, size 0xac, virtual false, abstract: false, final false
  inline ::UnityW<::Zenject::SceneContext> GetSceneContextForScene(::StringW name);

  /// @brief Method GetSceneContextForScene, addr 0x4b4e328, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::Zenject::SceneContext> GetSceneContextForScene(::UnityEngine::SceneManagement::Scene scene);

  static inline ::Zenject::SceneContextRegistry* New_ctor();

  /// @brief Method Remove, addr 0x4b4e634, size 0x10c, virtual false, abstract: false, final false
  inline void Remove(::Zenject::SceneContext* context);

  /// @brief Method TryGetContainerForScene, addr 0x4b4e548, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* TryGetContainerForScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method TryGetSceneContextForScene, addr 0x4b4e380, size 0xac, virtual false, abstract: false, final false
  inline ::UnityW<::Zenject::SceneContext> TryGetSceneContextForScene(::StringW name);

  /// @brief Method TryGetSceneContextForScene, addr 0x4b4e42c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::Zenject::SceneContext> TryGetSceneContextForScene(::UnityEngine::SceneManagement::Scene scene);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::UnityW<::Zenject::SceneContext>>* const& __cordl_internal_get__map() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::UnityW<::Zenject::SceneContext>>*& __cordl_internal_get__map();

  constexpr void __cordl_internal_set__map(::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::UnityW<::Zenject::SceneContext>>* value);

  /// @brief Method __zenCreate, addr 0x4b4e7bc, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4e80c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4e740, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SceneContexts, addr 0x4b4c4c8, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* get_SceneContexts();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneContextRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneContextRegistry(SceneContextRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneContextRegistry(SceneContextRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12674 };

  /// @brief Field _map, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::UnityW<::Zenject::SceneContext>>* ____map;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SceneContextRegistry, ____map) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SceneContextRegistry, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SceneContextRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContextRegistry*, "Zenject", "SceneContextRegistry");
