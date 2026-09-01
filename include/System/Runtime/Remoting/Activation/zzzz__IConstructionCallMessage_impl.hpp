#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Activation\IConstructionCallMessage.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::IConstructionCallMessage.get_ActivationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Remoting::Activation::IConstructionCallMessage::*)()>(
    &::System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ActivationType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::IConstructionCallMessage.get_ActivationTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Activation::IConstructionCallMessage::*)()>(
    &::System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ActivationTypeName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::IConstructionCallMessage.get_Activator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (::System::Runtime::Remoting::Activation::IConstructionCallMessage::*)()>(
    &::System::Runtime::Remoting::Activation::IConstructionCallMessage::get_Activator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::IConstructionCallMessage.set_Activator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Activation::IConstructionCallMessage::*)(::System::Runtime::Remoting::Activation::IActivator*)>(
    &::System::Runtime::Remoting::Activation::IConstructionCallMessage::set_Activator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::IConstructionCallMessage.get_CallSiteActivationAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Activation::IConstructionCallMessage::*)()>(
    &::System::Runtime::Remoting::Activation::IConstructionCallMessage::get_CallSiteActivationAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::IConstructionCallMessage.get_ContextProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::System::Runtime::Remoting::Activation::IConstructionCallMessage::*)()>(
    &::System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ContextProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 5 }));
    return ___internal_method;
  }
};
inline ::System::Type* System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ActivationType() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ActivationTypeName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::IConstructionCallMessage::get_Activator() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Activation::IConstructionCallMessage::set_Activator(::System::Runtime::Remoting::Activation::IActivator* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Activation::IConstructionCallMessage::get_CallSiteActivationAttributes() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::System::Collections::IList* System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ContextProperties() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr System::Runtime::Remoting::Activation::IConstructionCallMessage::operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Activation::IConstructionCallMessage::i___System__Runtime__Remoting__Messaging__IMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr System::Runtime::Remoting::Activation::IConstructionCallMessage::operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage*
System::Runtime::Remoting::Activation::IConstructionCallMessage::i___System__Runtime__Remoting__Messaging__IMethodCallMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr System::Runtime::Remoting::Activation::IConstructionCallMessage::operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* System::Runtime::Remoting::Activation::IConstructionCallMessage::i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(static_cast<void*>(this));
}
