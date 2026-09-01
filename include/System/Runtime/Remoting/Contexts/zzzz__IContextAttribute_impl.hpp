#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Contexts\IContextAttribute.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextAttribute_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IContextAttribute.GetPropertiesForNewContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::IContextAttribute::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Contexts::IContextAttribute::GetPropertiesForNewContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IContextAttribute.IsContextOK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Contexts::IContextAttribute::*)(
    ::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Contexts::IContextAttribute::IsContextOK)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextAttribute*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Contexts::IContextAttribute::GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline bool System::Runtime::Remoting::Contexts::IContextAttribute::IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx,
                                                                                ::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextAttribute*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ctx, msg);
}
