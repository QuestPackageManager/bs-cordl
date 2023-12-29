#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefabMethod)
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefabMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefabMethod);
// Type: Zenject::SubContainerCreatorByNewPrefabMethod
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11202))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11205))
// CS Name: ::Zenject::SubContainerCreatorByNewPrefabMethod*
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod : public ::Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
  // Declarations
  /// @brief Field _installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __get__installerMethod, put = __set__installerMethod))::System::Action_1<::Zenject::DiContainer*>* _installerMethod;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get__installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get__installerMethod() const;

  constexpr void __set__installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::SubContainerCreatorByNewPrefabMethod* New_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                          ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method .ctor addr 0x2da4b60 size 0x40 virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                    ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method AddInstallers addr 0x2da4ba0 size 0xb4 virtual true final false
  inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewPrefabMethod(SubContainerCreatorByNewPrefabMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewPrefabMethod(SubContainerCreatorByNewPrefabMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewPrefabMethod();

public:
  /// @brief Field _installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ____installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewPrefabMethod, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefabMethod, ____installerMethod) == 0x28, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewPrefabMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewPrefabMethod*, "Zenject", "SubContainerCreatorByNewPrefabMethod");
