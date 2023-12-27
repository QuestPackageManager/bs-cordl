#pragma once
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename TData> inline void GlobalNamespace::INetworkPacketSubSerializer_1<TData>::Deserialize(::LiteNetLib::Utils::NetDataReader* reader, int32_t length, TData data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, length, data);
}
template <typename TData> inline void GlobalNamespace::INetworkPacketSubSerializer_1<TData>::Serialize(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, packet);
}
template <typename TData> inline bool GlobalNamespace::INetworkPacketSubSerializer_1<TData>::HandlesType(::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
