#pragma once
// IWYU pragma private; include "Oculus/Platform/PushNotification.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__PushNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__PushNotificationResult_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::PushNotification.Register
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PushNotificationResult*>* (*)()>(&::Oculus::Platform::PushNotification::Register)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c3ca68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PushNotification*>::get(),
                        "Register",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PushNotificationResult*>* Oculus::Platform::PushNotification::Register()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::PushNotification*>::get(),
                        "Register",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PushNotificationResult*>*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PushNotification::PushNotification()   {
}
