#pragma once
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Xml::IValidationEventHandling.SendEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::IValidationEventHandling::*)(::System::Exception*, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::IValidationEventHandling::SendEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IValidationEventHandling*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IValidationEventHandling*>::get(), 0));
    return ___internal_method;
  }
};
inline void System::Xml::IValidationEventHandling::SendEvent(::System::Exception* exception, ::System::Xml::Schema::XmlSeverityType severity) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IValidationEventHandling*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, severity);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
