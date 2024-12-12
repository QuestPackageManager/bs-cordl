#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Lifetime/ISponsor.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ISponsor_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::ISponsor::Renewal(::System::Runtime::Remoting::Lifetime::ILease* lease) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ISponsor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, lease);
}
