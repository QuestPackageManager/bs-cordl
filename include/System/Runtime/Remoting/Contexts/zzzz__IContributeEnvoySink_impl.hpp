#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/IContributeEnvoySink.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContributeEnvoySink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::IContributeEnvoySink::GetEnvoySink(::System::MarshalByRefObject* obj,
                                                                                                                                     ::System::Runtime::Remoting::Messaging::IMessageSink* nextSink) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IContributeEnvoySink*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(this, ___internal_method, obj, nextSink);
}
