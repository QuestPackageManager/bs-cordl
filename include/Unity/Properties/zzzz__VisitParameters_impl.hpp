#pragma once
// IWYU pragma private; include "Unity/Properties/VisitParameters.hpp"
#include "Unity/Properties/zzzz__VisitExceptionKind_impl.hpp"
#include "Unity/Properties/zzzz__VisitParameters_def.hpp"
#include "Unity/Properties/zzzz__VisitExceptionKind_def.hpp"
//  Writing Method size for method: ::Unity::Properties::VisitParameters.get_IgnoreExceptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::VisitExceptionKind (::Unity::Properties::VisitParameters::*)()>(
    &::Unity::Properties::VisitParameters::get_IgnoreExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6969ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::VisitParameters>::get(),
                                                                               "get_IgnoreExceptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Unity::Properties::VisitExceptionKind Unity::Properties::VisitParameters::get_IgnoreExceptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::VisitParameters>::get(),
                                                                             "get_IgnoreExceptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::VisitExceptionKind, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_IgnoreExceptions_k__BackingField", ty: "::Unity::Properties::VisitExceptionKind", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::VisitParameters::VisitParameters(::Unity::Properties::VisitExceptionKind _IgnoreExceptions_k__BackingField) noexcept {
  this->_IgnoreExceptions_k__BackingField = _IgnoreExceptions_k__BackingField;
}
// Ctor Parameters []
constexpr ::Unity::Properties::VisitParameters::VisitParameters() {}
