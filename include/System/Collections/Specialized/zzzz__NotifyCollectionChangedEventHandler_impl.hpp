#pragma once
// IWYU pragma private; include "System/Collections/Specialized/NotifyCollectionChangedEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Collections/Specialized/zzzz__NotifyCollectionChangedEventHandler_def.hpp"
#include "System/Collections/Specialized/zzzz__NotifyCollectionChangedEventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::NotifyCollectionChangedEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NotifyCollectionChangedEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Collections::Specialized::NotifyCollectionChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x63ec148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NotifyCollectionChangedEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NotifyCollectionChangedEventHandler::*)(
    ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*)>(&::System::Collections::Specialized::NotifyCollectionChangedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63ec290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Collections::Specialized::NotifyCollectionChangedEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Collections::Specialized::NotifyCollectionChangedEventHandler::Invoke(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Collections::Specialized::NotifyCollectionChangedEventHandler* System::Collections::Specialized::NotifyCollectionChangedEventHandler::New_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::NotifyCollectionChangedEventHandler::NotifyCollectionChangedEventHandler() {}
