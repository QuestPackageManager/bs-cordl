#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/MaybeNullAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/CodeAnalysis/zzzz__MaybeNullAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::MaybeNullAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::CodeAnalysis::MaybeNullAttribute::*)()>(
    &::System::Diagnostics::CodeAnalysis::MaybeNullAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e771c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CodeAnalysis::MaybeNullAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Diagnostics::CodeAnalysis::MaybeNullAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CodeAnalysis::MaybeNullAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::CodeAnalysis::MaybeNullAttribute* System::Diagnostics::CodeAnalysis::MaybeNullAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::CodeAnalysis::MaybeNullAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::CodeAnalysis::MaybeNullAttribute::MaybeNullAttribute() {}
