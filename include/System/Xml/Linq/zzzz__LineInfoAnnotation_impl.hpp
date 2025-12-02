#pragma once
// IWYU pragma private; include "System/Xml/Linq/LineInfoAnnotation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__LineInfoAnnotation_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::LineInfoAnnotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::LineInfoAnnotation::*)(int32_t, int32_t)>(
    &::System::Xml::Linq::LineInfoAnnotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::LineInfoAnnotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Linq::LineInfoAnnotation::__cordl_internal_get_lineNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr int32_t const& System::Xml::Linq::LineInfoAnnotation::__cordl_internal_get_lineNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr void System::Xml::Linq::LineInfoAnnotation::__cordl_internal_set_lineNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNumber = value;
}
constexpr int32_t& System::Xml::Linq::LineInfoAnnotation::__cordl_internal_get_linePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePosition;
}
constexpr int32_t const& System::Xml::Linq::LineInfoAnnotation::__cordl_internal_get_linePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePosition;
}
constexpr void System::Xml::Linq::LineInfoAnnotation::__cordl_internal_set_linePosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePosition = value;
}
inline void System::Xml::Linq::LineInfoAnnotation::_ctor(int32_t lineNumber, int32_t linePosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::LineInfoAnnotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineNumber, linePosition);
}
inline ::System::Xml::Linq::LineInfoAnnotation* System::Xml::Linq::LineInfoAnnotation::New_ctor(int32_t lineNumber, int32_t linePosition) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Linq::LineInfoAnnotation*>(lineNumber, linePosition));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::LineInfoAnnotation::LineInfoAnnotation() {}
