#pragma once
// IWYU pragma private; include "Zenject/TransientProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TransientProvider)
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
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class TransientProvider___c__DisplayClass11_0;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class TransientProvider;
}
namespace Zenject {
class TransientProvider___c__DisplayClass11_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::TransientProvider);
MARK_REF_PTR_T(::Zenject::TransientProvider___c__DisplayClass11_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.TransientProvider/<>c__DisplayClass11_0
class CORDL_TYPE TransientProvider___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::TransientProvider* __4__this;

  /// @brief Field context, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::Zenject::InjectContext* context;

  /// @brief Field extraArgs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_extraArgs, put = __cordl_internal_set_extraArgs)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs;

  /// @brief Field instance, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_instance, put = __cordl_internal_set_instance)) ::System::Object* instance;

  /// @brief Field instanceType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_instanceType, put = __cordl_internal_set_instanceType)) ::System::Type* instanceType;

  static inline ::Zenject::TransientProvider___c__DisplayClass11_0* New_ctor();

  /// @brief Method <GetAllInstancesWithInjectSplit>b__0, addr 0x4b44880, size 0xf4, virtual false, abstract: false, final false
  inline void _GetAllInstancesWithInjectSplit_b__0();

  constexpr ::Zenject::TransientProvider* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::TransientProvider*& __cordl_internal_get___4__this();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get_context() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_context();

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get_extraArgs() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get_extraArgs();

  constexpr ::System::Object* const& __cordl_internal_get_instance() const;

  constexpr ::System::Object*& __cordl_internal_get_instance();

  constexpr ::System::Type* const& __cordl_internal_get_instanceType() const;

  constexpr ::System::Type*& __cordl_internal_get_instanceType();

  constexpr void __cordl_internal_set___4__this(::Zenject::TransientProvider* value);

  constexpr void __cordl_internal_set_context(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set_extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set_instance(::System::Object* value);

  constexpr void __cordl_internal_set_instanceType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x4b44974, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b449c8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b44878, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransientProvider___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransientProvider___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransientProvider___c__DisplayClass11_0(TransientProvider___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransientProvider___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransientProvider___c__DisplayClass11_0(TransientProvider___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12638 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::TransientProvider* _____4__this;

  /// @brief Field instance, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___instance;

  /// @brief Field instanceType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___instanceType;

  /// @brief Field extraArgs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___extraArgs;

  /// @brief Field context, offset: 0x30, size: 0x8, def value: None
  ::Zenject::InjectContext* ___context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::TransientProvider___c__DisplayClass11_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::TransientProvider___c__DisplayClass11_0, ___instance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::TransientProvider___c__DisplayClass11_0, ___instanceType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::TransientProvider___c__DisplayClass11_0, ___extraArgs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::TransientProvider___c__DisplayClass11_0, ___context) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::TransientProvider___c__DisplayClass11_0, 0x38>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object, Zenject.IProvider
namespace Zenject {
// Is value type: false
// CS Name: Zenject.TransientProvider
class CORDL_TYPE TransientProvider : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass11_0 = ::Zenject::TransientProvider___c__DisplayClass11_0;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _concreteIdentifier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__concreteIdentifier, put = __cordl_internal_set__concreteIdentifier)) ::System::Object* _concreteIdentifier;

  /// @brief Field _concreteType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__concreteType, put = __cordl_internal_set__concreteType)) ::System::Type* _concreteType;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _extraArguments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__extraArguments, put = __cordl_internal_set__extraArguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _extraArguments;

  /// @brief Field _instantiateCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__instantiateCallback,
                      put = __cordl_internal_set__instantiateCallback)) ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* _instantiateCallback;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x4b44668, size 0x210, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x4b445a4, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetTypeToCreate, addr 0x4b44658, size 0x10, virtual false, abstract: false, final false
  inline ::System::Type* GetTypeToCreate(::System::Type* contractType);

  static inline ::Zenject::TransientProvider* New_ctor(::System::Type* concreteType, ::Zenject::DiContainer* container,
                                                       ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::StringW bindingContext,
                                                       ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  constexpr ::System::Object* const& __cordl_internal_get__concreteIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get__concreteIdentifier();

  constexpr ::System::Type* const& __cordl_internal_get__concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get__concreteType();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get__extraArguments() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get__extraArguments();

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* const& __cordl_internal_get__instantiateCallback() const;

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& __cordl_internal_get__instantiateCallback();

  constexpr void __cordl_internal_set__concreteIdentifier(::System::Object* value);

  constexpr void __cordl_internal_set__concreteType(::System::Type* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x4b4439c, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* concreteType, ::Zenject::DiContainer* container, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::StringW bindingContext,
                    ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_IsCached, addr 0x4b44540, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x4b44548, size 0x5c, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransientProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransientProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransientProvider(TransientProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransientProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransientProvider(TransientProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12639 };

  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _concreteType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____concreteType;

  /// @brief Field _extraArguments, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ____extraArguments;

  /// @brief Field _concreteIdentifier, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____concreteIdentifier;

  /// @brief Field _instantiateCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* ____instantiateCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::TransientProvider, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::TransientProvider, ____concreteType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::TransientProvider, ____extraArguments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::TransientProvider, ____concreteIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::TransientProvider, ____instantiateCallback) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::TransientProvider, 0x38>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::TransientProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TransientProvider*, "Zenject", "TransientProvider");
NEED_NO_BOX(::Zenject::TransientProvider___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TransientProvider___c__DisplayClass11_0*, "Zenject", "TransientProvider/<>c__DisplayClass11_0");
