#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorDynamicContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorDynamicContext)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorDynamicContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorDynamicContext);
// Dependencies System.Object, Zenject.ISubContainerCreator
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerCreatorDynamicContext
class CORDL_TYPE SubContainerCreatorDynamicContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Container)) ::Zenject::DiContainer* Container;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Convert operator to "::Zenject::ISubContainerCreator"
  constexpr operator ::Zenject::ISubContainerCreator*() noexcept;

  /// @brief Method AddInstallers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context);

  /// @brief Method CreateGameObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateGameObject(::ByRef<bool> shouldMakeActive);

  /// @brief Method CreateSubContainer, addr 0x4b4fd04, size 0xe4, virtual true, abstract: false, final true
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* parentContext);

  static inline ::Zenject::SubContainerCreatorDynamicContext* New_ctor(::Zenject::DiContainer* container);

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  /// @brief Method .ctor, addr 0x4b4e0f4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container);

  /// @brief Method get_Container, addr 0x4b4fcfc, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Convert to "::Zenject::ISubContainerCreator"
  constexpr ::Zenject::ISubContainerCreator* i___Zenject__ISubContainerCreator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorDynamicContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorDynamicContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorDynamicContext(SubContainerCreatorDynamicContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorDynamicContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorDynamicContext(SubContainerCreatorDynamicContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12637 };

  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerCreatorDynamicContext, ____container) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorDynamicContext, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorDynamicContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorDynamicContext*, "Zenject", "SubContainerCreatorDynamicContext");
