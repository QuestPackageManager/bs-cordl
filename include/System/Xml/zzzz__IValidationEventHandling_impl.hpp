#pragma once
// IWYU pragma private; include "System\Xml\IValidationEventHandling.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::IValidationEventHandling.get_EventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::IValidationEventHandling::*)()>(&::System::Xml::IValidationEventHandling::get_EventHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IValidationEventHandling*>(), { ::i2c::class_of<::System::Xml::IValidationEventHandling*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IValidationEventHandling.SendEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IValidationEventHandling::*)(::System::Exception*, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::IValidationEventHandling::SendEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IValidationEventHandling*>(), { ::i2c::class_of<::System::Xml::IValidationEventHandling*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::Xml::IValidationEventHandling::get_EventHandler() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IValidationEventHandling*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Xml::IValidationEventHandling::SendEvent(::System::Exception* exception, ::System::Xml::Schema::XmlSeverityType severity) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IValidationEventHandling*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, severity);
}
