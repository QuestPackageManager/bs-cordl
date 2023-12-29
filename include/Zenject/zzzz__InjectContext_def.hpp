#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InjectContext)
namespace System {
class Type;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Zenject {
class __InjectContext___get_ParentContexts_d__52;
}
namespace Zenject {
class __InjectContext___get_AllObjectTypes_d__56;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
struct InjectSources;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class __InjectContext___get_ParentContextsAndSelf_d__54;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class __InjectContext___get_AllObjectTypes_d__56;
}
namespace Zenject {
class __InjectContext___get_ParentContextsAndSelf_d__54;
}
namespace Zenject {
class __InjectContext___get_ParentContexts_d__52;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectContext);
MARK_REF_PTR_T(::Zenject::__InjectContext___get_AllObjectTypes_d__56);
MARK_REF_PTR_T(::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54);
MARK_REF_PTR_T(::Zenject::__InjectContext___get_ParentContexts_d__52);
// Type: ::<get_ParentContexts>d__52
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11038))
// CS Name: ::InjectContext::<get_ParentContexts>d__52*
class CORDL_TYPE __InjectContext___get_ParentContexts_d__52 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::Zenject::InjectContext* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::InjectContext* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current))::Zenject::InjectContext* System_Collections_Generic_IEnumerator_Zenject_InjectContext__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::Zenject::InjectContext*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get___2__current() const;

  constexpr void __set___2__current(::Zenject::InjectContext* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::Zenject::InjectContext*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::InjectContext* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* value);

  static inline ::Zenject::__InjectContext___get_ParentContexts_d__52* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2d81c1c size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2d822f8 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2d82314 size 0x2f0 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2d82604 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<Zenject.InjectContext>.get_Current addr 0x2d826b4 size 0x8 virtual true final true
  inline ::Zenject::InjectContext* System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2d826bc size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d826fc size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<Zenject.InjectContext>.GetEnumerator addr 0x2d82704 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* System_Collections_Generic_IEnumerable_Zenject_InjectContext__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d827a8 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method __zenCreate addr 0x2d827ac size 0xcc virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d82878 size 0x274 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__InjectContext___get_ParentContexts_d__52", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InjectContext___get_ParentContexts_d__52(__InjectContext___get_ParentContexts_d__52&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InjectContext___get_ParentContexts_d__52", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InjectContext___get_ParentContexts_d__52(__InjectContext___get_ParentContexts_d__52 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InjectContext___get_ParentContexts_d__52();

public:
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
static_assert(::cordl_internals::size_check_v<::Zenject::__InjectContext___get_ParentContexts_d__52, 0x38>, "Size mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_ParentContexts_d__52, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_ParentContexts_d__52, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_ParentContexts_d__52, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_ParentContexts_d__52, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_ParentContexts_d__52, _____7__wrap1) == 0x30, "Offset mismatch!");

} // namespace Zenject
// Type: ::<get_ParentContextsAndSelf>d__54
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11039))
// CS Name: ::InjectContext::<get_ParentContextsAndSelf>d__54*
class CORDL_TYPE __InjectContext___get_ParentContextsAndSelf_d__54 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::Zenject::InjectContext* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::InjectContext* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current))::Zenject::InjectContext* System_Collections_Generic_IEnumerator_Zenject_InjectContext__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::Zenject::InjectContext*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get___2__current() const;

  constexpr void __set___2__current(::Zenject::InjectContext* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::Zenject::InjectContext*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::InjectContext* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* value);

  static inline ::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2d81cc8 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2d82aec size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2d82b08 size 0x2c0 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2d82dc8 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<Zenject.InjectContext>.get_Current addr 0x2d82e78 size 0x8 virtual true final true
  inline ::Zenject::InjectContext* System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2d82e80 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d82ec0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<Zenject.InjectContext>.GetEnumerator addr 0x2d82ec8 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* System_Collections_Generic_IEnumerable_Zenject_InjectContext__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d82f6c size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method __zenCreate addr 0x2d82f70 size 0xcc virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d8303c size 0x274 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__InjectContext___get_ParentContextsAndSelf_d__54", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InjectContext___get_ParentContextsAndSelf_d__54(__InjectContext___get_ParentContextsAndSelf_d__54&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InjectContext___get_ParentContextsAndSelf_d__54", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InjectContext___get_ParentContextsAndSelf_d__54(__InjectContext___get_ParentContextsAndSelf_d__54 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InjectContext___get_ParentContextsAndSelf_d__54();

public:
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
static_assert(::cordl_internals::size_check_v<::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54, 0x38>, "Size mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54, _____7__wrap1) == 0x30, "Offset mismatch!");

} // namespace Zenject
// Type: ::<get_AllObjectTypes>d__56
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11040))
// CS Name: ::InjectContext::<get_AllObjectTypes>d__56*
class CORDL_TYPE __InjectContext___get_AllObjectTypes_d__56 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Type* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::InjectContext* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current))::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Type*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Type* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::Zenject::InjectContext*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::InjectContext* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectContext*>* value);

  static inline ::Zenject::__InjectContext___get_AllObjectTypes_d__56* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2d81d74 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2d832b0 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2d832cc size 0x300 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2d835cc size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current addr 0x2d8367c size 0x8 virtual true final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2d83684 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d836c4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator addr 0x2d836cc size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d83770 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method __zenCreate addr 0x2d83774 size 0xcc virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d83840 size 0x274 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__InjectContext___get_AllObjectTypes_d__56", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InjectContext___get_AllObjectTypes_d__56(__InjectContext___get_AllObjectTypes_d__56&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InjectContext___get_AllObjectTypes_d__56", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InjectContext___get_AllObjectTypes_d__56(__InjectContext___get_AllObjectTypes_d__56 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InjectContext___get_AllObjectTypes_d__56();

public:
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
static_assert(::cordl_internals::size_check_v<::Zenject::__InjectContext___get_AllObjectTypes_d__56, 0x38>, "Size mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_AllObjectTypes_d__56, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_AllObjectTypes_d__56, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_AllObjectTypes_d__56, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_AllObjectTypes_d__56, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectContext___get_AllObjectTypes_d__56, _____7__wrap1) == 0x30, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::InjectContext
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15662)), TypeDefinitionIndex(TypeDefinitionIndex(11086)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11041))
// CS Name: ::Zenject::InjectContext*
class CORDL_TYPE InjectContext : public ::System::Object {
public:
  // Declarations
  using _get_AllObjectTypes_d__56 = ::Zenject::__InjectContext___get_AllObjectTypes_d__56;

  using _get_ParentContextsAndSelf_d__54 = ::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54;

  using _get_ParentContexts_d__52 = ::Zenject::__InjectContext___get_ParentContexts_d__52;

  /// @brief Field _bindingId, offset 0x10, size 0x10
  __declspec(property(get = __get__bindingId, put = __set__bindingId))::Zenject::BindingId _bindingId;

  /// @brief Field _objectType, offset 0x20, size 0x8
  __declspec(property(get = __get__objectType, put = __set__objectType))::System::Type* _objectType;

  /// @brief Field _parentContext, offset 0x28, size 0x8
  __declspec(property(get = __get__parentContext, put = __set__parentContext))::Zenject::InjectContext* _parentContext;

  /// @brief Field _objectInstance, offset 0x30, size 0x8
  __declspec(property(get = __get__objectInstance, put = __set__objectInstance))::System::Object* _objectInstance;

  /// @brief Field _memberName, offset 0x38, size 0x8
  __declspec(property(get = __get__memberName, put = __set__memberName))::StringW _memberName;

  /// @brief Field _optional, offset 0x40, size 0x1
  __declspec(property(get = __get__optional, put = __set__optional)) bool _optional;

  /// @brief Field _sourceType, offset 0x44, size 0x4
  __declspec(property(get = __get__sourceType, put = __set__sourceType))::Zenject::InjectSources _sourceType;

  /// @brief Field _fallBackValue, offset 0x48, size 0x8
  __declspec(property(get = __get__fallBackValue, put = __set__fallBackValue))::System::Object* _fallBackValue;

  /// @brief Field _concreteIdentifier, offset 0x50, size 0x8
  __declspec(property(get = __get__concreteIdentifier, put = __set__concreteIdentifier))::System::Object* _concreteIdentifier;

  /// @brief Field _container, offset 0x58, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  __declspec(property(get = get_BindingId))::Zenject::BindingId BindingId;

  __declspec(property(get = get_ObjectType, put = set_ObjectType))::System::Type* ObjectType;

  __declspec(property(get = get_ParentContext, put = set_ParentContext))::Zenject::InjectContext* ParentContext;

  __declspec(property(get = get_ObjectInstance, put = set_ObjectInstance))::System::Object* ObjectInstance;

  __declspec(property(get = get_Identifier, put = set_Identifier))::System::Object* Identifier;

  __declspec(property(get = get_MemberName, put = set_MemberName))::StringW MemberName;

  __declspec(property(get = get_MemberType, put = set_MemberType))::System::Type* MemberType;

  __declspec(property(get = get_Optional, put = set_Optional)) bool Optional;

  __declspec(property(get = get_SourceType, put = set_SourceType))::Zenject::InjectSources SourceType;

  __declspec(property(get = get_ConcreteIdentifier, put = set_ConcreteIdentifier))::System::Object* ConcreteIdentifier;

  __declspec(property(get = get_FallBackValue, put = set_FallBackValue))::System::Object* FallBackValue;

  __declspec(property(get = get_Container, put = set_Container))::Zenject::DiContainer* Container;

  __declspec(property(get = get_ParentContexts))::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>* ParentContexts;

  __declspec(property(get = get_ParentContextsAndSelf))::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>* ParentContextsAndSelf;

  __declspec(property(get = get_AllObjectTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* AllObjectTypes;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::Zenject::BindingId& __get__bindingId();

  constexpr ::Zenject::BindingId const& __get__bindingId() const;

  constexpr void __set__bindingId(::Zenject::BindingId value);

  constexpr ::System::Type*& __get__objectType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__objectType() const;

  constexpr void __set__objectType(::System::Type* value);

  constexpr ::Zenject::InjectContext*& __get__parentContext();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get__parentContext() const;

  constexpr void __set__parentContext(::Zenject::InjectContext* value);

  constexpr ::System::Object*& __get__objectInstance();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__objectInstance() const;

  constexpr void __set__objectInstance(::System::Object* value);

  constexpr ::StringW& __get__memberName();

  constexpr ::StringW const& __get__memberName() const;

  constexpr void __set__memberName(::StringW value);

  constexpr bool& __get__optional();

  constexpr bool const& __get__optional() const;

  constexpr void __set__optional(bool value);

  constexpr ::Zenject::InjectSources& __get__sourceType();

  constexpr ::Zenject::InjectSources const& __get__sourceType() const;

  constexpr void __set__sourceType(::Zenject::InjectSources value);

  constexpr ::System::Object*& __get__fallBackValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__fallBackValue() const;

  constexpr void __set__fallBackValue(::System::Object* value);

  constexpr ::System::Object*& __get__concreteIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__concreteIdentifier() const;

  constexpr void __set__concreteIdentifier(::System::Object* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  static inline ::Zenject::InjectContext* New_ctor();

  /// @brief Method .ctor addr 0x2d81934 size 0x20 virtual false final false
  inline void _ctor();

  static inline ::Zenject::InjectContext* New_ctor(::Zenject::DiContainer* container, ::System::Type* memberType);

  /// @brief Method .ctor addr 0x2d819b4 size 0x3c virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Type* memberType);

  static inline ::Zenject::InjectContext* New_ctor(::Zenject::DiContainer* container, ::System::Type* memberType, ::System::Object* identifier);

  /// @brief Method .ctor addr 0x2d819f8 size 0x48 virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Type* memberType, ::System::Object* identifier);

  static inline ::Zenject::InjectContext* New_ctor(::Zenject::DiContainer* container, ::System::Type* memberType, ::System::Object* identifier, bool optional);

  /// @brief Method .ctor addr 0x2d81a48 size 0x54 virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Type* memberType, ::System::Object* identifier, bool optional);

  /// @brief Method Dispose addr 0x2d81a9c size 0x58 virtual true final true
  inline void Dispose();

  /// @brief Method Reset addr 0x2d81954 size 0x60 virtual false final false
  inline void Reset();

  /// @brief Method get_BindingId addr 0x2d81af4 size 0xc virtual false final false
  inline ::Zenject::BindingId get_BindingId();

  /// @brief Method get_ObjectType addr 0x2d81b00 size 0x8 virtual false final false
  inline ::System::Type* get_ObjectType();

  /// @brief Method set_ObjectType addr 0x2d81b08 size 0x8 virtual false final false
  inline void set_ObjectType(::System::Type* value);

  /// @brief Method get_ParentContext addr 0x2d81b10 size 0x8 virtual false final false
  inline ::Zenject::InjectContext* get_ParentContext();

  /// @brief Method set_ParentContext addr 0x2d81b18 size 0x8 virtual false final false
  inline void set_ParentContext(::Zenject::InjectContext* value);

  /// @brief Method get_ObjectInstance addr 0x2d81b20 size 0x8 virtual false final false
  inline ::System::Object* get_ObjectInstance();

  /// @brief Method set_ObjectInstance addr 0x2d81b28 size 0x8 virtual false final false
  inline void set_ObjectInstance(::System::Object* value);

  /// @brief Method get_Identifier addr 0x2d81b30 size 0x8 virtual false final false
  inline ::System::Object* get_Identifier();

  /// @brief Method set_Identifier addr 0x2d81a40 size 0x8 virtual false final false
  inline void set_Identifier(::System::Object* value);

  /// @brief Method get_MemberName addr 0x2d81b38 size 0x8 virtual false final false
  inline ::StringW get_MemberName();

  /// @brief Method set_MemberName addr 0x2d81b40 size 0x8 virtual false final false
  inline void set_MemberName(::StringW value);

  /// @brief Method get_MemberType addr 0x2d81b48 size 0x8 virtual false final false
  inline ::System::Type* get_MemberType();

  /// @brief Method set_MemberType addr 0x2d819f0 size 0x8 virtual false final false
  inline void set_MemberType(::System::Type* value);

  /// @brief Method get_Optional addr 0x2d81b50 size 0x8 virtual false final false
  inline bool get_Optional();

  /// @brief Method set_Optional addr 0x2d81b58 size 0xc virtual false final false
  inline void set_Optional(bool value);

  /// @brief Method get_SourceType addr 0x2d81b64 size 0x8 virtual false final false
  inline ::Zenject::InjectSources get_SourceType();

  /// @brief Method set_SourceType addr 0x2d81b6c size 0x8 virtual false final false
  inline void set_SourceType(::Zenject::InjectSources value);

  /// @brief Method get_ConcreteIdentifier addr 0x2d81b74 size 0x8 virtual false final false
  inline ::System::Object* get_ConcreteIdentifier();

  /// @brief Method set_ConcreteIdentifier addr 0x2d81b7c size 0x8 virtual false final false
  inline void set_ConcreteIdentifier(::System::Object* value);

  /// @brief Method get_FallBackValue addr 0x2d81b84 size 0x8 virtual false final false
  inline ::System::Object* get_FallBackValue();

  /// @brief Method set_FallBackValue addr 0x2d81b8c size 0x8 virtual false final false
  inline void set_FallBackValue(::System::Object* value);

  /// @brief Method get_Container addr 0x2d81b94 size 0x8 virtual false final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method set_Container addr 0x2d81b9c size 0x8 virtual false final false
  inline void set_Container(::Zenject::DiContainer* value);

  /// @brief Method get_ParentContexts addr 0x2d81ba4 size 0x78 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>* get_ParentContexts();

  /// @brief Method get_ParentContextsAndSelf addr 0x2d81c50 size 0x78 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectContext*>* get_ParentContextsAndSelf();

  /// @brief Method get_AllObjectTypes addr 0x2d81cfc size 0x78 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_AllObjectTypes();

  /// @brief Method CreateSubContext addr 0x2d81da8 size 0x8 virtual false final false
  inline ::Zenject::InjectContext* CreateSubContext(::System::Type* memberType);

  /// @brief Method CreateSubContext addr 0x2d81db0 size 0xcc virtual false final false
  inline ::Zenject::InjectContext* CreateSubContext(::System::Type* memberType, ::System::Object* identifier);

  /// @brief Method Clone addr 0x2d81e7c size 0xac virtual false final false
  inline ::Zenject::InjectContext* Clone();

  /// @brief Method GetObjectGraphString addr 0x2d81f28 size 0x3d0 virtual false final false
  inline ::StringW GetObjectGraphString();

  // Ctor Parameters [CppParam { name: "", ty: "InjectContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectContext(InjectContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectContext(InjectContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectContext();

public:
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
static_assert(::cordl_internals::size_check_v<::Zenject::InjectContext, 0x60>, "Size mismatch!");

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

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectContext*, "Zenject", "InjectContext");
NEED_NO_BOX(::Zenject::__InjectContext___get_AllObjectTypes_d__56);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InjectContext___get_AllObjectTypes_d__56*, "Zenject", "InjectContext/<get_AllObjectTypes>d__56");
NEED_NO_BOX(::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InjectContext___get_ParentContextsAndSelf_d__54*, "Zenject", "InjectContext/<get_ParentContextsAndSelf>d__54");
NEED_NO_BOX(::Zenject::__InjectContext___get_ParentContexts_d__52);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InjectContext___get_ParentContexts_d__52*, "Zenject", "InjectContext/<get_ParentContexts>d__52");
