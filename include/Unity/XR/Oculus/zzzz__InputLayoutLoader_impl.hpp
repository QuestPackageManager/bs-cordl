#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/InputLayoutLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/Oculus/zzzz__InputLayoutLoader_def.hpp"
//  Writing Method size for method: ::Unity::XR::Oculus::InputLayoutLoader.RegisterInputLayouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::InputLayoutLoader::RegisterInputLayouts)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x482e77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::InputLayoutLoader*>::get(),
                                                                               "RegisterInputLayouts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::XR::Oculus::InputLayoutLoader::RegisterInputLayouts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::InputLayoutLoader*>::get(),
                                                                             "RegisterInputLayouts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::InputLayoutLoader::InputLayoutLoader() {}
