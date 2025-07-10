#pragma once
// IWYU pragma private; include "Zenject/AddToCurrentGameObjectComponentProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
CORDL_MODULE_EXPORT(AddToCurrentGameObjectComponentProvider)
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
namespace Zenject {
class AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0;
}
namespace Zenject {
class DiContainer;
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
// Forward declare root types
namespace Zenject {
class AddToCurrentGameObjectComponentProvider;
}
namespace Zenject {
class AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AddToCurrentGameObjectComponentProvider);
MARK_REF_PTR_T(::Zenject::AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.AddToCurrentGameObjectComponentProvider/<>c__DisplayClass15_0
class CORDL_TYPE AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::AddToCurrentGameObjectComponentProvider* __4__this;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;

  /// @brief Field context, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::Zenject::InjectContext* context;

  /// @brief Field instance, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_instance, put = __cordl_internal_set_instance)) ::System::Object* instance;

  static inline ::Zenject::AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0* New_ctor();

  /// @brief Method <GetAllInstancesWithInjectSplit>b__0, addr 0x4b3c080, size 0x158, virtual false, abstract: false, final false
  inline void _GetAllInstancesWithInjectSplit_b__0();

  constexpr ::Zenject::AddToCurrentGameObjectComponentProvider* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::AddToCurrentGameObjectComponentProvider*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get_args() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get_args();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get_context() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_context();

  constexpr ::System::Object* const& __cordl_internal_get_instance() const;

  constexpr ::System::Object*& __cordl_internal_get_instance();

  constexpr void __cordl_internal_set___4__this(::Zenject::AddToCurrentGameObjectComponentProvider* value);

  constexpr void __cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set_context(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set_instance(::System::Object* value);

  /// @brief Method __zenCreate, addr 0x4b3c1d8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b3c22c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b3bf60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0(AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0(AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12522 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::AddToCurrentGameObjectComponentProvider* _____4__this;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___args;

  /// @brief Field instance, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___instance;

  /// @brief Field context, offset: 0x28, size: 0x8, def value: None
  ::Zenject::InjectContext* ___context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0, ___args) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0, ___instance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0, ___context) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0, 0x30>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object, Zenject.IProvider
namespace Zenject {
// Is value type: false
// CS Name: Zenject.AddToCurrentGameObjectComponentProvider
class CORDL_TYPE AddToCurrentGameObjectComponentProvider : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass15_0 = ::Zenject::AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0;

  __declspec(property(get = get_ComponentType)) ::System::Type* ComponentType;

  __declspec(property(get = get_Container)) ::Zenject::DiContainer* Container;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _componentType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__componentType, put = __cordl_internal_set__componentType)) ::System::Type* _componentType;

  /// @brief Field _concreteIdentifier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__concreteIdentifier, put = __cordl_internal_set__concreteIdentifier)) ::System::Object* _concreteIdentifier;

  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _extraArguments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__extraArguments, put = __cordl_internal_set__extraArguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _extraArguments;

  /// @brief Field _instantiateCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__instantiateCallback,
                      put = __cordl_internal_set__instantiateCallback)) ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* _instantiateCallback;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x4b3bc18, size 0x348, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x4b3bc10, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::AddToCurrentGameObjectComponentProvider* New_ctor(::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                             ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                             ::System::Object* concreteIdentifier,
                                                                             ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  constexpr ::System::Type* const& __cordl_internal_get__componentType() const;

  constexpr ::System::Type*& __cordl_internal_get__componentType();

  constexpr ::System::Object* const& __cordl_internal_get__concreteIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get__concreteIdentifier();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get__extraArguments() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get__extraArguments();

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* const& __cordl_internal_get__instantiateCallback() const;

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& __cordl_internal_get__instantiateCallback();

  constexpr void __cordl_internal_set__componentType(::System::Type* value);

  constexpr void __cordl_internal_set__concreteIdentifier(::System::Object* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x4b3bb10, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Type* componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                    ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_ComponentType, addr 0x4b3bc08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_Container, addr 0x4b3bc00, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_IsCached, addr 0x4b3bbf0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x4b3bbf8, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddToCurrentGameObjectComponentProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddToCurrentGameObjectComponentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddToCurrentGameObjectComponentProvider(AddToCurrentGameObjectComponentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddToCurrentGameObjectComponentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddToCurrentGameObjectComponentProvider(AddToCurrentGameObjectComponentProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12523 };

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
static_assert(offsetof(::Zenject::AddToCurrentGameObjectComponentProvider, ____componentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToCurrentGameObjectComponentProvider, ____container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToCurrentGameObjectComponentProvider, ____extraArguments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToCurrentGameObjectComponentProvider, ____concreteIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::AddToCurrentGameObjectComponentProvider, ____instantiateCallback) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::AddToCurrentGameObjectComponentProvider, 0x38>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::AddToCurrentGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToCurrentGameObjectComponentProvider*, "Zenject", "AddToCurrentGameObjectComponentProvider");
NEED_NO_BOX(::Zenject::AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToCurrentGameObjectComponentProvider___c__DisplayClass15_0*, "Zenject", "AddToCurrentGameObjectComponentProvider/<>c__DisplayClass15_0");
