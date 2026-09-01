#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\Creator_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__Creator_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void Newtonsoft::Json::Utilities::Creator_1<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::Creator_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T> inline T Newtonsoft::Json::Utilities::Creator_1<T>::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::Creator_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::System::IAsyncResult* Newtonsoft::Json::Utilities::Creator_1<T>::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::Creator_1<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
template <typename T> inline T Newtonsoft::Json::Utilities::Creator_1<T>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::Creator_1<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, result);
}
template <typename T> inline ::Newtonsoft::Json::Utilities::Creator_1<T>* Newtonsoft::Json::Utilities::Creator_1<T>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::Creator_1<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Utilities::Creator_1<T>::Creator_1() {}
