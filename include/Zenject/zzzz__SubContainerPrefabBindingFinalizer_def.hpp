#pragma once
// IWYU pragma private; include "Zenject/SubContainerPrefabBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
CORDL_MODULE_EXPORT(SubContainerPrefabBindingFinalizer)
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
class SubContainerPrefabBindingFinalizer___c__DisplayClass5_0;
}
namespace Zenject {
class SubContainerPrefabBindingFinalizer___c__DisplayClass5_1;
}
namespace Zenject {
class SubContainerPrefabBindingFinalizer___c__DisplayClass6_0;
}
namespace Zenject {
class SubContainerPrefabBindingFinalizer___c__DisplayClass6_1;
}
// Forward declare root types
namespace Zenject {
class SubContainerPrefabBindingFinalizer;
}
namespace Zenject {
class SubContainerPrefabBindingFinalizer___c__DisplayClass5_0;
}
namespace Zenject {
class SubContainerPrefabBindingFinalizer___c__DisplayClass5_1;
}
namespace Zenject {
class SubContainerPrefabBindingFinalizer___c__DisplayClass6_0;
}
namespace Zenject {
class SubContainerPrefabBindingFinalizer___c__DisplayClass6_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerPrefabBindingFinalizer);
MARK_REF_PTR_T(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0);
MARK_REF_PTR_T(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1);
MARK_REF_PTR_T(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass5_0
class CORDL_TYPE SubContainerPrefabBindingFinalizer___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::SubContainerPrefabBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__0, addr 0x4b1f094, size 0xb0, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::SubContainerPrefabBindingFinalizer* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::SubContainerPrefabBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerPrefabBindingFinalizer* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4b1f144, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1f198, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b1f074, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerPrefabBindingFinalizer___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerPrefabBindingFinalizer___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerPrefabBindingFinalizer___c__DisplayClass5_0(SubContainerPrefabBindingFinalizer___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerPrefabBindingFinalizer___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerPrefabBindingFinalizer___c__DisplayClass5_0(SubContainerPrefabBindingFinalizer___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12318 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerPrefabBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0, ___container) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass5_1
class CORDL_TYPE SubContainerPrefabBindingFinalizer___c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0* CS$__8__locals1;

  /// @brief Field containerCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_containerCreator, put = __cordl_internal_set_containerCreator)) ::Zenject::SubContainerCreatorCached* containerCreator;

  static inline ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__1, addr 0x4b1f350, size 0x94, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::Zenject::SubContainerCreatorCached* const& __cordl_internal_get_containerCreator() const;

  constexpr ::Zenject::SubContainerCreatorCached*& __cordl_internal_get_containerCreator();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0* value);

  constexpr void __cordl_internal_set_containerCreator(::Zenject::SubContainerCreatorCached* value);

  /// @brief Method __zenCreate, addr 0x4b1f3e4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1f438, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b1f07c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerPrefabBindingFinalizer___c__DisplayClass5_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerPrefabBindingFinalizer___c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerPrefabBindingFinalizer___c__DisplayClass5_1(SubContainerPrefabBindingFinalizer___c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerPrefabBindingFinalizer___c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerPrefabBindingFinalizer___c__DisplayClass5_1(SubContainerPrefabBindingFinalizer___c__DisplayClass5_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12319 };

  /// @brief Field containerCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorCached* ___containerCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1, ___containerCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_0
class CORDL_TYPE SubContainerPrefabBindingFinalizer___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::SubContainerPrefabBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__0, addr 0x4b1f5f0, size 0xb0, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::SubContainerPrefabBindingFinalizer* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::SubContainerPrefabBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerPrefabBindingFinalizer* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4b1f6a0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1f6f4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b1f084, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerPrefabBindingFinalizer___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerPrefabBindingFinalizer___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerPrefabBindingFinalizer___c__DisplayClass6_0(SubContainerPrefabBindingFinalizer___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerPrefabBindingFinalizer___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerPrefabBindingFinalizer___c__DisplayClass6_0(SubContainerPrefabBindingFinalizer___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12320 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerPrefabBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0, ___container) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_1
class CORDL_TYPE SubContainerPrefabBindingFinalizer___c__DisplayClass6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0* CS$__8__locals1;

  /// @brief Field containerCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_containerCreator, put = __cordl_internal_set_containerCreator)) ::Zenject::SubContainerCreatorCached* containerCreator;

  static inline ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__1, addr 0x4b1f8ac, size 0x94, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::Zenject::SubContainerCreatorCached* const& __cordl_internal_get_containerCreator() const;

  constexpr ::Zenject::SubContainerCreatorCached*& __cordl_internal_get_containerCreator();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0* value);

  constexpr void __cordl_internal_set_containerCreator(::Zenject::SubContainerCreatorCached* value);

  /// @brief Method __zenCreate, addr 0x4b1f940, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1f994, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b1f08c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerPrefabBindingFinalizer___c__DisplayClass6_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerPrefabBindingFinalizer___c__DisplayClass6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerPrefabBindingFinalizer___c__DisplayClass6_1(SubContainerPrefabBindingFinalizer___c__DisplayClass6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerPrefabBindingFinalizer___c__DisplayClass6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerPrefabBindingFinalizer___c__DisplayClass6_1(SubContainerPrefabBindingFinalizer___c__DisplayClass6_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12321 };

  /// @brief Field containerCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorCached* ___containerCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1, ___containerCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies Zenject.ProviderBindingFinalizer
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerPrefabBindingFinalizer
class CORDL_TYPE SubContainerPrefabBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0;

  using __c__DisplayClass5_1 = ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1;

  using __c__DisplayClass6_0 = ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0;

  using __c__DisplayClass6_1 = ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1;

  /// @brief Field _resolveAll, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__resolveAll, put = __cordl_internal_set__resolveAll)) bool _resolveAll;

  /// @brief Field _subContainerCreatorFactory, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__subContainerCreatorFactory,
                      put = __cordl_internal_set__subContainerCreatorFactory)) ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* _subContainerCreatorFactory;

  /// @brief Field _subIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__subIdentifier, put = __cordl_internal_set__subIdentifier)) ::System::Object* _subIdentifier;

  /// @brief Method FinalizeBindingConcrete, addr 0x4b1ee9c, size 0x1d8, virtual false, abstract: false, final false
  inline void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);

  /// @brief Method FinalizeBindingSelf, addr 0x4b1eccc, size 0x1d0, virtual false, abstract: false, final false
  inline void FinalizeBindingSelf(::Zenject::DiContainer* container);

  static inline ::Zenject::SubContainerPrefabBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                                                                        ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* subContainerCreatorFactory);

  /// @brief Method OnFinalizeBinding, addr 0x4b1ec48, size 0x84, virtual true, abstract: false, final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  constexpr bool const& __cordl_internal_get__resolveAll() const;

  constexpr bool& __cordl_internal_get__resolveAll();

  constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* const& __cordl_internal_get__subContainerCreatorFactory() const;

  constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*& __cordl_internal_get__subContainerCreatorFactory();

  constexpr ::System::Object* const& __cordl_internal_get__subIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get__subIdentifier();

  constexpr void __cordl_internal_set__resolveAll(bool value);

  constexpr void __cordl_internal_set__subContainerCreatorFactory(::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* value);

  constexpr void __cordl_internal_set__subIdentifier(::System::Object* value);

  /// @brief Method .ctor, addr 0x4b13320, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                    ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* subContainerCreatorFactory);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerPrefabBindingFinalizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerPrefabBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerPrefabBindingFinalizer(SubContainerPrefabBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerPrefabBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerPrefabBindingFinalizer(SubContainerPrefabBindingFinalizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12322 };

  /// @brief Field _subIdentifier, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____subIdentifier;

  /// @brief Field _resolveAll, offset: 0x20, size: 0x1, def value: None
  bool ____resolveAll;

  /// @brief Field _subContainerCreatorFactory, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* ____subContainerCreatorFactory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer, ____subIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer, ____resolveAll) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerPrefabBindingFinalizer, ____subContainerCreatorFactory) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerPrefabBindingFinalizer, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerPrefabBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerPrefabBindingFinalizer*, "Zenject", "SubContainerPrefabBindingFinalizer");
NEED_NO_BOX(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*, "Zenject", "SubContainerPrefabBindingFinalizer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1*, "Zenject", "SubContainerPrefabBindingFinalizer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*, "Zenject", "SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1*, "Zenject", "SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_1");
