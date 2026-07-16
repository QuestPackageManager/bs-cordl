#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/RemoteActivationAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__RemoteActivationAttribute_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::RemoteActivationAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(::System::Collections::IList*)>(
    &::System::Runtime::Remoting::Activation::RemoteActivationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3b6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::RemoteActivationAttribute.IsContextOK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(
    ::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Activation::RemoteActivationAttribute::IsContextOK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3b6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>(),
            { "IsContextOK", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>(), ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::RemoteActivationAttribute.GetPropertiesForNewContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(
    ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Activation::RemoteActivationAttribute::GetPropertiesForNewContext)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x5b3b700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>(),
                                                             { "GetPropertiesForNewContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& System::Runtime::Remoting::Activation::RemoteActivationAttribute::__cordl_internal_get__contextProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextProperties;
}
constexpr ::System::Collections::IList* const& System::Runtime::Remoting::Activation::RemoteActivationAttribute::__cordl_internal_get__contextProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextProperties;
}
constexpr void System::Runtime::Remoting::Activation::RemoteActivationAttribute::__cordl_internal_set__contextProperties(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contextProperties = value;
}
inline void System::Runtime::Remoting::Activation::RemoteActivationAttribute::_ctor(::System::Collections::IList* contextProperties) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextProperties);
}
inline bool System::Runtime::Remoting::Activation::RemoteActivationAttribute::IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx,
                                                                                          ::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>(),
          { "IsContextOK", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>(), ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ctx, ctor);
}
inline void System::Runtime::Remoting::Activation::RemoteActivationAttribute::GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>(),
                                                           { "GetPropertiesForNewContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctor);
}
inline ::System::Runtime::Remoting::Activation::RemoteActivationAttribute* System::Runtime::Remoting::Activation::RemoteActivationAttribute::New_ctor(::System::Collections::IList* contextProperties) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>(contextProperties));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Contexts::IContextAttribute"
constexpr System::Runtime::Remoting::Activation::RemoteActivationAttribute::operator ::System::Runtime::Remoting::Contexts::IContextAttribute*() noexcept {
  return static_cast<::System::Runtime::Remoting::Contexts::IContextAttribute*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Contexts::IContextAttribute"
constexpr ::System::Runtime::Remoting::Contexts::IContextAttribute*
System::Runtime::Remoting::Activation::RemoteActivationAttribute::i___System__Runtime__Remoting__Contexts__IContextAttribute() noexcept {
  return static_cast<::System::Runtime::Remoting::Contexts::IContextAttribute*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Activation::RemoteActivationAttribute::RemoteActivationAttribute() {}
