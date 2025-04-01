#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceInternals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceInternals_def.hpp"
//  Writing Method size for method: ::IgnoranceCore::IgnoranceInternals._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceInternals::*)()>(&::IgnoranceCore::IgnoranceInternals::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aa5624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceInternals*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void IgnoranceCore::IgnoranceInternals::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceInternals*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::IgnoranceCore::IgnoranceInternals* IgnoranceCore::IgnoranceInternals::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::IgnoranceCore::IgnoranceInternals*>());
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceInternals::IgnoranceInternals() {}
