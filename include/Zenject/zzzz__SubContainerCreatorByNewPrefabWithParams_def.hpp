#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewPrefabWithParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefabWithParams)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class InjectableInfo;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0;
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
// CS Name: ::SubContainerCreatorByNewPrefabWithParams::<>c__DisplayClass7_0*
class CORDL_TYPE __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field argPair, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_argPair, put = __cordl_internal_set_argPair))::Zenject::TypeValuePair argPair;

  static inline ::Zenject::__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0* New_ctor();

  /// @brief Method <CreateTempContainer>b__0, addr 0x368d534, size 0x70, virtual false, abstract: false, final false
  inline bool _CreateTempContainer_b__0(::Zenject::InjectableInfo* x);

  /// @brief Method <CreateTempContainer>b__1, addr 0x368d5a4, size 0x20, virtual false, abstract: false, final false
  inline int32_t _CreateTempContainer_b__1(::Zenject::InjectableInfo* x);

  constexpr ::Zenject::TypeValuePair const& __cordl_internal_get_argPair() const;

  constexpr ::Zenject::TypeValuePair& __cordl_internal_get_argPair();

  constexpr void __cordl_internal_set_argPair(::Zenject::TypeValuePair value);

  /// @brief Method __zenCreate, addr 0x368d5c4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x368d620, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x368d380, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0(__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0(__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0 const&) = delete;

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
// CS Name: ::Zenject::SubContainerCreatorByNewPrefabWithParams*
class CORDL_TYPE SubContainerCreatorByNewPrefabWithParams : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::Zenject::__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _gameObjectBindInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectBindInfo, put = __cordl_internal_set__gameObjectBindInfo))::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  /// @brief Field _installerType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__installerType, put = __cordl_internal_set__installerType))::System::Type* _installerType;

  /// @brief Field _prefabProvider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prefabProvider, put = __cordl_internal_set__prefabProvider))::Zenject::IPrefabProvider* _prefabProvider;

  /// @brief Convert operator to "::Zenject::ISubContainerCreator"
  constexpr operator ::Zenject::ISubContainerCreator*() noexcept;

  /// @brief Method CreateSubContainer, addr 0x368d388, size 0x1ac, virtual true, abstract: false, final true
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* parentContext);

  /// @brief Method CreateTempContainer, addr 0x368ce60, size 0x49c, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* CreateTempContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args);

  static inline ::Zenject::SubContainerCreatorByNewPrefabWithParams* New_ctor(::System::Type* installerType, ::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                              ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get__gameObjectBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __cordl_internal_get__gameObjectBindInfo() const;

  constexpr ::System::Type*& __cordl_internal_get__installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__installerType() const;

  constexpr ::Zenject::IPrefabProvider*& __cordl_internal_get__prefabProvider();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabProvider*> const& __cordl_internal_get__prefabProvider() const;

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set__installerType(::System::Type* value);

  constexpr void __cordl_internal_set__prefabProvider(::Zenject::IPrefabProvider* value);

  /// @brief Method .ctor, addr 0x368ce18, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* installerType, ::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method get_Container, addr 0x368ce58, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Convert to "::Zenject::ISubContainerCreator"
  constexpr ::Zenject::ISubContainerCreator* i___Zenject__ISubContainerCreator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewPrefabWithParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabWithParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewPrefabWithParams(SubContainerCreatorByNewPrefabWithParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabWithParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewPrefabWithParams(SubContainerCreatorByNewPrefabWithParams const&) = delete;

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
