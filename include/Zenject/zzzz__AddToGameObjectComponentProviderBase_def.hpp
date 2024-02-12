#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AddToGameObjectComponentProviderBase)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class __AddToGameObjectComponentProviderBase____c__DisplayClass17_0;
}
// Forward declare root types
namespace Zenject {
class AddToGameObjectComponentProviderBase;
}
namespace Zenject {
class __AddToGameObjectComponentProviderBase____c__DisplayClass17_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AddToGameObjectComponentProviderBase);
MARK_REF_PTR_T(::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0);
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10326))
// CS Name: ::AddToGameObjectComponentProviderBase::<>c__DisplayClass17_0*
class CORDL_TYPE __AddToGameObjectComponentProviderBase____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::AddToGameObjectComponentProviderBase* __4__this;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;

  /// @brief Field instance, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_instance, put = __cordl_internal_set_instance))::System::Object* instance;

  /// @brief Field context, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context))::Zenject::InjectContext* context;

  /// @brief Field wasActive, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_wasActive, put = __cordl_internal_set_wasActive)) bool wasActive;

  /// @brief Field gameObj, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObj, put = __cordl_internal_set_gameObj))::UnityW<::UnityEngine::GameObject> gameObj;

  constexpr ::Zenject::AddToGameObjectComponentProviderBase*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::AddToGameObjectComponentProviderBase*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::AddToGameObjectComponentProviderBase* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get_args();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __cordl_internal_get_args() const;

  constexpr void __cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr ::System::Object*& __cordl_internal_get_instance();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_instance() const;

  constexpr void __cordl_internal_set_instance(::System::Object* value);

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_context();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __cordl_internal_get_context() const;

  constexpr void __cordl_internal_set_context(::Zenject::InjectContext* value);

  constexpr bool& __cordl_internal_get_wasActive();

  constexpr bool const& __cordl_internal_get_wasActive() const;

  constexpr void __cordl_internal_set_wasActive(bool value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObj();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObj() const;

  constexpr void __cordl_internal_set_gameObj(::UnityW<::UnityEngine::GameObject> value);

  static inline ::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0* New_ctor();

  /// @brief Method .ctor, addr 0x2f228a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetAllInstancesWithInjectSplit>b__0, addr 0x2f228ac, size 0x244, virtual false, abstract: false, final false
  inline void _GetAllInstancesWithInjectSplit_b__0();

  /// @brief Method __zenCreate, addr 0x2f22af0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f22b4c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__AddToGameObjectComponentProviderBase____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddToGameObjectComponentProviderBase____c__DisplayClass17_0(__AddToGameObjectComponentProviderBase____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddToGameObjectComponentProviderBase____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddToGameObjectComponentProviderBase____c__DisplayClass17_0(__AddToGameObjectComponentProviderBase____c__DisplayClass17_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddToGameObjectComponentProviderBase____c__DisplayClass17_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::AddToGameObjectComponentProviderBase* _____4__this;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___args;

  /// @brief Field instance, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___instance;

  /// @brief Field context, offset: 0x28, size: 0x8, def value: None
  ::Zenject::InjectContext* ___context;

  /// @brief Field wasActive, offset: 0x30, size: 0x1, def value: None
  bool ___wasActive;

  /// @brief Field gameObj, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0, ___args) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0, ___instance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0, ___context) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0, ___wasActive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0, ___gameObj) == 0x38, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::AddToGameObjectComponentProviderBase
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10327))
// CS Name: ::Zenject::AddToGameObjectComponentProviderBase*
class CORDL_TYPE AddToGameObjectComponentProviderBase : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass17_0 = ::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0;

  /// @brief Field _componentType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__componentType, put = __cordl_internal_set__componentType))::System::Type* _componentType;

  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _extraArguments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__extraArguments, put = __cordl_internal_set__extraArguments))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _extraArguments;

  /// @brief Field _concreteIdentifier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__concreteIdentifier, put = __cordl_internal_set__concreteIdentifier))::System::Object* _concreteIdentifier;

  /// @brief Field _instantiateCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__instantiateCallback,
                      put = __cordl_internal_set__instantiateCallback))::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* _instantiateCallback;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  __declspec(property(get = get_ComponentType))::System::Type* ComponentType;

  __declspec(property(get = get_ShouldToggleActive)) bool ShouldToggleActive;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

  constexpr ::System::Type*& __cordl_internal_get__componentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__componentType() const;

  constexpr void __cordl_internal_set__componentType(::System::Type* value);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get__extraArguments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __cordl_internal_get__extraArguments() const;

  constexpr void __cordl_internal_set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr ::System::Object*& __cordl_internal_get__concreteIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__concreteIdentifier() const;

  constexpr void __cordl_internal_set__concreteIdentifier(::System::Object* value);

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& __cordl_internal_get__instantiateCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*> const& __cordl_internal_get__instantiateCallback() const;

  constexpr void __cordl_internal_set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value);

  static inline ::Zenject::AddToGameObjectComponentProviderBase* New_ctor(::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                          ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::System::Object* concreteIdentifier,
                                                                          ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method .ctor, addr 0x2f22408, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Type* componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                    ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_IsCached, addr 0x2f225b0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x2f225b8, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method get_Container, addr 0x2f225c0, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_ComponentType, addr 0x2f225c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_ShouldToggleActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_ShouldToggleActive();

  /// @brief Method GetInstanceType, addr 0x2f225d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x2f225d8, size 0x2cc, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetGameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::GameObject> GetGameObject(::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "AddToGameObjectComponentProviderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddToGameObjectComponentProviderBase(AddToGameObjectComponentProviderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddToGameObjectComponentProviderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddToGameObjectComponentProviderBase(AddToGameObjectComponentProviderBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddToGameObjectComponentProviderBase();

public:
  /// @brief Field _componentType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____componentType;

  /// @brief Field _container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _extraArguments, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ____extraArguments;

  /// @brief Field _concreteIdentifier, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____concreteIdentifier;

  /// @brief Field _instantiateCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* ____instantiateCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::AddToGameObjectComponentProviderBase, 0x38>, "Size mismatch!");

static_assert(offsetof(::Zenject::AddToGameObjectComponentProviderBase, ____componentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToGameObjectComponentProviderBase, ____container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToGameObjectComponentProviderBase, ____extraArguments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToGameObjectComponentProviderBase, ____concreteIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToGameObjectComponentProviderBase, ____instantiateCallback) == 0x30, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::AddToGameObjectComponentProviderBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToGameObjectComponentProviderBase*, "Zenject", "AddToGameObjectComponentProviderBase");
NEED_NO_BOX(::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__AddToGameObjectComponentProviderBase____c__DisplayClass17_0*, "Zenject", "AddToGameObjectComponentProviderBase/<>c__DisplayClass17_0");
