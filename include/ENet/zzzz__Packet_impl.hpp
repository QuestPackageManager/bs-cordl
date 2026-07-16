#pragma once
// IWYU pragma private; include "ENet/Packet.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "ENet/zzzz__Packet_def.hpp"
#include "ENet/zzzz__PacketFlags_def.hpp"
#include "ENet/zzzz__PacketFreeCallback_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::ENet::Packet.get_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::ENet::Packet::*)()>(&::ENet::Packet::get_NativeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58945f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_NativeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.set_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::System::IntPtr)>(&::ENet::Packet::set_NativeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58945fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "set_NativeData", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::System::IntPtr)>(&::ENet::Packet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5894604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)()>(&::ENet::Packet::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x589460c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.get_IsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ENet::Packet::*)()>(&::ENet::Packet::get_IsSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58946a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_IsSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::ENet::Packet::*)()>(&::ENet::Packet::get_Data)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58946b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.get_UserData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::ENet::Packet::*)()>(&::ENet::Packet::get_UserData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58947a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_UserData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.set_UserData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::System::IntPtr)>(&::ENet::Packet::set_UserData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5894838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "set_UserData", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ENet::Packet::*)()>(&::ENet::Packet::get_Length)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58948e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.get_HasReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ENet::Packet::*)()>(&::ENet::Packet::get_HasReferences)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5894978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_HasReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.ThrowIfNotCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)()>(&::ENet::Packet::ThrowIfNotCreated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58946d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "ThrowIfNotCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.SetFreeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::System::IntPtr)>(&::ENet::Packet::SetFreeCallback)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5894a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "SetFreeCallback", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.SetFreeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::ENet::PacketFreeCallback*)>(&::ENet::Packet::SetFreeCallback)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5894ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "SetFreeCallback", {}, { ::i2c::type_of<::ENet::PacketFreeCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::ArrayW<uint8_t>)>(&::ENet::Packet::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5894b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::ArrayW<uint8_t>, int32_t)>(&::ENet::Packet::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5894bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::ArrayW<uint8_t>, ::ENet::PacketFlags)>(&::ENet::Packet::Create)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5894c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::ArrayW<uint8_t>, int32_t, ::ENet::PacketFlags)>(&::ENet::Packet::Create)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5894bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::System::IntPtr, int32_t, ::ENet::PacketFlags)>(&::ENet::Packet::Create)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5894d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Create", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ENet::PacketFlags)>(&::ENet::Packet::Create)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5894e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ENet::Packet>(),
                                         { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::System::IntPtr, int32_t, int32_t, ::ENet::PacketFlags)>(&::ENet::Packet::Create)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5894ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ENet::Packet>(),
                                         { "Create", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Packet.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Packet::*)(::ArrayW<uint8_t>, int32_t)>(&::ENet::Packet::CopyTo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5895160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr ENet::Packet::get_NativeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_NativeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void ENet::Packet::set_NativeData(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "set_NativeData", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void ENet::Packet::_ctor(::System::IntPtr packet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, packet);
}
inline void ENet::Packet::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool ENet::Packet::get_IsSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_IsSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::IntPtr ENet::Packet::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline ::System::IntPtr ENet::Packet::get_UserData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_UserData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void ENet::Packet::set_UserData(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "set_UserData", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t ENet::Packet::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool ENet::Packet::get_HasReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "get_HasReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void ENet::Packet::ThrowIfNotCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "ThrowIfNotCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void ENet::Packet::SetFreeCallback(::System::IntPtr callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "SetFreeCallback", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
inline void ENet::Packet::SetFreeCallback(::ENet::PacketFreeCallback* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "SetFreeCallback", {}, { ::i2c::type_of<::ENet::PacketFreeCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
inline void ENet::Packet::Create(::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
inline void ENet::Packet::Create(::ArrayW<uint8_t> data, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, length);
}
inline void ENet::Packet::Create(::ArrayW<uint8_t> data, ::ENet::PacketFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, flags);
}
inline void ENet::Packet::Create(::ArrayW<uint8_t> data, int32_t length, ::ENet::PacketFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, length, flags);
}
inline void ENet::Packet::Create(::System::IntPtr data, int32_t length, ::ENet::PacketFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "Create", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, length, flags);
}
inline void ENet::Packet::Create(::ArrayW<uint8_t> data, int32_t offset, int32_t length, ::ENet::PacketFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(),
                                              { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, offset, length, flags);
}
inline void ENet::Packet::Create(::System::IntPtr data, int32_t offset, int32_t length, ::ENet::PacketFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(),
                                              { "Create", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, offset, length, flags);
}
inline void ENet::Packet::CopyTo(::ArrayW<uint8_t> destination, int32_t startPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Packet>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destination, startPos);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr ENet::Packet::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ENet::Packet::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "nativePacket", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::Packet::Packet(::System::IntPtr nativePacket) noexcept {
  this->nativePacket = nativePacket;
}
// Ctor Parameters []
constexpr ::ENet::Packet::Packet() {}
