#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/RemotingSurrogateSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__RemotingSurrogateSelector_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ObjRefSurrogate_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__RemotingSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::*)()>(
    &::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b48084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector.GetSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (
    ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext,
                                                                          ::by_ref<::System::Runtime::Serialization::ISurrogateSelector*>)>(
    &::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetSurrogate)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5b48088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::ISurrogateSelector*& System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__cordl_internal_set__next(::System::Runtime::Serialization::ISurrogateSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____next = value;
}
inline void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::setStaticF_s_cachedTypeObjRef(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_cachedTypeObjRef", ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::getStaticF_s_cachedTypeObjRef() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_cachedTypeObjRef", ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>();
}
inline void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::setStaticF__objRefSurrogate(::System::Runtime::Remoting::Messaging::ObjRefSurrogate* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*, "_objRefSurrogate", ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>(
      std::forward<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>(value));
}
inline ::System::Runtime::Remoting::Messaging::ObjRefSurrogate* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::getStaticF__objRefSurrogate() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*, "_objRefSurrogate", ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>();
}
inline void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::setStaticF__objRemotingSurrogate(::System::Runtime::Remoting::Messaging::RemotingSurrogate* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Messaging::RemotingSurrogate*, "_objRemotingSurrogate", ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>(
      std::forward<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>(value));
}
inline ::System::Runtime::Remoting::Messaging::RemotingSurrogate* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::getStaticF__objRemotingSurrogate() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Messaging::RemotingSurrogate*, "_objRemotingSurrogate", ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>();
}
inline void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ISerializationSurrogate*
System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                              ::by_ref<::System::Runtime::Serialization::ISurrogateSelector*> ssout) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*>(this, ___internal_method, type, context, ssout);
}
inline ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISurrogateSelector"
constexpr System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::operator ::System::Runtime::Serialization::ISurrogateSelector*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISurrogateSelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISurrogateSelector"
constexpr ::System::Runtime::Serialization::ISurrogateSelector* System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::i___System__Runtime__Serialization__ISurrogateSelector() noexcept {
  return static_cast<::System::Runtime::Serialization::ISurrogateSelector*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::RemotingSurrogateSelector() {}
