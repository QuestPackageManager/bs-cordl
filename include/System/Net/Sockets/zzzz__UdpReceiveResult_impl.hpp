#pragma once
// IWYU pragma private; include "System/Net/Sockets/UdpReceiveResult.hpp"
#include "System/Net/Sockets/zzzz__UdpReceiveResult_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::UdpReceiveResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::UdpReceiveResult::*)(::ArrayW<uint8_t>, ::System::Net::IPEndPoint*)>(
    &::System::Net::Sockets::UdpReceiveResult::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63669a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpReceiveResult.get_Buffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::Sockets::UdpReceiveResult::*)()>(&::System::Net::Sockets::UdpReceiveResult::get_Buffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6366a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(), { "get_Buffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpReceiveResult.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::UdpReceiveResult::*)()>(&::System::Net::Sockets::UdpReceiveResult::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6366a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(), { ::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpReceiveResult.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::UdpReceiveResult::*)(::System::Object*)>(&::System::Net::Sockets::UdpReceiveResult::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6366a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(), { ::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::UdpReceiveResult.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::UdpReceiveResult::*)(::System::Net::Sockets::UdpReceiveResult)>(
    &::System::Net::Sockets::UdpReceiveResult::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6366af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(), { "Equals", {}, { ::i2c::type_of<::System::Net::Sockets::UdpReceiveResult>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Sockets::UdpReceiveResult::_ctor(::ArrayW<uint8_t> buffer, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, remoteEndPoint);
}
inline ::ArrayW<uint8_t> System::Net::Sockets::UdpReceiveResult::get_Buffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(), { "get_Buffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline int32_t System::Net::Sockets::UdpReceiveResult::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Net::Sockets::UdpReceiveResult::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Net::Sockets::UdpReceiveResult::Equals(::System::Net::Sockets::UdpReceiveResult other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::UdpReceiveResult>(), { "Equals", {}, { ::i2c::type_of<::System::Net::Sockets::UdpReceiveResult>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>"
constexpr System::Net::Sockets::UdpReceiveResult::operator ::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>*() {
  return static_cast<::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>"
constexpr ::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>* System::Net::Sockets::UdpReceiveResult::i___System__IEquatable_1___System__Net__Sockets__UdpReceiveResult_() {
  return static_cast<::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_remoteEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Net::Sockets::UdpReceiveResult::UdpReceiveResult(::ArrayW<uint8_t> m_buffer, ::System::Net::IPEndPoint* m_remoteEndPoint) noexcept {
  this->m_buffer = m_buffer;
  this->m_remoteEndPoint = m_remoteEndPoint;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::UdpReceiveResult::UdpReceiveResult() {}
