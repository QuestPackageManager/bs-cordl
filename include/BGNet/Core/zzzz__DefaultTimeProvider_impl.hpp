#pragma once
// IWYU pragma private; include "BGNet/Core/DefaultTimeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/zzzz__DefaultTimeProvider_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::BGNet::Core::DefaultTimeProvider.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::ITimeProvider* (*)()>(&::BGNet::Core::DefaultTimeProvider::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22edbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTimeProvider*>::get(), "get_instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::BGNet::Core::ITimeProvider* BGNet::Core::DefaultTimeProvider::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTimeProvider*>::get(), "get_instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::ITimeProvider*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::DefaultTimeProvider::DefaultTimeProvider() {}
