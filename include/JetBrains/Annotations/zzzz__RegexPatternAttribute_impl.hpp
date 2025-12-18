#pragma once
// IWYU pragma private; include "JetBrains/Annotations/RegexPatternAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__RegexPatternAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::RegexPatternAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::RegexPatternAttribute::*)()>(
    &::JetBrains::Annotations::RegexPatternAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c724e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::RegexPatternAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void JetBrains::Annotations::RegexPatternAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::RegexPatternAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::JetBrains::Annotations::RegexPatternAttribute* JetBrains::Annotations::RegexPatternAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::RegexPatternAttribute*>());
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::RegexPatternAttribute::RegexPatternAttribute() {}
