#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorTypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorTypeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorTypeExtensions.Opposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorType (*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::ColorTypeExtensions::Opposite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22496e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorTypeExtensions*>::get(), "Opposite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ColorType GlobalNamespace::ColorTypeExtensions::Opposite(::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorTypeExtensions*>::get(), "Opposite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType, false>(nullptr, ___internal_method, colorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorTypeExtensions::ColorTypeExtensions() {}
