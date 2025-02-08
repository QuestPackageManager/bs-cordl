#pragma once
// IWYU pragma private; include "System/Xml/Schema/NfaContentValidator.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__NfaContentValidator_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationState_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::NfaContentValidator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NfaContentValidator::*)(
    ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*,
    int32_t, ::System::Xml::Schema::XmlSchemaContentType, bool, bool)>(&::System::Xml::Schema::NfaContentValidator::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x43a3d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NfaContentValidator.InitValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NfaContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::NfaContentValidator::InitValidation)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x43a3e44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NfaContentValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Schema::NfaContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::ByRef<int32_t>)>(
        &::System::Xml::Schema::NfaContentValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x43a3f00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NfaContentValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::NfaContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::NfaContentValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x43a40b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NfaContentValidator.ExpectedElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (
    ::System::Xml::Schema::NfaContentValidator::*)(::System::Xml::Schema::ValidationState*, bool)>(&::System::Xml::Schema::NfaContentValidator::ExpectedElements)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x43a40f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NfaContentValidator.ExpectedParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::NfaContentValidator::*)(::System::Xml::Schema::ValidationState*, bool, ::System::Xml::Schema::XmlSchemaSet*)>(
        &::System::Xml::Schema::NfaContentValidator::ExpectedParticles)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x43a42dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::BitSet*& System::Xml::Schema::NfaContentValidator::__cordl_internal_get_firstpos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstpos;
}
constexpr ::System::Xml::Schema::BitSet* const& System::Xml::Schema::NfaContentValidator::__cordl_internal_get_firstpos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstpos;
}
constexpr void System::Xml::Schema::NfaContentValidator::__cordl_internal_set_firstpos(::System::Xml::Schema::BitSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firstpos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>& System::Xml::Schema::NfaContentValidator::__cordl_internal_get_followpos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followpos;
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> const& System::Xml::Schema::NfaContentValidator::__cordl_internal_get_followpos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followpos;
}
constexpr void System::Xml::Schema::NfaContentValidator::__cordl_internal_set_followpos(::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___followpos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::SymbolsDictionary*& System::Xml::Schema::NfaContentValidator::__cordl_internal_get_symbols() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbols;
}
constexpr ::System::Xml::Schema::SymbolsDictionary* const& System::Xml::Schema::NfaContentValidator::__cordl_internal_get_symbols() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbols;
}
constexpr void System::Xml::Schema::NfaContentValidator::__cordl_internal_set_symbols(::System::Xml::Schema::SymbolsDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___symbols)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::Positions*& System::Xml::Schema::NfaContentValidator::__cordl_internal_get_positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr ::System::Xml::Schema::Positions* const& System::Xml::Schema::NfaContentValidator::__cordl_internal_get_positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr void System::Xml::Schema::NfaContentValidator::__cordl_internal_set_positions(::System::Xml::Schema::Positions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___positions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::NfaContentValidator::__cordl_internal_get_endMarkerPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endMarkerPos;
}
constexpr int32_t const& System::Xml::Schema::NfaContentValidator::__cordl_internal_get_endMarkerPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endMarkerPos;
}
constexpr void System::Xml::Schema::NfaContentValidator::__cordl_internal_set_endMarkerPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endMarkerPos = value;
}
inline void System::Xml::Schema::NfaContentValidator::_ctor(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                                                            ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, int32_t endMarkerPos,
                                                            ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstpos, followpos, symbols, positions, endMarkerPos, contentType, isOpen, isEmptiable);
}
inline void System::Xml::Schema::NfaContentValidator::InitValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::System::Object* System::Xml::Schema::NfaContentValidator::ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::ByRef<int32_t> errorCode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name, context, errorCode);
}
inline bool System::Xml::Schema::NfaContentValidator::CompleteValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::NfaContentValidator::ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method, context, isRequiredOnly);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::NfaContentValidator::ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly,
                                                                                                     ::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method, context, isRequiredOnly, schemaSet);
}
inline ::System::Xml::Schema::NfaContentValidator* System::Xml::Schema::NfaContentValidator::New_ctor(::System::Xml::Schema::BitSet* firstpos,
                                                                                                      ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                                                                                                      ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions,
                                                                                                      int32_t endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen,
                                                                                                      bool isEmptiable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::NfaContentValidator*>(firstpos, followpos, symbols, positions, endMarkerPos, contentType, isOpen, isEmptiable));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::NfaContentValidator::NfaContentValidator() {}
