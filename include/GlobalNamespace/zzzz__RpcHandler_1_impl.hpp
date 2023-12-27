#pragma once
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RpcHandler_1_def.hpp"
#include "GlobalNamespace/zzzz__RpcHandler_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
template <typename TType, typename T> constexpr ::System::Action_1<::StringW>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T> constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>::__set_callback(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T> inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>* GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>*>());
}
template <typename TType, typename T> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>::_RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>*>::get(), "<RegisterCallback>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, rpc);
}
// Ctor Parameters []
template <typename TType, typename T> constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass10_0_1<TType, T>::__RpcHandler_1____c__DisplayClass10_0_1() {}
template <typename TType, typename T, typename T0> constexpr ::System::Action_2<::StringW, T0>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, T0>*> const& GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0> constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>::__set_callback(::System::Action_2<::StringW, T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T, typename T0>
inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>* GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>*>());
}
template <typename TType, typename T, typename T0> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T, typename T0>
inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>::_RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>*>::get(), "<RegisterCallback>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, rpc);
}
// Ctor Parameters []
template <typename TType, typename T, typename T0> constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass11_0_2<TType, T, T0>::__RpcHandler_1____c__DisplayClass11_0_2() {}
template <typename TType, typename T, typename T0, typename T1>
constexpr ::System::Action_3<::StringW, T0, T1>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1>
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::StringW, T0, T1>*> const& GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1>
constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>::__set_callback(::System::Action_3<::StringW, T0, T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T, typename T0, typename T1>
inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>* GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>*>());
}
template <typename TType, typename T, typename T0, typename T1> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T, typename T0, typename T1>
inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>::_RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>*>::get(),
                                               "<RegisterCallback>b__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, rpc);
}
// Ctor Parameters []
template <typename TType, typename T, typename T0, typename T1> constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass12_0_3<TType, T, T0, T1>::__RpcHandler_1____c__DisplayClass12_0_3() {}
template <typename TType, typename T, typename T0, typename T1, typename T2>
constexpr ::System::Action_4<::StringW, T0, T1, T2>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1, typename T2>
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, T0, T1, T2>*> const&
GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1, typename T2>
constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>::__set_callback(::System::Action_4<::StringW, T0, T1, T2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T, typename T0, typename T1, typename T2>
inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>* GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>*>());
}
template <typename TType, typename T, typename T0, typename T1, typename T2> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>::_RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>*>::get(),
                                               "<RegisterCallback>b__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, rpc);
}
// Ctor Parameters []
template <typename TType, typename T, typename T0, typename T1, typename T2>
constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass13_0_4<TType, T, T0, T1, T2>::__RpcHandler_1____c__DisplayClass13_0_4() {}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::System::Action_5<::StringW, T0, T1, T2, T3>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::cordl_internals::to_const_pointer<::System::Action_5<::StringW, T0, T1, T2, T3>*> const&
GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>::__set_callback(::System::Action_5<::StringW, T0, T1, T2, T3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>* GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>*>());
}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>::_RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>*>::get(),
                                               "<RegisterCallback>b__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, rpc);
}
// Ctor Parameters []
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>::__RpcHandler_1____c__DisplayClass14_0_5() {}
template <typename TType, typename T> constexpr ::System::Action_2<::StringW, int64_t>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, int64_t>*> const& GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T> constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>::__set_callback(::System::Action_2<::StringW, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T> inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>* GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>*>());
}
template <typename TType, typename T> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T>
inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>::_RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>*>::get(),
                                               "<RegisterCallbackWithTime>b__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, rpc);
}
// Ctor Parameters []
template <typename TType, typename T> constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass15_0_1<TType, T>::__RpcHandler_1____c__DisplayClass15_0_1() {}
template <typename TType, typename T, typename T0> constexpr ::System::Action_3<::StringW, int64_t, T0>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0>
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::StringW, int64_t, T0>*> const& GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0>
constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>::__set_callback(::System::Action_3<::StringW, int64_t, T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T, typename T0>
inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>* GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>*>());
}
template <typename TType, typename T, typename T0> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T, typename T0>
inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>::_RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>*>::get(),
                                               "<RegisterCallbackWithTime>b__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, rpc);
}
// Ctor Parameters []
template <typename TType, typename T, typename T0> constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass16_0_2<TType, T, T0>::__RpcHandler_1____c__DisplayClass16_0_2() {}
template <typename TType, typename T, typename T0, typename T1>
constexpr ::System::Action_4<::StringW, int64_t, T0, T1>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1>
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, T0, T1>*> const&
GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1>
constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>::__set_callback(::System::Action_4<::StringW, int64_t, T0, T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T, typename T0, typename T1>
inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>* GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>*>());
}
template <typename TType, typename T, typename T0, typename T1> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T, typename T0, typename T1>
inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>::_RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>*>::get(),
                                               "<RegisterCallbackWithTime>b__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, rpc);
}
// Ctor Parameters []
template <typename TType, typename T, typename T0, typename T1> constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass17_0_3<TType, T, T0, T1>::__RpcHandler_1____c__DisplayClass17_0_3() {}
template <typename TType, typename T, typename T0, typename T1, typename T2>
constexpr ::System::Action_5<::StringW, int64_t, T0, T1, T2>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1, typename T2>
constexpr ::cordl_internals::to_const_pointer<::System::Action_5<::StringW, int64_t, T0, T1, T2>*> const&
GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1, typename T2>
constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>::__set_callback(::System::Action_5<::StringW, int64_t, T0, T1, T2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T, typename T0, typename T1, typename T2>
inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>* GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>*>());
}
template <typename TType, typename T, typename T0, typename T1, typename T2> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>::_RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>*>::get(),
                                               "<RegisterCallbackWithTime>b__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, rpc);
}
// Ctor Parameters []
template <typename TType, typename T, typename T0, typename T1, typename T2>
constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass18_0_4<TType, T, T0, T1, T2>::__RpcHandler_1____c__DisplayClass18_0_4() {}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::cordl_internals::to_const_pointer<::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>*> const&
GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>::__set_callback(::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>* GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>*>());
}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>::_RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>*>::get(),
                                               "<RegisterCallbackWithTime>b__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, rpc);
}
// Ctor Parameters []
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>::__RpcHandler_1____c__DisplayClass19_0_5() {}
template <typename TType, typename T> constexpr ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>*& GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>*> const&
GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___callback;
}
template <typename TType, typename T>
constexpr void GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>::__set_callback(::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType, typename T> inline ::GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>* GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>*>());
}
template <typename TType, typename T> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType, typename T> inline void GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>::_RegisterCallback_b__0(T rpc, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>*>::get(), "<RegisterCallback>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rpc, player);
}
// Ctor Parameters []
template <typename TType, typename T> constexpr ::GlobalNamespace::__RpcHandler_1____c__DisplayClass20_0_1<TType, T>::__RpcHandler_1____c__DisplayClass20_0_1() {}
template <typename TType> constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::RpcHandler_1<TType>::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerSessionManager;
}
template <typename TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& GlobalNamespace::RpcHandler_1<TType>::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerSessionManager;
}
template <typename TType> constexpr void GlobalNamespace::RpcHandler_1<TType>::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType> constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType& GlobalNamespace::RpcHandler_1<TType>::__get__messageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____messageType;
}
template <typename TType> constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType const& GlobalNamespace::RpcHandler_1<TType>::__get__messageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____messageType;
}
template <typename TType> constexpr void GlobalNamespace::RpcHandler_1<TType>::__set__messageType(::GlobalNamespace::__MultiplayerSessionManager__MessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____messageType = value;
}
template <typename TType> constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::RpcHandler_1<TType>::__get__rpcSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rpcSerializer;
}
template <typename TType>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::RpcHandler_1<TType>::__get__rpcSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rpcSerializer;
}
template <typename TType> constexpr void GlobalNamespace::RpcHandler_1<TType>::__set__rpcSerializer(::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rpcSerializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TType>
inline ::GlobalNamespace::RpcHandler_1<TType>* GlobalNamespace::RpcHandler_1<TType>::New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                              ::GlobalNamespace::__MultiplayerSessionManager__MessageType messageType) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RpcHandler_1<TType>*>(multiplayerSessionManager, messageType));
}
template <typename TType>
inline void GlobalNamespace::RpcHandler_1<TType>::_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                        ::GlobalNamespace::__MultiplayerSessionManager__MessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerSessionManager__MessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionManager, messageType);
}
template <typename TType> inline void GlobalNamespace::RpcHandler_1<TType>::Destroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "Destroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType> template <typename T> inline void GlobalNamespace::RpcHandler_1<TType>::EnqueueRpc() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "EnqueueRpc",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TType> template <typename T, typename T0> inline void GlobalNamespace::RpcHandler_1<TType>::EnqueueRpc(T0 value0) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "EnqueueRpc",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value0);
}
template <typename TType> template <typename T, typename T0, typename T1> inline void GlobalNamespace::RpcHandler_1<TType>::EnqueueRpc(T0 value0, T1 value1) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "EnqueueRpc",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value0, value1);
}
template <typename TType> template <typename T, typename T0, typename T1, typename T2> inline void GlobalNamespace::RpcHandler_1<TType>::EnqueueRpc(T0 value0, T1 value1, T2 value2) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "EnqueueRpc",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value0, value1, value2);
}
template <typename TType>
template <typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::RpcHandler_1<TType>::EnqueueRpc(T0 value0, T1 value1, T2 value2, T3 value3) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "EnqueueRpc",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value0, value1, value2, value3);
}
template <typename TType> template <typename T> inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallback(TType type, ::System::Action_1<::StringW>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallback",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
template <typename TType> template <typename T, typename T0> inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallback(TType type, ::System::Action_2<::StringW, T0>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallback",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, T0>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
template <typename TType>
template <typename T, typename T0, typename T1>
inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallback(TType type, ::System::Action_3<::StringW, T0, T1>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallback",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, T0, T1>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
template <typename TType>
template <typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallback(TType type, ::System::Action_4<::StringW, T0, T1, T2>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallback",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, T0, T1, T2>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
template <typename TType>
template <typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallback(TType type, ::System::Action_5<::StringW, T0, T1, T2, T3>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallback",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<::StringW, T0, T1, T2, T3>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
template <typename TType> template <typename T> inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallbackWithTime(TType type, ::System::Action_2<::StringW, int64_t>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallbackWithTime",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
template <typename TType>
template <typename T, typename T0>
inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallbackWithTime(TType type, ::System::Action_3<::StringW, int64_t, T0>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallbackWithTime",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, int64_t, T0>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
template <typename TType>
template <typename T, typename T0, typename T1>
inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallbackWithTime(TType type, ::System::Action_4<::StringW, int64_t, T0, T1>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallbackWithTime",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, T0, T1>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
template <typename TType>
template <typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallbackWithTime(TType type, ::System::Action_5<::StringW, int64_t, T0, T1, T2>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallbackWithTime",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<::StringW, int64_t, T0, T1, T2>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
template <typename TType>
template <typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallbackWithTime(TType type, ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallbackWithTime",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
template <typename TType> template <typename T> inline void GlobalNamespace::RpcHandler_1<TType>::RegisterCallback(TType type, ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcHandler_1<TType>*>::get(), "RegisterCallback",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, callback);
}
// Ctor Parameters []
template <typename TType> constexpr ::GlobalNamespace::RpcHandler_1<TType>::RpcHandler_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
