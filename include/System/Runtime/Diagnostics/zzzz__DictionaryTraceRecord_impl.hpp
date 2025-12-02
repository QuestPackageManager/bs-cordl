#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DictionaryTraceRecord.hpp"
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__DictionaryTraceRecord_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::DictionaryTraceRecord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DictionaryTraceRecord::*)(::System::Collections::IDictionary*)>(
    &::System::Runtime::Diagnostics::DictionaryTraceRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f706a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DictionaryTraceRecord*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DictionaryTraceRecord.WriteTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DictionaryTraceRecord::*)(::System::Xml::XmlWriter*)>(
    &::System::Runtime::Diagnostics::DictionaryTraceRecord::WriteTo)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x5f706b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DictionaryTraceRecord*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DictionaryTraceRecord*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IDictionary*& System::Runtime::Diagnostics::DictionaryTraceRecord::__cordl_internal_get_dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr ::System::Collections::IDictionary* const& System::Runtime::Diagnostics::DictionaryTraceRecord::__cordl_internal_get_dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr void System::Runtime::Diagnostics::DictionaryTraceRecord::__cordl_internal_set_dictionary(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Diagnostics::DictionaryTraceRecord::_ctor(::System::Collections::IDictionary* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DictionaryTraceRecord*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
inline void System::Runtime::Diagnostics::DictionaryTraceRecord::WriteTo(::System::Xml::XmlWriter* xml) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DictionaryTraceRecord*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xml);
}
inline ::System::Runtime::Diagnostics::DictionaryTraceRecord* System::Runtime::Diagnostics::DictionaryTraceRecord::New_ctor(::System::Collections::IDictionary* dictionary) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Diagnostics::DictionaryTraceRecord*>(dictionary));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::DictionaryTraceRecord::DictionaryTraceRecord() {}
