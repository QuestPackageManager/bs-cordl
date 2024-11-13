#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/DefaultPropertyBagInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/Internal/zzzz__DefaultPropertyBagInitializer_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::DefaultPropertyBagInitializer.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Properties::Internal::DefaultPropertyBagInitializer::Initialize)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x48ae474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::DefaultPropertyBagInitializer*>::get(), "Initialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::DefaultPropertyBagInitializer::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::DefaultPropertyBagInitializer*>::get(), "Initialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::DefaultPropertyBagInitializer::DefaultPropertyBagInitializer() {}
