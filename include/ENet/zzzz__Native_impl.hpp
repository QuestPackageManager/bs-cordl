#pragma once
// IWYU pragma private; include "ENet\Native.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ENet/zzzz__Native_def.hpp"
#include "ENet/zzzz__ENetAddress_def.hpp"
#include "ENet/zzzz__ENetCallbacks_def.hpp"
#include "ENet/zzzz__ENetEvent_def.hpp"
#include "ENet/zzzz__ENetSslConfiguration_def.hpp"
#include "ENet/zzzz__PacketFlags_def.hpp"
#include "ENet/zzzz__PeerState_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::ENet::Native.OPENSSL_init_crypto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t, ::System::IntPtr)>(&::ENet::Native::OPENSSL_init_crypto)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5895ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "OPENSSL_init_crypto", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.OPENSSL_init_ssl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t, ::System::IntPtr)>(&::ENet::Native::OPENSSL_init_ssl)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5895b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "OPENSSL_init_ssl", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::ENet::Native::enet_initialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5895cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_initialize_with_callbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t, ::by_ref<::ENet::ENetCallbacks>)>(&::ENet::Native::enet_initialize_with_callbacks)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5895e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_initialize_with_callbacks", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::ENet::ENetCallbacks>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_deinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::ENet::Native::enet_deinitialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5895f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_deinitialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_linked_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::ENet::Native::enet_linked_version)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5895c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_linked_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_time_get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::ENet::Native::enet_time_get)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5895a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_time_get", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_crc64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr, int32_t)>(&::ENet::Native::enet_crc64)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5895f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_crc64", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_address_set_ip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ENet::ENetAddress>, ::StringW)>(&::ENet::Native::enet_address_set_ip)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5891fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_address_set_ip", {}, { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_address_set_hostname
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ENet::ENetAddress>, ::StringW)>(&::ENet::Native::enet_address_set_hostname)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5892220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_address_set_hostname", {}, { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_address_get_ip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ENet::ENetAddress>, ::System::Text::StringBuilder*, ::System::IntPtr)>(&::ENet::Native::enet_address_get_ip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5891e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                            { "enet_address_get_ip", {}, { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_address_get_hostname
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ENet::ENetAddress>, ::System::Text::StringBuilder*, ::System::IntPtr)>(&::ENet::Native::enet_address_get_hostname)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58920fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::ENet::Native*>(),
            { "enet_address_get_hostname", {}, { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<uint8_t>, ::System::IntPtr, ::ENet::PacketFlags)>(&::ENet::Native::enet_packet_create)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5892b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                                { "enet_packet_create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::ENet::PacketFlags)>(&::ENet::Native::enet_packet_create)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5892c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                                { "enet_packet_create", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_create_offset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<uint8_t>, ::System::IntPtr, ::System::IntPtr, ::ENet::PacketFlags)>(&::ENet::Native::enet_packet_create_offset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5892dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_create_offset",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                     ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_create_offset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::ENet::PacketFlags)>(&::ENet::Native::enet_packet_create_offset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5892f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_create_offset",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                     ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_check_references
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_packet_check_references)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5892810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_check_references", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_get_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::ENet::Native::enet_packet_get_data)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x589259c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_get_data", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_get_user_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::ENet::Native::enet_packet_get_user_data)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5892630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_get_user_data", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_set_user_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr)>(&::ENet::Native::enet_packet_set_user_data)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58926d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_set_user_data", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_packet_get_length)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5892770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_get_length", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_set_free_callback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::ENet::Native::enet_packet_set_free_callback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58928b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_set_free_callback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_packet_dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::ENet::Native::enet_packet_dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58924a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_dispose", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::ENet::ENetAddress>, ::System::IntPtr, ::System::IntPtr, uint32_t, uint32_t, int32_t)>(
    &::ENet::Native::enet_host_create)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5895fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_create",
                                                                  {},
                                                                  { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, uint32_t, uint32_t, int32_t)>(&::ENet::Native::enet_host_create)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58960a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_create",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                        ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_create_ssl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::ENet::ENetAddress>, ::System::IntPtr, ::System::IntPtr, uint32_t, uint32_t, int32_t,
                                                                            ::by_ref<::ENet::ENetSslConfiguration>)>(&::ENet::Native::enet_host_create_ssl)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x589380c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_create_ssl",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                     ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ENet::ENetSslConfiguration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_create_ssl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, uint32_t, uint32_t, int32_t, ::by_ref<::ENet::ENetSslConfiguration>)>(
    &::ENet::Native::enet_host_create_ssl)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5893928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                                             { "enet_host_create_ssl",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ENet::ENetSslConfiguration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::ENet::ENetAddress>, ::System::IntPtr, uint32_t)>(&::ENet::Native::enet_host_connect)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58940ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::ENet::Native*>(),
            { "enet_host_connect", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_broadcast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint8_t, ::System::IntPtr)>(&::ENet::Native::enet_host_broadcast)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5893b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_broadcast", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_broadcast_exclude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint8_t, ::System::IntPtr, ::System::IntPtr)>(&::ENet::Native::enet_host_broadcast_exclude)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5893c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::ENet::Native*>(),
            { "enet_host_broadcast_exclude", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_broadcast_selective
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint8_t, ::System::IntPtr, ::ArrayW<::System::IntPtr>, ::System::IntPtr)>(
    &::ENet::Native::enet_host_broadcast_selective)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5893dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_broadcast_selective",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                     ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_service
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ENet::ENetEvent>, uint32_t)>(&::ENet::Native::enet_host_service)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5894234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                                { "enet_host_service", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ENet::ENetEvent>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_check_events
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ENet::ENetEvent>)>(&::ENet::Native::enet_host_check_events)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5893ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_check_events", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ENet::ENetEvent>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_channel_limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::ENet::Native::enet_host_channel_limit)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58943bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_channel_limit", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_bandwidth_limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t, uint32_t)>(&::ENet::Native::enet_host_bandwidth_limit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58942f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_bandwidth_limit", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_get_peers_count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_host_get_peers_count)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58932c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_get_peers_count", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_get_packets_sent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_host_get_packets_sent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5893354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_get_packets_sent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_get_packets_received
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_host_get_packets_received)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58933e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_get_packets_received", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_get_bytes_sent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_host_get_bytes_sent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x589347c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_get_bytes_sent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_get_bytes_received
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_host_get_bytes_received)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5893510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_get_bytes_received", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_set_max_duplicate_peers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint16_t)>(&::ENet::Native::enet_host_set_max_duplicate_peers)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5894468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_set_max_duplicate_peers", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_set_intercept_callback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::ENet::Native::enet_host_set_intercept_callback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5894514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_set_intercept_callback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_set_checksum_callback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::ENet::Native::enet_host_set_checksum_callback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5894658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_set_checksum_callback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::ENet::Native::enet_host_flush)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x589478c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_flush", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::ENet::Native::enet_host_destroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5893174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_host_prevent_connections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint8_t)>(&::ENet::Native::enet_host_prevent_connections)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5893a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_prevent_connections", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_throttle_configure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t, uint32_t, uint32_t, uint32_t)>(&::ENet::Native::enet_peer_throttle_configure)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5895364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_throttle_configure",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                                     ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_id)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x589481c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_id", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_ip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<uint8_t>, ::System::IntPtr)>(&::ENet::Native::enet_peer_get_ip)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58949c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                                { "enet_peer_get_ip", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_port
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_port)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5894b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_port", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_mtu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_mtu)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5894b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_mtu", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::PeerState (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_state)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5894c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_state", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_rtt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_rtt)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5894cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_rtt", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_last_rtt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_last_rtt)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5894d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_last_rtt", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_lastsendtime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_lastsendtime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5894de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_lastsendtime", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_lastreceivetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_lastreceivetime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5894e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_lastreceivetime", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_packets_sent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_packets_sent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5894f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_packets_sent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_packets_lost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_packets_lost)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5894fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_packets_lost", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_packets_throttle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_packets_throttle)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5895038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_packets_throttle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_bytes_sent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_bytes_sent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58950cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_bytes_sent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_bytes_received
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_bytes_received)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5895160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_bytes_received", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_get_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_get_data)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58951f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_data", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_set_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::ENet::Native::enet_peer_set_data)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5895298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_set_data", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, uint8_t, ::System::IntPtr)>(&::ENet::Native::enet_peer_send)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5895448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_send", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_receive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<uint8_t>)>(&::ENet::Native::enet_peer_receive)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5895524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_receive", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_ping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_ping)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58955c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_ping", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_ping_interval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::ENet::Native::enet_peer_ping_interval)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5895664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_ping_interval", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t, uint32_t, uint32_t)>(&::ENet::Native::enet_peer_timeout)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5895728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                         { "enet_peer_timeout", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::ENet::Native::enet_peer_disconnect)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58957ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_disconnect", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_disconnect_now
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::ENet::Native::enet_peer_disconnect_now)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5895898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_disconnect_now", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_disconnect_later
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::ENet::Native::enet_peer_disconnect_later)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5895944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_disconnect_later", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Native.enet_peer_reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::ENet::Native::enet_peer_reset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58959e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_reset", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline int32_t ENet::Native::OPENSSL_init_crypto(uint64_t opts, ::System::IntPtr settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "OPENSSL_init_crypto", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, opts, settings);
}
inline int32_t ENet::Native::OPENSSL_init_ssl(uint64_t opts, ::System::IntPtr settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "OPENSSL_init_ssl", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, opts, settings);
}
inline int32_t ENet::Native::enet_initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t ENet::Native::enet_initialize_with_callbacks(uint32_t version, ::by_ref<::ENet::ENetCallbacks> inits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_initialize_with_callbacks", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::ENet::ENetCallbacks>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, version, inits);
}
inline void ENet::Native::enet_deinitialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_deinitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline uint32_t ENet::Native::enet_linked_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_linked_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint32_t ENet::Native::enet_time_get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_time_get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint64_t ENet::Native::enet_crc64(::System::IntPtr buffers, int32_t bufferCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_crc64", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, buffers, bufferCount);
}
inline int32_t ENet::Native::enet_address_set_ip(::by_ref<::ENet::ENetAddress> address, ::StringW ip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_address_set_ip", {}, { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, address, ip);
}
inline int32_t ENet::Native::enet_address_set_hostname(::by_ref<::ENet::ENetAddress> address, ::StringW hostName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_address_set_hostname", {}, { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, address, hostName);
}
inline int32_t ENet::Native::enet_address_get_ip(::by_ref<::ENet::ENetAddress> address, ::System::Text::StringBuilder* ip, ::System::IntPtr ipLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                          { "enet_address_get_ip", {}, { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, address, ip, ipLength);
}
inline int32_t ENet::Native::enet_address_get_hostname(::by_ref<::ENet::ENetAddress> address, ::System::Text::StringBuilder* hostName, ::System::IntPtr nameLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::ENet::Native*>(),
          { "enet_address_get_hostname", {}, { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, address, hostName, nameLength);
}
inline ::System::IntPtr ENet::Native::enet_packet_create(::ArrayW<uint8_t> data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                              { "enet_packet_create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, dataLength, flags);
}
inline ::System::IntPtr ENet::Native::enet_packet_create(::System::IntPtr data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                              { "enet_packet_create", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, dataLength, flags);
}
inline ::System::IntPtr ENet::Native::enet_packet_create_offset(::ArrayW<uint8_t> data, ::System::IntPtr dataLength, ::System::IntPtr dataOffset, ::ENet::PacketFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_create_offset",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                   ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, dataLength, dataOffset, flags);
}
inline ::System::IntPtr ENet::Native::enet_packet_create_offset(::System::IntPtr data, ::System::IntPtr dataLength, ::System::IntPtr dataOffset, ::ENet::PacketFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::ENet::Native*>(),
          { "enet_packet_create_offset", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ENet::PacketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, dataLength, dataOffset, flags);
}
inline int32_t ENet::Native::enet_packet_check_references(::System::IntPtr packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_check_references", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, packet);
}
inline ::System::IntPtr ENet::Native::enet_packet_get_data(::System::IntPtr packet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_get_data", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, packet);
}
inline ::System::IntPtr ENet::Native::enet_packet_get_user_data(::System::IntPtr packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_get_user_data", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, packet);
}
inline ::System::IntPtr ENet::Native::enet_packet_set_user_data(::System::IntPtr packet, ::System::IntPtr userData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_set_user_data", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, packet, userData);
}
inline int32_t ENet::Native::enet_packet_get_length(::System::IntPtr packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_get_length", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, packet);
}
inline void ENet::Native::enet_packet_set_free_callback(::System::IntPtr packet, ::System::IntPtr callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_set_free_callback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, packet, callback);
}
inline void ENet::Native::enet_packet_dispose(::System::IntPtr packet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_packet_dispose", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, packet);
}
inline ::System::IntPtr ENet::Native::enet_host_create(::by_ref<::ENet::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth,
                                                       uint32_t outgoingBandwidth, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_create",
                                                                             {},
                                                                             { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth, bufferSize);
}
inline ::System::IntPtr ENet::Native::enet_host_create(::System::IntPtr address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth,
                                                       int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_create",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                      ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth, bufferSize);
}
inline ::System::IntPtr ENet::Native::enet_host_create_ssl(::by_ref<::ENet::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth,
                                                           uint32_t outgoingBandwidth, int32_t bufferSize, ::by_ref<::ENet::ENetSslConfiguration> sslConfiguration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_create_ssl",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                   ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ENet::ENetSslConfiguration>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth, bufferSize, sslConfiguration);
}
inline ::System::IntPtr ENet::Native::enet_host_create_ssl(::System::IntPtr address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth,
                                                           int32_t bufferSize, ::by_ref<::ENet::ENetSslConfiguration> sslConfiguration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                                           { "enet_host_create_ssl",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ENet::ENetSslConfiguration>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth, bufferSize, sslConfiguration);
}
inline ::System::IntPtr ENet::Native::enet_host_connect(::System::IntPtr host, ::by_ref<::ENet::ENetAddress> address, ::System::IntPtr channelCount, uint32_t data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::ENet::Native*>(),
          { "enet_host_connect", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ENet::ENetAddress>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, host, address, channelCount, data);
}
inline void ENet::Native::enet_host_broadcast(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_broadcast", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host, channelID, packet);
}
inline void ENet::Native::enet_host_broadcast_exclude(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet, ::System::IntPtr excludedPeer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::ENet::Native*>(),
          { "enet_host_broadcast_exclude", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host, channelID, packet, excludedPeer);
}
inline void ENet::Native::enet_host_broadcast_selective(::System::IntPtr host, uint8_t channelID, ::System::IntPtr packet, ::ArrayW<::System::IntPtr> peers, ::System::IntPtr peersLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_broadcast_selective",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                   ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host, channelID, packet, peers, peersLength);
}
inline int32_t ENet::Native::enet_host_service(::System::IntPtr host, ::by_ref<::ENet::ENetEvent> event, uint32_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                              { "enet_host_service", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ENet::ENetEvent>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, host, event, timeout);
}
inline int32_t ENet::Native::enet_host_check_events(::System::IntPtr host, ::by_ref<::ENet::ENetEvent> event) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_check_events", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ENet::ENetEvent>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, host, event);
}
inline void ENet::Native::enet_host_channel_limit(::System::IntPtr host, ::System::IntPtr channelLimit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_channel_limit", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host, channelLimit);
}
inline void ENet::Native::enet_host_bandwidth_limit(::System::IntPtr host, uint32_t incomingBandwidth, uint32_t outgoingBandwidth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_bandwidth_limit", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host, incomingBandwidth, outgoingBandwidth);
}
inline uint32_t ENet::Native::enet_host_get_peers_count(::System::IntPtr host) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_get_peers_count", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, host);
}
inline uint32_t ENet::Native::enet_host_get_packets_sent(::System::IntPtr host) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_get_packets_sent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, host);
}
inline uint32_t ENet::Native::enet_host_get_packets_received(::System::IntPtr host) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_get_packets_received", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, host);
}
inline uint32_t ENet::Native::enet_host_get_bytes_sent(::System::IntPtr host) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_get_bytes_sent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, host);
}
inline uint32_t ENet::Native::enet_host_get_bytes_received(::System::IntPtr host) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_get_bytes_received", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, host);
}
inline void ENet::Native::enet_host_set_max_duplicate_peers(::System::IntPtr host, uint16_t number) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_set_max_duplicate_peers", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host, number);
}
inline void ENet::Native::enet_host_set_intercept_callback(::System::IntPtr host, ::System::IntPtr callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_set_intercept_callback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host, callback);
}
inline void ENet::Native::enet_host_set_checksum_callback(::System::IntPtr host, ::System::IntPtr callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_set_checksum_callback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host, callback);
}
inline void ENet::Native::enet_host_flush(::System::IntPtr host) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_flush", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host);
}
inline void ENet::Native::enet_host_destroy(::System::IntPtr host) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host);
}
inline void ENet::Native::enet_host_prevent_connections(::System::IntPtr host, uint8_t state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_host_prevent_connections", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, host, state);
}
inline void ENet::Native::enet_peer_throttle_configure(::System::IntPtr peer, uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_throttle_configure",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                                   ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peer, interval, acceleration, deceleration, threshold);
}
inline uint32_t ENet::Native::enet_peer_get_id(::System::IntPtr peer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_id", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, peer);
}
inline int32_t ENet::Native::enet_peer_get_ip(::System::IntPtr peer, ::ArrayW<uint8_t> ip, ::System::IntPtr ipLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                              { "enet_peer_get_ip", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, peer, ip, ipLength);
}
inline uint16_t ENet::Native::enet_peer_get_port(::System::IntPtr peer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_port", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, peer);
}
inline uint32_t ENet::Native::enet_peer_get_mtu(::System::IntPtr peer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_mtu", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, peer);
}
inline ::ENet::PeerState ENet::Native::enet_peer_get_state(::System::IntPtr peer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_state", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ENet::PeerState>(nullptr, ___internal_method, peer);
}
inline uint32_t ENet::Native::enet_peer_get_rtt(::System::IntPtr peer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_rtt", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, peer);
}
inline uint32_t ENet::Native::enet_peer_get_last_rtt(::System::IntPtr peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_last_rtt", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, peer);
}
inline uint32_t ENet::Native::enet_peer_get_lastsendtime(::System::IntPtr peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_lastsendtime", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, peer);
}
inline uint32_t ENet::Native::enet_peer_get_lastreceivetime(::System::IntPtr peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_lastreceivetime", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, peer);
}
inline uint64_t ENet::Native::enet_peer_get_packets_sent(::System::IntPtr peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_packets_sent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, peer);
}
inline uint64_t ENet::Native::enet_peer_get_packets_lost(::System::IntPtr peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_packets_lost", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, peer);
}
inline float_t ENet::Native::enet_peer_get_packets_throttle(::System::IntPtr peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_packets_throttle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, peer);
}
inline uint64_t ENet::Native::enet_peer_get_bytes_sent(::System::IntPtr peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_bytes_sent", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, peer);
}
inline uint64_t ENet::Native::enet_peer_get_bytes_received(::System::IntPtr peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_bytes_received", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, peer);
}
inline ::System::IntPtr ENet::Native::enet_peer_get_data(::System::IntPtr peer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_get_data", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, peer);
}
inline void ENet::Native::enet_peer_set_data(::System::IntPtr peer, ::System::IntPtr data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_set_data", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peer, data);
}
inline int32_t ENet::Native::enet_peer_send(::System::IntPtr peer, uint8_t channelID, ::System::IntPtr packet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_send", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, peer, channelID, packet);
}
inline ::System::IntPtr ENet::Native::enet_peer_receive(::System::IntPtr peer, ::by_ref<uint8_t> channelID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_receive", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, peer, channelID);
}
inline void ENet::Native::enet_peer_ping(::System::IntPtr peer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_ping", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peer);
}
inline void ENet::Native::enet_peer_ping_interval(::System::IntPtr peer, uint32_t pingInterval) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_ping_interval", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peer, pingInterval);
}
inline void ENet::Native::enet_peer_timeout(::System::IntPtr peer, uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ENet::Native*>(),
                                       { "enet_peer_timeout", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peer, timeoutLimit, timeoutMinimum, timeoutMaximum);
}
inline void ENet::Native::enet_peer_disconnect(::System::IntPtr peer, uint32_t data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_disconnect", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peer, data);
}
inline void ENet::Native::enet_peer_disconnect_now(::System::IntPtr peer, uint32_t data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_disconnect_now", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peer, data);
}
inline void ENet::Native::enet_peer_disconnect_later(::System::IntPtr peer, uint32_t data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_disconnect_later", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peer, data);
}
inline void ENet::Native::enet_peer_reset(::System::IntPtr peer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Native*>(), { "enet_peer_reset", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peer);
}
// Ctor Parameters []
constexpr ::ENet::Native::Native() {}
