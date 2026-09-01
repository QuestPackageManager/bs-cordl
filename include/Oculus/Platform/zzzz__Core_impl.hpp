#pragma once
// IWYU pragma private; include "Oculus\Platform\Core.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Core_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__InitConfigOptions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Core.IsInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Platform::Core::IsInitialized)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dddff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "IsInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Core.ForceInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Oculus::Platform::Core::ForceInitialized)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5dde054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "ForceInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Core.getAppID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Oculus::Platform::Core::getAppID)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5dde0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "getAppID", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Core.AsyncInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (*)(::StringW)>(&::Oculus::Platform::Core::AsyncInitialize)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5dde31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "AsyncInitialize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Core.AsyncInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (*)(::StringW, ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>*,
                                                                                        ::StringW)>(&::Oculus::Platform::Core::AsyncInitialize)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5dde8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(),
                                                { "AsyncInitialize",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>*>(),
                                                    ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Core.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Oculus::Platform::Core::Initialize)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5ddec94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Core.GetAppIDFromConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Oculus::Platform::Core::GetAppIDFromConfig)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5dde26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "GetAppIDFromConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Core._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Core::*)()>(&::Oculus::Platform::Core::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ddf188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Core::setStaticF_IsPlatformInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "IsPlatformInitialized", ::Oculus::Platform::Core*>(std::forward<bool>(value));
}
inline bool Oculus::Platform::Core::getStaticF_IsPlatformInitialized() {
  return ::cordl_internals::getStaticField<bool, "IsPlatformInitialized", ::Oculus::Platform::Core*>();
}
inline void Oculus::Platform::Core::setStaticF_LogMessages(bool value) {
  ::cordl_internals::setStaticField<bool, "LogMessages", ::Oculus::Platform::Core*>(std::forward<bool>(value));
}
inline bool Oculus::Platform::Core::getStaticF_LogMessages() {
  return ::cordl_internals::getStaticField<bool, "LogMessages", ::Oculus::Platform::Core*>();
}
inline void Oculus::Platform::Core::setStaticF_PlatformUninitializedError(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PlatformUninitializedError", ::Oculus::Platform::Core*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Platform::Core::getStaticF_PlatformUninitializedError() {
  return ::cordl_internals::getStaticField<::StringW, "PlatformUninitializedError", ::Oculus::Platform::Core*>();
}
inline bool Oculus::Platform::Core::IsInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "IsInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Core::ForceInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "ForceInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Oculus::Platform::Core::getAppID(::StringW appId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "getAppID", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, appId);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::Core::AsyncInitialize(::StringW appId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "AsyncInitialize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*>(nullptr, ___internal_method, appId);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*
Oculus::Platform::Core::AsyncInitialize(::StringW accessToken, ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* initConfigOptions, ::StringW appId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(),
                                              { "AsyncInitialize",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>*>(),
                                                  ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*>(nullptr, ___internal_method, accessToken, initConfigOptions, appId);
}
inline void Oculus::Platform::Core::Initialize(::StringW appId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, appId);
}
inline ::StringW Oculus::Platform::Core::GetAppIDFromConfig() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { "GetAppIDFromConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Core::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Core*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::Core* Oculus::Platform::Core::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Core*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Core::Core() {}
