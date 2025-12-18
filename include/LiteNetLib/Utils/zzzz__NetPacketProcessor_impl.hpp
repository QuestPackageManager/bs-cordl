#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/NetPacketProcessor.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NetPacketProcessor_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetPacketProcessor_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetSerializer_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor_HashCache_1<T>::setStaticF_Initialized(bool value) {
  ::cordl_internals::setStaticField<bool, "Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_HashCache_1<T>*>::get>(
      std::forward<bool>(value));
}
template <typename T> inline bool LiteNetLib::Utils::NetPacketProcessor_HashCache_1<T>::getStaticF_Initialized() {
  return ::cordl_internals::getStaticField<bool, "Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_HashCache_1<T>*>::get>();
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor_HashCache_1<T>::setStaticF_Id(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "Id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_HashCache_1<T>*>::get>(
      std::forward<uint64_t>(value));
}
template <typename T> inline uint64_t LiteNetLib::Utils::NetPacketProcessor_HashCache_1<T>::getStaticF_Id() {
  return ::cordl_internals::getStaticField<uint64_t, "Id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_HashCache_1<T>*>::get>();
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetPacketProcessor_HashCache_1<T>::NetPacketProcessor_HashCache_1() {}
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x56f8e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::*)(
    ::LiteNetLib::Utils::NetDataReader*, ::System::Object*)>(&::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56f8f94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::*)(::LiteNetLib::Utils::NetDataReader*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(
    &::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56f8fa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56f8fd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::Invoke(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
inline ::System::IAsyncResult* LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::BeginInvoke(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData,
                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, reader, userData, callback, object);
}
inline void LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate* LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate::NetPacketProcessor_SubscribeDelegate() {}
template <typename T> constexpr ::System::Func_1<T>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::__cordl_internal_get_packetConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetConstructor;
}
template <typename T> constexpr ::System::Func_1<T>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::__cordl_internal_get_packetConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetConstructor;
}
template <typename T> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::__cordl_internal_set_packetConstructor(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___packetConstructor, value);
}
template <typename T> constexpr ::LiteNetLib::Utils::NetPacketProcessor*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::LiteNetLib::Utils::NetPacketProcessor* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::__cordl_internal_set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename T> constexpr ::System::Action_1<T>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::__cordl_internal_get_onReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T> constexpr ::System::Action_1<T>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::__cordl_internal_get_onReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::__cordl_internal_set_onReceive(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___onReceive, value);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::_Subscribe_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>*>::get(), "<Subscribe>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
template <typename T> inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>* LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>::NetPacketProcessor___c__DisplayClass25_0_1() {}
template <typename T, typename TUserData> constexpr ::System::Func_1<T>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::__cordl_internal_get_packetConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetConstructor;
}
template <typename T, typename TUserData>
constexpr ::System::Func_1<T>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::__cordl_internal_get_packetConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetConstructor;
}
template <typename T, typename TUserData>
constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::__cordl_internal_set_packetConstructor(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___packetConstructor, value);
}
template <typename T, typename TUserData>
constexpr ::LiteNetLib::Utils::NetPacketProcessor*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T, typename TUserData>
constexpr ::LiteNetLib::Utils::NetPacketProcessor* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T, typename TUserData>
constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::__cordl_internal_set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename T, typename TUserData> constexpr ::System::Action_2<T, TUserData>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::__cordl_internal_get_onReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T, typename TUserData>
constexpr ::System::Action_2<T, TUserData>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::__cordl_internal_get_onReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T, typename TUserData>
constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::__cordl_internal_set_onReceive(::System::Action_2<T, TUserData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___onReceive, value);
}
template <typename T, typename TUserData> inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TUserData>
inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::_Subscribe_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>*>::get(),
                                               "<Subscribe>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
template <typename T, typename TUserData>
inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>* LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>*>());
}
// Ctor Parameters []
template <typename T, typename TUserData> constexpr ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>::NetPacketProcessor___c__DisplayClass26_0_2() {}
template <typename T> constexpr ::LiteNetLib::Utils::NetPacketProcessor*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::LiteNetLib::Utils::NetPacketProcessor* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::__cordl_internal_set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename T> constexpr T& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::__cordl_internal_get_reference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reference;
}
template <typename T> constexpr T const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::__cordl_internal_get_reference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reference;
}
template <typename T> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::__cordl_internal_set_reference(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___reference, value);
}
template <typename T> constexpr ::System::Action_1<T>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::__cordl_internal_get_onReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T> constexpr ::System::Action_1<T>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::__cordl_internal_get_onReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::__cordl_internal_set_onReceive(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___onReceive, value);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::_SubscribeReusable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>*>::get(),
                                               "<SubscribeReusable>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
template <typename T> inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>* LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>::NetPacketProcessor___c__DisplayClass27_0_1() {}
template <typename T, typename TUserData>
constexpr ::LiteNetLib::Utils::NetPacketProcessor*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T, typename TUserData>
constexpr ::LiteNetLib::Utils::NetPacketProcessor* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T, typename TUserData>
constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::__cordl_internal_set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename T, typename TUserData> constexpr T& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::__cordl_internal_get_reference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reference;
}
template <typename T, typename TUserData> constexpr T const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::__cordl_internal_get_reference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reference;
}
template <typename T, typename TUserData> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::__cordl_internal_set_reference(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___reference, value);
}
template <typename T, typename TUserData> constexpr ::System::Action_2<T, TUserData>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::__cordl_internal_get_onReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T, typename TUserData>
constexpr ::System::Action_2<T, TUserData>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::__cordl_internal_get_onReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T, typename TUserData>
constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::__cordl_internal_set_onReceive(::System::Action_2<T, TUserData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___onReceive, value);
}
template <typename T, typename TUserData> inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TUserData>
inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::_SubscribeReusable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>*>::get(),
                                               "<SubscribeReusable>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
template <typename T, typename TUserData>
inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>* LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>*>());
}
// Ctor Parameters []
template <typename T, typename TUserData> constexpr ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>::NetPacketProcessor___c__DisplayClass28_0_2() {}
template <typename T, typename TUserData> constexpr ::System::Func_1<T>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>::__cordl_internal_get_packetConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetConstructor;
}
template <typename T, typename TUserData>
constexpr ::System::Func_1<T>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>::__cordl_internal_get_packetConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetConstructor;
}
template <typename T, typename TUserData>
constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>::__cordl_internal_set_packetConstructor(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___packetConstructor, value);
}
template <typename T, typename TUserData> constexpr ::System::Action_2<T, TUserData>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>::__cordl_internal_get_onReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T, typename TUserData>
constexpr ::System::Action_2<T, TUserData>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>::__cordl_internal_get_onReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T, typename TUserData>
constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>::__cordl_internal_set_onReceive(::System::Action_2<T, TUserData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___onReceive, value);
}
template <typename T, typename TUserData> inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TUserData>
inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>::_SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>*>::get(),
                                               "<SubscribeNetSerializable>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
template <typename T, typename TUserData>
inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>* LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>*>());
}
// Ctor Parameters []
template <typename T, typename TUserData> constexpr ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>::NetPacketProcessor___c__DisplayClass29_0_2() {}
template <typename T> constexpr ::System::Func_1<T>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>::__cordl_internal_get_packetConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetConstructor;
}
template <typename T> constexpr ::System::Func_1<T>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>::__cordl_internal_get_packetConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetConstructor;
}
template <typename T> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>::__cordl_internal_set_packetConstructor(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___packetConstructor, value);
}
template <typename T> constexpr ::System::Action_1<T>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>::__cordl_internal_get_onReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T> constexpr ::System::Action_1<T>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>::__cordl_internal_get_onReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>::__cordl_internal_set_onReceive(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___onReceive, value);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>::_SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>*>::get(),
                                               "<SubscribeNetSerializable>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
template <typename T> inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>* LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>::NetPacketProcessor___c__DisplayClass30_0_1() {}
template <typename T, typename TUserData> constexpr T& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>::__cordl_internal_get_reference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reference;
}
template <typename T, typename TUserData> constexpr T const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>::__cordl_internal_get_reference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reference;
}
template <typename T, typename TUserData> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>::__cordl_internal_set_reference(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___reference, value);
}
template <typename T, typename TUserData> constexpr ::System::Action_2<T, TUserData>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>::__cordl_internal_get_onReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T, typename TUserData>
constexpr ::System::Action_2<T, TUserData>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>::__cordl_internal_get_onReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T, typename TUserData>
constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>::__cordl_internal_set_onReceive(::System::Action_2<T, TUserData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___onReceive, value);
}
template <typename T, typename TUserData> inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TUserData>
inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>::_SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>*>::get(),
                                               "<SubscribeNetSerializable>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
template <typename T, typename TUserData>
inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>* LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>*>());
}
// Ctor Parameters []
template <typename T, typename TUserData> constexpr ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>::NetPacketProcessor___c__DisplayClass31_0_2() {}
template <typename T> constexpr T& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>::__cordl_internal_get_reference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reference;
}
template <typename T> constexpr T const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>::__cordl_internal_get_reference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reference;
}
template <typename T> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>::__cordl_internal_set_reference(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___reference, value);
}
template <typename T> constexpr ::System::Action_1<T>*& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>::__cordl_internal_get_onReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T> constexpr ::System::Action_1<T>* const& LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>::__cordl_internal_get_onReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceive;
}
template <typename T> constexpr void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>::__cordl_internal_set_onReceive(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___onReceive, value);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>::_SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>*>::get(),
                                               "<SubscribeNetSerializable>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
template <typename T> inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>* LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>::NetPacketProcessor___c__DisplayClass32_0_1() {}
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)()>(&::LiteNetLib::Utils::NetPacketProcessor::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56f8958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)(int32_t)>(&::LiteNetLib::Utils::NetPacketProcessor::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x56f8a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor.GetCallbackFromData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate* (
    ::LiteNetLib::Utils::NetPacketProcessor::*)(::LiteNetLib::Utils::NetDataReader*)>(&::LiteNetLib::Utils::NetPacketProcessor::GetCallbackFromData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56f8c0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor.ReadAllPackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56f8d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "ReadAllPackets", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor.ReadAllPackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)(::LiteNetLib::Utils::NetDataReader*, ::System::Object*)>(
    &::LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56f8dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "ReadAllPackets", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor.ReadPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::LiteNetLib::Utils::NetPacketProcessor::ReadPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56f8da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "ReadPacket", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetPacketProcessor.ReadPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetPacketProcessor::*)(::LiteNetLib::Utils::NetDataReader*, ::System::Object*)>(
    &::LiteNetLib::Utils::NetPacketProcessor::ReadPacket)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56f8e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "ReadPacket", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::Utils::NetSerializer*& LiteNetLib::Utils::NetPacketProcessor::__cordl_internal_get__netSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netSerializer;
}
constexpr ::LiteNetLib::Utils::NetSerializer* const& LiteNetLib::Utils::NetPacketProcessor::__cordl_internal_get__netSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netSerializer;
}
constexpr void LiteNetLib::Utils::NetPacketProcessor::__cordl_internal_set__netSerializer(::LiteNetLib::Utils::NetSerializer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____netSerializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>*&
LiteNetLib::Utils::NetPacketProcessor::__cordl_internal_get__callbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>* const&
LiteNetLib::Utils::NetPacketProcessor::__cordl_internal_get__callbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacks;
}
constexpr void
LiteNetLib::Utils::NetPacketProcessor::__cordl_internal_set__callbacks(::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& LiteNetLib::Utils::NetPacketProcessor::__cordl_internal_get__netDataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netDataWriter;
}
constexpr ::LiteNetLib::Utils::NetDataWriter* const& LiteNetLib::Utils::NetPacketProcessor::__cordl_internal_get__netDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netDataWriter;
}
constexpr void LiteNetLib::Utils::NetPacketProcessor::__cordl_internal_set__netDataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____netDataWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void LiteNetLib::Utils::NetPacketProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NetPacketProcessor::_ctor(int32_t maxStringLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxStringLength);
}
template <typename T> inline uint64_t LiteNetLib::Utils::NetPacketProcessor::GetHash() {
  auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), 4)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate* LiteNetLib::Utils::NetPacketProcessor::GetCallbackFromData(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*, false>(this, ___internal_method, reader);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::WriteHash(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), 6)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "RegisterNestedType",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, T>* writeDelegate,
                                                                      ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, T>* readDelegate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "RegisterNestedType",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::LiteNetLib::Utils::NetDataReader*, T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writeDelegate, readDelegate);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType(::System::Func_1<T>* constructor) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "RegisterNestedType",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructor);
}
inline void LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "ReadAllPackets", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "ReadAllPackets", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
inline void LiteNetLib::Utils::NetPacketProcessor::ReadPacket(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "ReadPacket", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::Send(::LiteNetLib::NetPeer* peer, T packet, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "Send",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, packet, options);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::SendNetSerializable(::LiteNetLib::NetPeer* peer, T packet, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "SendNetSerializable",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, packet, options);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::Send(::LiteNetLib::NetManager* manager, T packet, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "Send",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager, packet, options);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::SendNetSerializable(::LiteNetLib::NetManager* manager, T packet, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "SendNetSerializable",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager, packet, options);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::Write(::LiteNetLib::Utils::NetDataWriter* writer, T packet) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "Write",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, packet);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::WriteNetSerializable(::LiteNetLib::Utils::NetDataWriter* writer, T packet) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "WriteNetSerializable",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, packet);
}
template <typename T> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> LiteNetLib::Utils::NetPacketProcessor::Write(T packet) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "Write",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, packet);
}
template <typename T> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> LiteNetLib::Utils::NetPacketProcessor::WriteNetSerializable(T packet) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "WriteNetSerializable",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, packet);
}
inline void LiteNetLib::Utils::NetPacketProcessor::ReadPacket(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "ReadPacket", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, userData);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::Subscribe(::System::Action_1<T>* onReceive, ::System::Func_1<T>* packetConstructor) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "Subscribe",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onReceive, packetConstructor);
}
template <typename T, typename TUserData> inline void LiteNetLib::Utils::NetPacketProcessor::Subscribe(::System::Action_2<T, TUserData>* onReceive, ::System::Func_1<T>* packetConstructor) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "Subscribe",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T, TUserData>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onReceive, packetConstructor);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeReusable(::System::Action_1<T>* onReceive) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "SubscribeReusable",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onReceive);
}
template <typename T, typename TUserData> inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeReusable(::System::Action_2<T, TUserData>* onReceive) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "SubscribeReusable",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T, TUserData>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onReceive);
}
template <typename T, typename TUserData>
inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(::System::Action_2<T, TUserData>* onReceive, ::System::Func_1<T>* packetConstructor) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "SubscribeNetSerializable",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T, TUserData>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onReceive, packetConstructor);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(::System::Action_1<T>* onReceive, ::System::Func_1<T>* packetConstructor) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "SubscribeNetSerializable",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onReceive, packetConstructor);
}
template <typename T, typename TUserData> inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(::System::Action_2<T, TUserData>* onReceive) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "SubscribeNetSerializable",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T, TUserData>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onReceive);
}
template <typename T> inline void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(::System::Action_1<T>* onReceive) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "SubscribeNetSerializable",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onReceive);
}
template <typename T> inline bool LiteNetLib::Utils::NetPacketProcessor::RemoveSubscription() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetPacketProcessor*>::get(), "RemoveSubscription",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::LiteNetLib::Utils::NetPacketProcessor* LiteNetLib::Utils::NetPacketProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor*>());
}
inline ::LiteNetLib::Utils::NetPacketProcessor* LiteNetLib::Utils::NetPacketProcessor::New_ctor(int32_t maxStringLength) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NetPacketProcessor*>(maxStringLength));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NetPacketProcessor::NetPacketProcessor() {}
