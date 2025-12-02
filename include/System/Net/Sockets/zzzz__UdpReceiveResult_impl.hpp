#pragma once
// IWYU pragma private; include "System/Net/Sockets/UdpReceiveResult.hpp"
#include "System/Net/Sockets/zzzz__UdpReceiveResult_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::UdpReceiveResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::UdpReceiveResult::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Net::IPEndPoint*)>(
    &::System::Net::Sockets::UdpReceiveResult::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x614fadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpReceiveResult.get_Buffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Net::Sockets::UdpReceiveResult::*)()>(
    &::System::Net::Sockets::UdpReceiveResult::get_Buffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614fb5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(), "get_Buffer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpReceiveResult.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::UdpReceiveResult::*)()>(&::System::Net::Sockets::UdpReceiveResult::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x614fb64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpReceiveResult.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::UdpReceiveResult::*)(::System::Object*)>(
    &::System::Net::Sockets::UdpReceiveResult::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x614fbac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpReceiveResult.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::UdpReceiveResult::*)(::System::Net::Sockets::UdpReceiveResult)>(
    &::System::Net::Sockets::UdpReceiveResult::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x614fc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::UdpReceiveResult>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Sockets::UdpReceiveResult::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, remoteEndPoint);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Net::Sockets::UdpReceiveResult::get_Buffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(), "get_Buffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t System::Net::Sockets::UdpReceiveResult::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Net::Sockets::UdpReceiveResult::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool System::Net::Sockets::UdpReceiveResult::Equals(::System::Net::Sockets::UdpReceiveResult other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::UdpReceiveResult>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::UdpReceiveResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>"
constexpr System::Net::Sockets::UdpReceiveResult::operator ::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>*() {
  return static_cast<::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>"
constexpr ::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>* System::Net::Sockets::UdpReceiveResult::i___System__IEquatable_1___System__Net__Sockets__UdpReceiveResult_() {
  return static_cast<::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_remoteEndPoint", ty:
// "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::UdpReceiveResult::UdpReceiveResult(::ArrayW<uint8_t, ::Array<uint8_t>*> m_buffer, ::System::Net::IPEndPoint* m_remoteEndPoint) noexcept {
  this->m_buffer = m_buffer;
  this->m_remoteEndPoint = m_remoteEndPoint;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::UdpReceiveResult::UdpReceiveResult() {}
