#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextLib.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextLib_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(Il2CppObject*)>(&::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a41784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller*>::get(), "ConvertToNative",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::TextCore::Text::TextLib_BindingsMarshaller::ConvertToNative(Il2CppObject* textLib) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller*>::get(), "ConvertToNative",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, textLib);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller::TextLib_BindingsMarshaller() {}
