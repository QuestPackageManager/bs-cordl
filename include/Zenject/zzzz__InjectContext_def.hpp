#pragma once
// IWYU pragma private; include "Zenject/InjectContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InjectContext)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext__get_AllObjectTypes_d__56;
}
namespace Zenject {
class InjectContext__get_ParentContextsAndSelf_d__54;
}
namespace Zenject {
class InjectContext__get_ParentContexts_d__52;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectContext__get_AllObjectTypes_d__56;
}
namespace Zenject {
class InjectContext__get_ParentContextsAndSelf_d__54;
}
namespace Zenject {
class InjectContext__get_ParentContexts_d__52;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectContext);
MARK_REF_PTR_T(::Zenject::InjectContext__get_AllObjectTypes_d__56);
MARK_REF_PTR_T(::Zenject::InjectContext__get_ParentContextsAndSelf_d__54);
MARK_REF_PTR_T(::Zenject::InjectContext__get_ParentContexts_d__52);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectContext/<get_AllObjectTypes>d__56
class CORDL_TYPE InjectContext__get_AllObjectTypes_d__56 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current)) ::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Type* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::InjectContext* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4b217d0, size 0x300, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Zenject::InjectContext__get_AllObjectTypes_d__56* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x4b21bc8, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x4b21b80, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4b21c64, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4b21b88, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4b21bc0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4b217b4, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Type* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Type*& __cordl_internal_get___2__current();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Type* value);

  constexpr void __cordl_internal_set___4__this(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x4b21ad0, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method __zenCreate, addr 0x4b21c68, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b21d30, size 0x268, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b21220, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectContext__get_AllObjectTypes_d__56();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectContext__get_AllObjectTypes_d__56", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectContext__get_AllObjectTypes_d__56(InjectContext__get_AllObjectTypes_d__56&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectContext__get_AllObjectTypes_d__56", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectContext__get_AllObjectTypes_d__56(InjectContext__get_AllObjectTypes_d__56 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12452 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::InjectContext* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InjectContext__get_AllObjectTypes_d__56, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_AllObjectTypes_d__56, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_AllObjectTypes_d__56, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_AllObjectTypes_d__56, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_AllObjectTypes_d__56, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InjectContext__get_AllObjectTypes_d__56, 0x38>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectContext/<get_ParentContexts>d__52
class CORDL_TYPE InjectContext__get_ParentContexts_d__52 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current)) ::Zenject::InjectContext* System_Collections_Generic_IEnumerator_Zenject_InjectContext__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::Zenject::InjectContext* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::InjectContext* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4b21fb4, size 0x2ec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Zenject::InjectContext__get_ParentContexts_d__52* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Zenject.InjectContext>.GetEnumerator, addr 0x4b22398, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* System_Collections_Generic_IEnumerable_Zenject_InjectContext__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Zenject.InjectContext>.get_Current, addr 0x4b22350, size 0x8, virtual true, abstract: false, final true
  inline ::Zenject::InjectContext* System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4b22434, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4b22358, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4b22390, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4b21f98, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get___2__current() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get___2__current();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set___4__this(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x4b222a0, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method __zenCreate, addr 0x4b22438, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b22500, size 0x268, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b210d8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>* i___System__Collections__Generic__IEnumerable_1___Zenject__InjectContext__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* i___System__Collections__Generic__IEnumerator_1___Zenject__InjectContext__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectContext__get_ParentContexts_d__52();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectContext__get_ParentContexts_d__52", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectContext__get_ParentContexts_d__52(InjectContext__get_ParentContexts_d__52&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectContext__get_ParentContexts_d__52", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectContext__get_ParentContexts_d__52(InjectContext__get_ParentContexts_d__52 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12453 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectContext* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::InjectContext* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InjectContext__get_ParentContexts_d__52, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_ParentContexts_d__52, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_ParentContexts_d__52, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_ParentContexts_d__52, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_ParentContexts_d__52, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InjectContext__get_ParentContexts_d__52, 0x38>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectContext/<get_ParentContextsAndSelf>d__54
class CORDL_TYPE InjectContext__get_ParentContextsAndSelf_d__54 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current)) ::Zenject::InjectContext* System_Collections_Generic_IEnumerator_Zenject_InjectContext__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::Zenject::InjectContext* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::InjectContext* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4b22784, size 0x2bc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Zenject::InjectContext__get_ParentContextsAndSelf_d__54* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Zenject.InjectContext>.GetEnumerator, addr 0x4b22b38, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* System_Collections_Generic_IEnumerable_Zenject_InjectContext__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Zenject.InjectContext>.get_Current, addr 0x4b22af0, size 0x8, virtual true, abstract: false, final true
  inline ::Zenject::InjectContext* System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4b22bd4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4b22af8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4b22b30, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4b22768, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get___2__current() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get___2__current();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set___4__this(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x4b22a40, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method __zenCreate, addr 0x4b22bd8, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b22ca0, size 0x268, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b2117c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>* i___System__Collections__Generic__IEnumerable_1___Zenject__InjectContext__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* i___System__Collections__Generic__IEnumerator_1___Zenject__InjectContext__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectContext__get_ParentContextsAndSelf_d__54();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectContext__get_ParentContextsAndSelf_d__54", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectContext__get_ParentContextsAndSelf_d__54(InjectContext__get_ParentContextsAndSelf_d__54&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectContext__get_ParentContextsAndSelf_d__54", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectContext__get_ParentContextsAndSelf_d__54(InjectContext__get_ParentContextsAndSelf_d__54 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12454 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectContext* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::InjectContext* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InjectContext__get_ParentContextsAndSelf_d__54, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_ParentContextsAndSelf_d__54, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_ParentContextsAndSelf_d__54, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_ParentContextsAndSelf_d__54, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext__get_ParentContextsAndSelf_d__54, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InjectContext__get_ParentContextsAndSelf_d__54, 0x38>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.IDisposable, System.Object, Zenject.BindingId, Zenject.InjectSources
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectContext
class CORDL_TYPE InjectContext : public ::System::Object {
public:
  // Declarations
  using _get_AllObjectTypes_d__56 = ::Zenject::InjectContext__get_AllObjectTypes_d__56;

  using _get_ParentContextsAndSelf_d__54 = ::Zenject::InjectContext__get_ParentContextsAndSelf_d__54;

  using _get_ParentContexts_d__52 = ::Zenject::InjectContext__get_ParentContexts_d__52;

  __declspec(property(get = get_AllObjectTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>* AllObjectTypes;

  __declspec(property(get = get_BindingId)) ::Zenject::BindingId BindingId;

  __declspec(property(get = get_ConcreteIdentifier, put = set_ConcreteIdentifier)) ::System::Object* ConcreteIdentifier;

  __declspec(property(get = get_Container, put = set_Container)) ::Zenject::DiContainer* Container;

  __declspec(property(get = get_FallBackValue, put = set_FallBackValue)) ::System::Object* FallBackValue;

  __declspec(property(get = get_Identifier, put = set_Identifier)) ::System::Object* Identifier;

  __declspec(property(get = get_MemberName, put = set_MemberName)) ::StringW MemberName;

  __declspec(property(get = get_MemberType, put = set_MemberType)) ::System::Type* MemberType;

  __declspec(property(get = get_ObjectInstance, put = set_ObjectInstance)) ::System::Object* ObjectInstance;

  __declspec(property(get = get_ObjectType, put = set_ObjectType)) ::System::Type* ObjectType;

  __declspec(property(get = get_Optional, put = set_Optional)) bool Optional;

  __declspec(property(get = get_ParentContext, put = set_ParentContext)) ::Zenject::InjectContext* ParentContext;

  __declspec(property(get = get_ParentContexts)) ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>* ParentContexts;

  __declspec(property(get = get_ParentContextsAndSelf)) ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>* ParentContextsAndSelf;

  __declspec(property(get = get_SourceType, put = set_SourceType)) ::Zenject::InjectSources SourceType;

  /// @brief Field _bindingId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__bindingId, put = __cordl_internal_set__bindingId)) ::Zenject::BindingId _bindingId;

  /// @brief Field _concreteIdentifier, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__concreteIdentifier, put = __cordl_internal_set__concreteIdentifier)) ::System::Object* _concreteIdentifier;

  /// @brief Field _container, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _fallBackValue, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__fallBackValue, put = __cordl_internal_set__fallBackValue)) ::System::Object* _fallBackValue;

  /// @brief Field _memberName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__memberName, put = __cordl_internal_set__memberName)) ::StringW _memberName;

  /// @brief Field _objectInstance, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__objectInstance, put = __cordl_internal_set__objectInstance)) ::System::Object* _objectInstance;

  /// @brief Field _objectType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__objectType, put = __cordl_internal_set__objectType)) ::System::Type* _objectType;

  /// @brief Field _optional, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__optional, put = __cordl_internal_set__optional)) bool _optional;

  /// @brief Field _parentContext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__parentContext, put = __cordl_internal_set__parentContext)) ::Zenject::InjectContext* _parentContext;

  /// @brief Field _sourceType, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__sourceType, put = __cordl_internal_set__sourceType)) ::Zenject::InjectSources _sourceType;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clone, addr 0x4b21328, size 0xb4, virtual false, abstract: false, final false
  inline ::Zenject::InjectContext* Clone();

  /// @brief Method CreateSubContext, addr 0x4b21254, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::InjectContext* CreateSubContext(::System::Type* memberType);

  /// @brief Method CreateSubContext, addr 0x4b2125c, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::InjectContext* CreateSubContext(::System::Type* memberType, ::System::Object* identifier);

  /// @brief Method Dispose, addr 0x4b20f60, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetObjectGraphString, addr 0x4b213dc, size 0x3d8, virtual false, abstract: false, final false
  inline ::StringW GetObjectGraphString();

  static inline ::Zenject::InjectContext* New_ctor();

  static inline ::Zenject::InjectContext* New_ctor(::Zenject::DiContainer* container, ::System::Type* memberType);

  static inline ::Zenject::InjectContext* New_ctor(::Zenject::DiContainer* container, ::System::Type* memberType, ::System::Object* identifier);

  static inline ::Zenject::InjectContext* New_ctor(::Zenject::DiContainer* container, ::System::Type* memberType, ::System::Object* identifier, bool optional);

  /// @brief Method Reset, addr 0x4b20e18, size 0x60, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::Zenject::BindingId const& __cordl_internal_get__bindingId() const;

  constexpr ::Zenject::BindingId& __cordl_internal_get__bindingId();

  constexpr ::System::Object* const& __cordl_internal_get__concreteIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get__concreteIdentifier();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Object* const& __cordl_internal_get__fallBackValue() const;

  constexpr ::System::Object*& __cordl_internal_get__fallBackValue();

  constexpr ::StringW const& __cordl_internal_get__memberName() const;

  constexpr ::StringW& __cordl_internal_get__memberName();

  constexpr ::System::Object* const& __cordl_internal_get__objectInstance() const;

  constexpr ::System::Object*& __cordl_internal_get__objectInstance();

  constexpr ::System::Type* const& __cordl_internal_get__objectType() const;

  constexpr ::System::Type*& __cordl_internal_get__objectType();

  constexpr bool const& __cordl_internal_get__optional() const;

  constexpr bool& __cordl_internal_get__optional();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get__parentContext() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get__parentContext();

  constexpr ::Zenject::InjectSources const& __cordl_internal_get__sourceType() const;

  constexpr ::Zenject::InjectSources& __cordl_internal_get__sourceType();

  constexpr void __cordl_internal_set__bindingId(::Zenject::BindingId value);

  constexpr void __cordl_internal_set__concreteIdentifier(::System::Object* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__fallBackValue(::System::Object* value);

  constexpr void __cordl_internal_set__memberName(::StringW value);

  constexpr void __cordl_internal_set__objectInstance(::System::Object* value);

  constexpr void __cordl_internal_set__objectType(::System::Type* value);

  constexpr void __cordl_internal_set__optional(bool value);

  constexpr void __cordl_internal_set__parentContext(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set__sourceType(::Zenject::InjectSources value);

  /// @brief Method .ctor, addr 0x4b20df8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4b20e78, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Type* memberType);

  /// @brief Method .ctor, addr 0x4b20ebc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Type* memberType, ::System::Object* identifier);

  /// @brief Method .ctor, addr 0x4b20f0c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Type* memberType, ::System::Object* identifier, bool optional);

  /// @brief Method get_AllObjectTypes, addr 0x4b211b0, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_AllObjectTypes();

  /// @brief Method get_BindingId, addr 0x4b20fb8, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::BindingId get_BindingId();

  /// @brief Method get_ConcreteIdentifier, addr 0x4b21038, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_ConcreteIdentifier();

  /// @brief Method get_Container, addr 0x4b21058, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_FallBackValue, addr 0x4b21048, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_FallBackValue();

  /// @brief Method get_Identifier, addr 0x4b20ff4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Identifier();

  /// @brief Method get_MemberName, addr 0x4b20ffc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MemberName();

  /// @brief Method get_MemberType, addr 0x4b2100c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_MemberType();

  /// @brief Method get_ObjectInstance, addr 0x4b20fe4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_ObjectInstance();

  /// @brief Method get_ObjectType, addr 0x4b20fc4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ObjectType();

  /// @brief Method get_Optional, addr 0x4b21014, size 0x8, virtual false, abstract: false, final false
  inline bool get_Optional();

  /// @brief Method get_ParentContext, addr 0x4b20fd4, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::InjectContext* get_ParentContext();

  /// @brief Method get_ParentContexts, addr 0x4b21068, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>* get_ParentContexts();

  /// @brief Method get_ParentContextsAndSelf, addr 0x4b2110c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>* get_ParentContextsAndSelf();

  /// @brief Method get_SourceType, addr 0x4b21028, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::InjectSources get_SourceType();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_ConcreteIdentifier, addr 0x4b21040, size 0x8, virtual false, abstract: false, final false
  inline void set_ConcreteIdentifier(::System::Object* value);

  /// @brief Method set_Container, addr 0x4b21060, size 0x8, virtual false, abstract: false, final false
  inline void set_Container(::Zenject::DiContainer* value);

  /// @brief Method set_FallBackValue, addr 0x4b21050, size 0x8, virtual false, abstract: false, final false
  inline void set_FallBackValue(::System::Object* value);

  /// @brief Method set_Identifier, addr 0x4b20f04, size 0x8, virtual false, abstract: false, final false
  inline void set_Identifier(::System::Object* value);

  /// @brief Method set_MemberName, addr 0x4b21004, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberName(::StringW value);

  /// @brief Method set_MemberType, addr 0x4b20eb4, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberType(::System::Type* value);

  /// @brief Method set_ObjectInstance, addr 0x4b20fec, size 0x8, virtual false, abstract: false, final false
  inline void set_ObjectInstance(::System::Object* value);

  /// @brief Method set_ObjectType, addr 0x4b20fcc, size 0x8, virtual false, abstract: false, final false
  inline void set_ObjectType(::System::Type* value);

  /// @brief Method set_Optional, addr 0x4b2101c, size 0xc, virtual false, abstract: false, final false
  inline void set_Optional(bool value);

  /// @brief Method set_ParentContext, addr 0x4b20fdc, size 0x8, virtual false, abstract: false, final false
  inline void set_ParentContext(::Zenject::InjectContext* value);

  /// @brief Method set_SourceType, addr 0x4b21030, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceType(::Zenject::InjectSources value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectContext(InjectContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectContext(InjectContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12455 };

  /// @brief Field _bindingId, offset: 0x10, size: 0x10, def value: None
  ::Zenject::BindingId ____bindingId;

  /// @brief Field _objectType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____objectType;

  /// @brief Field _parentContext, offset: 0x28, size: 0x8, def value: None
  ::Zenject::InjectContext* ____parentContext;

  /// @brief Field _objectInstance, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____objectInstance;

  /// @brief Field _memberName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____memberName;

  /// @brief Field _optional, offset: 0x40, size: 0x1, def value: None
  bool ____optional;

  /// @brief Field _sourceType, offset: 0x44, size: 0x4, def value: None
  ::Zenject::InjectSources ____sourceType;

  /// @brief Field _fallBackValue, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____fallBackValue;

  /// @brief Field _concreteIdentifier, offset: 0x50, size: 0x8, def value: None
  ::System::Object* ____concreteIdentifier;

  /// @brief Field _container, offset: 0x58, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InjectContext, ____bindingId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext, ____objectType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext, ____parentContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext, ____objectInstance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext, ____memberName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext, ____optional) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext, ____sourceType) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext, ____fallBackValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext, ____concreteIdentifier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectContext, ____container) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InjectContext, 0x60>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectContext*, "Zenject", "InjectContext");
NEED_NO_BOX(::Zenject::InjectContext__get_AllObjectTypes_d__56);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectContext__get_AllObjectTypes_d__56*, "Zenject", "InjectContext/<get_AllObjectTypes>d__56");
NEED_NO_BOX(::Zenject::InjectContext__get_ParentContextsAndSelf_d__54);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectContext__get_ParentContextsAndSelf_d__54*, "Zenject", "InjectContext/<get_ParentContextsAndSelf>d__54");
NEED_NO_BOX(::Zenject::InjectContext__get_ParentContexts_d__52);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectContext__get_ParentContexts_d__52*, "Zenject", "InjectContext/<get_ParentContexts>d__52");
