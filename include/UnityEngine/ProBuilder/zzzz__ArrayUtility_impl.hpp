#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ArrayUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ArrayUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ArrayUtility_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ArrayUtility_SearchRange._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ArrayUtility_SearchRange::*)(int32_t, int32_t)>(&::UnityEngine::ProBuilder::ArrayUtility_SearchRange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66ada28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility_SearchRange>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ArrayUtility_SearchRange.Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::ArrayUtility_SearchRange::*)()>(&::UnityEngine::ProBuilder::ArrayUtility_SearchRange::Valid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66ada30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility_SearchRange>(), { "Valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ArrayUtility_SearchRange.Center
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ArrayUtility_SearchRange::*)()>(&::UnityEngine::ProBuilder::ArrayUtility_SearchRange::Center)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66ada44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility_SearchRange>(), { "Center", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ArrayUtility_SearchRange.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::ArrayUtility_SearchRange::*)()>(&::UnityEngine::ProBuilder::ArrayUtility_SearchRange::ToString)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x66ada5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility_SearchRange>(), { ::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility_SearchRange>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::ArrayUtility_SearchRange::_ctor(int32_t begin, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility_SearchRange>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, end);
}
inline bool UnityEngine::ProBuilder::ArrayUtility_SearchRange::Valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility_SearchRange>(), { "Valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ArrayUtility_SearchRange::Center() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility_SearchRange>(), { "Center", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::ProBuilder::ArrayUtility_SearchRange::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility_SearchRange>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "begin", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ArrayUtility_SearchRange::ArrayUtility_SearchRange(int32_t begin, int32_t end) noexcept {
  this->begin = begin;
  this->end = end;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ArrayUtility_SearchRange::ArrayUtility_SearchRange() {}
template <typename T> inline void UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>::setStaticF___9(::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>*, "<>9", ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>*>(
      std::forward<::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>* UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>*, "<>9", ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>*>();
}
template <typename T> inline void UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>::setStaticF___9__23_0(::System::Func_2<T, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<T, ::StringW>*, "<>9__23_0", ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>*>(std::forward<::System::Func_2<T, ::StringW>*>(value));
}
template <typename T> inline ::System::Func_2<T, ::StringW>* UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<T, ::StringW>*, "<>9__23_0", ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>*>();
}
template <typename T> inline void UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::StringW UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>::_ToString_b__23_0(T x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>*>(), { "<ToString>b__23_0", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
template <typename T> inline ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>* UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ProBuilder::ArrayUtility___c__23_1<T>::ArrayUtility___c__23_1() {}
template <typename TSource, typename TKey>
constexpr ::System::Collections::Generic::HashSet_1<TKey>*& UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>::__cordl_internal_get_knownKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownKeys;
}
template <typename TSource, typename TKey>
constexpr ::System::Collections::Generic::HashSet_1<TKey>* const& UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>::__cordl_internal_get_knownKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownKeys;
}
template <typename TSource, typename TKey>
constexpr void UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>::__cordl_internal_set_knownKeys(::System::Collections::Generic::HashSet_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___knownKeys = value;
}
template <typename TSource, typename TKey>
constexpr ::System::Func_2<TSource, TKey>*& UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>::__cordl_internal_get_keySelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TSource, typename TKey>
constexpr ::System::Func_2<TSource, TKey>* const& UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>::__cordl_internal_get_keySelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TSource, typename TKey>
constexpr void UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>::__cordl_internal_set_keySelector(::System::Func_2<TSource, TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keySelector = value;
}
template <typename TSource, typename TKey> inline void UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSource, typename TKey> inline bool UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>::_DistinctBy_b__0(TSource x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>*>(), { "<DistinctBy>b__0", {}, { ::i2c::type_of<TSource>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
template <typename TSource, typename TKey>
inline ::UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>* UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>*>());
}
// Ctor Parameters []
template <typename TSource, typename TKey> constexpr ::UnityEngine::ProBuilder::ArrayUtility___c__DisplayClass21_0_2<TSource, TKey>::ArrayUtility___c__DisplayClass21_0_2() {}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::ValuesWithIndexes(::ArrayW<T> arr, ::ArrayW<int32_t> indexes) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                                           { "ValuesWithIndexes", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, arr, indexes);
}
template <typename T>
inline ::System::Collections::Generic::List_1<T>* UnityEngine::ProBuilder::ArrayUtility::ValuesWithIndexes(::System::Collections::Generic::List_1<T>* arr,
                                                                                                           ::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
          { "ValuesWithIndexes", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, arr, indexes);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::ArrayUtility::AllIndexesOf(::System::Collections::Generic::IList_1<T>* list,
                                                                                                                   ::System::Func_2<T, bool>* lambda) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                       { "AllIndexesOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Func_2<T, bool>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(nullptr, ___internal_method, list, lambda);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Add(::ArrayW<T> arr, T val) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(), { "Add", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, arr, val);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::AddRange(::ArrayW<T> arr, ::ArrayW<T> val) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(), { "AddRange", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, arr, val);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Remove(::ArrayW<T> arr, T val) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(), { "Remove", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, arr, val);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Remove(::ArrayW<T> arr, ::System::Collections::Generic::IEnumerable_1<T>* val) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                              { "Remove", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, arr, val);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::RemoveAt(::ArrayW<T> arr, int32_t index) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                                                                              { "RemoveAt", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, arr, index);
}
template <typename T>
inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::RemoveAt(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
          { "RemoveAt", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, list, indexes);
}
template <typename T>
inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::SortedRemoveAt(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IList_1<int32_t>* sorted) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
          { "SortedRemoveAt", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, list, sorted);
}
template <typename T> inline int32_t UnityEngine::ProBuilder::ArrayUtility::NearestIndexPriorToValue(::System::Collections::Generic::IList_1<T>* sorted_list, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                              { "NearestIndexPriorToValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sorted_list, value);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* UnityEngine::ProBuilder::ArrayUtility::Fill(::System::Func_2<int32_t, T>* ctor, int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                                           { "Fill", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Func_2<int32_t, T>*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, ctor, length);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Fill(T val, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(), { "Fill", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, val, length);
}
template <typename T> inline bool UnityEngine::ProBuilder::ArrayUtility::ContainsMatch(::ArrayW<T> a, ::ArrayW<T> b) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                                           { "ContainsMatch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T> inline bool UnityEngine::ProBuilder::ArrayUtility::ContainsMatch(::ArrayW<T> a, ::ArrayW<T> b, ::by_ref<int32_t> index_a, ::by_ref<int32_t> index_b) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
          { "ContainsMatch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, index_a, index_b);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Concat(::ArrayW<T> x, ::ArrayW<T> y) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(), { "Concat", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, x, y);
}
template <typename T> inline int32_t UnityEngine::ProBuilder::ArrayUtility::IndexOf(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>* InList, T InValue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                          { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, InList, InValue);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Fill(int32_t count, ::System::Func_2<int32_t, T>* ctor) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                                           { "Fill", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<int32_t, T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, count, ctor);
}
template <typename T, typename K>
inline void UnityEngine::ProBuilder::ArrayUtility::AddOrAppend(::System::Collections::Generic::Dictionary_2<T, ::System::Collections::Generic::List_1<K>*>* dictionary, T key, K value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                          { "AddOrAppend",
                            { ::i2c::class_of<T>(), ::i2c::class_of<K>() },
                            { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<T, ::System::Collections::Generic::List_1<K>*>*>(), ::i2c::type_of<T>(), ::i2c::type_of<K>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<K>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dictionary, key, value);
}
template <typename T, typename K>
inline void UnityEngine::ProBuilder::ArrayUtility::AddOrAppendRange(::System::Collections::Generic::Dictionary_2<T, ::System::Collections::Generic::List_1<K>*>* dictionary, T key,
                                                                    ::System::Collections::Generic::List_1<K>* value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                                           { "AddOrAppendRange",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<K>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<T, ::System::Collections::Generic::List_1<K>*>*>(), ::i2c::type_of<T>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<K>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<K>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dictionary, key, value);
}
template <typename TSource, typename TKey>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* UnityEngine::ProBuilder::ArrayUtility::DistinctBy(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                                 ::System::Func_2<TSource, TKey>* keySelector) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                                           { "DistinctBy",
                                                             { ::i2c::class_of<TSource>(), ::i2c::class_of<TKey>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource, TKey>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TKey>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template <typename TKey, typename TValue> inline ::StringW UnityEngine::ProBuilder::ArrayUtility::ToString(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dict) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                       { "ToString", { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() }, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dict);
}
template <typename T> inline ::StringW UnityEngine::ProBuilder::ArrayUtility::ToString(::System::Collections::Generic::IEnumerable_1<T>* arr, ::StringW separator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ArrayUtility*>(),
                                              { "ToString", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, arr, separator);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ArrayUtility::ArrayUtility() {}
