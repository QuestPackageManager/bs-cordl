#pragma once
// IWYU pragma private; include "System/Linq/Expressions/BlockExpressionList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlockExpressionList)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq::Expressions {
class BlockExpression;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class __BlockExpressionList___GetEnumerator_d__18;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class BlockExpressionList;
}
namespace System::Linq::Expressions {
class __BlockExpressionList___GetEnumerator_d__18;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::BlockExpressionList);
MARK_REF_PTR_T(::System::Linq::Expressions::__BlockExpressionList___GetEnumerator_d__18);
// Type: ::<GetEnumerator>d__18
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::BlockExpressionList::<GetEnumerator>d__18*
class CORDL_TYPE __BlockExpressionList___GetEnumerator_d__18 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Linq_Expressions_Expression__get_Current))::System::Linq::Expressions::
      Expression* System_Collections_Generic_IEnumerator_System_Linq_Expressions_Expression__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Linq::Expressions::Expression* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Linq::Expressions::BlockExpressionList* __4__this;

  /// @brief Field <i>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Expression*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Expression*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2bfdccc, size 0xcc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Expressions::__BlockExpressionList___GetEnumerator_d__18* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Linq.Expressions.Expression>.get_Current, addr 0x2bfdd98, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Expression* System_Collections_Generic_IEnumerator_System_Linq_Expressions_Expression__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2bfdda0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2bfdde0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2bfdcc8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Linq::Expressions::BlockExpressionList*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::BlockExpressionList*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set___4__this(::System::Linq::Expressions::BlockExpressionList* value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x2bfdc9c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Expression*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Expression*>*
  i___System__Collections__Generic__IEnumerator_1___System__Linq__Expressions__Expression__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BlockExpressionList___GetEnumerator_d__18();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BlockExpressionList___GetEnumerator_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BlockExpressionList___GetEnumerator_d__18(__BlockExpressionList___GetEnumerator_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BlockExpressionList___GetEnumerator_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BlockExpressionList___GetEnumerator_d__18(__BlockExpressionList___GetEnumerator_d__18 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::BlockExpressionList* _____4__this;

  /// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__BlockExpressionList___GetEnumerator_d__18, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::__BlockExpressionList___GetEnumerator_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::__BlockExpressionList___GetEnumerator_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::__BlockExpressionList___GetEnumerator_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::__BlockExpressionList___GetEnumerator_d__18, ____i_5__2) == 0x28, "Offset mismatch!");

} // namespace System::Linq::Expressions
// Type: System.Linq.Expressions::BlockExpressionList
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::BlockExpressionList*
class CORDL_TYPE BlockExpressionList : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__18 = ::System::Linq::Expressions::__BlockExpressionList___GetEnumerator_d__18;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item))::System::Linq::Expressions::Expression* Item[];

  /// @brief Field _arg0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arg0, put = __cordl_internal_set__arg0))::System::Linq::Expressions::Expression* _arg0;

  /// @brief Field _block, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__block, put = __cordl_internal_set__block))::System::Linq::Expressions::BlockExpression* _block;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::System::Linq::Expressions::Expression*>"
  constexpr operator ::System::Collections::Generic::IList_1<::System::Linq::Expressions::Expression*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x2bfd9c8, size 0x28, virtual true, abstract: false, final true
  inline void Add(::System::Linq::Expressions::Expression* item);

  /// @brief Method Clear, addr 0x2bfd9f0, size 0x28, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x2bfda18, size 0x18, virtual true, abstract: false, final true
  inline bool Contains(::System::Linq::Expressions::Expression* item);

  /// @brief Method CopyTo, addr 0x2bfda30, size 0x194, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x2bfdc34, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Expression*>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x2bfd898, size 0x88, virtual true, abstract: false, final true
  inline int32_t IndexOf(::System::Linq::Expressions::Expression* item);

  /// @brief Method Insert, addr 0x2bfd920, size 0x28, virtual true, abstract: false, final true
  inline void Insert(int32_t index, ::System::Linq::Expressions::Expression* item);

  static inline ::System::Linq::Expressions::BlockExpressionList* New_ctor(::System::Linq::Expressions::BlockExpression* provider, ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method Remove, addr 0x2bfdc0c, size 0x28, virtual true, abstract: false, final true
  inline bool Remove(::System::Linq::Expressions::Expression* item);

  /// @brief Method RemoveAt, addr 0x2bfd948, size 0x28, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2bfdcc4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__arg0();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__arg0() const;

  constexpr ::System::Linq::Expressions::BlockExpression*& __cordl_internal_get__block();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::BlockExpression*> const& __cordl_internal_get__block() const;

  constexpr void __cordl_internal_set__arg0(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__block(::System::Linq::Expressions::BlockExpression* value);

  /// @brief Method .ctor, addr 0x2bfc924, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::BlockExpression* provider, ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method get_Count, addr 0x2bfdbc4, size 0x20, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x2bfdbe4, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x2bfd970, size 0x30, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Expression* get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Linq::Expressions::Expression*>*
  i___System__Collections__Generic__ICollection_1___System__Linq__Expressions__Expression__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*
  i___System__Collections__Generic__IEnumerable_1___System__Linq__Expressions__Expression__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<::System::Linq::Expressions::Expression*>"
  constexpr ::System::Collections::Generic::IList_1<::System::Linq::Expressions::Expression*>* i___System__Collections__Generic__IList_1___System__Linq__Expressions__Expression__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x2bfd9a0, size 0x28, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, ::System::Linq::Expressions::Expression* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockExpressionList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlockExpressionList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlockExpressionList(BlockExpressionList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlockExpressionList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlockExpressionList(BlockExpressionList const&) = delete;

  /// @brief Field _block, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::BlockExpression* ____block;

  /// @brief Field _arg0, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::BlockExpressionList, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::BlockExpressionList, ____block) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::BlockExpressionList, ____arg0) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::BlockExpressionList);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::BlockExpressionList*, "System.Linq.Expressions", "BlockExpressionList");
NEED_NO_BOX(::System::Linq::Expressions::__BlockExpressionList___GetEnumerator_d__18);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__BlockExpressionList___GetEnumerator_d__18*, "System.Linq.Expressions", "BlockExpressionList/<GetEnumerator>d__18");
