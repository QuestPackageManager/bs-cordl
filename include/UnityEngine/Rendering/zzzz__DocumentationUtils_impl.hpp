#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DocumentationUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DocumentationUtils_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DocumentationUtils.TryGetHelpURL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::ByRef<::StringW>)>(&::UnityEngine::Rendering::DocumentationUtils::TryGetHelpURL)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x65d1104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DocumentationUtils*>::get(), "TryGetHelpURL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
template <typename TEnum> inline ::StringW UnityEngine::Rendering::DocumentationUtils::GetHelpURL(TEnum mask) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DocumentationUtils*>::get(), "GetHelpURL",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnum>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TEnum>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnum>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, mask);
}
inline bool UnityEngine::Rendering::DocumentationUtils::TryGetHelpURL(::System::Type* type, ::ByRef<::StringW> url) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DocumentationUtils*>::get(),
                                                                             "TryGetHelpURL", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, url);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DocumentationUtils::DocumentationUtils() {}
