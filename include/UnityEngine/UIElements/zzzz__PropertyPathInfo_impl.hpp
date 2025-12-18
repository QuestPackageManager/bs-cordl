#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PropertyPathInfo.hpp"
#include "Unity/Properties/zzzz__PropertyPath_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PropertyPathInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyPathInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PropertyPathInfo::*)(::ByRef<::Unity::Properties::PropertyPath>, ::System::Type*)>(
    &::UnityEngine::UIElements::PropertyPathInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a794fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropertyPathInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::PropertyPath>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PropertyPathInfo::_ctor(::ByRef<::Unity::Properties::PropertyPath> propertyPath, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropertyPathInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::PropertyPath>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyPath, type);
}
// Ctor Parameters [CppParam { name: "propertyPath", ty: "::Unity::Properties::PropertyPath", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::System::Type*", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PropertyPathInfo::PropertyPathInfo(::Unity::Properties::PropertyPath propertyPath, ::System::Type* type) noexcept {
  this->propertyPath = propertyPath;
  this->type = type;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyPathInfo::PropertyPathInfo() {}
