#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLClientEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientEvents_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLClientEvents_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.add_onRequestSucceeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::BeatSaber::GraphQL::GraphQLClientEvents::add_onRequestSucceeded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3294078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                             { "add_onRequestSucceeded", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.remove_onRequestSucceeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::BeatSaber::GraphQL::GraphQLClientEvents::remove_onRequestSucceeded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3294138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                             { "remove_onRequestSucceeded", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.add_onRequestFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::BeatSaber::GraphQL::GraphQLClientEvents::add_onRequestFailed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32941f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                             { "add_onRequestFailed", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.remove_onRequestFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::BeatSaber::GraphQL::GraphQLClientEvents::remove_onRequestFailed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32942b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                             { "remove_onRequestFailed", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*,
                                                                                                           ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*)>(
    &::BeatSaber::GraphQL::GraphQLClientEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3294378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>(),
                                                                                               ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::StringW)>(&::BeatSaber::GraphQL::GraphQLClientEvents::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3294380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::System::Exception*)>(&::BeatSaber::GraphQL::GraphQLClientEvents::LogError)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x329440c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogError", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.LogInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::StringW)>(&::BeatSaber::GraphQL::GraphQLClientEvents::LogInfo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x32944b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.LogInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::System::Exception*)>(&::BeatSaber::GraphQL::GraphQLClientEvents::LogInfo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3294544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogInfo", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.LogVerbose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::StringW)>(&::BeatSaber::GraphQL::GraphQLClientEvents::LogVerbose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32945f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogVerbose", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::StringW)>(&::BeatSaber::GraphQL::GraphQLClientEvents::LogWarning)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x32945f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.OnRequestSucceeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::OculusStudios::GraphQL::ClientInterface::Request*)>(
    &::BeatSaber::GraphQL::GraphQLClientEvents::OnRequestSucceeded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3294680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                                                           { "OnRequestSucceeded", {}, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::Request*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientEvents.OnRequestFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientEvents::*)(::OculusStudios::GraphQL::ClientInterface::Request*)>(
    &::BeatSaber::GraphQL::GraphQLClientEvents::OnRequestFailed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x329469c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                                                           { "OnRequestFailed", {}, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::Request*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& BeatSaber::GraphQL::GraphQLClientEvents::__cordl_internal_get_onRequestSucceeded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRequestSucceeded;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& BeatSaber::GraphQL::GraphQLClientEvents::__cordl_internal_get_onRequestSucceeded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRequestSucceeded;
}
constexpr void BeatSaber::GraphQL::GraphQLClientEvents::__cordl_internal_set_onRequestSucceeded(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onRequestSucceeded = value;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*& BeatSaber::GraphQL::GraphQLClientEvents::__cordl_internal_get_onRequestFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRequestFailed;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* const& BeatSaber::GraphQL::GraphQLClientEvents::__cordl_internal_get_onRequestFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRequestFailed;
}
constexpr void BeatSaber::GraphQL::GraphQLClientEvents::__cordl_internal_set_onRequestFailed(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onRequestFailed = value;
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::add_onRequestSucceeded(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                           { "add_onRequestSucceeded", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::remove_onRequestSucceeded(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                           { "remove_onRequestSucceeded", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::add_onRequestFailed(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                           { "add_onRequestFailed", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::remove_onRequestFailed(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                           { "remove_onRequestFailed", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::_ctor(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* onRequestSucceeded,
                                                           ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* onRequestFailed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>(),
                                                                                             ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onRequestSucceeded, onRequestFailed);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::LogError(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogError", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::LogInfo(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::LogInfo(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogInfo", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::LogVerbose(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogVerbose", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::OnRequestSucceeded(::OculusStudios::GraphQL::ClientInterface::Request* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                                                         { "OnRequestSucceeded", {}, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::Request*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void BeatSaber::GraphQL::GraphQLClientEvents::OnRequestFailed(::OculusStudios::GraphQL::ClientInterface::Request* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientEvents*>(),
                                                                                         { "OnRequestFailed", {}, { ::i2c::type_of<::OculusStudios::GraphQL::ClientInterface::Request*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::BeatSaber::GraphQL::GraphQLClientEvents* BeatSaber::GraphQL::GraphQLClientEvents::New_ctor(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* onRequestSucceeded,
                                                                                                    ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* onRequestFailed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GraphQL::GraphQLClientEvents*>(onRequestSucceeded, onRequestFailed));
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents"
constexpr BeatSaber::GraphQL::GraphQLClientEvents::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* BeatSaber::GraphQL::GraphQLClientEvents::i___OculusStudios__GraphQL__ClientInterface__IGraphQLClientEvents() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientEvents::GraphQLClientEvents() {}
