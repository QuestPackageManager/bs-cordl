#pragma once
// IWYU pragma private; include "Mono/Xml/SmallXmlParserException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "Mono/Xml/zzzz__SmallXmlParserException_def.hpp"
//  Writing Method size for method: ::Mono::Xml::SmallXmlParserException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParserException::*)(::StringW, int32_t, int32_t)>(
    &::Mono::Xml::SmallXmlParserException::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27ab0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParserException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Xml::SmallXmlParserException::__cordl_internal_get_line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr int32_t const& Mono::Xml::SmallXmlParserException::__cordl_internal_get_line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr void Mono::Xml::SmallXmlParserException::__cordl_internal_set_line(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___line = value;
}
constexpr int32_t& Mono::Xml::SmallXmlParserException::__cordl_internal_get_column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr int32_t const& Mono::Xml::SmallXmlParserException::__cordl_internal_get_column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr void Mono::Xml::SmallXmlParserException::__cordl_internal_set_column(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___column = value;
}
inline ::Mono::Xml::SmallXmlParserException* Mono::Xml::SmallXmlParserException::New_ctor(::StringW msg, int32_t line, int32_t column) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Xml::SmallXmlParserException*>(msg, line, column));
}
inline void Mono::Xml::SmallXmlParserException::_ctor(::StringW msg, int32_t line, int32_t column) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParserException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg, line, column);
}
// Ctor Parameters []
constexpr ::Mono::Xml::SmallXmlParserException::SmallXmlParserException() {}
