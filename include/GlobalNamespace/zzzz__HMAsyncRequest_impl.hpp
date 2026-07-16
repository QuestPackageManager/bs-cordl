#pragma once
// IWYU pragma private; include "GlobalNamespace/HMAsyncRequest.hpp"
#include "GlobalNamespace/zzzz__HMAutoincrementedRequestId_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest_CancelHander._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HMAsyncRequest_CancelHander::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::HMAsyncRequest_CancelHander::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x585988c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest_CancelHander.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HMAsyncRequest_CancelHander::*)(::GlobalNamespace::HMAsyncRequest*)>(
    &::GlobalNamespace::HMAsyncRequest_CancelHander::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58599d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(), { ::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest_CancelHander.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::HMAsyncRequest_CancelHander::*)(::GlobalNamespace::HMAsyncRequest*, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::HMAsyncRequest_CancelHander::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58599e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(), { ::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest_CancelHander.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HMAsyncRequest_CancelHander::*)(::System::IAsyncResult*)>(&::GlobalNamespace::HMAsyncRequest_CancelHander::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5859a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(), { ::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HMAsyncRequest_CancelHander::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::HMAsyncRequest_CancelHander::Invoke(::GlobalNamespace::HMAsyncRequest* request) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::System::IAsyncResult* GlobalNamespace::HMAsyncRequest_CancelHander::BeginInvoke(::GlobalNamespace::HMAsyncRequest* request, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, request, callback, object);
}
inline void GlobalNamespace::HMAsyncRequest_CancelHander::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::HMAsyncRequest_CancelHander* GlobalNamespace::HMAsyncRequest_CancelHander::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HMAsyncRequest_CancelHander*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HMAsyncRequest_CancelHander::HMAsyncRequest_CancelHander() {}
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.get_CancelHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest_CancelHander* (::GlobalNamespace::HMAsyncRequest::*)()>(
    &::GlobalNamespace::HMAsyncRequest::get_CancelHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58597ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), { "get_CancelHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.set_CancelHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HMAsyncRequest::*)(::GlobalNamespace::HMAsyncRequest_CancelHander*)>(
    &::GlobalNamespace::HMAsyncRequest::set_CancelHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58597f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), { "set_CancelHandler", {}, { ::i2c::type_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.get_cancelled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HMAsyncRequest::*)()>(&::GlobalNamespace::HMAsyncRequest::get_cancelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58597fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), { "get_cancelled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.Cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HMAsyncRequest::*)()>(&::GlobalNamespace::HMAsyncRequest::Cancel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5859804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), { ::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HMAsyncRequest::*)()>(&::GlobalNamespace::HMAsyncRequest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585982c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::HMAsyncRequest::__cordl_internal_get__cancelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelled;
}
constexpr bool const& GlobalNamespace::HMAsyncRequest::__cordl_internal_get__cancelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelled;
}
constexpr void GlobalNamespace::HMAsyncRequest::__cordl_internal_set__cancelled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelled = value;
}
constexpr ::GlobalNamespace::HMAsyncRequest_CancelHander*& GlobalNamespace::HMAsyncRequest::__cordl_internal_get__cancelHander() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelHander;
}
constexpr ::GlobalNamespace::HMAsyncRequest_CancelHander* const& GlobalNamespace::HMAsyncRequest::__cordl_internal_get__cancelHander() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelHander;
}
constexpr void GlobalNamespace::HMAsyncRequest::__cordl_internal_set__cancelHander(::GlobalNamespace::HMAsyncRequest_CancelHander* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelHander = value;
}
inline ::GlobalNamespace::HMAsyncRequest_CancelHander* GlobalNamespace::HMAsyncRequest::get_CancelHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), { "get_CancelHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest_CancelHander*>(this, ___internal_method);
}
inline void GlobalNamespace::HMAsyncRequest::set_CancelHandler(::GlobalNamespace::HMAsyncRequest_CancelHander* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), { "set_CancelHandler", {}, { ::i2c::type_of<::GlobalNamespace::HMAsyncRequest_CancelHander*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::HMAsyncRequest::get_cancelled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), { "get_cancelled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HMAsyncRequest::Cancel() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HMAsyncRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HMAsyncRequest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::HMAsyncRequest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HMAsyncRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HMAsyncRequest::HMAsyncRequest() {}
