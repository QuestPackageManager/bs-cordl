#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PushNotificationResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__PushNotificationResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PushNotificationResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::PushNotificationResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::PushNotificationResult::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c43e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PushNotificationResult*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::PushNotificationResult::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr ::StringW const& Oculus::Platform::Models::PushNotificationResult::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void Oculus::Platform::Models::PushNotificationResult::__cordl_internal_set_Id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::PushNotificationResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PushNotificationResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::PushNotificationResult* Oculus::Platform::Models::PushNotificationResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::PushNotificationResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::PushNotificationResult::PushNotificationResult() {}
