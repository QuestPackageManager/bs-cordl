#pragma once
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__NfaContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::NfaContentValidator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NfaContentValidator::*)(
    ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*,
    int32_t, ::System::Xml::Schema::XmlSchemaContentType, bool, bool)>(&::System::Xml::Schema::NfaContentValidator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28b0ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::BitSet*& System::Xml::Schema::NfaContentValidator::__get_firstpos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstpos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> const& System::Xml::Schema::NfaContentValidator::__get_firstpos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstpos;
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_firstpos(::System::Xml::Schema::BitSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firstpos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>& System::Xml::Schema::NfaContentValidator::__get_followpos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___followpos;
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> const& System::Xml::Schema::NfaContentValidator::__get_followpos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___followpos;
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_followpos(::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___followpos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::SymbolsDictionary*& System::Xml::Schema::NfaContentValidator::__get_symbols() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___symbols;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SymbolsDictionary*> const& System::Xml::Schema::NfaContentValidator::__get_symbols() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___symbols;
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_symbols(::System::Xml::Schema::SymbolsDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___symbols)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::Positions*& System::Xml::Schema::NfaContentValidator::__get_positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___positions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Positions*> const& System::Xml::Schema::NfaContentValidator::__get_positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___positions;
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_positions(::System::Xml::Schema::Positions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___positions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::NfaContentValidator::__get_endMarkerPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endMarkerPos;
}
constexpr int32_t const& System::Xml::Schema::NfaContentValidator::__get_endMarkerPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endMarkerPos;
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_endMarkerPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___endMarkerPos = value;
}
inline ::System::Xml::Schema::NfaContentValidator* System::Xml::Schema::NfaContentValidator::New_ctor(::System::Xml::Schema::BitSet* firstpos,
                                                                                                      ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                                                                                                      ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions,
                                                                                                      int32_t endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen,
                                                                                                      bool isEmptiable) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::NfaContentValidator*>(firstpos, followpos, symbols, positions, endMarkerPos, contentType, isOpen, isEmptiable));
}
inline void System::Xml::Schema::NfaContentValidator::_ctor(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                                                            ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, int32_t endMarkerPos,
                                                            ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstpos, followpos, symbols, positions, endMarkerPos, contentType, isOpen, isEmptiable);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::NfaContentValidator::NfaContentValidator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
