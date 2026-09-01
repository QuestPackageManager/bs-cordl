#pragma once
// IWYU pragma private; include "System\Diagnostics\DiagnosticsConfigurationHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__DiagnosticsConfigurationHandler_def.hpp"
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DiagnosticsConfigurationHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DiagnosticsConfigurationHandler::*)()>(&::System::Diagnostics::DiagnosticsConfigurationHandler::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63721a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DiagnosticsConfigurationHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DiagnosticsConfigurationHandler.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Diagnostics::DiagnosticsConfigurationHandler::*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*)>(
    &::System::Diagnostics::DiagnosticsConfigurationHandler::Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63721dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::DiagnosticsConfigurationHandler*>(),
                                                                                          { ::i2c::class_of<::System::Diagnostics::DiagnosticsConfigurationHandler*>(), 4 }));
    return ___internal_method;
  }
};
inline void System::Diagnostics::DiagnosticsConfigurationHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DiagnosticsConfigurationHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Diagnostics::DiagnosticsConfigurationHandler::Create(::System::Object* parent, ::System::Object* configContext, ::System::Xml::XmlNode* section) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::DiagnosticsConfigurationHandler*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parent, configContext, section);
}
inline ::System::Diagnostics::DiagnosticsConfigurationHandler* System::Diagnostics::DiagnosticsConfigurationHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::DiagnosticsConfigurationHandler*>());
}
/// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
constexpr System::Diagnostics::DiagnosticsConfigurationHandler::operator ::System::Configuration::IConfigurationSectionHandler*() noexcept {
  return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Configuration::IConfigurationSectionHandler"
constexpr ::System::Configuration::IConfigurationSectionHandler* System::Diagnostics::DiagnosticsConfigurationHandler::i___System__Configuration__IConfigurationSectionHandler() noexcept {
  return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DiagnosticsConfigurationHandler::DiagnosticsConfigurationHandler() {}
