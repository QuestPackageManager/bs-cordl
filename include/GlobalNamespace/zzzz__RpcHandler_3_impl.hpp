#pragma once
// IWYU pragma private; include "GlobalNamespace\RpcHandler_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RpcHandler_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionMessageProcessor_2_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "GlobalNamespace/zzzz__RpcHandler_3_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr void GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>::__cordl_internal_set_callback(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>::_RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>*>(),
                                                           { "<RegisterCallback>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, rpc);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>*
GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass11_0_1<TMessageType, TType, TConnectedPlayer, T>::RpcHandler_3___c__DisplayClass11_0_1() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
constexpr ::System::Action_2<::StringW, T0>*& GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
constexpr ::System::Action_2<::StringW, T0>* const& GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
constexpr void GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::__cordl_internal_set_callback(::System::Action_2<::StringW, T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::_RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>*>(),
                                                           { "<RegisterCallback>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, rpc);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>*
GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass12_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::RpcHandler_3___c__DisplayClass12_0_2() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
constexpr ::System::Action_3<::StringW, T0, T1>*& GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
constexpr ::System::Action_3<::StringW, T0, T1>* const& GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
constexpr void GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::__cordl_internal_set_callback(::System::Action_3<::StringW, T0, T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::_RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>*>(),
                                                           { "<RegisterCallback>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, rpc);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>*
GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass13_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::RpcHandler_3___c__DisplayClass13_0_3() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
constexpr ::System::Action_4<::StringW, T0, T1, T2>*& GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
constexpr ::System::Action_4<::StringW, T0, T1, T2>* const&
GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
constexpr void
GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::__cordl_internal_set_callback(::System::Action_4<::StringW, T0, T1, T2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::_RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>*>(),
                                                           { "<RegisterCallback>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, rpc);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>*
GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass14_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::RpcHandler_3___c__DisplayClass14_0_4() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::System::Action_5<::StringW, T0, T1, T2, T3>*&
GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::System::Action_5<::StringW, T0, T1, T2, T3>* const&
GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr void
GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::__cordl_internal_set_callback(::System::Action_5<::StringW, T0, T1, T2, T3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::_RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player,
                                                                                                                                                    T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>*>(),
                                                           { "<RegisterCallback>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, rpc);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>*
GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass15_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::RpcHandler_3___c__DisplayClass15_0_5() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr ::System::Action_2<::StringW, int64_t>*& GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr ::System::Action_2<::StringW, int64_t>* const& GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr void GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>::__cordl_internal_set_callback(::System::Action_2<::StringW, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>::_RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>*>(),
                                                           { "<RegisterCallbackWithTime>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, rpc);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>*
GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass16_0_1<TMessageType, TType, TConnectedPlayer, T>::RpcHandler_3___c__DisplayClass16_0_1() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
constexpr ::System::Action_3<::StringW, int64_t, T0>*& GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
constexpr ::System::Action_3<::StringW, int64_t, T0>* const&
GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
constexpr void GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::__cordl_internal_set_callback(::System::Action_3<::StringW, int64_t, T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::_RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>*>(),
                                                           { "<RegisterCallbackWithTime>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, rpc);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>*
GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass17_0_2<TMessageType, TType, TConnectedPlayer, T, T0>::RpcHandler_3___c__DisplayClass17_0_2() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
constexpr ::System::Action_4<::StringW, int64_t, T0, T1>*& GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
constexpr ::System::Action_4<::StringW, int64_t, T0, T1>* const&
GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
constexpr void
GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::__cordl_internal_set_callback(::System::Action_4<::StringW, int64_t, T0, T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::_RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player,
                                                                                                                                                    T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>*>(),
                                                           { "<RegisterCallbackWithTime>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, rpc);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>*
GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass18_0_3<TMessageType, TType, TConnectedPlayer, T, T0, T1>::RpcHandler_3___c__DisplayClass18_0_3() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
constexpr ::System::Action_5<::StringW, int64_t, T0, T1, T2>*&
GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
constexpr ::System::Action_5<::StringW, int64_t, T0, T1, T2>* const&
GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
constexpr void
GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::__cordl_internal_set_callback(::System::Action_5<::StringW, int64_t, T0, T1, T2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::_RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player,
                                                                                                                                                        T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>*>(),
                                                           { "<RegisterCallbackWithTime>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, rpc);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>*
GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass19_0_4<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2>::RpcHandler_3___c__DisplayClass19_0_4() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>*&
GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* const&
GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr void GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::__cordl_internal_set_callback(
    ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::_RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player,
                                                                                                                                                            T rpc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>*>(),
                                                           { "<RegisterCallbackWithTime>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, rpc);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>*
GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T, typename T0, typename T1, typename T2, typename T3>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass20_0_5<TMessageType, TType, TConnectedPlayer, T, T0, T1, T2, T3>::RpcHandler_3___c__DisplayClass20_0_5() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>*&
GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* const&
GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr void
GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>::__cordl_internal_set_callback(::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
inline void GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>::_RegisterCallback_b__0(T rpc, TConnectedPlayer player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>*>(),
                                                           { "<RegisterCallback>b__0", {}, { ::i2c::type_of<T>(), ::i2c::type_of<TConnectedPlayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpc, player);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
inline ::GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>*
GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>*>());
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer, typename T>
constexpr ::GlobalNamespace::RpcHandler_3___c__DisplayClass21_0_1<TMessageType, TType, TConnectedPlayer, T>::RpcHandler_3___c__DisplayClass21_0_1() {}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*&
GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_get__multiplayerSessionMessageProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionMessageProcessor;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>* const&
GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_get__multiplayerSessionMessageProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionMessageProcessor;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_set__multiplayerSessionMessageProcessor(
    ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionMessageProcessor = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*& GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>* const&
GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr void
GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TType, TConnectedPlayer>*& GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_get__rpcSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcSerializer;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TType, TConnectedPlayer>* const&
GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_get__rpcSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcSerializer;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_set__rpcSerializer(::GlobalNamespace::NetworkPacketSerializer_2<TType, TConnectedPlayer>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rpcSerializer = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr TMessageType& GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_get__messageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageType;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr TMessageType const& GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_get__messageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageType;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
constexpr void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::__cordl_internal_set__messageType(TMessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____messageType = value;
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::_ctor(
    ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>* multiplayerSessionMessageProcessor,
    ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>* multiplayerSessionManager, TMessageType messageType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), ::i2c::type_of<TMessageType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionMessageProcessor, multiplayerSessionManager, messageType);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer> inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::Destroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer> template <typename T> inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::EnqueueRpc() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(), { "EnqueueRpc", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::EnqueueRpc(T0 value0) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                                                              { "EnqueueRpc", { ::i2c::class_of<T>(), ::i2c::class_of<T0>() }, { ::i2c::type_of<T0>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value0);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0, typename T1>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::EnqueueRpc(T0 value0, T1 value1) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                           { "EnqueueRpc", { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>() }, { ::i2c::type_of<T0>(), ::i2c::type_of<T1>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value0, value1);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::EnqueueRpc(T0 value0, T1 value1, T2 value2) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                                                              { "EnqueueRpc",
                                                                                                { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() },
                                                                                                { ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value0, value1, value2);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::EnqueueRpc(T0 value0, T1 value1, T2 value2, T3 value3) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                           { "EnqueueRpc",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() },
                                                             { ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value0, value1, value2, value3);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallback(TType type, ::System::Action_1<::StringW>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                           { "RegisterCallback", { ::i2c::class_of<T>() }, { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallback(TType type, ::System::Action_2<::StringW, T0>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                       { "RegisterCallback", { ::i2c::class_of<T>(), ::i2c::class_of<T0>() }, { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_2<::StringW, T0>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0, typename T1>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallback(TType type, ::System::Action_3<::StringW, T0, T1>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                                                              { "RegisterCallback",
                                                                                                { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>() },
                                                                                                { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_3<::StringW, T0, T1>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallback(TType type, ::System::Action_4<::StringW, T0, T1, T2>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                                                              { "RegisterCallback",
                                                                                                { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() },
                                                                                                { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_4<::StringW, T0, T1, T2>*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallback(TType type, ::System::Action_5<::StringW, T0, T1, T2, T3>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                           { "RegisterCallback",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() },
                                                             { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_5<::StringW, T0, T1, T2, T3>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallbackWithTime(TType type, ::System::Action_2<::StringW, int64_t>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                              { "RegisterCallbackWithTime", { ::i2c::class_of<T>() }, { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallbackWithTime(TType type, ::System::Action_3<::StringW, int64_t, T0>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                       { "RegisterCallbackWithTime", { ::i2c::class_of<T>(), ::i2c::class_of<T0>() }, { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_3<::StringW, int64_t, T0>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0, typename T1>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallbackWithTime(TType type, ::System::Action_4<::StringW, int64_t, T0, T1>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                                                              { "RegisterCallbackWithTime",
                                                                                                { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>() },
                                                                                                { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_4<::StringW, int64_t, T0, T1>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0, typename T1, typename T2>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallbackWithTime(TType type, ::System::Action_5<::StringW, int64_t, T0, T1, T2>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                                                              { "RegisterCallbackWithTime",
                                                                                                { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() },
                                                                                                { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_5<::StringW, int64_t, T0, T1, T2>*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T, typename T0, typename T1, typename T2, typename T3>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallbackWithTime(TType type, ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                                           { "RegisterCallbackWithTime",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() },
                                                             { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
template <typename T>
inline void GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RegisterCallback(TType type, ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(),
                                       { "RegisterCallback", { ::i2c::class_of<T>() }, { ::i2c::type_of<TType>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback);
}
template <typename TMessageType, typename TType, typename TConnectedPlayer>
inline ::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>* GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::New_ctor(
    ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>* multiplayerSessionMessageProcessor,
    ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>* multiplayerSessionManager, TMessageType messageType) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>*>(multiplayerSessionMessageProcessor, multiplayerSessionManager, messageType));
}
// Ctor Parameters []
template <typename TMessageType, typename TType, typename TConnectedPlayer> constexpr ::GlobalNamespace::RpcHandler_3<TMessageType, TType, TConnectedPlayer>::RpcHandler_3() {}
