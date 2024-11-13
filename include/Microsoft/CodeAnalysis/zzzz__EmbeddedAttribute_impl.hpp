#pragma once
// IWYU pragma private; include "Microsoft/CodeAnalysis/EmbeddedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Microsoft/CodeAnalysis/zzzz__EmbeddedAttribute_def.hpp"
//  Writing Method size for method: ::Microsoft::CodeAnalysis::EmbeddedAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::CodeAnalysis::EmbeddedAttribute::*)()>(&::Microsoft::CodeAnalysis::EmbeddedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f35d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::CodeAnalysis::EmbeddedAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Microsoft::CodeAnalysis::EmbeddedAttribute* Microsoft::CodeAnalysis::EmbeddedAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Microsoft::CodeAnalysis::EmbeddedAttribute*>());
}
inline void Microsoft::CodeAnalysis::EmbeddedAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::CodeAnalysis::EmbeddedAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Microsoft::CodeAnalysis::EmbeddedAttribute::EmbeddedAttribute() {}
