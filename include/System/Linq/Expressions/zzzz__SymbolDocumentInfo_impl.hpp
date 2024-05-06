#pragma once
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__SymbolDocumentInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::SymbolDocumentInfo.get_FileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::SymbolDocumentInfo::*)()>(
    &::System::Linq::Expressions::SymbolDocumentInfo::get_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0c844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::SymbolDocumentInfo*>::get(),
                                                                               "get_FileName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FileName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::SymbolDocumentInfo::setStaticF_DocumentType_Text(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "DocumentType_Text", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::SymbolDocumentInfo*>::get>(
      std::forward<::System::Guid>(value));
}
inline ::System::Guid System::Linq::Expressions::SymbolDocumentInfo::getStaticF_DocumentType_Text() {
  return ::cordl_internals::getStaticField<::System::Guid, "DocumentType_Text", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::SymbolDocumentInfo*>::get>();
}
inline ::StringW System::Linq::Expressions::SymbolDocumentInfo::get_FileName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::SymbolDocumentInfo*>::get(),
                                                                             "get_FileName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::SymbolDocumentInfo::SymbolDocumentInfo() {}
