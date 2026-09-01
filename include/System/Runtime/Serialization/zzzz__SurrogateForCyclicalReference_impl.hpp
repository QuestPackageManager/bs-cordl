#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\SurrogateForCyclicalReference.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SurrogateForCyclicalReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateForCyclicalReference.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SurrogateForCyclicalReference::*)(
    ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::SurrogateForCyclicalReference::GetObjectData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b4f808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateForCyclicalReference*>(),
                                                             { "GetObjectData",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateForCyclicalReference.SetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::SurrogateForCyclicalReference::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                        ::System::Runtime::Serialization::ISurrogateSelector*)>(
    &::System::Runtime::Serialization::SurrogateForCyclicalReference::SetObjectData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b4f8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateForCyclicalReference*>(),
                                         { "SetObjectData",
                                           {},
                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                             ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& System::Runtime::Serialization::SurrogateForCyclicalReference::__cordl_internal_get_innerSurrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___innerSurrogate;
}
constexpr ::System::Runtime::Serialization::ISerializationSurrogate* const& System::Runtime::Serialization::SurrogateForCyclicalReference::__cordl_internal_get_innerSurrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___innerSurrogate;
}
constexpr void System::Runtime::Serialization::SurrogateForCyclicalReference::__cordl_internal_set_innerSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___innerSurrogate = value;
}
inline void System::Runtime::Serialization::SurrogateForCyclicalReference::GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                         ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateForCyclicalReference*>(),
                                                           { "GetObjectData",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, info, context);
}
inline ::System::Object* System::Runtime::Serialization::SurrogateForCyclicalReference::SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                      ::System::Runtime::Serialization::StreamingContext context,
                                                                                                      ::System::Runtime::Serialization::ISurrogateSelector* selector) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SurrogateForCyclicalReference*>(),
                                              { "SetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, info, context, selector);
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
constexpr System::Runtime::Serialization::SurrogateForCyclicalReference::operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializationSurrogate*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializationSurrogate"
constexpr ::System::Runtime::Serialization::ISerializationSurrogate*
System::Runtime::Serialization::SurrogateForCyclicalReference::i___System__Runtime__Serialization__ISerializationSurrogate() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializationSurrogate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SurrogateForCyclicalReference::SurrogateForCyclicalReference() {}
