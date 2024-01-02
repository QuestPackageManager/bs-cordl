#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefabWithParams)
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class GameObjectCreationParameters;
}
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
class InjectTypeInfo;
}
namespace Zenject {
class InjectableInfo;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefabWithParams;
}
namespace Zenject {
class __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefabWithParams);
MARK_REF_PTR_T(::Zenject::__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11114)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11292))
// CS Name: ::SubContainerCreatorByNewPrefabWithParams::<>c__DisplayClass7_0*
class CORDL_TYPE __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field argPair, offset 0x10, size 0x10
  __declspec(property(get = __get_argPair, put = __set_argPair))::Zenject::TypeValuePair argPair;

  constexpr ::Zenject::TypeValuePair& __get_argPair();

  constexpr ::Zenject::TypeValuePair const& __get_argPair() const;

  constexpr void __set_argPair(::Zenject::TypeValuePair value);

  static inline ::Zenject::__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor, addr 0x2f0cf8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CreateTempContainer>b__0, addr 0x2f0d140, size 0x70, virtual false, abstract: false, final false
  inline bool _CreateTempContainer_b__0(::Zenject::InjectableInfo* x);

  /// @brief Method <CreateTempContainer>b__1, addr 0x2f0d1b0, size 0x20, virtual false, abstract: false, final false
  inline int32_t _CreateTempContainer_b__1(::Zenject::InjectableInfo* x);

  /// @brief Method __zenCreate, addr 0x2f0d1d0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f0d22c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0(__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0(__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0();

public:
  /// @brief Field argPair, offset: 0x10, size: 0x10, def value: None
  ::Zenject::TypeValuePair ___argPair;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0, ___argPair) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::SubContainerCreatorByNewPrefabWithParams
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11293))
// CS Name: ::Zenject::SubContainerCreatorByNewPrefabWithParams*
class CORDL_TYPE SubContainerCreatorByNewPrefabWithParams : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::Zenject::__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _prefabProvider, offset 0x18, size 0x8
  __declspec(property(get = __get__prefabProvider, put = __set__prefabProvider))::Zenject::IPrefabProvider* _prefabProvider;

  /// @brief Field _installerType, offset 0x20, size 0x8
  __declspec(property(get = __get__installerType, put = __set__installerType))::System::Type* _installerType;

  /// @brief Field _gameObjectBindInfo, offset 0x28, size 0x8
  __declspec(property(get = __get__gameObjectBindInfo, put = __set__gameObjectBindInfo))::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  /// @brief Convert operator to "::Zenject::ISubContainerCreator"
  constexpr operator ::Zenject::ISubContainerCreator*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::Zenject::IPrefabProvider*& __get__prefabProvider();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabProvider*> const& __get__prefabProvider() const;

  constexpr void __set__prefabProvider(::Zenject::IPrefabProvider* value);

  constexpr ::System::Type*& __get__installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__installerType() const;

  constexpr void __set__installerType(::System::Type* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get__gameObjectBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get__gameObjectBindInfo() const;

  constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  static inline ::Zenject::SubContainerCreatorByNewPrefabWithParams* New_ctor(::System::Type* installerType, ::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                              ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method .ctor, addr 0x2f0ca24, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* installerType, ::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method get_Container, addr 0x2f0ca64, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method CreateTempContainer, addr 0x2f0ca6c, size 0x49c, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* CreateTempContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args);

  /// @brief Method CreateSubContainer, addr 0x2f0cf94, size 0x1ac, virtual true, abstract: false, final true
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* parentContext);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabWithParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewPrefabWithParams(SubContainerCreatorByNewPrefabWithParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabWithParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewPrefabWithParams(SubContainerCreatorByNewPrefabWithParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewPrefabWithParams();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _prefabProvider, offset: 0x18, size: 0x8, def value: None
  ::Zenject::IPrefabProvider* ____prefabProvider;

  /// @brief Field _installerType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____installerType;

  /// @brief Field _gameObjectBindInfo, offset: 0x28, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewPrefabWithParams, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefabWithParams, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefabWithParams, ____prefabProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefabWithParams, ____installerType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewPrefabWithParams, ____gameObjectBindInfo) == 0x28, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewPrefabWithParams);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewPrefabWithParams*, "Zenject", "SubContainerCreatorByNewPrefabWithParams");
NEED_NO_BOX(::Zenject::__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0*, "Zenject", "SubContainerCreatorByNewPrefabWithParams/<>c__DisplayClass7_0");
