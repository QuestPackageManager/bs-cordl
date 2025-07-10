#pragma once
// IWYU pragma private; include "GlobalNamespace/CannotStartGameReasonMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReasonMethods_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CannotStartGameReasonMethods.LocalizedKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::CannotStartGameReason)>(
    &::GlobalNamespace::CannotStartGameReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26dbe38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CannotStartGameReasonMethods*>::get(), "LocalizedKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::CannotStartGameReasonMethods::LocalizedKey(::GlobalNamespace::CannotStartGameReason cannotStartGameReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CannotStartGameReasonMethods*>::get(), "LocalizedKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, cannotStartGameReason);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CannotStartGameReasonMethods::CannotStartGameReasonMethods() {}
