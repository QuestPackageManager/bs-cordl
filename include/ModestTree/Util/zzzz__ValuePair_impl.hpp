#pragma once
// IWYU pragma private; include "ModestTree\Util\ValuePair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/Util/zzzz__ValuePair_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_3_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_4_def.hpp"
template <typename T1, typename T2> inline ::ModestTree::Util::ValuePair_2<T1, T2>* ModestTree::Util::ValuePair::New(T1 first, T2 second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ModestTree::Util::ValuePair*>(), { "New", { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<::ModestTree::Util::ValuePair_2<T1, T2>*>(nullptr, ___internal_method, first, second);
}
template <typename T1, typename T2, typename T3> inline ::ModestTree::Util::ValuePair_3<T1, T2, T3>* ModestTree::Util::ValuePair::New(T1 first, T2 second, T3 third) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::Util::ValuePair*>(),
                                       { "New", { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() }, { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>(nullptr, ___internal_method, first, second, third);
}
template <typename T1, typename T2, typename T3, typename T4> inline ::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* ModestTree::Util::ValuePair::New(T1 first, T2 second, T3 third, T4 fourth) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::ValuePair*>(), { "New",
                                                                                                   { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() },
                                                                                                   { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() })));
  return ::cordl_internals::RunMethodRethrow<::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*>(nullptr, ___internal_method, first, second, third, fourth);
}
// Ctor Parameters []
constexpr ::ModestTree::Util::ValuePair::ValuePair() {}
