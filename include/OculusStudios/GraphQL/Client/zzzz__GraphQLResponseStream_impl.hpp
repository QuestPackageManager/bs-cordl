#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\GraphQLResponseStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponseStream_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponseStream_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponse_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream___c::*)()>(&::OculusStudios::GraphQL::Client::GraphQLResponseStream___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2c190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c.__ctor_b__21_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream___c::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseStream___c::__ctor_b__21_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2c194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*>(), { "<.ctor>b__21_0", {}, {} })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream___c::setStaticF___9(::OculusStudios::GraphQL::Client::GraphQLResponseStream___c* value) {
  ::cordl_internals::setStaticField<::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*, "<>9", ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*>(
      std::forward<::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*>(value));
}
inline ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c* OculusStudios::GraphQL::Client::GraphQLResponseStream___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*, "<>9", ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*>();
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream___c::setStaticF___9__21_0(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__21_0", ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* OculusStudios::GraphQL::Client::GraphQLResponseStream___c::getStaticF___9__21_0() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__21_0", ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*>();
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream___c::__ctor_b__21_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*>(), { "<.ctor>b__21_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c* OculusStudios::GraphQL::Client::GraphQLResponseStream___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c::GraphQLResponseStream___c() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.add_OnCancelled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)(::System::Action*)>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseStream::add_OnCancelled)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f26dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "add_OnCancelled", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.remove_OnCancelled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)(::System::Action*)>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseStream::remove_OnCancelled)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f2be5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "remove_OnCancelled", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.add_OnConnectionClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)(::System::Action*)>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseStream::add_OnConnectionClosed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f2bf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "add_OnConnectionClosed", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.remove_OnConnectionClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)(::System::Action*)>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseStream::remove_OnConnectionClosed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f2bfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "remove_OnConnectionClosed", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)()>(&::OculusStudios::GraphQL::Client::GraphQLResponseStream::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f2c060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)(bool)>(&::OculusStudios::GraphQL::Client::GraphQLResponseStream::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f2c070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.get_InitialResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::Client::GraphQLResponse* (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseStream::get_InitialResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "get_InitialResponse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.set_InitialResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)(::OculusStudios::GraphQL::Client::GraphQLResponse*)>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseStream::set_InitialResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(),
                                                                                           { "set_InitialResponse", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.Cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)()>(&::OculusStudios::GraphQL::Client::GraphQLResponseStream::Cancel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f2c090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "Cancel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.SetResponseCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)(::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>*)>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseStream::SetResponseCallback)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f2c0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(),
                                                             { "SetResponseCallback", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.SetResponseCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)(
    ::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>*)>(&::OculusStudios::GraphQL::Client::GraphQLResponseStream::SetResponseCallback)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f2c0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(),
                            { "SetResponseCallback", {}, { ::i2c::type_of<::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.PostResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)(::OculusStudios::GraphQL::Client::GraphQLResponse*)>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseStream::PostResponse)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f24bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(),
                                                                                           { "PostResponse", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream.NoteConnectionClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLResponseStream::NoteConnectionClosed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f2c11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "NoteConnectionClosed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponseStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponseStream::*)()>(&::OculusStudios::GraphQL::Client::GraphQLResponseStream::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f2500c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_get_OnCancelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnCancelled;
}
constexpr ::System::Action* const& OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_get_OnCancelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnCancelled;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_set_OnCancelled(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnCancelled = value;
}
constexpr ::System::Action*& OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_get_OnConnectionClosed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnConnectionClosed;
}
constexpr ::System::Action* const& OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_get_OnConnectionClosed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnConnectionClosed;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_set_OnConnectionClosed(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnConnectionClosed = value;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>*& OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_get__responseCallbackSync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseCallbackSync;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>* const& OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_get__responseCallbackSync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseCallbackSync;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_set__responseCallbackSync(::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____responseCallbackSync = value;
}
constexpr ::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>*&
OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_get__responseCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseCallback;
}
constexpr ::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>* const&
OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_get__responseCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseCallback;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_set__responseCallback(
    ::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____responseCallback = value;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLResponse*& OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_get__InitialResponse_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InitialResponse_k__BackingField;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLResponse* const& OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_get__InitialResponse_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InitialResponse_k__BackingField;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponseStream::__cordl_internal_set__InitialResponse_k__BackingField(::OculusStudios::GraphQL::Client::GraphQLResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InitialResponse_k__BackingField = value;
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::add_OnCancelled(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "add_OnCancelled", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::remove_OnCancelled(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "remove_OnCancelled", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::add_OnConnectionClosed(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "add_OnConnectionClosed", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::remove_OnConnectionClosed(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "remove_OnConnectionClosed", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::OculusStudios::GraphQL::Client::GraphQLResponse* OculusStudios::GraphQL::Client::GraphQLResponseStream::get_InitialResponse() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "get_InitialResponse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::Client::GraphQLResponse*>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::set_InitialResponse(::OculusStudios::GraphQL::Client::GraphQLResponse* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(),
                                                                                         { "set_InitialResponse", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::Cancel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "Cancel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::SetResponseCallback(::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(),
                                                           { "SetResponseCallback", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void
OculusStudios::GraphQL::Client::GraphQLResponseStream::SetResponseCallback(::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(),
                                       { "SetResponseCallback", {}, { ::i2c::type_of<::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::PostResponse(::OculusStudios::GraphQL::Client::GraphQLResponse* response) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(),
                                                                                         { "PostResponse", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::NoteConnectionClosed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { "NoteConnectionClosed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponseStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLResponseStream* OculusStudios::GraphQL::Client::GraphQLResponseStream::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OculusStudios::GraphQL::Client::GraphQLResponseStream::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OculusStudios::GraphQL::Client::GraphQLResponseStream::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLResponseStream::GraphQLResponseStream() {}
