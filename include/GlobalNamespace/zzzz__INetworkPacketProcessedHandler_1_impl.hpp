#pragma once
// IWYU pragma private; include "GlobalNamespace/INetworkPacketProcessedHandler_1.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketProcessedHandler_1_def.hpp"
template<typename TData>
inline void GlobalNamespace::INetworkPacketProcessedHandler_1<TData>::HandlePacketProcessed(::StringW  typeName, TData  data)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>*>::get(),
                            0
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeName, data);
}
