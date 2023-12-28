#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TransientProvider)
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class __TransientProvider____c__DisplayClass11_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class TransientProvider;
}
namespace Zenject {
class __TransientProvider____c__DisplayClass11_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::TransientProvider);
MARK_REF_PTR_T(::Zenject::__TransientProvider____c__DisplayClass11_0);
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11298))
// CS Name: ::TransientProvider::<>c__DisplayClass11_0*
class CORDL_TYPE __TransientProvider____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::TransientProvider* __4__this;

  /// @brief Field instance, offset 0x18, size 0x8
  __declspec(property(get = __get_instance, put = __set_instance))::System::Object* instance;

  /// @brief Field instanceType, offset 0x20, size 0x8
  __declspec(property(get = __get_instanceType, put = __set_instanceType))::System::Type* instanceType;

  /// @brief Field extraArgs, offset 0x28, size 0x8
  __declspec(property(get = __get_extraArgs, put = __set_extraArgs))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs;

  /// @brief Field context, offset 0x30, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::Zenject::InjectContext* context;

  constexpr ::Zenject::TransientProvider*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::TransientProvider*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::TransientProvider* value);

  constexpr ::System::Object*& __get_instance();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_instance() const;

  constexpr void __set_instance(::System::Object* value);

  constexpr ::System::Type*& __get_instanceType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_instanceType() const;

  constexpr void __set_instanceType(::System::Type* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __get_extraArgs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __get_extraArgs() const;

  constexpr void __set_extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr ::Zenject::InjectContext*& __get_context();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get_context() const;

  constexpr void __set_context(::Zenject::InjectContext* value);

  static inline ::Zenject::__TransientProvider____c__DisplayClass11_0* New_ctor();

  /// @brief Method .ctor addr 0x2f0dda4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetAllInstancesWithInjectSplit>b__0 addr 0x2f0ddac size 0xf4 virtual false final false
  inline void _GetAllInstancesWithInjectSplit_b__0();

  /// @brief Method __zenCreate addr 0x2f0dea0 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f0defc size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__TransientProvider____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TransientProvider____c__DisplayClass11_0(__TransientProvider____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TransientProvider____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TransientProvider____c__DisplayClass11_0(__TransientProvider____c__DisplayClass11_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TransientProvider____c__DisplayClass11_0();

public:
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
static_assert(::cordl_internals::size_check_v<::Zenject::__TransientProvider____c__DisplayClass11_0, 0x38>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::TransientProvider
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11299))
// CS Name: ::Zenject::TransientProvider*
class CORDL_TYPE TransientProvider : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass11_0 = ::Zenject::__TransientProvider____c__DisplayClass11_0;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _concreteType, offset 0x18, size 0x8
  __declspec(property(get = __get__concreteType, put = __set__concreteType))::System::Type* _concreteType;

  /// @brief Field _extraArguments, offset 0x20, size 0x8
  __declspec(property(get = __get__extraArguments, put = __set__extraArguments))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _extraArguments;

  /// @brief Field _concreteIdentifier, offset 0x28, size 0x8
  __declspec(property(get = __get__concreteIdentifier, put = __set__concreteIdentifier))::System::Object* _concreteIdentifier;

  /// @brief Field _instantiateCallback, offset 0x30, size 0x8
  __declspec(property(get = __get__instantiateCallback, put = __set__instantiateCallback))::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* _instantiateCallback;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Type*& __get__concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__concreteType() const;

  constexpr void __set__concreteType(::System::Type* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __get__extraArguments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __get__extraArguments() const;

  constexpr void __set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr ::System::Object*& __get__concreteIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__concreteIdentifier() const;

  constexpr void __set__concreteIdentifier(::System::Object* value);

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& __get__instantiateCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*> const& __get__instantiateCallback() const;

  constexpr void __set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value);

  static inline ::Zenject::TransientProvider* New_ctor(::System::Type* concreteType, ::Zenject::DiContainer* container,
                                                       ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::StringW bindingContext,
                                                       ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method .ctor addr 0x2f0d8c0 size 0x1a4 virtual false final false
  inline void _ctor(::System::Type* concreteType, ::Zenject::DiContainer* container, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::StringW bindingContext,
                    ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_IsCached addr 0x2f0da64 size 0x8 virtual true final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f0da6c size 0x5c virtual true final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType addr 0x2f0dac8 size 0xb4 virtual true final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x2f0db8c size 0x218 virtual true final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetTypeToCreate addr 0x2f0db7c size 0x10 virtual false final false
  inline ::System::Type* GetTypeToCreate(::System::Type* contractType);

  // Ctor Parameters [CppParam { name: "", ty: "TransientProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransientProvider(TransientProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransientProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransientProvider(TransientProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransientProvider();

public:
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
static_assert(::cordl_internals::size_check_v<::Zenject::TransientProvider, 0x38>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::TransientProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TransientProvider*, "Zenject", "TransientProvider");
NEED_NO_BOX(::Zenject::__TransientProvider____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__TransientProvider____c__DisplayClass11_0*, "Zenject", "TransientProvider/<>c__DisplayClass11_0");
