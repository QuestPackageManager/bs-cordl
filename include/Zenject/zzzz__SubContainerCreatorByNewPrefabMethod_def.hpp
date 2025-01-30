#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewPrefabMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefabMethod)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefabMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefabMethod);
// Dependencies Zenject.SubContainerCreatorByNewPrefabDynamicContext
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerCreatorByNewPrefabMethod
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod : public ::Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
  // Declarations
  /// @brief Field _installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__installerMethod, put = __cordl_internal_set__installerMethod)) ::System::Action_1<::Zenject::DiContainer*>* _installerMethod;

  /// @brief Method AddInstallers, addr 0x4b4348c, size 0xb0, virtual true, abstract: false, final false
  inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context);

  static inline ::Zenject::SubContainerCreatorByNewPrefabMethod* New_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                          ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get__installerMethod() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get__installerMethod();

  constexpr void __cordl_internal_set__installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  /// @brief Method .ctor, addr 0x4b4344c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                    ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewPrefabMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewPrefabMethod(SubContainerCreatorByNewPrefabMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewPrefabMethod(SubContainerCreatorByNewPrefabMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12617 };

  /// @brief Field _installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ____installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefabMethod, ____installerMethod) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewPrefabMethod, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewPrefabMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewPrefabMethod*, "Zenject", "SubContainerCreatorByNewPrefabMethod");
