#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/MCMDictionary.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MCMDictionary_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MCMDictionary._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::MCMDictionary::*)(
    ::System::Runtime::Remoting::Messaging::IMethodMessage*)>(&::System::Runtime::Remoting::Messaging::MCMDictionary::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5996208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MCMDictionary*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::MCMDictionary::setStaticF_InternalKeys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "InternalKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MCMDictionary*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Runtime::Remoting::Messaging::MCMDictionary::getStaticF_InternalKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "InternalKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MCMDictionary*>::get>();
}
inline void System::Runtime::Remoting::Messaging::MCMDictionary::_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::MCMDictionary*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::System::Runtime::Remoting::Messaging::MCMDictionary* System::Runtime::Remoting::Messaging::MCMDictionary::New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::MCMDictionary*>(message));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::MCMDictionary::MCMDictionary() {}
