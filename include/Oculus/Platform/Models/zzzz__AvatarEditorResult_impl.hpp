#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AvatarEditorResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AvatarEditorResult::*)(void*)>(
    &::Oculus::Platform::Models::AvatarEditorResult::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2858f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AvatarEditorResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::AvatarEditorResult::__cordl_internal_get_RequestSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestSent;
}
constexpr bool const& Oculus::Platform::Models::AvatarEditorResult::__cordl_internal_get_RequestSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestSent;
}
constexpr void Oculus::Platform::Models::AvatarEditorResult::__cordl_internal_set_RequestSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RequestSent = value;
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::Models::AvatarEditorResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::AvatarEditorResult*>(o));
}
inline void Oculus::Platform::Models::AvatarEditorResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AvatarEditorResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AvatarEditorResult::AvatarEditorResult() {}
