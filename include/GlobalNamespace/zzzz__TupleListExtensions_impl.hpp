#pragma once
// IWYU pragma private; include "GlobalNamespace/TupleListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TupleListExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "System/zzzz__Tuple_4_def.hpp"
template <typename T1, typename T2> inline void GlobalNamespace::TupleListExtensions::Add(::System::Collections::Generic::IList_1<::System::Tuple_2<T1, T2>*>* list, T1 item1, T2 item2) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TupleListExtensions*>(),
                                              { "Add",
                                                { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() },
                                                { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Tuple_2<T1, T2>*>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item1, item2);
}
template <typename T1, typename T2, typename T3>
inline void GlobalNamespace::TupleListExtensions::Add(::System::Collections::Generic::IList_1<::System::Tuple_3<T1, T2, T3>*>* list, T1 item1, T2 item2, T3 item3) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TupleListExtensions*>(),
                          { "Add",
                            { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() },
                            { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Tuple_3<T1, T2, T3>*>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item1, item2, item3);
}
template <typename T1, typename T2, typename T3, typename T4>
inline void GlobalNamespace::TupleListExtensions::Add(::System::Collections::Generic::IList_1<::System::Tuple_4<T1, T2, T3, T4>*>* list, T1 item1, T2 item2, T3 item3, T4 item4) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TupleListExtensions*>(), { "Add",
                                                                                                     { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() },
                                                                                                     { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Tuple_4<T1, T2, T3, T4>*>*>(),
                                                                                                       ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item1, item2, item3, item4);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TupleListExtensions::TupleListExtensions() {}
