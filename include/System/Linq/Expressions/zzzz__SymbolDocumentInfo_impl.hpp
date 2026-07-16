#pragma once
// IWYU pragma private; include "System/Linq/Expressions/SymbolDocumentInfo.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__SymbolDocumentInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::SymbolDocumentInfo.get_FileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::SymbolDocumentInfo::*)()>(&::System::Linq::Expressions::SymbolDocumentInfo::get_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f83d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SymbolDocumentInfo*>(), { "get_FileName", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Linq::Expressions::SymbolDocumentInfo::__cordl_internal_get__FileName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FileName_k__BackingField;
}
constexpr ::StringW const& System::Linq::Expressions::SymbolDocumentInfo::__cordl_internal_get__FileName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FileName_k__BackingField;
}
constexpr void System::Linq::Expressions::SymbolDocumentInfo::__cordl_internal_set__FileName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FileName_k__BackingField = value;
}
inline void System::Linq::Expressions::SymbolDocumentInfo::setStaticF_DocumentType_Text(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "DocumentType_Text", ::System::Linq::Expressions::SymbolDocumentInfo*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid System::Linq::Expressions::SymbolDocumentInfo::getStaticF_DocumentType_Text() {
  return ::cordl_internals::getStaticField<::System::Guid, "DocumentType_Text", ::System::Linq::Expressions::SymbolDocumentInfo*>();
}
inline ::StringW System::Linq::Expressions::SymbolDocumentInfo::get_FileName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SymbolDocumentInfo*>(), { "get_FileName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::SymbolDocumentInfo::SymbolDocumentInfo() {}
