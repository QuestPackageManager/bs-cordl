#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/MemoableResetException.hpp"
#include "System/zzzz__InvalidCastException_impl.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__MemoableResetException_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::MemoableResetException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::MemoableResetException::*)(::StringW)>(
    &::Org::BouncyCastle::Utilities::MemoableResetException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e6acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::MemoableResetException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::MemoableResetException::_ctor(::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::MemoableResetException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline ::Org::BouncyCastle::Utilities::MemoableResetException* Org::BouncyCastle::Utilities::MemoableResetException::New_ctor(::StringW msg) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Utilities::MemoableResetException*>(msg));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::MemoableResetException::MemoableResetException() {}
