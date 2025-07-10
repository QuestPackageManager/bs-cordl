#pragma once
// IWYU pragma private; include "ModestTree/TypeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeExtensions)
namespace ModestTree {
class TypeExtensions__GetParentTypes_d__28;
}
namespace ModestTree {
class TypeExtensions___c__DisplayClass35_0;
}
namespace ModestTree {
class TypeExtensions___c__DisplayClass35_1;
}
namespace ModestTree {
class TypeExtensions___c__DisplayClass39_0;
}
namespace ModestTree {
class TypeExtensions___c__DisplayClass39_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Attribute;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ModestTree {
class TypeExtensions;
}
namespace ModestTree {
class TypeExtensions__GetParentTypes_d__28;
}
namespace ModestTree {
class TypeExtensions___c__DisplayClass35_0;
}
namespace ModestTree {
class TypeExtensions___c__DisplayClass35_1;
}
namespace ModestTree {
class TypeExtensions___c__DisplayClass39_0;
}
namespace ModestTree {
class TypeExtensions___c__DisplayClass39_1;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::TypeExtensions);
MARK_REF_PTR_T(::ModestTree::TypeExtensions__GetParentTypes_d__28);
MARK_REF_PTR_T(::ModestTree::TypeExtensions___c__DisplayClass35_0);
MARK_REF_PTR_T(::ModestTree::TypeExtensions___c__DisplayClass35_1);
MARK_REF_PTR_T(::ModestTree::TypeExtensions___c__DisplayClass39_0);
MARK_REF_PTR_T(::ModestTree::TypeExtensions___c__DisplayClass39_1);
// Dependencies System.Object
namespace ModestTree {
// Is value type: false
// CS Name: ModestTree.TypeExtensions/<>c__DisplayClass35_0
class CORDL_TYPE TypeExtensions___c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributeTypes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeTypes, put = __cordl_internal_set_attributeTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes;

  static inline ::ModestTree::TypeExtensions___c__DisplayClass35_0* New_ctor();

  /// @brief Method <AllAttributes>b__0, addr 0x4af645c, size 0xd4, virtual false, abstract: false, final false
  inline bool _AllAttributes_b__0(::System::Attribute* a);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_attributeTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_attributeTypes();

  constexpr void __cordl_internal_set_attributeTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x4af615c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeExtensions___c__DisplayClass35_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions___c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeExtensions___c__DisplayClass35_0(TypeExtensions___c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions___c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeExtensions___c__DisplayClass35_0(TypeExtensions___c__DisplayClass35_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11958 };

  /// @brief Field attributeTypes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___attributeTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ModestTree::TypeExtensions___c__DisplayClass35_0, ___attributeTypes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ModestTree::TypeExtensions___c__DisplayClass35_0, 0x18>, "Size mismatch!");

} // namespace ModestTree
// Dependencies System.Object
namespace ModestTree {
// Is value type: false
// CS Name: ModestTree.TypeExtensions/<>c__DisplayClass35_1
class CORDL_TYPE TypeExtensions___c__DisplayClass35_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field a, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) ::System::Attribute* a;

  static inline ::ModestTree::TypeExtensions___c__DisplayClass35_1* New_ctor();

  /// @brief Method <AllAttributes>b__1, addr 0x4af6538, size 0x78, virtual false, abstract: false, final false
  inline bool _AllAttributes_b__1(::System::Type* x);

  constexpr ::System::Attribute* const& __cordl_internal_get_a() const;

  constexpr ::System::Attribute*& __cordl_internal_get_a();

  constexpr void __cordl_internal_set_a(::System::Attribute* value);

  /// @brief Method .ctor, addr 0x4af6530, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeExtensions___c__DisplayClass35_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions___c__DisplayClass35_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeExtensions___c__DisplayClass35_1(TypeExtensions___c__DisplayClass35_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions___c__DisplayClass35_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeExtensions___c__DisplayClass35_1(TypeExtensions___c__DisplayClass35_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11959 };

  /// @brief Field a, offset: 0x10, size: 0x8, def value: None
  ::System::Attribute* ___a;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ModestTree::TypeExtensions___c__DisplayClass35_1, ___a) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ModestTree::TypeExtensions___c__DisplayClass35_1, 0x18>, "Size mismatch!");

} // namespace ModestTree
// Dependencies System.Object
namespace ModestTree {
// Is value type: false
// CS Name: ModestTree.TypeExtensions/<>c__DisplayClass39_0
class CORDL_TYPE TypeExtensions___c__DisplayClass39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributeTypes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeTypes, put = __cordl_internal_set_attributeTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes;

  static inline ::ModestTree::TypeExtensions___c__DisplayClass39_0* New_ctor();

  /// @brief Method <AllAttributes>b__0, addr 0x4af65b0, size 0xd4, virtual false, abstract: false, final false
  inline bool _AllAttributes_b__0(::System::Attribute* a);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_attributeTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_attributeTypes();

  constexpr void __cordl_internal_set_attributeTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x4af6338, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeExtensions___c__DisplayClass39_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions___c__DisplayClass39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeExtensions___c__DisplayClass39_0(TypeExtensions___c__DisplayClass39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions___c__DisplayClass39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeExtensions___c__DisplayClass39_0(TypeExtensions___c__DisplayClass39_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11960 };

  /// @brief Field attributeTypes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___attributeTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ModestTree::TypeExtensions___c__DisplayClass39_0, ___attributeTypes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ModestTree::TypeExtensions___c__DisplayClass39_0, 0x18>, "Size mismatch!");

} // namespace ModestTree
// Dependencies System.Object
namespace ModestTree {
// Is value type: false
// CS Name: ModestTree.TypeExtensions/<>c__DisplayClass39_1
class CORDL_TYPE TypeExtensions___c__DisplayClass39_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field a, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) ::System::Attribute* a;

  static inline ::ModestTree::TypeExtensions___c__DisplayClass39_1* New_ctor();

  /// @brief Method <AllAttributes>b__1, addr 0x4af668c, size 0x78, virtual false, abstract: false, final false
  inline bool _AllAttributes_b__1(::System::Type* x);

  constexpr ::System::Attribute* const& __cordl_internal_get_a() const;

  constexpr ::System::Attribute*& __cordl_internal_get_a();

  constexpr void __cordl_internal_set_a(::System::Attribute* value);

  /// @brief Method .ctor, addr 0x4af6684, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeExtensions___c__DisplayClass39_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions___c__DisplayClass39_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeExtensions___c__DisplayClass39_1(TypeExtensions___c__DisplayClass39_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions___c__DisplayClass39_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeExtensions___c__DisplayClass39_1(TypeExtensions___c__DisplayClass39_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11961 };

  /// @brief Field a, offset: 0x10, size: 0x8, def value: None
  ::System::Attribute* ___a;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ModestTree::TypeExtensions___c__DisplayClass39_1, ___a) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ModestTree::TypeExtensions___c__DisplayClass39_1, 0x18>, "Size mismatch!");

} // namespace ModestTree
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace ModestTree {
// Is value type: false
// CS Name: ModestTree.TypeExtensions/<GetParentTypes>d__28
class CORDL_TYPE TypeExtensions__GetParentTypes_d__28 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current)) ::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Type* __2__current;

  /// @brief Field <>3__type, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__type, put = __cordl_internal_set___3__type)) ::System::Type* __3__type;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::System::Type*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field type, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

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

  /// @brief Method MoveNext, addr 0x4af6720, size 0x4e0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::ModestTree::TypeExtensions__GetParentTypes_d__28* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x4af6cf8, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x4af6cb0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4af6d94, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4af6cb8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4af6cf0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4af6704, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Type* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Type*& __cordl_internal_get___2__current();

  constexpr ::System::Type* const& __cordl_internal_get___3__type() const;

  constexpr ::System::Type*& __cordl_internal_get___3__type();

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Type* value);

  constexpr void __cordl_internal_set___3__type(::System::Type* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::System::Type*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method <>m__Finally1, addr 0x4af6c00, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x4af5de4, size 0x34, virtual false, abstract: false, final false
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
  constexpr TypeExtensions__GetParentTypes_d__28();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions__GetParentTypes_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeExtensions__GetParentTypes_d__28(TypeExtensions__GetParentTypes_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions__GetParentTypes_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeExtensions__GetParentTypes_d__28(TypeExtensions__GetParentTypes_d__28 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11962 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field type, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field <>3__type, offset: 0x30, size: 0x8, def value: None
  ::System::Type* _____3__type;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Type*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ModestTree::TypeExtensions__GetParentTypes_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ModestTree::TypeExtensions__GetParentTypes_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ModestTree::TypeExtensions__GetParentTypes_d__28, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ModestTree::TypeExtensions__GetParentTypes_d__28, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ModestTree::TypeExtensions__GetParentTypes_d__28, _____3__type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ModestTree::TypeExtensions__GetParentTypes_d__28, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ModestTree::TypeExtensions__GetParentTypes_d__28, 0x40>, "Size mismatch!");

} // namespace ModestTree
// Dependencies System.Object
namespace ModestTree {
// Is value type: false
// CS Name: ModestTree.TypeExtensions
class CORDL_TYPE TypeExtensions : public ::System::Object {
public:
  // Declarations
  using _GetParentTypes_d__28 = ::ModestTree::TypeExtensions__GetParentTypes_d__28;

  using __c__DisplayClass35_0 = ::ModestTree::TypeExtensions___c__DisplayClass35_0;

  using __c__DisplayClass35_1 = ::ModestTree::TypeExtensions___c__DisplayClass35_1;

  using __c__DisplayClass39_0 = ::ModestTree::TypeExtensions___c__DisplayClass39_0;

  using __c__DisplayClass39_1 = ::ModestTree::TypeExtensions___c__DisplayClass39_1;

  /// @brief Field _interfaces, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__interfaces,
                      put = setStaticF__interfaces)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* _interfaces;

  /// @brief Field _isClosedGenericType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__isClosedGenericType, put = setStaticF__isClosedGenericType)) ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _isClosedGenericType;

  /// @brief Field _isOpenGenericType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__isOpenGenericType, put = setStaticF__isOpenGenericType)) ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _isOpenGenericType;

  /// @brief Field _isValueType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__isValueType, put = setStaticF__isValueType)) ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _isValueType;

  /// @brief Method AllAttributes, addr 0x4af6008, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* AllAttributes(::System::Reflection::MemberInfo* provider,
                                                                                                   ::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes);

  /// @brief Method AllAttributes, addr 0x4af61e4, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* AllAttributes(::System::Reflection::ParameterInfo* provider,
                                                                                                   ::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes);

  /// @brief Method AllAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* AllAttributes(::System::Reflection::MemberInfo* provider);

  /// @brief Method AllAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* AllAttributes(::System::Reflection::ParameterInfo* provider);

  /// @brief Method BaseType, addr 0x4af5a68, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Type* BaseType(::System::Type* type);

  /// @brief Method Constructors, addr 0x4af5b6c, size 0x24, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> Constructors(::System::Type* type);

  /// @brief Method ContainsGenericParameters, addr 0x4af5af0, size 0x20, virtual false, abstract: false, final false
  static inline bool ContainsGenericParameters(::System::Type* type);

  /// @brief Method DeclaredInstanceFields, addr 0x4af5a44, size 0x24, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> DeclaredInstanceFields(::System::Type* type);

  /// @brief Method DeclaredInstanceMethods, addr 0x4af59fc, size 0x24, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> DeclaredInstanceMethods(::System::Type* type);

  /// @brief Method DeclaredInstanceProperties, addr 0x4af5a20, size 0x24, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> DeclaredInstanceProperties(::System::Type* type);

  /// @brief Method DerivesFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool DerivesFrom(::System::Type* a);

  /// @brief Method DerivesFrom, addr 0x4af3ca0, size 0xb0, virtual false, abstract: false, final false
  static inline bool DerivesFrom(::System::Type* a, ::System::Type* b);

  /// @brief Method DerivesFromOrEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool DerivesFromOrEqual(::System::Type* a);

  /// @brief Method DerivesFromOrEqual, addr 0x4af3f04, size 0xa0, virtual false, abstract: false, final false
  static inline bool DerivesFromOrEqual(::System::Type* a, ::System::Type* b);

  /// @brief Method GenericArguments, addr 0x4af5b4c, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GenericArguments(::System::Type* type);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetAttribute(::System::Reflection::MemberInfo* provider);

  /// @brief Method GetDefaultValue, addr 0x4af5b90, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Object* GetDefaultValue(::System::Type* type);

  /// @brief Method GetParentTypes, addr 0x4af5d74, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetParentTypes(::System::Type* type);

  /// @brief Method HasAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool HasAttribute(::System::Reflection::MemberInfo* provider);

  /// @brief Method HasAttribute, addr 0x4af5f88, size 0x80, virtual false, abstract: false, final false
  static inline bool HasAttribute(::System::Reflection::MemberInfo* provider, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes);

  /// @brief Method HasAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool HasAttribute(::System::Reflection::ParameterInfo* provider);

  /// @brief Method HasAttribute, addr 0x4af6164, size 0x80, virtual false, abstract: false, final false
  static inline bool HasAttribute(::System::Reflection::ParameterInfo* provider, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes);

  /// @brief Method Interfaces, addr 0x4af57e0, size 0x100, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> Interfaces(::System::Type* type);

  /// @brief Method IsAbstract, addr 0x4af5b10, size 0x14, virtual false, abstract: false, final false
  static inline bool IsAbstract(::System::Type* type);

  /// @brief Method IsAssignableToGenericType, addr 0x4af5608, size 0x1d8, virtual false, abstract: false, final false
  static inline bool IsAssignableToGenericType(::System::Type* givenType, ::System::Type* genericType);

  /// @brief Method IsClosedGenericType, addr 0x4af5c04, size 0x170, virtual false, abstract: false, final false
  static inline bool IsClosedGenericType(::System::Type* type);

  /// @brief Method IsEnum, addr 0x4af58e0, size 0x20, virtual false, abstract: false, final false
  static inline bool IsEnum(::System::Type* type);

  /// @brief Method IsGenericType, addr 0x4af5a88, size 0x20, virtual false, abstract: false, final false
  static inline bool IsGenericType(::System::Type* type);

  /// @brief Method IsGenericTypeDefinition, addr 0x4af5aa8, size 0x20, virtual false, abstract: false, final false
  static inline bool IsGenericTypeDefinition(::System::Type* type);

  /// @brief Method IsInterface, addr 0x4af5adc, size 0x14, virtual false, abstract: false, final false
  static inline bool IsInterface(::System::Type* type);

  /// @brief Method IsOpenGenericType, addr 0x4af5e18, size 0x170, virtual false, abstract: false, final false
  static inline bool IsOpenGenericType(::System::Type* type);

  /// @brief Method IsPrimitive, addr 0x4af5ac8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsPrimitive(::System::Type* type);

  /// @brief Method IsSealed, addr 0x4af5b24, size 0x14, virtual false, abstract: false, final false
  static inline bool IsSealed(::System::Type* type);

  /// @brief Method IsValueType, addr 0x4af5900, size 0xfc, virtual false, abstract: false, final false
  static inline bool IsValueType(::System::Type* type);

  /// @brief Method Method, addr 0x4af5b38, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* Method(::System::Delegate* del);

  /// @brief Method TryGetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T TryGetAttribute(::System::Reflection::MemberInfo* provider);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* getStaticF__interfaces();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* getStaticF__isClosedGenericType();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* getStaticF__isOpenGenericType();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* getStaticF__isValueType();

  static inline void setStaticF__interfaces(::System::Collections::Generic::Dictionary_2<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* value);

  static inline void setStaticF__isClosedGenericType(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);

  static inline void setStaticF__isOpenGenericType(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);

  static inline void setStaticF__isValueType(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeExtensions(TypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeExtensions(TypeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11963 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::TypeExtensions, 0x10>, "Size mismatch!");

} // namespace ModestTree
NEED_NO_BOX(::ModestTree::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions*, "ModestTree", "TypeExtensions");
NEED_NO_BOX(::ModestTree::TypeExtensions__GetParentTypes_d__28);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions__GetParentTypes_d__28*, "ModestTree", "TypeExtensions/<GetParentTypes>d__28");
NEED_NO_BOX(::ModestTree::TypeExtensions___c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions___c__DisplayClass35_0*, "ModestTree", "TypeExtensions/<>c__DisplayClass35_0");
NEED_NO_BOX(::ModestTree::TypeExtensions___c__DisplayClass35_1);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions___c__DisplayClass35_1*, "ModestTree", "TypeExtensions/<>c__DisplayClass35_1");
NEED_NO_BOX(::ModestTree::TypeExtensions___c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions___c__DisplayClass39_0*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_0");
NEED_NO_BOX(::ModestTree::TypeExtensions___c__DisplayClass39_1);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions___c__DisplayClass39_1*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_1");
