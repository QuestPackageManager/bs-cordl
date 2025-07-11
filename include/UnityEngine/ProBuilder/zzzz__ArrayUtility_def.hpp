#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ArrayUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder {
struct ArrayUtility_SearchRange;
}
namespace UnityEngine::ProBuilder {
template <typename T> class ArrayUtility___c__23_1;
}
namespace UnityEngine::ProBuilder {
template <typename TSource, typename TKey> class ArrayUtility___c__DisplayClass21_0_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ArrayUtility;
}
namespace UnityEngine::ProBuilder {
template <typename T> class ArrayUtility___c__23_1;
}
namespace UnityEngine::ProBuilder {
template <typename TSource, typename TKey> class ArrayUtility___c__DisplayClass21_0_2;
}
namespace UnityEngine::ProBuilder {
struct ArrayUtility_SearchRange;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ArrayUtility);
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::ArrayUtility___c__23_1);
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2);
MARK_VAL_T(::UnityEngine::ProBuilder::ArrayUtility_SearchRange);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ArrayUtility/SearchRange
struct CORDL_TYPE ArrayUtility_SearchRange {
public:
  // Declarations
  /// @brief Method Center, addr 0x46ff698, size 0x18, virtual false, abstract: false, final false
  inline int32_t Center();

  /// @brief Method ToString, addr 0x46ff6b0, size 0x148, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Valid, addr 0x46ff684, size 0x14, virtual false, abstract: false, final false
  inline bool Valid();

  /// @brief Method .ctor, addr 0x46ff67c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t begin, int32_t end);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayUtility_SearchRange();

  // Ctor Parameters [CppParam { name: "begin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ArrayUtility_SearchRange(int32_t begin, int32_t end) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14212 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field begin, offset: 0x0, size: 0x4, def value: None
  int32_t begin;

  /// @brief Field end, offset: 0x4, size: 0x4, def value: None
  int32_t end;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ArrayUtility_SearchRange, begin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ArrayUtility_SearchRange, end) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ArrayUtility_SearchRange, 0x8>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ArrayUtility/<>c__23`1<T>
class CORDL_TYPE ArrayUtility___c__23_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0)) ::System::Func_2<T, ::StringW>* __9__23_0;

  static inline ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>* New_ctor();

  /// @brief Method <ToString>b__23_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__23_0(T x);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>* getStaticF___9();

  static inline ::System::Func_2<T, ::StringW>* getStaticF___9__23_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>* value);

  static inline void setStaticF___9__23_0(::System::Func_2<T, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayUtility___c__23_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayUtility___c__23_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayUtility___c__23_1(ArrayUtility___c__23_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayUtility___c__23_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayUtility___c__23_1(ArrayUtility___c__23_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14213 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// cpp template
template <typename TSource, typename TKey>
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ArrayUtility/<>c__DisplayClass21_0`2<TSource,TKey>
class CORDL_TYPE ArrayUtility___c__DisplayClass21_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field keySelector, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keySelector, put = __cordl_internal_set_keySelector)) ::System::Func_2<TSource, TKey>* keySelector;

  /// @brief Field knownKeys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_knownKeys, put = __cordl_internal_set_knownKeys)) ::System::Collections::Generic::HashSet_1<TKey>* knownKeys;

  static inline ::UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>* New_ctor();

  /// @brief Method <DistinctBy>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _DistinctBy_b__0(TSource x);

  constexpr ::System::Func_2<TSource, TKey>* const& __cordl_internal_get_keySelector() const;

  constexpr ::System::Func_2<TSource, TKey>*& __cordl_internal_get_keySelector();

  constexpr ::System::Collections::Generic::HashSet_1<TKey>* const& __cordl_internal_get_knownKeys() const;

  constexpr ::System::Collections::Generic::HashSet_1<TKey>*& __cordl_internal_get_knownKeys();

  constexpr void __cordl_internal_set_keySelector(::System::Func_2<TSource, TKey>* value);

  constexpr void __cordl_internal_set_knownKeys(::System::Collections::Generic::HashSet_1<TKey>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayUtility___c__DisplayClass21_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayUtility___c__DisplayClass21_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayUtility___c__DisplayClass21_0_2(ArrayUtility___c__DisplayClass21_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayUtility___c__DisplayClass21_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayUtility___c__DisplayClass21_0_2(ArrayUtility___c__DisplayClass21_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14214 };

  /// @brief Field knownKeys, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<TKey>* ___knownKeys;

  /// @brief Field keySelector, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TSource, TKey>* ___keySelector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ArrayUtility
class CORDL_TYPE ArrayUtility : public ::System::Object {
public:
  // Declarations
  using SearchRange = ::UnityEngine::ProBuilder::ArrayUtility_SearchRange;

  template <typename T> using __c__23_1 = ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>;

  template <typename TSource, typename TKey> using __c__DisplayClass21_0_2 = ::UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Add(::ArrayW<T, ::Array<T>*> arr, T val);

  /// @brief Method AddOrAppend, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename K> static inline void AddOrAppend(::System::Collections::Generic::Dictionary_2<T, ::System::Collections::Generic::List_1<K>*>* dictionary, T key, K value);

  /// @brief Method AddOrAppendRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename K>
  static inline void AddOrAppendRange(::System::Collections::Generic::Dictionary_2<T, ::System::Collections::Generic::List_1<K>*>* dictionary, T key, ::System::Collections::Generic::List_1<K>* value);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> AddRange(::ArrayW<T, ::Array<T>*> arr, ::ArrayW<T, ::Array<T>*> val);

  /// @brief Method AllIndexesOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<int32_t>* AllIndexesOf(::System::Collections::Generic::IList_1<T>* list, ::System::Func_2<T, bool>* lambda);

  /// @brief Method Concat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Concat(::ArrayW<T, ::Array<T>*> x, ::ArrayW<T, ::Array<T>*> y);

  /// @brief Method ContainsMatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ContainsMatch(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b);

  /// @brief Method ContainsMatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ContainsMatch(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b, ::ByRef<int32_t> index_a, ::ByRef<int32_t> index_b);

  /// @brief Method DistinctBy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TKey>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* DistinctBy(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector);

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Fill(int32_t count, ::System::Func_2<int32_t, T>* ctor);

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Fill(T val, int32_t length);

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* Fill(::System::Func_2<int32_t, T>* ctor, int32_t length);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>* InList, T InValue);

  /// @brief Method NearestIndexPriorToValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t NearestIndexPriorToValue(::System::Collections::Generic::IList_1<T>* sorted_list, T value);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Remove(::ArrayW<T, ::Array<T>*> arr, ::System::Collections::Generic::IEnumerable_1<T>* val);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Remove(::ArrayW<T, ::Array<T>*> arr, T val);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> RemoveAt(::ArrayW<T, ::Array<T>*> arr, int32_t index);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> RemoveAt(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method SortedRemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> SortedRemoveAt(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IList_1<int32_t>* sorted);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW ToString(::System::Collections::Generic::IEnumerable_1<T>* arr, ::StringW separator);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline ::StringW ToString(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dict);

  /// @brief Method ValuesWithIndexes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ValuesWithIndexes(::ArrayW<T, ::Array<T>*> arr, ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method ValuesWithIndexes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Collections::Generic::List_1<T>* ValuesWithIndexes(::System::Collections::Generic::List_1<T>* arr, ::System::Collections::Generic::IList_1<int32_t>* indexes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayUtility(ArrayUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayUtility(ArrayUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14215 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ArrayUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ArrayUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ArrayUtility*, "UnityEngine.ProBuilder", "ArrayUtility");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::ArrayUtility___c__23_1, "UnityEngine.ProBuilder", "ArrayUtility/<>c__23`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2, "UnityEngine.ProBuilder", "ArrayUtility/<>c__DisplayClass21_0`2");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ArrayUtility_SearchRange, "UnityEngine.ProBuilder", "ArrayUtility/SearchRange");
