#pragma once
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__RangeContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::RangeContentValidator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::RangeContentValidator::*)(
    ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*,
    int32_t, ::System::Xml::Schema::XmlSchemaContentType, bool, ::System::Xml::Schema::BitSet*, int32_t)>(&::System::Xml::Schema::RangeContentValidator::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x28b0330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::RangeContentValidator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::BitSet*& System::Xml::Schema::RangeContentValidator::__get_firstpos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstpos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> const& System::Xml::Schema::RangeContentValidator::__get_firstpos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstpos;
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_firstpos(::System::Xml::Schema::BitSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firstpos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>& System::Xml::Schema::RangeContentValidator::__get_followpos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___followpos;
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> const& System::Xml::Schema::RangeContentValidator::__get_followpos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___followpos;
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_followpos(::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___followpos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::BitSet*& System::Xml::Schema::RangeContentValidator::__get_positionsWithRangeTerminals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___positionsWithRangeTerminals;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> const& System::Xml::Schema::RangeContentValidator::__get_positionsWithRangeTerminals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___positionsWithRangeTerminals;
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_positionsWithRangeTerminals(::System::Xml::Schema::BitSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___positionsWithRangeTerminals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::SymbolsDictionary*& System::Xml::Schema::RangeContentValidator::__get_symbols() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___symbols;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SymbolsDictionary*> const& System::Xml::Schema::RangeContentValidator::__get_symbols() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___symbols;
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_symbols(::System::Xml::Schema::SymbolsDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___symbols)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::Positions*& System::Xml::Schema::RangeContentValidator::__get_positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___positions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Positions*> const& System::Xml::Schema::RangeContentValidator::__get_positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___positions;
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_positions(::System::Xml::Schema::Positions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___positions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::RangeContentValidator::__get_minMaxNodesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___minMaxNodesCount;
}
constexpr int32_t const& System::Xml::Schema::RangeContentValidator::__get_minMaxNodesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___minMaxNodesCount;
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_minMaxNodesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___minMaxNodesCount = value;
}
constexpr int32_t& System::Xml::Schema::RangeContentValidator::__get_endMarkerPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endMarkerPos;
}
constexpr int32_t const& System::Xml::Schema::RangeContentValidator::__get_endMarkerPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endMarkerPos;
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_endMarkerPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___endMarkerPos = value;
}
inline ::System::Xml::Schema::RangeContentValidator* System::Xml::Schema::RangeContentValidator::New_ctor(::System::Xml::Schema::BitSet* firstpos,
                                                                                                          ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                                                                                                          ::System::Xml::Schema::SymbolsDictionary* symbols,
                                                                                                          ::System::Xml::Schema::Positions* positions, int32_t endMarkerPos,
                                                                                                          ::System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable,
                                                                                                          ::System::Xml::Schema::BitSet* positionsWithRangeTerminals, int32_t minmaxNodesCount) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::RangeContentValidator*>(firstpos, followpos, symbols, positions, endMarkerPos, contentType, isEmptiable, positionsWithRangeTerminals,
                                                                                         minmaxNodesCount));
}
inline void System::Xml::Schema::RangeContentValidator::_ctor(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                                                              ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, int32_t endMarkerPos,
                                                              ::System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable, ::System::Xml::Schema::BitSet* positionsWithRangeTerminals,
                                                              int32_t minmaxNodesCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::RangeContentValidator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstpos, followpos, symbols, positions, endMarkerPos, contentType, isEmptiable, positionsWithRangeTerminals,
                                                          minmaxNodesCount);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::RangeContentValidator::RangeContentValidator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
