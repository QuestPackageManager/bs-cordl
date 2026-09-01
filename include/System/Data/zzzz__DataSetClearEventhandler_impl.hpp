#pragma once
// IWYU pragma private; include "System\Data\DataSetClearEventhandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Data/zzzz__DataSetClearEventhandler_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataSetClearEventhandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSetClearEventhandler::*)(::System::Object*, ::System::IntPtr)>(&::System::Data::DataSetClearEventhandler::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x602e3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataSetClearEventhandler*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataSetClearEventhandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataSetClearEventhandler::*)(::System::Object*, ::System::Data::DataTable*)>(
    &::System::Data::DataSetClearEventhandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x602e500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataSetClearEventhandler*>(), { ::i2c::class_of<::System::Data::DataSetClearEventhandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Data::DataSetClearEventhandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataSetClearEventhandler*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Data::DataSetClearEventhandler::Invoke(::System::Object* sender, ::System::Data::DataTable* table) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataSetClearEventhandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, table);
}
inline ::System::Data::DataSetClearEventhandler* System::Data::DataSetClearEventhandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataSetClearEventhandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Data::DataSetClearEventhandler::DataSetClearEventhandler() {}
