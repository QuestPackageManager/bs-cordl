#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrefabResourceBindingFinalizer)
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass6_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass5_0;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class PrefabInstantiatorCached;
}
// Forward declare root types
namespace Zenject {
class PrefabResourceBindingFinalizer;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass5_0;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass6_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabResourceBindingFinalizer);
MARK_REF_PTR_T(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0);
MARK_REF_PTR_T(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1);
MARK_REF_PTR_T(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1);
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10960))
// CS Name: ::PrefabResourceBindingFinalizer::<>c__DisplayClass5_0*
class CORDL_TYPE __PrefabResourceBindingFinalizer____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::PrefabResourceBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __get_container, put = __set_container))::Zenject::DiContainer* container;

  /// @brief Field concreteTypes, offset 0x20, size 0x8
  __declspec(property(get = __get_concreteTypes, put = __set_concreteTypes))::System::Collections::Generic::List_1<::System::Type*>* concreteTypes;

  constexpr ::Zenject::PrefabResourceBindingFinalizer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabResourceBindingFinalizer*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::PrefabResourceBindingFinalizer* value);

  constexpr ::Zenject::DiContainer*& __get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get_container() const;

  constexpr void __set_container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __get_concreteTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __get_concreteTypes() const;

  constexpr void __set_concreteTypes(::System::Collections::Generic::List_1<::System::Type*>* value);

  static inline ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor addr 0x2ee42d4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FinalizeBindingConcrete>b__0 addr 0x2ee42f4 size 0x118 virtual false final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType);

  /// @brief Method __zenCreate addr 0x2ee440c size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ee4468 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrefabResourceBindingFinalizer____c__DisplayClass5_0(__PrefabResourceBindingFinalizer____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrefabResourceBindingFinalizer____c__DisplayClass5_0(__PrefabResourceBindingFinalizer____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrefabResourceBindingFinalizer____c__DisplayClass5_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabResourceBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  /// @brief Field concreteTypes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ___concreteTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass5_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10961))
// CS Name: ::PrefabResourceBindingFinalizer::<>c__DisplayClass5_1*
class CORDL_TYPE __PrefabResourceBindingFinalizer____c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefabCreator, offset 0x10, size 0x8
  __declspec(property(get = __get_prefabCreator, put = __set_prefabCreator))::Zenject::PrefabInstantiatorCached* prefabCreator;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __get_CS$__8__locals1, put = __set_CS$__8__locals1))::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0* CS$__8__locals1;

  constexpr ::Zenject::PrefabInstantiatorCached*& __get_prefabCreator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabInstantiatorCached*> const& __get_prefabCreator() const;

  constexpr void __set_prefabCreator(::Zenject::PrefabInstantiatorCached* value);

  constexpr ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0*& __get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0*> const& __get_CS$__8__locals1() const;

  constexpr void __set_CS$__8__locals1(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0* value);

  static inline ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1* New_ctor();

  /// @brief Method .ctor addr 0x2ee42dc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FinalizeBindingConcrete>b__1 addr 0x2ee4628 size 0x40 virtual false final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType);

  /// @brief Method __zenCreate addr 0x2ee4668 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ee46c4 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrefabResourceBindingFinalizer____c__DisplayClass5_1(__PrefabResourceBindingFinalizer____c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrefabResourceBindingFinalizer____c__DisplayClass5_1(__PrefabResourceBindingFinalizer____c__DisplayClass5_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrefabResourceBindingFinalizer____c__DisplayClass5_1();

public:
  /// @brief Field prefabCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabInstantiatorCached* ___prefabCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10962))
// CS Name: ::PrefabResourceBindingFinalizer::<>c__DisplayClass6_0*
class CORDL_TYPE __PrefabResourceBindingFinalizer____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::PrefabResourceBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __get_container, put = __set_container))::Zenject::DiContainer* container;

  constexpr ::Zenject::PrefabResourceBindingFinalizer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabResourceBindingFinalizer*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::PrefabResourceBindingFinalizer* value);

  constexpr ::Zenject::DiContainer*& __get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get_container() const;

  constexpr void __set_container(::Zenject::DiContainer* value);

  static inline ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor addr 0x2ee42e4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FinalizeBindingSelf>b__0 addr 0x2ee4884 size 0x11c virtual false final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType);

  /// @brief Method __zenCreate addr 0x2ee49a0 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ee49fc size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrefabResourceBindingFinalizer____c__DisplayClass6_0(__PrefabResourceBindingFinalizer____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrefabResourceBindingFinalizer____c__DisplayClass6_0(__PrefabResourceBindingFinalizer____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrefabResourceBindingFinalizer____c__DisplayClass6_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabResourceBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass6_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10963))
// CS Name: ::PrefabResourceBindingFinalizer::<>c__DisplayClass6_1*
class CORDL_TYPE __PrefabResourceBindingFinalizer____c__DisplayClass6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefabCreator, offset 0x10, size 0x8
  __declspec(property(get = __get_prefabCreator, put = __set_prefabCreator))::Zenject::PrefabInstantiatorCached* prefabCreator;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __get_CS$__8__locals1, put = __set_CS$__8__locals1))::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0* CS$__8__locals1;

  constexpr ::Zenject::PrefabInstantiatorCached*& __get_prefabCreator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabInstantiatorCached*> const& __get_prefabCreator() const;

  constexpr void __set_prefabCreator(::Zenject::PrefabInstantiatorCached* value);

  constexpr ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0*& __get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0*> const& __get_CS$__8__locals1() const;

  constexpr void __set_CS$__8__locals1(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0* value);

  static inline ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1* New_ctor();

  /// @brief Method .ctor addr 0x2ee42ec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FinalizeBindingSelf>b__1 addr 0x2ee4bbc size 0x40 virtual false final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType);

  /// @brief Method __zenCreate addr 0x2ee4bfc size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ee4c58 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrefabResourceBindingFinalizer____c__DisplayClass6_1(__PrefabResourceBindingFinalizer____c__DisplayClass6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrefabResourceBindingFinalizer____c__DisplayClass6_1(__PrefabResourceBindingFinalizer____c__DisplayClass6_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrefabResourceBindingFinalizer____c__DisplayClass6_1();

public:
  /// @brief Field prefabCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabInstantiatorCached* ___prefabCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::PrefabResourceBindingFinalizer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10964))
// CS Name: ::Zenject::PrefabResourceBindingFinalizer*
class CORDL_TYPE PrefabResourceBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  using __c__DisplayClass6_1 = ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1;

  using __c__DisplayClass6_0 = ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0;

  using __c__DisplayClass5_1 = ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1;

  using __c__DisplayClass5_0 = ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0;

  /// @brief Field _gameObjectBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __get__gameObjectBindInfo, put = __set__gameObjectBindInfo))::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  /// @brief Field _resourcePath, offset 0x20, size 0x8
  __declspec(property(get = __get__resourcePath, put = __set__resourcePath))::StringW _resourcePath;

  /// @brief Field _providerFactory, offset 0x28, size 0x8
  __declspec(property(get = __get__providerFactory, put = __set__providerFactory))::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* _providerFactory;

  constexpr ::Zenject::GameObjectCreationParameters*& __get__gameObjectBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get__gameObjectBindInfo() const;

  constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::StringW& __get__resourcePath();

  constexpr ::StringW const& __get__resourcePath() const;

  constexpr void __set__resourcePath(::StringW value);

  constexpr ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*& __get__providerFactory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*> const& __get__providerFactory() const;

  constexpr void __set__providerFactory(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline ::Zenject::PrefabResourceBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::StringW resourcePath,
                                                                    ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory);

  /// @brief Method .ctor addr 0x2ee3bac size 0x40 virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::StringW resourcePath,
                    ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory);

  /// @brief Method OnFinalizeBinding addr 0x2ee3bec size 0x84 virtual true final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  /// @brief Method FinalizeBindingConcrete addr 0x2ee3fa0 size 0x334 virtual false final false
  inline void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);

  /// @brief Method FinalizeBindingSelf addr 0x2ee3c70 size 0x330 virtual false final false
  inline void FinalizeBindingSelf(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "PrefabResourceBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabResourceBindingFinalizer(PrefabResourceBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabResourceBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabResourceBindingFinalizer(PrefabResourceBindingFinalizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabResourceBindingFinalizer();

public:
  /// @brief Field _gameObjectBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  /// @brief Field _resourcePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ____resourcePath;

  /// @brief Field _providerFactory, offset: 0x28, size: 0x8, def value: None
  ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* ____providerFactory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabResourceBindingFinalizer, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PrefabResourceBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabResourceBindingFinalizer*, "Zenject", "PrefabResourceBindingFinalizer");
NEED_NO_BOX(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass6_1");
