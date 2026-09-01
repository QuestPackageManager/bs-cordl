#pragma once
// IWYU pragma private; include "System\Data\DataRowChangeEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Data/zzzz__DataRowChangeEventHandler_def.hpp"
#include "System/Data/zzzz__DataRowChangeEventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataRowChangeEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowChangeEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::Data::DataRowChangeEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x602d8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataRowChangeEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowChangeEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowChangeEventHandler::*)(::System::Object*, ::System::Data::DataRowChangeEventArgs*)>(
    &::System::Data::DataRowChangeEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x602d9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRowChangeEventHandler*>(), { ::i2c::class_of<::System::Data::DataRowChangeEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Data::DataRowChangeEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataRowChangeEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Data::DataRowChangeEventHandler::Invoke(::System::Object* sender, ::System::Data::DataRowChangeEventArgs* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRowChangeEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Data::DataRowChangeEventHandler* System::Data::DataRowChangeEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataRowChangeEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Data::DataRowChangeEventHandler::DataRowChangeEventHandler() {}
