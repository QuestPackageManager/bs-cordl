#pragma once
// IWYU pragma private; include "GlobalNamespace/OffsetDirectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OffsetDirectionExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OffsetDirectionExtensions.OppositeDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OffsetDirection (*)(::GlobalNamespace::OffsetDirection)>(
    &::GlobalNamespace::OffsetDirectionExtensions::OppositeDirection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2210350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetDirectionExtensions*>::get(), "OppositeDirection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirectionExtensions::OppositeDirection(::GlobalNamespace::OffsetDirection offsetDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetDirectionExtensions*>::get(), "OppositeDirection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OffsetDirection, false>(nullptr, ___internal_method, offsetDirection);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OffsetDirectionExtensions::OffsetDirectionExtensions() {}
