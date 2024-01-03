#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MicrophoneAvailabilityState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MicrophoneAvailabilityState::*)(void*)>(
    &::Oculus::Platform::Models::MicrophoneAvailabilityState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2707464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MicrophoneAvailabilityState*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::MicrophoneAvailabilityState::__get_MicrophoneAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MicrophoneAvailable;
}
constexpr bool const& Oculus::Platform::Models::MicrophoneAvailabilityState::__get_MicrophoneAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MicrophoneAvailable;
}
constexpr void Oculus::Platform::Models::MicrophoneAvailabilityState::__set_MicrophoneAvailable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MicrophoneAvailable = value;
}
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* Oculus::Platform::Models::MicrophoneAvailabilityState::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::MicrophoneAvailabilityState*>(o));
}
inline void Oculus::Platform::Models::MicrophoneAvailabilityState::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MicrophoneAvailabilityState*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MicrophoneAvailabilityState::MicrophoneAvailabilityState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
