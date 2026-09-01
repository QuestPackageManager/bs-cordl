#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\SimpleTuple_3.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_3_def.hpp"
template <typename T1, typename T2, typename T3> inline T1 UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::get_item1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>(), { "get_item1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T1>(*this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::set_item1(T1 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>(), { "set_item1", {}, { ::i2c::type_of<T1>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T1, typename T2, typename T3> inline T2 UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::get_item2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>(), { "get_item2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T2>(*this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::set_item2(T2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>(), { "set_item2", {}, { ::i2c::type_of<T2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T1, typename T2, typename T3> inline T3 UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::get_item3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>(), { "get_item3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T3>(*this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::set_item3(T3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>(), { "set_item3", {}, { ::i2c::type_of<T3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::_ctor(T1 item1, T2 item2, T3 item3) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item1, item2, item3);
}
template <typename T1, typename T2, typename T3> inline ::StringW UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Item2", ty: "T2", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Item3", ty: "T3", modifiers: "", def_value: Some("{}") }]
template <typename T1, typename T2, typename T3> constexpr ::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::SimpleTuple_3(T1 m_Item1, T2 m_Item2, T3 m_Item3) noexcept {
  this->m_Item1 = m_Item1;
  this->m_Item2 = m_Item2;
  this->m_Item3 = m_Item3;
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::SimpleTuple_3() {}
