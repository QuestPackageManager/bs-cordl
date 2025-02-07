#pragma once
// IWYU pragma private; include "LiteNetLib/Layers/PacketLayerBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Layers::PacketLayerBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Layers::PacketLayerBase::*)(int32_t)>(&::LiteNetLib::Layers::PacketLayerBase::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ac5324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::PacketLayerBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::PacketLayerBase.ProcessInboundPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Layers::PacketLayerBase::*)(
    ::System::Net::IPEndPoint*, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ::ByRef<int32_t>, ::ByRef<int32_t>)>(&::LiteNetLib::Layers::PacketLayerBase::ProcessInboundPacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::PacketLayerBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::PacketLayerBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::PacketLayerBase.ProcessOutBoundPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Layers::PacketLayerBase::*)(
    ::System::Net::IPEndPoint*, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ::ByRef<int32_t>, ::ByRef<int32_t>)>(&::LiteNetLib::Layers::PacketLayerBase::ProcessOutBoundPacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::PacketLayerBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::PacketLayerBase*>::get(), 5));
    return ___internal_method;
  }
};
constexpr int32_t& LiteNetLib::Layers::PacketLayerBase::__cordl_internal_get_ExtraPacketSizeForLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtraPacketSizeForLayer;
}
constexpr int32_t const& LiteNetLib::Layers::PacketLayerBase::__cordl_internal_get_ExtraPacketSizeForLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtraPacketSizeForLayer;
}
constexpr void LiteNetLib::Layers::PacketLayerBase::__cordl_internal_set_ExtraPacketSizeForLayer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExtraPacketSizeForLayer = value;
}
inline void LiteNetLib::Layers::PacketLayerBase::_ctor(int32_t extraPacketSizeForLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::PacketLayerBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, extraPacketSizeForLayer);
}
inline void LiteNetLib::Layers::PacketLayerBase::ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset,
                                                                      ::ByRef<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::PacketLayerBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline void LiteNetLib::Layers::PacketLayerBase::ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset,
                                                                       ::ByRef<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Layers::PacketLayerBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline ::LiteNetLib::Layers::PacketLayerBase* LiteNetLib::Layers::PacketLayerBase::New_ctor(int32_t extraPacketSizeForLayer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Layers::PacketLayerBase*>(extraPacketSizeForLayer));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Layers::PacketLayerBase::PacketLayerBase() {}
