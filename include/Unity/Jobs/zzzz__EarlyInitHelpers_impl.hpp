#pragma once
// IWYU pragma private; include "Unity/Jobs/EarlyInitHelpers.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__EarlyInitHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__EarlyInitHelpers_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64a226c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::*)()>(&::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a22d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(), { ::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64a22e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(), { ::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::*)(::System::IAsyncResult*)>(
    &::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a2304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(), { ::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction* Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction::EarlyInitHelpers_EarlyInitFunction() {}
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers.FlushEarlyInits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Jobs::EarlyInitHelpers::FlushEarlyInits)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x64a1ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers*>(), { "FlushEarlyInits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers.AddEarlyInitFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*)>(&::Unity::Jobs::EarlyInitHelpers::AddEarlyInitFunction)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x64a2094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers*>(),
                                                                                           { "AddEarlyInitFunction", {}, { ::i2c::type_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers.JobReflectionDataCreationFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::Unity::Jobs::EarlyInitHelpers::JobReflectionDataCreationFailed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64a21e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers*>(), { "JobReflectionDataCreationFailed", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::EarlyInitHelpers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::EarlyInitHelpers::*)()>(&::Unity::Jobs::EarlyInitHelpers::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a2268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Jobs::EarlyInitHelpers::setStaticF_s_PendingDelegates(::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>*, "s_PendingDelegates", ::Unity::Jobs::EarlyInitHelpers*>(
      std::forward<::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>* Unity::Jobs::EarlyInitHelpers::getStaticF_s_PendingDelegates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>*, "s_PendingDelegates", ::Unity::Jobs::EarlyInitHelpers*>();
}
inline void Unity::Jobs::EarlyInitHelpers::FlushEarlyInits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers*>(), { "FlushEarlyInits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Jobs::EarlyInitHelpers::AddEarlyInitFunction(::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction* func) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers*>(), { "AddEarlyInitFunction", {}, { ::i2c::type_of<::Unity::Jobs::EarlyInitHelpers_EarlyInitFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func);
}
inline void Unity::Jobs::EarlyInitHelpers::JobReflectionDataCreationFailed(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers*>(), { "JobReflectionDataCreationFailed", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ex);
}
inline void Unity::Jobs::EarlyInitHelpers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::EarlyInitHelpers*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Jobs::EarlyInitHelpers* Unity::Jobs::EarlyInitHelpers::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Jobs::EarlyInitHelpers*>());
}
// Ctor Parameters []
constexpr ::Unity::Jobs::EarlyInitHelpers::EarlyInitHelpers() {}
