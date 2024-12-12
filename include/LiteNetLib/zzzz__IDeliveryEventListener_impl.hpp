#pragma once
// IWYU pragma private; include "LiteNetLib/IDeliveryEventListener.hpp"
#include "LiteNetLib/zzzz__IDeliveryEventListener_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline void LiteNetLib::IDeliveryEventListener::OnMessageDelivered(::LiteNetLib::NetPeer* peer, ::System::Object* userData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::IDeliveryEventListener*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, userData);
}
