#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewGameObjectMethod)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class GameObjectContext;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewGameObjectMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewGameObjectMethod);
// Type: Zenject::SubContainerCreatorByNewGameObjectMethod
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11183))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11186))
// CS Name: ::Zenject::SubContainerCreatorByNewGameObjectMethod*
class CORDL_TYPE SubContainerCreatorByNewGameObjectMethod : public ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
public:
  // Declarations
  /// @brief Field _installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __get__installerMethod, put = __set__installerMethod))::System::Action_1<::Zenject::DiContainer*>* _installerMethod;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get__installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get__installerMethod() const;

  constexpr void __set__installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::SubContainerCreatorByNewGameObjectMethod* New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                              ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method .ctor addr 0x2da412c size 0x3c virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method AddInstallers addr 0x2da4168 size 0xb4 virtual true final false
  inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewGameObjectMethod(SubContainerCreatorByNewGameObjectMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewGameObjectMethod(SubContainerCreatorByNewGameObjectMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewGameObjectMethod();

public:
  /// @brief Field _installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ____installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewGameObjectMethod, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewGameObjectMethod, ____installerMethod) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewGameObjectMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewGameObjectMethod*, "Zenject", "SubContainerCreatorByNewGameObjectMethod");
