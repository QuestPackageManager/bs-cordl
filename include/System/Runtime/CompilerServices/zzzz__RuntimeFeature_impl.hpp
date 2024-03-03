#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuntimeFeature_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeFeature.get_IsDynamicCodeSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Runtime::CompilerServices::RuntimeFeature::get_IsDynamicCodeSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cbfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuntimeFeature*>::get(),
                                                                               "get_IsDynamicCodeSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::Runtime::CompilerServices::RuntimeFeature::get_IsDynamicCodeSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuntimeFeature*>::get(),
                                                                             "get_IsDynamicCodeSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::RuntimeFeature::RuntimeFeature() {}
