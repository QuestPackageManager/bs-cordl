#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueuedUser_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingEnqueuedUser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingEnqueuedUser::*)(void*)>(
    &::Oculus::Platform::Models::MatchmakingEnqueuedUser::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x273abc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueuedUser*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& Oculus::Platform::Models::MatchmakingEnqueuedUser::__cordl_internal_get_CustomData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
Oculus::Platform::Models::MatchmakingEnqueuedUser::__cordl_internal_get_CustomData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomData;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueuedUser::__cordl_internal_set_CustomData(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::MatchmakingEnqueuedUser::__cordl_internal_get_UserOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& Oculus::Platform::Models::MatchmakingEnqueuedUser::__cordl_internal_get_UserOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserOptional;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueuedUser::__cordl_internal_set_UserOptional(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::MatchmakingEnqueuedUser::__cordl_internal_get_User() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___User;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& Oculus::Platform::Models::MatchmakingEnqueuedUser::__cordl_internal_get_User() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___User;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueuedUser::__cordl_internal_set_User(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___User)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::MatchmakingEnqueuedUser* Oculus::Platform::Models::MatchmakingEnqueuedUser::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::MatchmakingEnqueuedUser*>(o));
}
inline void Oculus::Platform::Models::MatchmakingEnqueuedUser::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueuedUser*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MatchmakingEnqueuedUser::MatchmakingEnqueuedUser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
