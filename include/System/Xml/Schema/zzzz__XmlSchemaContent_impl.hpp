#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaContent.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContent_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaContent::*)()>(&::System::Xml::Schema::XmlSchemaContent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42c8f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaContent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaContent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaContent* System::Xml::Schema::XmlSchemaContent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaContent*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaContent::XmlSchemaContent() {}
