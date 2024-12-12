#pragma once
// IWYU pragma private; include "GlobalNamespace/IDiffieHellmanKeyPair.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::IDiffieHellmanKeyPair::get_publicKey() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDiffieHellmanKeyPair*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDiffieHellmanKeyPair*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method, taskUtility, clientPublicKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IDiffieHellmanKeyPair*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, clientPublicKey);
}
