#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SubContainerBindingFinalizer)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class __SubContainerBindingFinalizer____c__DisplayClass6_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class __SubContainerBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class __SubContainerBindingFinalizer____c__DisplayClass5_0;
}
namespace Zenject {
class __SubContainerBindingFinalizer____c__DisplayClass6_0;
}
namespace System {
class Object;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SubContainerCreatorCached;
}
// Forward declare root types
namespace Zenject {
class SubContainerBindingFinalizer;
}
namespace Zenject {
class __SubContainerBindingFinalizer____c__DisplayClass5_0;
}
namespace Zenject {
class __SubContainerBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class __SubContainerBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class __SubContainerBindingFinalizer____c__DisplayClass6_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerBindingFinalizer);
MARK_REF_PTR_T(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1);
MARK_REF_PTR_T(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1);
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10899))
// CS Name: ::SubContainerBindingFinalizer::<>c__DisplayClass5_0*
class CORDL_TYPE __SubContainerBindingFinalizer____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::SubContainerBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __get_container, put = __set_container))::Zenject::DiContainer* container;

  constexpr ::Zenject::SubContainerBindingFinalizer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBindingFinalizer*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::SubContainerBindingFinalizer* value);

  constexpr ::Zenject::DiContainer*& __get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get_container() const;

  constexpr void __set_container(::Zenject::DiContainer* value);

  static inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor addr 0x2d7eef8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FinalizeBindingConcrete>b__0 addr 0x2d7ef18 size 0xb8 virtual false final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType);

  /// @brief Method __zenCreate addr 0x2d7efd0 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d7f02c size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBindingFinalizer____c__DisplayClass5_0(__SubContainerBindingFinalizer____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBindingFinalizer____c__DisplayClass5_0(__SubContainerBindingFinalizer____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBindingFinalizer____c__DisplayClass5_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0, ___container) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass5_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10900))
// CS Name: ::SubContainerBindingFinalizer::<>c__DisplayClass5_1*
class CORDL_TYPE __SubContainerBindingFinalizer____c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field containerCreator, offset 0x10, size 0x8
  __declspec(property(get = __get_containerCreator, put = __set_containerCreator))::Zenject::SubContainerCreatorCached* containerCreator;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __get_CS$__8__locals1, put = __set_CS$__8__locals1))::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0* CS$__8__locals1;

  constexpr ::Zenject::SubContainerCreatorCached*& __get_containerCreator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorCached*> const& __get_containerCreator() const;

  constexpr void __set_containerCreator(::Zenject::SubContainerCreatorCached* value);

  constexpr ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*& __get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*> const& __get_CS$__8__locals1() const;

  constexpr void __set_CS$__8__locals1(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0* value);

  static inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1* New_ctor();

  /// @brief Method .ctor addr 0x2d7ef00 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FinalizeBindingConcrete>b__1 addr 0x2d7f1ec size 0x9c virtual false final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType);

  /// @brief Method __zenCreate addr 0x2d7f288 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d7f2e4 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBindingFinalizer____c__DisplayClass5_1(__SubContainerBindingFinalizer____c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBindingFinalizer____c__DisplayClass5_1(__SubContainerBindingFinalizer____c__DisplayClass5_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBindingFinalizer____c__DisplayClass5_1();

public:
  /// @brief Field containerCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorCached* ___containerCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1, ___containerCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10901))
// CS Name: ::SubContainerBindingFinalizer::<>c__DisplayClass6_0*
class CORDL_TYPE __SubContainerBindingFinalizer____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::SubContainerBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __get_container, put = __set_container))::Zenject::DiContainer* container;

  constexpr ::Zenject::SubContainerBindingFinalizer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBindingFinalizer*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::SubContainerBindingFinalizer* value);

  constexpr ::Zenject::DiContainer*& __get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get_container() const;

  constexpr void __set_container(::Zenject::DiContainer* value);

  static inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor addr 0x2d7ef08 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FinalizeBindingSelf>b__0 addr 0x2d7f4a4 size 0xb8 virtual false final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType);

  /// @brief Method __zenCreate addr 0x2d7f55c size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d7f5b8 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBindingFinalizer____c__DisplayClass6_0(__SubContainerBindingFinalizer____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBindingFinalizer____c__DisplayClass6_0(__SubContainerBindingFinalizer____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBindingFinalizer____c__DisplayClass6_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0, ___container) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass6_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10902))
// CS Name: ::SubContainerBindingFinalizer::<>c__DisplayClass6_1*
class CORDL_TYPE __SubContainerBindingFinalizer____c__DisplayClass6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field containerCreator, offset 0x10, size 0x8
  __declspec(property(get = __get_containerCreator, put = __set_containerCreator))::Zenject::SubContainerCreatorCached* containerCreator;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __get_CS$__8__locals1, put = __set_CS$__8__locals1))::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0* CS$__8__locals1;

  constexpr ::Zenject::SubContainerCreatorCached*& __get_containerCreator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorCached*> const& __get_containerCreator() const;

  constexpr void __set_containerCreator(::Zenject::SubContainerCreatorCached* value);

  constexpr ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*& __get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*> const& __get_CS$__8__locals1() const;

  constexpr void __set_CS$__8__locals1(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0* value);

  static inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1* New_ctor();

  /// @brief Method .ctor addr 0x2d7ef10 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FinalizeBindingSelf>b__1 addr 0x2d7f778 size 0x9c virtual false final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType);

  /// @brief Method __zenCreate addr 0x2d7f814 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d7f870 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBindingFinalizer____c__DisplayClass6_1(__SubContainerBindingFinalizer____c__DisplayClass6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBindingFinalizer____c__DisplayClass6_1(__SubContainerBindingFinalizer____c__DisplayClass6_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBindingFinalizer____c__DisplayClass6_1();

public:
  /// @brief Field containerCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorCached* ___containerCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1, ___containerCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::SubContainerBindingFinalizer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10894))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10903))
// CS Name: ::Zenject::SubContainerBindingFinalizer*
class CORDL_TYPE SubContainerBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  using __c__DisplayClass6_1 = ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1;

  using __c__DisplayClass6_0 = ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0;

  using __c__DisplayClass5_1 = ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1;

  using __c__DisplayClass5_0 = ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0;

  /// @brief Field _subIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __get__subIdentifier, put = __set__subIdentifier))::System::Object* _subIdentifier;

  /// @brief Field _resolveAll, offset 0x20, size 0x1
  __declspec(property(get = __get__resolveAll, put = __set__resolveAll)) bool _resolveAll;

  /// @brief Field _creatorFactory, offset 0x28, size 0x8
  __declspec(property(get = __get__creatorFactory, put = __set__creatorFactory))::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* _creatorFactory;

  constexpr ::System::Object*& __get__subIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__subIdentifier() const;

  constexpr void __set__subIdentifier(::System::Object* value);

  constexpr bool& __get__resolveAll();

  constexpr bool const& __get__resolveAll() const;

  constexpr void __set__resolveAll(bool value);

  constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*& __get__creatorFactory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*> const& __get__creatorFactory() const;

  constexpr void __set__creatorFactory(::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* value);

  static inline ::Zenject::SubContainerBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                                                                  ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* creatorFactory);

  /// @brief Method .ctor addr 0x2d73718 size 0x44 virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll, ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* creatorFactory);

  /// @brief Method OnFinalizeBinding addr 0x2d7eabc size 0x84 virtual true final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  /// @brief Method FinalizeBindingConcrete addr 0x2d7ed14 size 0x1e4 virtual false final false
  inline void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);

  /// @brief Method FinalizeBindingSelf addr 0x2d7eb40 size 0x1d4 virtual false final false
  inline void FinalizeBindingSelf(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBindingFinalizer(SubContainerBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBindingFinalizer(SubContainerBindingFinalizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBindingFinalizer();

public:
  /// @brief Field _subIdentifier, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____subIdentifier;

  /// @brief Field _resolveAll, offset: 0x20, size: 0x1, def value: None
  bool ____resolveAll;

  /// @brief Field _creatorFactory, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* ____creatorFactory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBindingFinalizer, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerBindingFinalizer, ____subIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBindingFinalizer, ____resolveAll) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBindingFinalizer, ____creatorFactory) == 0x28, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBindingFinalizer*, "Zenject", "SubContainerBindingFinalizer");
NEED_NO_BOX(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1*, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1*, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass6_1");
