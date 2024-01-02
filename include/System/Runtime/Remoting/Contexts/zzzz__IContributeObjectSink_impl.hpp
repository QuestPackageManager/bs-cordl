#pragma once
#include "System/Runtime/Remoting/Contexts/zzzz__IContributeObjectSink_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IContributeObjectSink.GetObjectSink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (
    ::System::Runtime::Remoting::Contexts::IContributeObjectSink::*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Contexts::IContributeObjectSink::GetObjectSink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IContributeObjectSink*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IContributeObjectSink*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::IContributeObjectSink::GetObjectSink(::System::MarshalByRefObject* obj,
                                                                                                                                       ::System::Runtime::Remoting::Messaging::IMessageSink* nextSink) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IContributeObjectSink*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(this, ___internal_method, obj, nextSink);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
