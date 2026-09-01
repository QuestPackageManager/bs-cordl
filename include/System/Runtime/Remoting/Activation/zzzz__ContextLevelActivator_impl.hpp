#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Activation\ContextLevelActivator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__ContextLevelActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ContextLevelActivator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Activation::ContextLevelActivator::*)(::System::Runtime::Remoting::Activation::IActivator*)>(
    &::System::Runtime::Remoting::Activation::ContextLevelActivator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3ceec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ContextLevelActivator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IActivator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ContextLevelActivator.get_NextActivator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (::System::Runtime::Remoting::Activation::ContextLevelActivator::*)()>(
    &::System::Runtime::Remoting::Activation::ContextLevelActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3d800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ContextLevelActivator*>(), { "get_NextActivator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ContextLevelActivator.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage* (
    ::System::Runtime::Remoting::Activation::ContextLevelActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Activation::ContextLevelActivator::Activate)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b3d808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ContextLevelActivator*>(),
                                                             { "Activate", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Activation::IActivator*& System::Runtime::Remoting::Activation::ContextLevelActivator::__cordl_internal_get_m_NextActivator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextActivator;
}
constexpr ::System::Runtime::Remoting::Activation::IActivator* const& System::Runtime::Remoting::Activation::ContextLevelActivator::__cordl_internal_get_m_NextActivator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextActivator;
}
constexpr void System::Runtime::Remoting::Activation::ContextLevelActivator::__cordl_internal_set_m_NextActivator(::System::Runtime::Remoting::Activation::IActivator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextActivator = value;
}
inline void System::Runtime::Remoting::Activation::ContextLevelActivator::_ctor(::System::Runtime::Remoting::Activation::IActivator* next) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ContextLevelActivator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IActivator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, next);
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::ContextLevelActivator::get_NextActivator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ContextLevelActivator*>(), { "get_NextActivator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage*
System::Runtime::Remoting::Activation::ContextLevelActivator::Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::ContextLevelActivator*>(),
                                                           { "Activate", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IConstructionReturnMessage*>(this, ___internal_method, ctorCall);
}
inline ::System::Runtime::Remoting::Activation::ContextLevelActivator*
System::Runtime::Remoting::Activation::ContextLevelActivator::New_ctor(::System::Runtime::Remoting::Activation::IActivator* next) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Activation::ContextLevelActivator*>(next));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
constexpr System::Runtime::Remoting::Activation::ContextLevelActivator::operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IActivator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Activation::IActivator"
constexpr ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::ContextLevelActivator::i___System__Runtime__Remoting__Activation__IActivator() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IActivator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Activation::ContextLevelActivator::ContextLevelActivator() {}
