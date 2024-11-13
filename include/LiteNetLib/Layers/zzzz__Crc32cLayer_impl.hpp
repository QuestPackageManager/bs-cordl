#pragma once
// IWYU pragma private; include "LiteNetLib/Layers/Crc32cLayer.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_impl.hpp"
#include "LiteNetLib/Layers/zzzz__Crc32cLayer_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Layers::Crc32cLayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Layers::Crc32cLayer::*)()>(&::LiteNetLib::Layers::Crc32cLayer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a699a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::Crc32cLayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::Crc32cLayer.ProcessInboundPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Layers::Crc32cLayer::*)(
    ::System::Net::IPEndPoint*, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ByRef<int32_t>, ByRef<int32_t>)>(&::LiteNetLib::Layers::Crc32cLayer::ProcessInboundPacket)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3a699ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::Crc32cLayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::Crc32cLayer*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::Crc32cLayer.ProcessOutBoundPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Layers::Crc32cLayer::*)(
    ::System::Net::IPEndPoint*, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ByRef<int32_t>, ByRef<int32_t>)>(&::LiteNetLib::Layers::Crc32cLayer::ProcessOutBoundPacket)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3a69b5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::Crc32cLayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::Crc32cLayer*>::get(), 5));
    return ___internal_method;
  }
};
inline ::LiteNetLib::Layers::Crc32cLayer* LiteNetLib::Layers::Crc32cLayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Layers::Crc32cLayer*>());
}
inline void LiteNetLib::Layers::Crc32cLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::Crc32cLayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::Layers::Crc32cLayer::ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ByRef<int32_t> offset,
                                                                  ByRef<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::Crc32cLayer*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline void LiteNetLib::Layers::Crc32cLayer::ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ByRef<int32_t> offset,
                                                                   ByRef<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::Crc32cLayer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
// Ctor Parameters []
constexpr ::LiteNetLib::Layers::Crc32cLayer::Crc32cLayer() {}
