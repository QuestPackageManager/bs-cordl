#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__DiagnosticsConfigurationHandler_def.hpp"
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DiagnosticsConfigurationHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DiagnosticsConfigurationHandler::*)()>(
    &::System::Diagnostics::DiagnosticsConfigurationHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2e77ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DiagnosticsConfigurationHandler.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Diagnostics::DiagnosticsConfigurationHandler::*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*)>(&::System::Diagnostics::DiagnosticsConfigurationHandler::Create)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2e77aec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler*>::get(), 4));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
constexpr System::Diagnostics::DiagnosticsConfigurationHandler::operator ::System::Configuration::IConfigurationSectionHandler*() noexcept {
  return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Configuration::IConfigurationSectionHandler"
constexpr ::System::Configuration::IConfigurationSectionHandler* System::Diagnostics::DiagnosticsConfigurationHandler::i___System__Configuration__IConfigurationSectionHandler() noexcept {
  return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
inline ::System::Diagnostics::DiagnosticsConfigurationHandler* System::Diagnostics::DiagnosticsConfigurationHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::DiagnosticsConfigurationHandler*>());
}
inline void System::Diagnostics::DiagnosticsConfigurationHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Diagnostics::DiagnosticsConfigurationHandler::Create(::System::Object* parent, ::System::Object* configContext, ::System::Xml::XmlNode* section) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, parent, configContext, section);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DiagnosticsConfigurationHandler::DiagnosticsConfigurationHandler() {}
