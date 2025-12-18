#pragma once
// IWYU pragma private; include "GlobalNamespace/HardwareCategories.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HardwareCategories_def.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HardwareCategories.GetHardwareCategoryWithEditorOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HardwareCategory (*)()>(
    &::GlobalNamespace::HardwareCategories::GetHardwareCategoryWithEditorOverride)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31be0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HardwareCategories*>::get(), "GetHardwareCategoryWithEditorOverride",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HardwareCategories.GetHardwareCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HardwareCategory (*)()>(&::GlobalNamespace::HardwareCategories::GetHardwareCategory)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x31be0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HardwareCategories*>::get(),
                                                                               "GetHardwareCategory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategories::GetHardwareCategoryWithEditorOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HardwareCategories*>::get(), "GetHardwareCategoryWithEditorOverride",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HardwareCategory, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategories::GetHardwareCategory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HardwareCategories*>::get(),
                                                                             "GetHardwareCategory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HardwareCategory, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HardwareCategories::HardwareCategories() {}
