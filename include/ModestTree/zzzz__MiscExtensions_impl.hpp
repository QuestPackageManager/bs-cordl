#pragma once
// IWYU pragma private; include "ModestTree\MiscExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/zzzz__MiscExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ModestTree::MiscExtensions.Fmt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::ModestTree::MiscExtensions::Fmt)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6e3f0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::MiscExtensions*>(), { "Fmt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::MiscExtensions.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, ::StringW)>(&::ModestTree::MiscExtensions::Join)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e3ff34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::MiscExtensions*>(),
                                                             { "Join", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW ModestTree::MiscExtensions::Fmt(::StringW s, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::MiscExtensions*>(), { "Fmt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, args);
}
template <typename T> inline int32_t ModestTree::MiscExtensions::IndexOf(::System::Collections::Generic::IList_1<T>* list, T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::MiscExtensions*>(),
                                                           { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, item);
}
inline ::StringW ModestTree::MiscExtensions::Join(::System::Collections::Generic::IEnumerable_1<::StringW>* values, ::StringW separator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::MiscExtensions*>(),
                                                           { "Join", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, values, separator);
}
template <typename T> inline void ModestTree::MiscExtensions::AllocFreeAddRange(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IList_1<T>* items) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::ModestTree::MiscExtensions*>(),
          { "AllocFreeAddRange", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, items);
}
template <typename T> inline void ModestTree::MiscExtensions::RemoveWithConfirm(::System::Collections::Generic::IList_1<T>* list, T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::MiscExtensions*>(),
                                                           { "RemoveWithConfirm", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item);
}
template <typename T> inline void ModestTree::MiscExtensions::RemoveWithConfirm(::System::Collections::Generic::LinkedList_1<T>* list, T item) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::MiscExtensions*>(),
                                              { "RemoveWithConfirm", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::LinkedList_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item);
}
template <typename TKey, typename TVal> inline void ModestTree::MiscExtensions::RemoveWithConfirm(::System::Collections::Generic::IDictionary_2<TKey, TVal>* dictionary, TKey key) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::ModestTree::MiscExtensions*>(),
          { "RemoveWithConfirm", { ::i2c::class_of<TKey>(), ::i2c::class_of<TVal>() }, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey, TVal>*>(), ::i2c::type_of<TKey>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TVal>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dictionary, key);
}
template <typename T> inline void ModestTree::MiscExtensions::RemoveWithConfirm(::System::Collections::Generic::HashSet_1<T>* set, T item) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::MiscExtensions*>(),
                                              { "RemoveWithConfirm", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, set, item);
}
template <typename TKey, typename TVal> inline TVal ModestTree::MiscExtensions::GetValueAndRemove(::System::Collections::Generic::IDictionary_2<TKey, TVal>* dictionary, TKey key) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::ModestTree::MiscExtensions*>(),
          { "GetValueAndRemove", { ::i2c::class_of<TKey>(), ::i2c::class_of<TVal>() }, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey, TVal>*>(), ::i2c::type_of<TKey>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TVal>() })));
  return ::cordl_internals::RunMethodRethrow<TVal>(nullptr, ___internal_method, dictionary, key);
}
// Ctor Parameters []
constexpr ::ModestTree::MiscExtensions::MiscExtensions() {}
