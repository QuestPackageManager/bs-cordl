#pragma once
// IWYU pragma private; include "System/IOSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__IOSelector_def.hpp"
#include "System/zzzz__IOSelectorJob_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::IOSelector.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IOSelectorJob*)>(&::System::IOSelector::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x441001c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelector*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOSelectorJob*>::get() })));
    return ___internal_method;
  }
};
inline void System::IOSelector::Add(::System::IntPtr handle, ::System::IOSelectorJob* job) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelector*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOSelectorJob*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, job);
}
// Ctor Parameters []
constexpr ::System::IOSelector::IOSelector() {}
