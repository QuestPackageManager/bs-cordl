#pragma once
#include "System/zzzz__ObjectDisposedException_impl.hpp"
#include "Unity/zzzz__ThrowStub_def.hpp"
//  Writing Method size for method: ::Unity::ThrowStub.ThrowNotSupportedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::ThrowStub::ThrowNotSupportedException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2861a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::ThrowStub*>::get(), "ThrowNotSupportedException",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Unity::ThrowStub::ThrowNotSupportedException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::ThrowStub*>::get(), "ThrowNotSupportedException",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::ThrowStub::ThrowStub() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
