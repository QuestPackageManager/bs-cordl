#pragma once
// IWYU pragma private; include "Zenject/SubContainerBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
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
class SubContainerBindingFinalizer___c__DisplayClass5_0;
}
namespace Zenject {
class SubContainerBindingFinalizer___c__DisplayClass5_1;
}
namespace Zenject {
class SubContainerBindingFinalizer___c__DisplayClass6_0;
}
namespace Zenject {
class SubContainerBindingFinalizer___c__DisplayClass6_1;
}
namespace Zenject {
class SubContainerCreatorCached;
}
// Forward declare root types
namespace Zenject {
class SubContainerBindingFinalizer;
}
namespace Zenject {
class SubContainerBindingFinalizer___c__DisplayClass5_0;
}
namespace Zenject {
class SubContainerBindingFinalizer___c__DisplayClass5_1;
}
namespace Zenject {
class SubContainerBindingFinalizer___c__DisplayClass6_0;
}
namespace Zenject {
class SubContainerBindingFinalizer___c__DisplayClass6_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerBindingFinalizer);
MARK_REF_PTR_T(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0);
MARK_REF_PTR_T(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_1);
MARK_REF_PTR_T(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_1);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBindingFinalizer/<>c__DisplayClass5_0
class CORDL_TYPE SubContainerBindingFinalizer___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::SubContainerBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__0, addr 0x4b18510, size 0xb0, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::SubContainerBindingFinalizer* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::SubContainerBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerBindingFinalizer* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4b185c0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b18614, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b184f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBindingFinalizer___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBindingFinalizer___c__DisplayClass5_0(SubContainerBindingFinalizer___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBindingFinalizer___c__DisplayClass5_0(SubContainerBindingFinalizer___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12313 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0, ___container) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBindingFinalizer/<>c__DisplayClass5_1
class CORDL_TYPE SubContainerBindingFinalizer___c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0* CS$__8__locals1;

  /// @brief Field containerCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_containerCreator, put = __cordl_internal_set_containerCreator)) ::Zenject::SubContainerCreatorCached* containerCreator;

  static inline ::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_1* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__1, addr 0x4b187cc, size 0x94, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::Zenject::SubContainerCreatorCached* const& __cordl_internal_get_containerCreator() const;

  constexpr ::Zenject::SubContainerCreatorCached*& __cordl_internal_get_containerCreator();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0* value);

  constexpr void __cordl_internal_set_containerCreator(::Zenject::SubContainerCreatorCached* value);

  /// @brief Method __zenCreate, addr 0x4b18860, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b188b4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b184f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBindingFinalizer___c__DisplayClass5_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer___c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBindingFinalizer___c__DisplayClass5_1(SubContainerBindingFinalizer___c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer___c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBindingFinalizer___c__DisplayClass5_1(SubContainerBindingFinalizer___c__DisplayClass5_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12314 };

  /// @brief Field containerCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorCached* ___containerCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_1, ___containerCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_1, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBindingFinalizer/<>c__DisplayClass6_0
class CORDL_TYPE SubContainerBindingFinalizer___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::SubContainerBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__0, addr 0x4b18a6c, size 0xb0, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::SubContainerBindingFinalizer* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::SubContainerBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerBindingFinalizer* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4b18b1c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b18b70, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b18500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBindingFinalizer___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBindingFinalizer___c__DisplayClass6_0(SubContainerBindingFinalizer___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBindingFinalizer___c__DisplayClass6_0(SubContainerBindingFinalizer___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12315 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0, ___container) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBindingFinalizer/<>c__DisplayClass6_1
class CORDL_TYPE SubContainerBindingFinalizer___c__DisplayClass6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0* CS$__8__locals1;

  /// @brief Field containerCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_containerCreator, put = __cordl_internal_set_containerCreator)) ::Zenject::SubContainerCreatorCached* containerCreator;

  static inline ::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_1* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__1, addr 0x4b18d28, size 0x94, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::Zenject::SubContainerCreatorCached* const& __cordl_internal_get_containerCreator() const;

  constexpr ::Zenject::SubContainerCreatorCached*& __cordl_internal_get_containerCreator();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0* value);

  constexpr void __cordl_internal_set_containerCreator(::Zenject::SubContainerCreatorCached* value);

  /// @brief Method __zenCreate, addr 0x4b18dbc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b18e10, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b18508, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBindingFinalizer___c__DisplayClass6_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer___c__DisplayClass6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBindingFinalizer___c__DisplayClass6_1(SubContainerBindingFinalizer___c__DisplayClass6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer___c__DisplayClass6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBindingFinalizer___c__DisplayClass6_1(SubContainerBindingFinalizer___c__DisplayClass6_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12316 };

  /// @brief Field containerCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorCached* ___containerCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_1, ___containerCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_1, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies Zenject.ProviderBindingFinalizer
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBindingFinalizer
class CORDL_TYPE SubContainerBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0;

  using __c__DisplayClass5_1 = ::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_1;

  using __c__DisplayClass6_0 = ::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0;

  using __c__DisplayClass6_1 = ::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_1;

  /// @brief Field _creatorFactory, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__creatorFactory,
                      put = __cordl_internal_set__creatorFactory)) ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* _creatorFactory;

  /// @brief Field _resolveAll, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__resolveAll, put = __cordl_internal_set__resolveAll)) bool _resolveAll;

  /// @brief Field _subIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__subIdentifier, put = __cordl_internal_set__subIdentifier)) ::System::Object* _subIdentifier;

  /// @brief Method FinalizeBindingConcrete, addr 0x4b18318, size 0x1d8, virtual false, abstract: false, final false
  inline void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);

  /// @brief Method FinalizeBindingSelf, addr 0x4b18148, size 0x1d0, virtual false, abstract: false, final false
  inline void FinalizeBindingSelf(::Zenject::DiContainer* container);

  static inline ::Zenject::SubContainerBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                                                                  ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* creatorFactory);

  /// @brief Method OnFinalizeBinding, addr 0x4b180c4, size 0x84, virtual true, abstract: false, final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* const& __cordl_internal_get__creatorFactory() const;

  constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*& __cordl_internal_get__creatorFactory();

  constexpr bool const& __cordl_internal_get__resolveAll() const;

  constexpr bool& __cordl_internal_get__resolveAll();

  constexpr ::System::Object* const& __cordl_internal_get__subIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get__subIdentifier();

  constexpr void __cordl_internal_set__creatorFactory(::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* value);

  constexpr void __cordl_internal_set__resolveAll(bool value);

  constexpr void __cordl_internal_set__subIdentifier(::System::Object* value);

  /// @brief Method .ctor, addr 0x4b0d024, size 0x44, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12317 };

  /// @brief Field _subIdentifier, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____subIdentifier;

  /// @brief Field _resolveAll, offset: 0x20, size: 0x1, def value: None
  bool ____resolveAll;

  /// @brief Field _creatorFactory, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* ____creatorFactory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBindingFinalizer, ____subIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBindingFinalizer, ____resolveAll) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBindingFinalizer, ____creatorFactory) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBindingFinalizer, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBindingFinalizer*, "Zenject", "SubContainerBindingFinalizer");
NEED_NO_BOX(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_0*, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBindingFinalizer___c__DisplayClass5_1*, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_0*, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBindingFinalizer___c__DisplayClass6_1*, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass6_1");
