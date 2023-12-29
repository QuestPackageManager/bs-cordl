#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefab)
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class ISubContainerCreator;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefab;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefab);
// Type: Zenject::SubContainerCreatorByNewPrefab
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11201))
// CS Name: ::Zenject::SubContainerCreatorByNewPrefab*
class CORDL_TYPE SubContainerCreatorByNewPrefab : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameObjectBindInfo, offset 0x10, size 0x8
  __declspec(property(get = __get__gameObjectBindInfo, put = __set__gameObjectBindInfo))::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  /// @brief Field _prefabProvider, offset 0x18, size 0x8
  __declspec(property(get = __get__prefabProvider, put = __set__prefabProvider))::Zenject::IPrefabProvider* _prefabProvider;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Convert operator to "::Zenject::ISubContainerCreator"
  constexpr operator ::Zenject::ISubContainerCreator*() noexcept;

  constexpr ::Zenject::GameObjectCreationParameters*& __get__gameObjectBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get__gameObjectBindInfo() const;

  constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::Zenject::IPrefabProvider*& __get__prefabProvider();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabProvider*> const& __get__prefabProvider() const;

  constexpr void __set__prefabProvider(::Zenject::IPrefabProvider* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  static inline ::Zenject::SubContainerCreatorByNewPrefab* New_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                    ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method .ctor addr 0x2da421c size 0x3c virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method CreateSubContainer addr 0x2da4258 size 0x1a4 virtual true final true
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* parentContext);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefab", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewPrefab(SubContainerCreatorByNewPrefab&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefab", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewPrefab(SubContainerCreatorByNewPrefab const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewPrefab();

public:
  /// @brief Field _gameObjectBindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  /// @brief Field _prefabProvider, offset: 0x18, size: 0x8, def value: None
  ::Zenject::IPrefabProvider* ____prefabProvider;

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewPrefab, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefab, ____gameObjectBindInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefab, ____prefabProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefab, ____container) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewPrefab);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewPrefab*, "Zenject", "SubContainerCreatorByNewPrefab");
