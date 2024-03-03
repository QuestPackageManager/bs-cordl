#pragma once
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IDynamicMessageSink.ProcessMessageFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::IDynamicMessageSink::*)(
    ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(&::System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IDynamicMessageSink.ProcessMessageStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::IDynamicMessageSink::*)(
    ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(&::System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>::get(), 1));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageFinish(::System::Runtime::Remoting::Messaging::IMessage* replyMsg, bool bCliSide, bool bAsync) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, replyMsg, bCliSide, bAsync);
}
inline void System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageStart(::System::Runtime::Remoting::Messaging::IMessage* reqMsg, bool bCliSide, bool bAsync) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reqMsg, bCliSide, bAsync);
}
