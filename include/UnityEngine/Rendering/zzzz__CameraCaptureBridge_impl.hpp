#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CameraCaptureBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraCaptureBridge_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraCaptureBridge_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::*)()>(&::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67bcb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*&
UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::__cordl_internal_get_actions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* const&
UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::__cordl_internal_get_actions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions;
}
constexpr void UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::__cordl_internal_set_actions(
    ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___actions = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*&
UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::__cordl_internal_get_cachedEnumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedEnumerator;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* const&
UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::__cordl_internal_get_cachedEnumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedEnumerator;
}
constexpr void UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::__cordl_internal_set_cachedEnumerator(
    ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedEnumerator = value;
}
inline void UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry* UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::CameraCaptureBridge_CameraEntry() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::CameraCaptureBridge::get_enabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67bc640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::CameraCaptureBridge::set_enabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67bc69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.GetCaptureActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::CameraCaptureBridge::GetCaptureActions)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x67bc700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(), { "GetCaptureActions", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.GetCachedCaptureActionsEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::CameraCaptureBridge::GetCachedCaptureActionsEnumerator)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x67bc81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(),
                                                                                           { "GetCachedCaptureActionsEnumerator", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.AddCaptureAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Camera*, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*)>(
        &::UnityEngine::Rendering::CameraCaptureBridge::AddCaptureAction)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x67bc970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(),
                                                { "AddCaptureAction",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Camera*>(),
                                                    ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.RemoveCaptureAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Camera*, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*)>(
        &::UnityEngine::Rendering::CameraCaptureBridge::RemoveCaptureAction)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x67bcb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(),
                                                { "RemoveCaptureAction",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Camera*>(),
                                                    ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CameraCaptureBridge::setStaticF_actionDict(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>*, "actionDict",
                                    ::UnityEngine::Rendering::CameraCaptureBridge*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>*
UnityEngine::Rendering::CameraCaptureBridge::getStaticF_actionDict() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>*, "actionDict",
                                           ::UnityEngine::Rendering::CameraCaptureBridge*>();
}
inline void UnityEngine::Rendering::CameraCaptureBridge::setStaticF__enabled(bool value) {
  ::cordl_internals::setStaticField<bool, "_enabled", ::UnityEngine::Rendering::CameraCaptureBridge*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::CameraCaptureBridge::getStaticF__enabled() {
  return ::cordl_internals::getStaticField<bool, "_enabled", ::UnityEngine::Rendering::CameraCaptureBridge*>();
}
inline bool UnityEngine::Rendering::CameraCaptureBridge::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CameraCaptureBridge::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
UnityEngine::Rendering::CameraCaptureBridge::GetCaptureActions(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(), { "GetCaptureActions", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>(nullptr, ___internal_method,
                                                                                                                                                                       camera);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
UnityEngine::Rendering::CameraCaptureBridge::GetCachedCaptureActionsEnumerator(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(), { "GetCachedCaptureActionsEnumerator", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>(nullptr, ___internal_method,
                                                                                                                                                                       camera);
}
inline void UnityEngine::Rendering::CameraCaptureBridge::AddCaptureAction(::UnityEngine::Camera* camera,
                                                                          ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(),
                                                           { "AddCaptureAction",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(),
                                                               ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, action);
}
inline void UnityEngine::Rendering::CameraCaptureBridge::RemoveCaptureAction(::UnityEngine::Camera* camera,
                                                                             ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraCaptureBridge*>(),
                                                           { "RemoveCaptureAction",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(),
                                                               ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, action);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraCaptureBridge::CameraCaptureBridge() {}
