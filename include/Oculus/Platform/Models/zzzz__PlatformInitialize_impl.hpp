#pragma once
#include "Oculus/Platform/zzzz__PlatformInitializeResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PlatformInitialize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::PlatformInitialize::*)(void*)>(
    &::Oculus::Platform::Models::PlatformInitialize::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2708430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PlatformInitialize*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::PlatformInitializeResult& Oculus::Platform::Models::PlatformInitialize::__get_Result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Result;
}
constexpr ::Oculus::Platform::PlatformInitializeResult const& Oculus::Platform::Models::PlatformInitialize::__get_Result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Result;
}
constexpr void Oculus::Platform::Models::PlatformInitialize::__set_Result(::Oculus::Platform::PlatformInitializeResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Result = value;
}
inline ::Oculus::Platform::Models::PlatformInitialize* Oculus::Platform::Models::PlatformInitialize::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::PlatformInitialize*>(o));
}
inline void Oculus::Platform::Models::PlatformInitialize::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PlatformInitialize*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::PlatformInitialize::PlatformInitialize() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
