#pragma once
#include "System/Runtime/Remoting/Contexts/zzzz__IContributeDynamicSink_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicMessageSink_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IContributeDynamicSink.GetDynamicSink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::IDynamicMessageSink* (
    ::System::Runtime::Remoting::Contexts::IContributeDynamicSink::*)()>(&::System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IContributeDynamicSink*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IContributeDynamicSink*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IContributeDynamicSink*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*, false>(this, ___internal_method);
}
