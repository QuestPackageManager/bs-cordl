#pragma once
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_3_def.hpp"
template <typename T1, typename T2, typename T3> inline T1 UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::get_item1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>::get(),
                                                                             "get_item1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T1, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::set_item1(T1 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>::get(), "set_item1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T1, typename T2, typename T3> inline T2 UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::get_item2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>::get(),
                                                                             "get_item2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T2, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::set_item2(T2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>::get(), "set_item2",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T1, typename T2, typename T3> inline T3 UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::get_item3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>::get(),
                                                                             "get_item3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T3, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::set_item3(T3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>::get(), "set_item3",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T1, typename T2, typename T3> inline void UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::_ctor(T1 item1, T2 item2, T3 item3) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item1, item2, item3);
}
template <typename T1, typename T2, typename T3> inline ::StringW UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>>::get(),
                                                                             "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Item2", ty: "T2", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "m_Item3", ty: "T3", modifiers: "", def_value: Some("nullptr") }]
template <typename T1, typename T2, typename T3> constexpr ::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::SimpleTuple_3(T1 m_Item1, T2 m_Item2, T3 m_Item3) noexcept {
  this->m_Item1 = m_Item1;
  this->m_Item2 = m_Item2;
  this->m_Item3 = m_Item3;
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::UnityEngine::ProBuilder::SimpleTuple_3<T1, T2, T3>::SimpleTuple_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
