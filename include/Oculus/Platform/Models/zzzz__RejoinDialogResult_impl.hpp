#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/RejoinDialogResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::RejoinDialogResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::RejoinDialogResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::RejoinDialogResult::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5bdd404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::RejoinDialogResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::RejoinDialogResult::__cordl_internal_get_RejoinSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RejoinSelected;
}
constexpr bool const& Oculus::Platform::Models::RejoinDialogResult::__cordl_internal_get_RejoinSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RejoinSelected;
}
constexpr void Oculus::Platform::Models::RejoinDialogResult::__cordl_internal_set_RejoinSelected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RejoinSelected = value;
}
inline void Oculus::Platform::Models::RejoinDialogResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::RejoinDialogResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::RejoinDialogResult* Oculus::Platform::Models::RejoinDialogResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::RejoinDialogResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::RejoinDialogResult::RejoinDialogResult() {}
