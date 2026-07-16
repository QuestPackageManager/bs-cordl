#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/EventDescriptor.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EventDescriptor::*)(int32_t, uint8_t, uint8_t, uint8_t, uint8_t, int32_t, int64_t)>(
    &::System::Runtime::Diagnostics::EventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6184444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventDescriptor.get_EventId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Diagnostics::EventDescriptor::*)()>(&::System::Runtime::Diagnostics::EventDescriptor::get_EventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618ba28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "get_EventId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventDescriptor.get_Channel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Runtime::Diagnostics::EventDescriptor::*)()>(&::System::Runtime::Diagnostics::EventDescriptor::get_Channel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618ba30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "get_Channel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventDescriptor.get_Level
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Runtime::Diagnostics::EventDescriptor::*)()>(&::System::Runtime::Diagnostics::EventDescriptor::get_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618ba38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "get_Level", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventDescriptor.get_Opcode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Runtime::Diagnostics::EventDescriptor::*)()>(&::System::Runtime::Diagnostics::EventDescriptor::get_Opcode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618ba40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "get_Opcode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventDescriptor.get_Keywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Runtime::Diagnostics::EventDescriptor::*)()>(&::System::Runtime::Diagnostics::EventDescriptor::get_Keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618ba48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "get_Keywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventDescriptor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EventDescriptor::*)(::System::Object*)>(&::System::Runtime::Diagnostics::EventDescriptor::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x618ba50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { ::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventDescriptor.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Diagnostics::EventDescriptor::*)()>(&::System::Runtime::Diagnostics::EventDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x618bb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { ::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventDescriptor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EventDescriptor::*)(::System::Runtime::Diagnostics::EventDescriptor)>(
    &::System::Runtime::Diagnostics::EventDescriptor::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x618bad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "Equals", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EventDescriptor>() } })));
    return ___internal_method;
  }
};
constexpr uint16_t& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_id() {
  return this->___m_id;
}
constexpr uint16_t const& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_id() const {
  return this->___m_id;
}
constexpr void System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_set_m_id(uint16_t value) {
  this->___m_id = value;
}
constexpr uint8_t& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_version() {
  return this->___m_version;
}
constexpr uint8_t const& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_version() const {
  return this->___m_version;
}
constexpr void System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_set_m_version(uint8_t value) {
  this->___m_version = value;
}
constexpr uint8_t& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_channel() {
  return this->___m_channel;
}
constexpr uint8_t const& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_channel() const {
  return this->___m_channel;
}
constexpr void System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_set_m_channel(uint8_t value) {
  this->___m_channel = value;
}
constexpr uint8_t& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_level() {
  return this->___m_level;
}
constexpr uint8_t const& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_level() const {
  return this->___m_level;
}
constexpr void System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_set_m_level(uint8_t value) {
  this->___m_level = value;
}
constexpr uint8_t& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_opcode() {
  return this->___m_opcode;
}
constexpr uint8_t const& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_opcode() const {
  return this->___m_opcode;
}
constexpr void System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_set_m_opcode(uint8_t value) {
  this->___m_opcode = value;
}
constexpr uint16_t& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_task() {
  return this->___m_task;
}
constexpr uint16_t const& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_task() const {
  return this->___m_task;
}
constexpr void System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_set_m_task(uint16_t value) {
  this->___m_task = value;
}
constexpr int64_t& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_keywords() {
  return this->___m_keywords;
}
constexpr int64_t const& System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_get_m_keywords() const {
  return this->___m_keywords;
}
constexpr void System::Runtime::Diagnostics::EventDescriptor::__cordl_internal_set_m_keywords(int64_t value) {
  this->___m_keywords = value;
}
inline void System::Runtime::Diagnostics::EventDescriptor::_ctor(int32_t id, uint8_t version, uint8_t channel, uint8_t level, uint8_t opcode, int32_t task, int64_t keywords) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(),
                                                                                             ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, version, channel, level, opcode, task, keywords);
}
inline int32_t System::Runtime::Diagnostics::EventDescriptor::get_EventId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "get_EventId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint8_t System::Runtime::Diagnostics::EventDescriptor::get_Channel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "get_Channel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline uint8_t System::Runtime::Diagnostics::EventDescriptor::get_Level() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "get_Level", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline uint8_t System::Runtime::Diagnostics::EventDescriptor::get_Opcode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "get_Opcode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline int64_t System::Runtime::Diagnostics::EventDescriptor::get_Keywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "get_Keywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::EventDescriptor::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::Runtime::Diagnostics::EventDescriptor::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::EventDescriptor::Equals(::System::Runtime::Diagnostics::EventDescriptor other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventDescriptor>(), { "Equals", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EventDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_id", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_version", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_channel", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_level", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_opcode", ty:
// "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_task", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_keywords", ty: "int64_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Runtime::Diagnostics::EventDescriptor::EventDescriptor(uint16_t m_id, uint8_t m_version, uint8_t m_channel, uint8_t m_level, uint8_t m_opcode, uint16_t m_task,
                                                                           int64_t m_keywords) noexcept {
  this->m_id = m_id;
  this->m_version = m_version;
  this->m_channel = m_channel;
  this->m_level = m_level;
  this->m_opcode = m_opcode;
  this->m_task = m_task;
  this->m_keywords = m_keywords;
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::EventDescriptor::EventDescriptor() {}
