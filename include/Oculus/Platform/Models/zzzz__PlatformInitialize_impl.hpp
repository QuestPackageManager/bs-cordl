#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PlatformInitialize.hpp"
#include "Oculus/Platform/zzzz__PlatformInitializeResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PlatformInitialize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::PlatformInitialize::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::PlatformInitialize::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f93238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PlatformInitialize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::PlatformInitializeResult& Oculus::Platform::Models::PlatformInitialize::__cordl_internal_get_Result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Result;
}
constexpr ::Oculus::Platform::PlatformInitializeResult const& Oculus::Platform::Models::PlatformInitialize::__cordl_internal_get_Result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Result;
}
constexpr void Oculus::Platform::Models::PlatformInitialize::__cordl_internal_set_Result(::Oculus::Platform::PlatformInitializeResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Result = value;
}
inline void Oculus::Platform::Models::PlatformInitialize::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PlatformInitialize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::PlatformInitialize* Oculus::Platform::Models::PlatformInitialize::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::PlatformInitialize*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::PlatformInitialize::PlatformInitialize() {}
