#pragma once
// IWYU pragma private; include "System/Xml/Linq/LineInfoEndElementAnnotation.hpp"
#include "System/Xml/Linq/zzzz__LineInfoAnnotation_impl.hpp"
#include "System/Xml/Linq/zzzz__LineInfoEndElementAnnotation_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::LineInfoEndElementAnnotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::LineInfoEndElementAnnotation::*)(int32_t, int32_t)>(
    &::System::Xml::Linq::LineInfoEndElementAnnotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::LineInfoEndElementAnnotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Linq::LineInfoEndElementAnnotation::_ctor(int32_t lineNumber, int32_t linePosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::LineInfoEndElementAnnotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineNumber, linePosition);
}
inline ::System::Xml::Linq::LineInfoEndElementAnnotation* System::Xml::Linq::LineInfoEndElementAnnotation::New_ctor(int32_t lineNumber, int32_t linePosition) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Linq::LineInfoEndElementAnnotation*>(lineNumber, linePosition));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::LineInfoEndElementAnnotation::LineInfoEndElementAnnotation() {}
