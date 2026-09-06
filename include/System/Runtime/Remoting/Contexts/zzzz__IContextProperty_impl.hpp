#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/IContextProperty.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextProperty_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IContextProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Contexts::IContextProperty::*)()>(&::System::Runtime::Remoting::Contexts::IContextProperty::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextProperty*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextProperty*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IContextProperty.Freeze
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::IContextProperty::*)(::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::Contexts::IContextProperty::Freeze)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextProperty*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextProperty*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IContextProperty.IsNewContextOK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Contexts::IContextProperty::*)(::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::Contexts::IContextProperty::IsNewContextOK)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextProperty*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextProperty*>(), 2 }));
    return ___internal_method;
  }
};
inline ::StringW System::Runtime::Remoting::Contexts::IContextProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextProperty*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Contexts::IContextProperty::Freeze(::System::Runtime::Remoting::Contexts::Context* newContext) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextProperty*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newContext);
}
inline bool System::Runtime::Remoting::Contexts::IContextProperty::IsNewContextOK(::System::Runtime::Remoting::Contexts::Context* newCtx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IContextProperty*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newCtx);
}
