#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/IContributeDynamicSink.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContributeDynamicSink_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicMessageSink_def.hpp"
inline ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IContributeDynamicSink*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*, false>(this, ___internal_method);
}
