#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/LogEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__LogEntry_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__ProxyConsoleLine_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__SeverityEntry_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.get_OnDisplayDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* (*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_OnDisplayDetails)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a51d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_OnDisplayDetails", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.set_OnDisplayDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_OnDisplayDetails)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a51d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(),
                                                             { "set_OnDisplayDetails", {}, { ::i2c::type_of<::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)(
    ::StringW, ::StringW, ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::Setup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a49848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(),
                            { "Setup", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.get_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a51de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Label", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.set_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)(::StringW)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_Label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a51dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "set_Label", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.get_Callstack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Callstack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a51df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Callstack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.set_Callstack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)(::StringW)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_Callstack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a51dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "set_Callstack", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.get_Severity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Severity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a51e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Severity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.set_Severity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_Severity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a51e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(),
                                                             { "set_Severity", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a51e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.set_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)(int32_t)>(&::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a51e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "set_Count", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.get_Line
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a51e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Line", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.set_Line
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_Line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a51e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(),
                                                                                           { "set_Line", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.get_Shown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Shown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a49fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Shown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry.DisplayDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::DisplayDetails)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a4b0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "DisplayDetails", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a51e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_get__Label_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Label_k__BackingField;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_get__Label_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Label_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_set__Label_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Label_k__BackingField = value;
}
constexpr ::StringW& Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_get__Callstack_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Callstack_k__BackingField;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_get__Callstack_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Callstack_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_set__Callstack_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Callstack_k__BackingField = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*& Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_get__Severity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Severity_k__BackingField;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* const& Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_get__Severity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Severity_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_set__Severity_k__BackingField(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Severity_k__BackingField = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_get__Count_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Count_k__BackingField;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_get__Count_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Count_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_set__Count_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Count_k__BackingField = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*& Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_get__Line_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Line_k__BackingField;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* const& Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_get__Line_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Line_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::__cordl_internal_set__Line_k__BackingField(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Line_k__BackingField = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::setStaticF__OnDisplayDetails_k__BackingField(::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*, "<OnDisplayDetails>k__BackingField",
                                    ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(std::forward<::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*>(value));
}
inline ::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::getStaticF__OnDisplayDetails_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*, "<OnDisplayDetails>k__BackingField",
                                           ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>();
}
inline ::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_OnDisplayDetails() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_OnDisplayDetails", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_OnDisplayDetails(::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(),
                                                           { "set_OnDisplayDetails", {}, { ::i2c::type_of<::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::Setup(::StringW label, ::StringW callstack, ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* severity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(),
                                       { "Setup", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, callstack, severity);
}
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Label() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Label", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_Label(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "set_Label", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Callstack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Callstack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_Callstack(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "set_Callstack", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Severity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Severity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_Severity(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(),
                                                                                         { "set_Severity", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_Count(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "set_Count", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Line() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Line", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::set_Line(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(),
                                                                                         { "set_Line", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::get_Shown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "get_Shown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::DisplayDetails() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { "DisplayDetails", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry::LogEntry() {}
