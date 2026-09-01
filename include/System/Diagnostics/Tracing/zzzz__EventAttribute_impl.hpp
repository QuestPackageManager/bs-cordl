#pragma once
// IWYU pragma private; include "System\Diagnostics\Tracing\EventAttribute.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventAttribute_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(int32_t)>(&::System::Diagnostics::Tracing::EventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be282c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Tracing::EventAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_EventId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(int32_t)>(&::System::Diagnostics::Tracing::EventAttribute::set_EventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be2834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Tracing::EventAttribute*>(), { "set_EventId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Level
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::System::Diagnostics::Tracing::EventLevel)>(
    &::System::Diagnostics::Tracing::EventAttribute::set_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be283c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Tracing::EventAttribute*>(), { "set_Level", {}, { ::i2c::type_of<::System::Diagnostics::Tracing::EventLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Keywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::System::Diagnostics::Tracing::EventKeywords)>(
    &::System::Diagnostics::Tracing::EventAttribute::set_Keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be2844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Tracing::EventAttribute*>(),
                                                                                           { "set_Keywords", {}, { ::i2c::type_of<::System::Diagnostics::Tracing::EventKeywords>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::StringW)>(&::System::Diagnostics::Tracing::EventAttribute::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be284c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Tracing::EventAttribute*>(), { "set_Message", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__EventId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventId_k__BackingField;
}
constexpr int32_t const& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__EventId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventId_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__cordl_internal_set__EventId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EventId_k__BackingField = value;
}
constexpr ::System::Diagnostics::Tracing::EventLevel& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Level_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Level_k__BackingField;
}
constexpr ::System::Diagnostics::Tracing::EventLevel const& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Level_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Level_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__cordl_internal_set__Level_k__BackingField(::System::Diagnostics::Tracing::EventLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Level_k__BackingField = value;
}
constexpr ::System::Diagnostics::Tracing::EventKeywords& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Keywords_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Keywords_k__BackingField;
}
constexpr ::System::Diagnostics::Tracing::EventKeywords const& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Keywords_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Keywords_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__cordl_internal_set__Keywords_k__BackingField(::System::Diagnostics::Tracing::EventKeywords value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Keywords_k__BackingField = value;
}
constexpr ::StringW& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Message_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Message_k__BackingField;
}
constexpr ::StringW const& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Message_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Message_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__cordl_internal_set__Message_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Message_k__BackingField = value;
}
inline void System::Diagnostics::Tracing::EventAttribute::_ctor(int32_t eventId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Tracing::EventAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventId);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_EventId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Tracing::EventAttribute*>(), { "set_EventId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_Level(::System::Diagnostics::Tracing::EventLevel value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Tracing::EventAttribute*>(), { "set_Level", {}, { ::i2c::type_of<::System::Diagnostics::Tracing::EventLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_Keywords(::System::Diagnostics::Tracing::EventKeywords value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Tracing::EventAttribute*>(),
                                                                                         { "set_Keywords", {}, { ::i2c::type_of<::System::Diagnostics::Tracing::EventKeywords>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_Message(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Tracing::EventAttribute*>(), { "set_Message", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Diagnostics::Tracing::EventAttribute* System::Diagnostics::Tracing::EventAttribute::New_ctor(int32_t eventId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Tracing::EventAttribute*>(eventId));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Tracing::EventAttribute::EventAttribute() {}
