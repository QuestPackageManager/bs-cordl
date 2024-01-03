#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IPacketPool_1<T>"
template <typename T> constexpr GlobalNamespace::PacketPool_1<T>::operator ::GlobalNamespace::IPacketPool_1<T>*() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPacketPool_1<T>"
template <typename T> constexpr ::GlobalNamespace::IPacketPool_1<T>* GlobalNamespace::PacketPool_1<T>::i___GlobalNamespace__IPacketPool_1_T_() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPacketPool"
template <typename T> constexpr GlobalNamespace::PacketPool_1<T>::operator ::GlobalNamespace::IPacketPool*() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPacketPool"
template <typename T> constexpr ::GlobalNamespace::IPacketPool* GlobalNamespace::PacketPool_1<T>::i___GlobalNamespace__IPacketPool() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>*& GlobalNamespace::PacketPool_1<T>::__get__bag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bag;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentBag_1<T>*> const& GlobalNamespace::PacketPool_1<T>::__get__bag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bag;
}
template <typename T> constexpr void GlobalNamespace::PacketPool_1<T>::__set__bag(::System::Collections::Concurrent::ConcurrentBag_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T GlobalNamespace::PacketPool_1<T>::Obtain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(), "Obtain",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::PacketPool_1<T>::Release(T t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(), "Release", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
template <typename T> inline void GlobalNamespace::PacketPool_1<T>::Fill() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(), "Fill",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::PacketPool_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::PacketPool_1<T>::IPacketPool_Release(::GlobalNamespace::IPoolablePacket* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(), "IPacketPool.Release", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolablePacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
template <typename T> inline ::GlobalNamespace::PacketPool_1<T>* GlobalNamespace::PacketPool_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PacketPool_1<T>*>());
}
template <typename T> inline void GlobalNamespace::PacketPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PacketPool_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::PacketPool_1<T>::PacketPool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
