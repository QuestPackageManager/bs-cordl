#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\OpenXRAnalytics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_def.hpp"
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "runtime", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "runtime_version", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "plugin_version", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "api_version", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "available_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "enabled_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "enabled_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "failed_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent::OpenXRAnalytics_InitializeEvent(bool success, ::StringW runtime, ::StringW runtime_version, ::StringW plugin_version,
                                                                                                      ::StringW api_version, ::ArrayW<::StringW> available_extensions,
                                                                                                      ::ArrayW<::StringW> enabled_extensions, ::ArrayW<::StringW> enabled_features,
                                                                                                      ::ArrayW<::StringW> failed_features) noexcept {
  this->success = success;
  this->runtime = runtime;
  this->runtime_version = runtime_version;
  this->plugin_version = plugin_version;
  this->api_version = api_version;
  this->available_extensions = available_extensions;
  this->enabled_extensions = enabled_extensions;
  this->enabled_features = enabled_features;
  this->failed_features = failed_features;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent::OpenXRAnalytics_InitializeEvent() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)()>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69ee700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69ee704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(), { "<CreateInitializeEvent>b__7_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__7_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69ee7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(), { "<CreateInitializeEvent>b__7_1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__7_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_2)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69ee850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                                                             { "<CreateInitializeEvent>b__7_2", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__7_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_3)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69ee8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                                                             { "<CreateInitializeEvent>b__7_3", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__7_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_4)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69ee94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                                                             { "<CreateInitializeEvent>b__7_4", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c._CreateInitializeEvent_b__7_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*)>(
    &::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_5)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69ee9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                                                             { "<CreateInitializeEvent>b__7_5", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*, "<>9", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(
      std::forward<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(value));
}
inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*, "<>9", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__7_0(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_0", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_0", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__7_1(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_1", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_1", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__7_2(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>*, "<>9__7_2", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__7_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>*, "<>9__7_2", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__7_3(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>*, "<>9__7_3", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__7_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>*, "<>9__7_3", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__7_4(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>*, "<>9__7_4", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__7_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>*, "<>9__7_4", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::setStaticF___9__7_5(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>*, "<>9__7_5", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::getStaticF___9__7_5() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>*, "<>9__7_5", ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_0(::StringW ext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(), { "<CreateInitializeEvent>b__7_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ext);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_1(::StringW ext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(), { "<CreateInitializeEvent>b__7_1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ext);
}
inline bool UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                                                           { "<CreateInitializeEvent>b__7_2", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_3(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                                                           { "<CreateInitializeEvent>b__7_3", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, f);
}
inline bool UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_4(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                                                           { "<CreateInitializeEvent>b__7_4", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRAnalytics___c::_CreateInitializeEvent_b__7_5(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>(),
                                                           { "<CreateInitializeEvent>b__7_5", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, f);
}
inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* UnityEngine::XR::OpenXR::OpenXRAnalytics___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c::OpenXRAnalytics___c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69edc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics.SendInitializeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics::SendInitializeEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69edc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(), { "SendInitializeEvent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRAnalytics.CreateInitializeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRAnalytics::CreateInitializeEvent)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x69edc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(), { "CreateInitializeEvent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::OpenXRAnalytics::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRAnalytics::SendInitializeEvent(bool success) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(), { "SendInitializeEvent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, success);
}
inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent UnityEngine::XR::OpenXR::OpenXRAnalytics::CreateInitializeEvent(bool success) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRAnalytics*>(), { "CreateInitializeEvent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRAnalytics_InitializeEvent>(nullptr, ___internal_method, success);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRAnalytics::OpenXRAnalytics() {}
