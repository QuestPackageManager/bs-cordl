#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SubContainerBindingFinalizer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SubContainerCreatorCached;
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
// CS Name: ::SubContainerBindingFinalizer::<>c__DisplayClass5_0*
class CORDL_TYPE __SubContainerBindingFinalizer____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::SubContainerBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::Zenject::DiContainer* container;

  static inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__0, addr 0x363a904, size 0xb8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::SubContainerBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBindingFinalizer*> const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get_container() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerBindingFinalizer* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x363a9bc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x363aa18, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x363a8e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBindingFinalizer____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBindingFinalizer____c__DisplayClass5_0(__SubContainerBindingFinalizer____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBindingFinalizer____c__DisplayClass5_0(__SubContainerBindingFinalizer____c__DisplayClass5_0 const&) = delete;

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
// CS Name: ::SubContainerBindingFinalizer::<>c__DisplayClass5_1*
class CORDL_TYPE __SubContainerBindingFinalizer____c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0* CS$__8__locals1;

  /// @brief Field containerCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_containerCreator, put = __cordl_internal_set_containerCreator))::Zenject::SubContainerCreatorCached* containerCreator;

  static inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__1, addr 0x363abd8, size 0x9c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::SubContainerCreatorCached*& __cordl_internal_get_containerCreator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorCached*> const& __cordl_internal_get_containerCreator() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0* value);

  constexpr void __cordl_internal_set_containerCreator(::Zenject::SubContainerCreatorCached* value);

  /// @brief Method __zenCreate, addr 0x363ac74, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x363acd0, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x363a8ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBindingFinalizer____c__DisplayClass5_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBindingFinalizer____c__DisplayClass5_1(__SubContainerBindingFinalizer____c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBindingFinalizer____c__DisplayClass5_1(__SubContainerBindingFinalizer____c__DisplayClass5_1 const&) = delete;

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
// CS Name: ::SubContainerBindingFinalizer::<>c__DisplayClass6_0*
class CORDL_TYPE __SubContainerBindingFinalizer____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::SubContainerBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::Zenject::DiContainer* container;

  static inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__0, addr 0x363ae90, size 0xb8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::SubContainerBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBindingFinalizer*> const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get_container() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerBindingFinalizer* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x363af48, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x363afa4, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x363a8f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBindingFinalizer____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBindingFinalizer____c__DisplayClass6_0(__SubContainerBindingFinalizer____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBindingFinalizer____c__DisplayClass6_0(__SubContainerBindingFinalizer____c__DisplayClass6_0 const&) = delete;

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
// CS Name: ::SubContainerBindingFinalizer::<>c__DisplayClass6_1*
class CORDL_TYPE __SubContainerBindingFinalizer____c__DisplayClass6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0* CS$__8__locals1;

  /// @brief Field containerCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_containerCreator, put = __cordl_internal_set_containerCreator))::Zenject::SubContainerCreatorCached* containerCreator;

  static inline ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__1, addr 0x363b164, size 0x9c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::SubContainerCreatorCached*& __cordl_internal_get_containerCreator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorCached*> const& __cordl_internal_get_containerCreator() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0* value);

  constexpr void __cordl_internal_set_containerCreator(::Zenject::SubContainerCreatorCached* value);

  /// @brief Method __zenCreate, addr 0x363b200, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x363b25c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x363a8fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBindingFinalizer____c__DisplayClass6_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBindingFinalizer____c__DisplayClass6_1(__SubContainerBindingFinalizer____c__DisplayClass6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBindingFinalizer____c__DisplayClass6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBindingFinalizer____c__DisplayClass6_1(__SubContainerBindingFinalizer____c__DisplayClass6_1 const&) = delete;

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
// CS Name: ::Zenject::SubContainerBindingFinalizer*
class CORDL_TYPE SubContainerBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_0;

  using __c__DisplayClass5_1 = ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass5_1;

  using __c__DisplayClass6_0 = ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_0;

  using __c__DisplayClass6_1 = ::Zenject::__SubContainerBindingFinalizer____c__DisplayClass6_1;

  /// @brief Field _creatorFactory, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__creatorFactory,
                      put = __cordl_internal_set__creatorFactory))::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* _creatorFactory;

  /// @brief Field _resolveAll, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__resolveAll, put = __cordl_internal_set__resolveAll)) bool _resolveAll;

  /// @brief Field _subIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__subIdentifier, put = __cordl_internal_set__subIdentifier))::System::Object* _subIdentifier;

  /// @brief Method FinalizeBindingConcrete, addr 0x363a700, size 0x1e4, virtual false, abstract: false, final false
  inline void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);

  /// @brief Method FinalizeBindingSelf, addr 0x363a52c, size 0x1d4, virtual false, abstract: false, final false
  inline void FinalizeBindingSelf(::Zenject::DiContainer* container);

  static inline ::Zenject::SubContainerBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                                                                  ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* creatorFactory);

  /// @brief Method OnFinalizeBinding, addr 0x363a4a8, size 0x84, virtual true, abstract: false, final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*& __cordl_internal_get__creatorFactory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*> const& __cordl_internal_get__creatorFactory() const;

  constexpr bool const& __cordl_internal_get__resolveAll() const;

  constexpr bool& __cordl_internal_get__resolveAll();

  constexpr ::System::Object*& __cordl_internal_get__subIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__subIdentifier() const;

  constexpr void __cordl_internal_set__creatorFactory(::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* value);

  constexpr void __cordl_internal_set__resolveAll(bool value);

  constexpr void __cordl_internal_set__subIdentifier(::System::Object* value);

  /// @brief Method .ctor, addr 0x362f104, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll, ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* creatorFactory);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBindingFinalizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBindingFinalizer(SubContainerBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBindingFinalizer(SubContainerBindingFinalizer const&) = delete;

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
