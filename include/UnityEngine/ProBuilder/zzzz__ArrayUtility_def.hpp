#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayUtility)
namespace UnityEngine::ProBuilder {
template <typename T> class __ArrayUtility____c__23_1;
}
namespace UnityEngine::ProBuilder {
template <typename TSource, typename TKey> class __ArrayUtility____c__DisplayClass21_0_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder {
struct __ArrayUtility__SearchRange;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ArrayUtility;
}
namespace UnityEngine::ProBuilder {
template <typename T> class __ArrayUtility____c__23_1;
}
namespace UnityEngine::ProBuilder {
template <typename TSource, typename TKey> class __ArrayUtility____c__DisplayClass21_0_2;
}
namespace UnityEngine::ProBuilder {
struct __ArrayUtility__SearchRange;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ArrayUtility);
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::__ArrayUtility____c__23_1);
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::__ArrayUtility____c__DisplayClass21_0_2);
MARK_VAL_T(::UnityEngine::ProBuilder::__ArrayUtility__SearchRange);
// Type: ::SearchRange
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12094))
// CS Name: ::ArrayUtility::SearchRange
struct CORDL_TYPE __ArrayUtility__SearchRange {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2b3698c size 0x8 virtual false final false
  inline void _ctor(int32_t begin, int32_t end);

  /// @brief Method Valid addr 0x2b36994 size 0x14 virtual false final false
  inline bool Valid();

  /// @brief Method Center addr 0x2b369a8 size 0x18 virtual false final false
  inline int32_t Center();

  /// @brief Method ToString addr 0x2b369c0 size 0x1fc virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "begin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ArrayUtility__SearchRange(int32_t begin, int32_t end) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayUtility__SearchRange();

  /// @brief Field begin, offset: 0x0, size: 0x4, def value: None
  int32_t begin;

  /// @brief Field end, offset: 0x4, size: 0x4, def value: None
  int32_t end;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__ArrayUtility__SearchRange, 0x8>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass21_0`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// cpp template
template <typename TSource, typename TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12095))
// CS Name: ::ArrayUtility::<>c__DisplayClass21_0`2<TSource,TKey>*
class CORDL_TYPE __ArrayUtility____c__DisplayClass21_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field knownKeys, offset 0x10, size 0x8
  __declspec(property(get = __get_knownKeys, put = __set_knownKeys))::System::Collections::Generic::HashSet_1<TKey>* knownKeys;

  /// @brief Field keySelector, offset 0x18, size 0x8
  __declspec(property(get = __get_keySelector, put = __set_keySelector))::System::Func_2<TSource, TKey>* keySelector;

  constexpr ::System::Collections::Generic::HashSet_1<TKey>*& __get_knownKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<TKey>*> const& __get_knownKeys() const;

  constexpr void __set_knownKeys(::System::Collections::Generic::HashSet_1<TKey>* value);

  constexpr ::System::Func_2<TSource, TKey>*& __get_keySelector();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TKey>*> const& __get_keySelector() const;

  constexpr void __set_keySelector(::System::Func_2<TSource, TKey>* value);

  static inline ::UnityEngine::ProBuilder::__ArrayUtility____c__DisplayClass21_0_2<TSource, TKey>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <DistinctBy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool _DistinctBy_b__0(TSource x);

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__DisplayClass21_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayUtility____c__DisplayClass21_0_2(__ArrayUtility____c__DisplayClass21_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__DisplayClass21_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayUtility____c__DisplayClass21_0_2(__ArrayUtility____c__DisplayClass21_0_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayUtility____c__DisplayClass21_0_2();

public:
  /// @brief Field knownKeys, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<TKey>* ___knownKeys;

  /// @brief Field keySelector, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TSource, TKey>* ___keySelector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder
// Type: ::<>c__23`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12096))
// CS Name: ::ArrayUtility::<>c__23`1<T>*
class CORDL_TYPE __ArrayUtility____c__23_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<T>* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0))::System::Func_2<T, ::StringW>* __9__23_0;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<T>* value);

  static inline ::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<T>* getStaticF___9();

  static inline void setStaticF___9__23_0(::System::Func_2<T, ::StringW>* value);

  static inline ::System::Func_2<T, ::StringW>* getStaticF___9__23_0();

  static inline ::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <ToString>b__23_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::StringW _ToString_b__23_0(T x);

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__23_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayUtility____c__23_1(__ArrayUtility____c__23_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayUtility____c__23_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayUtility____c__23_1(__ArrayUtility____c__23_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayUtility____c__23_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::ArrayUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12097))
// CS Name: ::UnityEngine.ProBuilder::ArrayUtility*
class CORDL_TYPE ArrayUtility : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__23_1 = ::UnityEngine::ProBuilder::__ArrayUtility____c__23_1<T>;

  template <typename TSource, typename TKey> using __c__DisplayClass21_0_2 = ::UnityEngine::ProBuilder::__ArrayUtility____c__DisplayClass21_0_2<TSource, TKey>;

  using SearchRange = ::UnityEngine::ProBuilder::__ArrayUtility__SearchRange;

  /// @brief Method ValuesWithIndexes addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ValuesWithIndexes(::ArrayW<T, ::Array<T>*> arr, ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method ValuesWithIndexes addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  static inline ::System::Collections::Generic::List_1<T>* ValuesWithIndexes(::System::Collections::Generic::List_1<T>* arr, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method AllIndexesOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<int32_t>* AllIndexesOf(::System::Collections::Generic::IList_1<T>* list, ::System::Func_2<T, bool>* lambda);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Add(::ArrayW<T, ::Array<T>*> arr, T val);

  /// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> AddRange(::ArrayW<T, ::Array<T>*> arr, ::ArrayW<T, ::Array<T>*> val);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Remove(::ArrayW<T, ::Array<T>*> arr, T val);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Remove(::ArrayW<T, ::Array<T>*> arr, ::System::Collections::Generic::IEnumerable_1<T>* val);

  /// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> RemoveAt(::ArrayW<T, ::Array<T>*> arr, int32_t index);

  /// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> RemoveAt(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method SortedRemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> SortedRemoveAt(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IList_1<int32_t>* sorted);

  /// @brief Method NearestIndexPriorToValue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t NearestIndexPriorToValue(::System::Collections::Generic::IList_1<T>* sorted_list, T value);

  /// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* Fill(::System::Func_2<int32_t, T>* ctor, int32_t length);

  /// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Fill(T val, int32_t length);

  /// @brief Method ContainsMatch addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool ContainsMatch(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b);

  /// @brief Method ContainsMatch addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool ContainsMatch(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b, ByRef<int32_t> index_a, ByRef<int32_t> index_b);

  /// @brief Method Concat addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Concat(::ArrayW<T, ::Array<T>*> x, ::ArrayW<T, ::Array<T>*> y);

  /// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t IndexOf(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>* InList, T InValue);

  /// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Fill(int32_t count, ::System::Func_2<int32_t, T>* ctor);

  /// @brief Method AddOrAppend addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T, typename K> static inline void AddOrAppend(::System::Collections::Generic::Dictionary_2<T, ::System::Collections::Generic::List_1<K>*>* dictionary, T key, K value);

  /// @brief Method AddOrAppendRange addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T, typename K>
  static inline void AddOrAppendRange(::System::Collections::Generic::Dictionary_2<T, ::System::Collections::Generic::List_1<K>*>* dictionary, T key, ::System::Collections::Generic::List_1<K>* value);

  /// @brief Method DistinctBy addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TSource, typename TKey>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* DistinctBy(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector);

  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TKey, typename TValue> static inline ::StringW ToString(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dict);

  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::StringW ToString(::System::Collections::Generic::IEnumerable_1<T>* arr, ::StringW separator);

  // Ctor Parameters [CppParam { name: "", ty: "ArrayUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayUtility(ArrayUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayUtility(ArrayUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ArrayUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ArrayUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ArrayUtility*, "UnityEngine.ProBuilder", "ArrayUtility");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::__ArrayUtility____c__23_1, "UnityEngine.ProBuilder", "ArrayUtility/<>c__23`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::__ArrayUtility____c__DisplayClass21_0_2, "UnityEngine.ProBuilder", "ArrayUtility/<>c__DisplayClass21_0`2");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__ArrayUtility__SearchRange, "UnityEngine.ProBuilder", "ArrayUtility/SearchRange");
