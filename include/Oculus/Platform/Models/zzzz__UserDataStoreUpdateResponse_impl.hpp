#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__UserDataStoreUpdateResponse_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserDataStoreUpdateResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::UserDataStoreUpdateResponse::*)(void*)>(
    &::Oculus::Platform::Models::UserDataStoreUpdateResponse::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2709340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::UserDataStoreUpdateResponse::__get_Success() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Success;
}
constexpr bool const& Oculus::Platform::Models::UserDataStoreUpdateResponse::__get_Success() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Success;
}
constexpr void Oculus::Platform::Models::UserDataStoreUpdateResponse::__set_Success(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Success = value;
}
inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* Oculus::Platform::Models::UserDataStoreUpdateResponse::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>(o));
}
inline void Oculus::Platform::Models::UserDataStoreUpdateResponse::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::UserDataStoreUpdateResponse::UserDataStoreUpdateResponse() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
