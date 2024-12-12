#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewPrefabMethod_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefabMethod_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Object;
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
class InjectTypeInfo;
}
namespace Zenject {
template <typename TParam1> class SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1> class SubContainerCreatorByNewPrefabMethod_1;
}
namespace Zenject {
template <typename TParam1> class SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefabMethod_1);
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TParam1>
// Is value type: false
// CS Name: Zenject.SubContainerCreatorByNewPrefabMethod`1/<>c__DisplayClass2_0<TParam1>
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1>* __4__this;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;

  static inline ::Zenject::SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0<TParam1>* New_ctor();

  /// @brief Method <AddInstallers>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _AddInstallers_b__0(::Zenject::DiContainer* subContainer);

  constexpr ::Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1>*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get_args() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get_args();

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1>* value);

  constexpr void __cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0(SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0(SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12615 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1>* _____4__this;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies Zenject.SubContainerCreatorByNewPrefabDynamicContext
namespace Zenject {
// cpp template
template <typename TParam1>
// Is value type: false
// CS Name: Zenject.SubContainerCreatorByNewPrefabMethod`1<TParam1>
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod_1 : public ::Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::Zenject::SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0<TParam1>;

  /// @brief Field _installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__installerMethod, put = __cordl_internal_set__installerMethod)) ::System::Action_2<::Zenject::DiContainer*, TParam1>* _installerMethod;

  /// @brief Method AddInstallers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context);

  static inline ::Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1>* New_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                                     ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                     ::System::Action_2<::Zenject::DiContainer*, TParam1>* installerMethod);

  constexpr ::System::Action_2<::Zenject::DiContainer*, TParam1>* const& __cordl_internal_get__installerMethod() const;

  constexpr ::System::Action_2<::Zenject::DiContainer*, TParam1>*& __cordl_internal_get__installerMethod();

  constexpr void __cordl_internal_set__installerMethod(::System::Action_2<::Zenject::DiContainer*, TParam1>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                    ::System::Action_2<::Zenject::DiContainer*, TParam1>* installerMethod);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewPrefabMethod_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewPrefabMethod_1(SubContainerCreatorByNewPrefabMethod_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewPrefabMethod_1(SubContainerCreatorByNewPrefabMethod_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12616 };

  /// @brief Field _installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::Zenject::DiContainer*, TParam1>* ____installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByNewPrefabMethod_1, "Zenject", "SubContainerCreatorByNewPrefabMethod`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByNewPrefabMethod_1___c__DisplayClass2_0, "Zenject", "SubContainerCreatorByNewPrefabMethod`1/<>c__DisplayClass2_0");
