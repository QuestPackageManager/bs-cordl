#pragma once
// IWYU pragma private; include "Unity/ThrowStub.hpp"
#include "System/zzzz__ObjectDisposedException_impl.hpp"
#include "Unity/zzzz__ThrowStub_def.hpp"
//  Writing Method size for method: ::Unity::ThrowStub.ThrowNotSupportedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::ThrowStub::ThrowNotSupportedException)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4028de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::ThrowStub*>::get(), "ThrowNotSupportedException",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::ThrowStub::ThrowNotSupportedException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::ThrowStub*>::get(), "ThrowNotSupportedException",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::ThrowStub::ThrowStub() {}
