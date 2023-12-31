#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FactoryFromBinderBase)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
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
namespace UnityEngine {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class GameObjectCreationParameters;
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
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass20_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass21_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass23_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass24_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass26_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass27_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass28_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass29_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass30_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass31_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass32_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass33_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass34_0;
}
namespace Zenject {
class __FactoryFromBinderBase___get_AllParentTypes_d__17;
}
// Forward declare root types
namespace Zenject {
class FactoryFromBinderBase;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass20_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass21_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass23_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass24_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass26_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass27_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass28_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass29_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass30_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass31_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass32_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass33_0;
}
namespace Zenject {
class __FactoryFromBinderBase____c__DisplayClass34_0;
}
namespace Zenject {
class __FactoryFromBinderBase___get_AllParentTypes_d__17;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass20_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass21_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass23_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass24_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass26_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass27_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass28_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass29_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass30_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass31_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass32_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass33_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase____c__DisplayClass34_0);
MARK_REF_PTR_T(::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17);
// Type: ::<get_AllParentTypes>d__17
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2494)), TypeDefinitionIndex(TypeDefinitionIndex(3842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 1695
// }), TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(10832)) CS Name: ::FactoryFromBinderBase::<get_AllParentTypes>d__17*
class CORDL_TYPE __FactoryFromBinderBase___get_AllParentTypes_d__17 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Type* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x18
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::__List_1__Enumerator<::System::Type*> __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current))::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Type*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Type* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::System::Type*>& __get___7__wrap1();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::System::Type*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::__List_1__Enumerator<::System::Type*> value);

  static inline ::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2ecbc68, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2eccbd8, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2eccbf4, size 0x1dc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x2eccdd0, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x2ecce20, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2ecce28, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2ecce68, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x2ecce70, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2eccf14, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method __zenCreate, addr 0x2eccf18, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2eccfe4, size 0x274, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase___get_AllParentTypes_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase___get_AllParentTypes_d__17(__FactoryFromBinderBase___get_AllParentTypes_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase___get_AllParentTypes_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase___get_AllParentTypes_d__17(__FactoryFromBinderBase___get_AllParentTypes_d__17 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase___get_AllParentTypes_d__17();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::System::Type*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17, 0x48>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17, _____7__wrap1) == 0x30, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10833))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass20_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field instance, offset 0x18, size 0x8
  __declspec(property(get = __get_instance, put = __set_instance))::System::Object* instance;

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr ::System::Object*& __get_instance();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_instance() const;

  constexpr void __set_instance(::System::Object* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass20_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecbe70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromInstance>b__0, addr 0x2ecd258, size 0x88, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromInstance_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ecd2e0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecd33c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass20_0(__FactoryFromBinderBase____c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass20_0(__FactoryFromBinderBase____c__DisplayClass20_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass20_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field instance, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass20_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass20_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass20_0, ___instance) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10834))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass21_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field subIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __get_subIdentifier, put = __set_subIdentifier))::System::Object* subIdentifier;

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr ::System::Object*& __get_subIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_subIdentifier() const;

  constexpr void __set_subIdentifier(::System::Object* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecbe78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromResolve>b__0, addr 0x2ecd4fc, size 0x94, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResolve_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ecd590, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecd5ec, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass21_0(__FactoryFromBinderBase____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass21_0(__FactoryFromBinderBase____c__DisplayClass21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass21_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field subIdentifier, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___subIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass21_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass21_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass21_0, ___subIdentifier) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10835))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass23_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObject, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObject, put = __set_gameObject))::UnityEngine::GameObject* gameObject;

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr ::UnityEngine::GameObject*& __get_gameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_gameObject() const;

  constexpr void __set_gameObject(::UnityEngine::GameObject* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass23_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecbf68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentOn>b__0, addr 0x2ecd7ac, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentOn_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ecd828, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecd884, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass23_0(__FactoryFromBinderBase____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass23_0(__FactoryFromBinderBase____c__DisplayClass23_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass23_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass23_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass23_0, ___gameObject) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10836))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass24_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectGetter, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectGetter, put = __set_gameObjectGetter))::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter;

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*& __get_gameObjectGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*> const& __get_gameObjectGetter() const;

  constexpr void __set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass24_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecc04c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentOn>b__0, addr 0x2ecda44, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentOn_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ecdac0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecdb1c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass24_0(__FactoryFromBinderBase____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass24_0(__FactoryFromBinderBase____c__DisplayClass24_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass24_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObjectGetter, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* ___gameObjectGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass24_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass24_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass24_0, ___gameObjectGetter) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass26_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10837))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass26_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass26_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __get_gameObject, put = __set_gameObject))::UnityEngine::GameObject* gameObject;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  constexpr ::UnityEngine::GameObject*& __get_gameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_gameObject() const;

  constexpr void __set_gameObject(::UnityEngine::GameObject* value);

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass26_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecc1bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromNewComponentOn>b__0, addr 0x2ecdcdc, size 0xf4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOn_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ecddd0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecde2c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass26_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass26_0(__FactoryFromBinderBase____c__DisplayClass26_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass26_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass26_0(__FactoryFromBinderBase____c__DisplayClass26_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass26_0();

public:
  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___gameObject;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass26_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass26_0, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass26_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass27_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10838))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass27_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectGetter, offset 0x10, size 0x8
  __declspec(property(get = __get_gameObjectGetter, put = __set_gameObjectGetter))::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*& __get_gameObjectGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*> const& __get_gameObjectGetter() const;

  constexpr void __set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* value);

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass27_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecc2a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromNewComponentOn>b__0, addr 0x2ecdfec, size 0xf4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOn_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ece0e0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ece13c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass27_0(__FactoryFromBinderBase____c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass27_0(__FactoryFromBinderBase____c__DisplayClass27_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass27_0();

public:
  /// @brief Field gameObjectGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* ___gameObjectGetter;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass27_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass27_0, ___gameObjectGetter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass27_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass28_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10839))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass28_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass28_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field prefab, offset 0x20, size 0x8
  __declspec(property(get = __get_prefab, put = __set_prefab))::UnityEngine::Object* prefab;

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::UnityEngine::Object*& __get_prefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_prefab() const;

  constexpr void __set_prefab(::UnityEngine::Object* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass28_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecc400, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromNewComponentOnNewPrefab>b__0, addr 0x2ece2fc, size 0x1d4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOnNewPrefab_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ece4d0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ece52c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass28_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass28_0(__FactoryFromBinderBase____c__DisplayClass28_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass28_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass28_0(__FactoryFromBinderBase____c__DisplayClass28_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass28_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field prefab, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Object* ___prefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass28_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass28_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass28_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass28_0, ___prefab) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass29_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10840))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass29_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field prefab, offset 0x20, size 0x8
  __declspec(property(get = __get_prefab, put = __set_prefab))::UnityEngine::Object* prefab;

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::UnityEngine::Object*& __get_prefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_prefab() const;

  constexpr void __set_prefab(::UnityEngine::Object* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass29_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecc57c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentInNewPrefab>b__0, addr 0x2ece6ec, size 0x1d8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInNewPrefab_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ece8c4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ece920, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass29_0(__FactoryFromBinderBase____c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass29_0(__FactoryFromBinderBase____c__DisplayClass29_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass29_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field prefab, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Object* ___prefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass29_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass29_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass29_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass29_0, ___prefab) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass30_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10841))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass30_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field resourcePath, offset 0x20, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass30_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecc6d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentInNewPrefabResource>b__0, addr 0x2eceae0, size 0x1d8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInNewPrefabResource_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ececb8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2eced14, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass30_0(__FactoryFromBinderBase____c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass30_0(__FactoryFromBinderBase____c__DisplayClass30_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass30_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field resourcePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ___resourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass30_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass30_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass30_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass30_0, ___resourcePath) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass31_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10842))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass31_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field resourcePath, offset 0x20, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass31_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecc830, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromNewComponentOnNewPrefabResource>b__0, addr 0x2eceed4, size 0x1d4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOnNewPrefabResource_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ecf0a8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecf104, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass31_0(__FactoryFromBinderBase____c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass31_0(__FactoryFromBinderBase____c__DisplayClass31_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass31_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field resourcePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ___resourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass31_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass31_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass31_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass31_0, ___resourcePath) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10843))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass32_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass32_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecc914, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromNewScriptableObjectResource>b__0, addr 0x2ecf2c4, size 0xfc, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewScriptableObjectResource_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ecf3c0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecf41c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass32_0(__FactoryFromBinderBase____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass32_0(__FactoryFromBinderBase____c__DisplayClass32_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass32_0();

public:
  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass32_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass32_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass32_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass33_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10844))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass33_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass33_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecc9f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromScriptableObjectResource>b__0, addr 0x2ecf5dc, size 0xfc, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromScriptableObjectResource_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ecf6d8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecf734, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass33_0(__FactoryFromBinderBase____c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass33_0(__FactoryFromBinderBase____c__DisplayClass33_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass33_0();

public:
  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass33_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass33_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass33_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass34_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10845))
// CS Name: ::FactoryFromBinderBase::<>c__DisplayClass34_0*
class CORDL_TYPE __FactoryFromBinderBase____c__DisplayClass34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinderBase* __4__this;

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  constexpr ::Zenject::FactoryFromBinderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinderBase* value);

  static inline ::Zenject::__FactoryFromBinderBase____c__DisplayClass34_0* New_ctor();

  /// @brief Method .ctor, addr 0x2eccad0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromResource>b__0, addr 0x2ecf8f4, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResource_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x2ecf970, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecf9cc, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass34_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinderBase____c__DisplayClass34_0(__FactoryFromBinderBase____c__DisplayClass34_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinderBase____c__DisplayClass34_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinderBase____c__DisplayClass34_0(__FactoryFromBinderBase____c__DisplayClass34_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinderBase____c__DisplayClass34_0();

public:
  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FactoryFromBinderBase____c__DisplayClass34_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass34_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FactoryFromBinderBase____c__DisplayClass34_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::FactoryFromBinderBase
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10926))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10846))
// CS Name: ::Zenject::FactoryFromBinderBase*
class CORDL_TYPE FactoryFromBinderBase : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  using __c__DisplayClass34_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass34_0;

  using __c__DisplayClass33_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass33_0;

  using __c__DisplayClass32_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass32_0;

  using __c__DisplayClass31_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass31_0;

  using __c__DisplayClass30_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass30_0;

  using __c__DisplayClass29_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass29_0;

  using __c__DisplayClass28_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass28_0;

  using __c__DisplayClass27_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass27_0;

  using __c__DisplayClass26_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass26_0;

  using __c__DisplayClass24_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass24_0;

  using __c__DisplayClass23_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass23_0;

  using __c__DisplayClass21_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass21_0;

  using __c__DisplayClass20_0 = ::Zenject::__FactoryFromBinderBase____c__DisplayClass20_0;

  using _get_AllParentTypes_d__17 = ::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17;

  /// @brief Field <BindContainer>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__BindContainer_k__BackingField, put = __set__BindContainer_k__BackingField))::Zenject::DiContainer* _BindContainer_k__BackingField;

  /// @brief Field <FactoryBindInfo>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__FactoryBindInfo_k__BackingField, put = __set__FactoryBindInfo_k__BackingField))::Zenject::FactoryBindInfo* _FactoryBindInfo_k__BackingField;

  /// @brief Field <ContractType>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__ContractType_k__BackingField, put = __set__ContractType_k__BackingField))::System::Type* _ContractType_k__BackingField;

  __declspec(property(get = get_BindContainer, put = set_BindContainer))::Zenject::DiContainer* BindContainer;

  __declspec(property(get = get_FactoryBindInfo, put = set_FactoryBindInfo))::Zenject::FactoryBindInfo* FactoryBindInfo;

  __declspec(property(get = get_ProviderFunc, put = set_ProviderFunc))::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* ProviderFunc;

  __declspec(property(get = get_ContractType, put = set_ContractType))::System::Type* ContractType;

  __declspec(property(get = get_AllParentTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* AllParentTypes;

  constexpr ::Zenject::DiContainer*& __get__BindContainer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__BindContainer_k__BackingField() const;

  constexpr void __set__BindContainer_k__BackingField(::Zenject::DiContainer* value);

  constexpr ::Zenject::FactoryBindInfo*& __get__FactoryBindInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> const& __get__FactoryBindInfo_k__BackingField() const;

  constexpr void __set__FactoryBindInfo_k__BackingField(::Zenject::FactoryBindInfo* value);

  constexpr ::System::Type*& __get__ContractType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__ContractType_k__BackingField() const;

  constexpr void __set__ContractType_k__BackingField(::System::Type* value);

  static inline ::Zenject::FactoryFromBinderBase* New_ctor(::Zenject::DiContainer* bindContainer, ::System::Type* contractType, ::Zenject::BindInfo* bindInfo,
                                                           ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method .ctor, addr 0x2ecbad0, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::System::Type* contractType, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method get_BindContainer, addr 0x2ecbb88, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_BindContainer();

  /// @brief Method set_BindContainer, addr 0x2ecbb90, size 0x8, virtual false, abstract: false, final false
  inline void set_BindContainer(::Zenject::DiContainer* value);

  /// @brief Method get_FactoryBindInfo, addr 0x2ecbb98, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::FactoryBindInfo* get_FactoryBindInfo();

  /// @brief Method set_FactoryBindInfo, addr 0x2ecbba0, size 0x8, virtual false, abstract: false, final false
  inline void set_FactoryBindInfo(::Zenject::FactoryBindInfo* value);

  /// @brief Method get_ProviderFunc, addr 0x2ecbba8, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* get_ProviderFunc();

  /// @brief Method set_ProviderFunc, addr 0x2ecbbc4, size 0x1c, virtual false, abstract: false, final false
  inline void set_ProviderFunc(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value);

  /// @brief Method get_ContractType, addr 0x2ecbbe0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ContractType();

  /// @brief Method set_ContractType, addr 0x2ecbbe8, size 0x8, virtual false, abstract: false, final false
  inline void set_ContractType(::System::Type* value);

  /// @brief Method get_AllParentTypes, addr 0x2ecbbf0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_AllParentTypes();

  /// @brief Method FromNew, addr 0x2ecbc9c, size 0x2c, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromNew();

  /// @brief Method FromResolve, addr 0x2ecbcc8, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromResolve();

  /// @brief Method FromInstance, addr 0x2ecbd94, size 0xdc, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromInstance(::System::Object* instance);

  /// @brief Method FromResolve, addr 0x2ecbcd0, size 0xc4, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromResolve(::System::Object* subIdentifier);

  /// @brief Method CreateIFactoryBinder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConcreteBinderGeneric_1<T>* CreateIFactoryBinder(ByRef<::System::Guid> factoryId);

  /// @brief Method FromComponentOn, addr 0x2ecbe80, size 0xe8, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromComponentOn(::UnityEngine::GameObject* gameObject);

  /// @brief Method FromComponentOn, addr 0x2ecbf70, size 0xdc, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromComponentOn(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter);

  /// @brief Method FromComponentOnRoot, addr 0x2ecc054, size 0x80, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromComponentOnRoot();

  /// @brief Method FromNewComponentOn, addr 0x2ecc0d4, size 0xe8, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromNewComponentOn(::UnityEngine::GameObject* gameObject);

  /// @brief Method FromNewComponentOn, addr 0x2ecc1c4, size 0xdc, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromNewComponentOn(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter);

  /// @brief Method FromNewComponentOnNewPrefab, addr 0x2ecc2a8, size 0x158, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method FromComponentInNewPrefab, addr 0x2ecc430, size 0x14c, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method FromComponentInNewPrefabResource, addr 0x2ecc584, size 0x14c, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::StringW resourcePath);

  /// @brief Method FromNewComponentOnNewPrefabResource, addr 0x2ecc6d8, size 0x158, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::StringW resourcePath);

  /// @brief Method FromNewScriptableObjectResource, addr 0x2ecc838, size 0xdc, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromNewScriptableObjectResource(::StringW resourcePath);

  /// @brief Method FromScriptableObjectResource, addr 0x2ecc91c, size 0xdc, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromScriptableObjectResource(::StringW resourcePath);

  /// @brief Method FromResource, addr 0x2ecca00, size 0xd0, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromResource(::StringW resourcePath);

  /// @brief Method <.ctor>b__0_0, addr 0x2eccad8, size 0xa4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* __ctor_b__0_0(::Zenject::DiContainer* container);

  /// @brief Method <FromComponentOnRoot>b__25_0, addr 0x2eccb7c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* _FromComponentOnRoot_b__25_0(::Zenject::InjectContext* ctx);

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase(FactoryFromBinderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase(FactoryFromBinderBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase();

public:
  /// @brief Field <BindContainer>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____BindContainer_k__BackingField;

  /// @brief Field <FactoryBindInfo>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Zenject::FactoryBindInfo* ____FactoryBindInfo_k__BackingField;

  /// @brief Field <ContractType>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ____ContractType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase, 0x38>, "Size mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase, ____BindContainer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase, ____FactoryBindInfo_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase, ____ContractType_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FactoryFromBinderBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase*, "Zenject", "FactoryFromBinderBase");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass20_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass20_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass21_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass21_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass23_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass23_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass24_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass24_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass26_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass26_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass27_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass27_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass28_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass28_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass29_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass29_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass30_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass30_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass31_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass31_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass32_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass32_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass33_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass33_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase____c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase____c__DisplayClass34_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass34_0");
NEED_NO_BOX(::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FactoryFromBinderBase___get_AllParentTypes_d__17*, "Zenject", "FactoryFromBinderBase/<get_AllParentTypes>d__17");
