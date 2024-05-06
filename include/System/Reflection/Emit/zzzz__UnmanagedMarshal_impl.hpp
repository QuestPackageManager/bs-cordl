#pragma once
// IWYU pragma private; include "System/Reflection/Emit/UnmanagedMarshal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/Emit/zzzz__UnmanagedMarshal_def.hpp"
//  Writing Method size for method: ::System::Reflection::Emit::UnmanagedMarshal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::Emit::UnmanagedMarshal::*)()>(&::System::Reflection::Emit::UnmanagedMarshal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287b1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Emit::UnmanagedMarshal*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Reflection::Emit::UnmanagedMarshal* System::Reflection::Emit::UnmanagedMarshal::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::Emit::UnmanagedMarshal*>());
}
inline void System::Reflection::Emit::UnmanagedMarshal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Emit::UnmanagedMarshal*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::Emit::UnmanagedMarshal::UnmanagedMarshal() {}
