#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/StringTraceRecord.hpp"
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__StringTraceRecord_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::StringTraceRecord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::StringTraceRecord::*)(::StringW, ::StringW)>(
    &::System::Runtime::Diagnostics::StringTraceRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f754f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::StringTraceRecord*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::StringTraceRecord.WriteTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::StringTraceRecord::*)(::System::Xml::XmlWriter*)>(
    &::System::Runtime::Diagnostics::StringTraceRecord::WriteTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f754fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::StringTraceRecord*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::StringTraceRecord*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_get_elementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr ::StringW const& System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_get_elementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr void System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_set_elementName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::StringW const& System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_set_content(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Diagnostics::StringTraceRecord::_ctor(::StringW elementName, ::StringW content) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::StringTraceRecord*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementName, content);
}
inline void System::Runtime::Diagnostics::StringTraceRecord::WriteTo(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::StringTraceRecord*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::System::Runtime::Diagnostics::StringTraceRecord* System::Runtime::Diagnostics::StringTraceRecord::New_ctor(::StringW elementName, ::StringW content) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Diagnostics::StringTraceRecord*>(elementName, content));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::StringTraceRecord::StringTraceRecord() {}
