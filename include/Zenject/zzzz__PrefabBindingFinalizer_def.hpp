#pragma once
// IWYU pragma private; include "Zenject/PrefabBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
CORDL_MODULE_EXPORT(PrefabBindingFinalizer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class PrefabBindingFinalizer___c__DisplayClass5_0;
}
namespace Zenject {
class PrefabBindingFinalizer___c__DisplayClass5_1;
}
namespace Zenject {
class PrefabBindingFinalizer___c__DisplayClass6_0;
}
namespace Zenject {
class PrefabBindingFinalizer___c__DisplayClass6_1;
}
namespace Zenject {
class PrefabInstantiatorCached;
}
// Forward declare root types
namespace Zenject {
class PrefabBindingFinalizer;
}
namespace Zenject {
class PrefabBindingFinalizer___c__DisplayClass5_0;
}
namespace Zenject {
class PrefabBindingFinalizer___c__DisplayClass5_1;
}
namespace Zenject {
class PrefabBindingFinalizer___c__DisplayClass6_0;
}
namespace Zenject {
class PrefabBindingFinalizer___c__DisplayClass6_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabBindingFinalizer);
MARK_REF_PTR_T(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0);
MARK_REF_PTR_T(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1);
MARK_REF_PTR_T(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PrefabBindingFinalizer/<>c__DisplayClass5_0
class CORDL_TYPE PrefabBindingFinalizer___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::PrefabBindingFinalizer* __4__this;

  /// @brief Field concreteTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteTypes, put = __cordl_internal_set_concreteTypes)) ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__0, addr 0x4b1a6a4, size 0x110, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::PrefabBindingFinalizer* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::PrefabBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& __cordl_internal_get_concreteTypes() const;

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get_concreteTypes();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr void __cordl_internal_set___4__this(::Zenject::PrefabBindingFinalizer* value);

  constexpr void __cordl_internal_set_concreteTypes(::System::Collections::Generic::List_1<::System::Type*>* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4b1a7b4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1a808, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b19c8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabBindingFinalizer___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabBindingFinalizer___c__DisplayClass5_0(PrefabBindingFinalizer___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabBindingFinalizer___c__DisplayClass5_0(PrefabBindingFinalizer___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12297 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  /// @brief Field concreteTypes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ___concreteTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0, ___container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0, ___concreteTypes) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PrefabBindingFinalizer/<>c__DisplayClass5_1
class CORDL_TYPE PrefabBindingFinalizer___c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0* CS$__8__locals1;

  /// @brief Field prefabCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefabCreator, put = __cordl_internal_set_prefabCreator)) ::Zenject::PrefabInstantiatorCached* prefabCreator;

  static inline ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__1, addr 0x4b1a9c0, size 0x44, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::Zenject::PrefabInstantiatorCached* const& __cordl_internal_get_prefabCreator() const;

  constexpr ::Zenject::PrefabInstantiatorCached*& __cordl_internal_get_prefabCreator();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0* value);

  constexpr void __cordl_internal_set_prefabCreator(::Zenject::PrefabInstantiatorCached* value);

  /// @brief Method __zenCreate, addr 0x4b1aa04, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1aa58, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b1a478, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabBindingFinalizer___c__DisplayClass5_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer___c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabBindingFinalizer___c__DisplayClass5_1(PrefabBindingFinalizer___c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer___c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabBindingFinalizer___c__DisplayClass5_1(PrefabBindingFinalizer___c__DisplayClass5_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12298 };

  /// @brief Field prefabCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabInstantiatorCached* ___prefabCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1, ___prefabCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PrefabBindingFinalizer/<>c__DisplayClass6_0
class CORDL_TYPE PrefabBindingFinalizer___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::PrefabBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__0, addr 0x4b1ac10, size 0x114, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::PrefabBindingFinalizer* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::PrefabBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr void __cordl_internal_set___4__this(::Zenject::PrefabBindingFinalizer* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4b1ad24, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1ad78, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b1a480, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabBindingFinalizer___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabBindingFinalizer___c__DisplayClass6_0(PrefabBindingFinalizer___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabBindingFinalizer___c__DisplayClass6_0(PrefabBindingFinalizer___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12299 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0, ___container) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PrefabBindingFinalizer/<>c__DisplayClass6_1
class CORDL_TYPE PrefabBindingFinalizer___c__DisplayClass6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0* CS$__8__locals1;

  /// @brief Field prefabCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefabCreator, put = __cordl_internal_set_prefabCreator)) ::Zenject::PrefabInstantiatorCached* prefabCreator;

  static inline ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__1, addr 0x4b1af30, size 0x44, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::Zenject::PrefabInstantiatorCached* const& __cordl_internal_get_prefabCreator() const;

  constexpr ::Zenject::PrefabInstantiatorCached*& __cordl_internal_get_prefabCreator();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0* value);

  constexpr void __cordl_internal_set_prefabCreator(::Zenject::PrefabInstantiatorCached* value);

  /// @brief Method __zenCreate, addr 0x4b1af74, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1afc8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b1a69c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabBindingFinalizer___c__DisplayClass6_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer___c__DisplayClass6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabBindingFinalizer___c__DisplayClass6_1(PrefabBindingFinalizer___c__DisplayClass6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer___c__DisplayClass6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabBindingFinalizer___c__DisplayClass6_1(PrefabBindingFinalizer___c__DisplayClass6_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12300 };

  /// @brief Field prefabCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabInstantiatorCached* ___prefabCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1, ___prefabCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies Zenject.ProviderBindingFinalizer
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PrefabBindingFinalizer
class CORDL_TYPE PrefabBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0;

  using __c__DisplayClass5_1 = ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1;

  using __c__DisplayClass6_0 = ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0;

  using __c__DisplayClass6_1 = ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1;

  /// @brief Field _gameObjectBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectBindInfo, put = __cordl_internal_set__gameObjectBindInfo)) ::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  /// @brief Field _prefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__prefab, put = __cordl_internal_set__prefab)) ::UnityW<::UnityEngine::Object> _prefab;

  /// @brief Field _providerFactory, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__providerFactory,
                      put = __cordl_internal_set__providerFactory)) ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* _providerFactory;

  /// @brief Method FinalizeBindingConcrete, addr 0x4b1996c, size 0x320, virtual false, abstract: false, final false
  inline void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);

  /// @brief Method FinalizeBindingSelf, addr 0x4b19650, size 0x31c, virtual false, abstract: false, final false
  inline void FinalizeBindingSelf(::Zenject::DiContainer* container);

  static inline ::Zenject::PrefabBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::UnityEngine::Object* prefab,
                                                            ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory);

  /// @brief Method OnFinalizeBinding, addr 0x4b195cc, size 0x84, virtual true, abstract: false, final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get__gameObjectBindInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get__gameObjectBindInfo();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__prefab() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__prefab();

  constexpr ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* const& __cordl_internal_get__providerFactory() const;

  constexpr ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*& __cordl_internal_get__providerFactory();

  constexpr void __cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set__prefab(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set__providerFactory(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  /// @brief Method .ctor, addr 0x4b19564, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::UnityEngine::Object* prefab,
                    ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabBindingFinalizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabBindingFinalizer(PrefabBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabBindingFinalizer(PrefabBindingFinalizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12301 };

  /// @brief Field _gameObjectBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  /// @brief Field _prefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ____prefab;

  /// @brief Field _providerFactory, offset: 0x28, size: 0x8, def value: None
  ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* ____providerFactory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PrefabBindingFinalizer, ____gameObjectBindInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabBindingFinalizer, ____prefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabBindingFinalizer, ____providerFactory) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PrefabBindingFinalizer, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PrefabBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabBindingFinalizer*, "Zenject", "PrefabBindingFinalizer");
NEED_NO_BOX(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass6_1");
