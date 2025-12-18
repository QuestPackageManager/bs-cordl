#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraCaptureBridge.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::*)()>(
    &::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6605a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cachedEnumerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry* UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry::CameraCaptureBridge_CameraEntry() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::CameraCaptureBridge::get_enabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66054d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(),
                                                                               "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::CameraCaptureBridge::set_enabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6605534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(), "set_enabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.GetCaptureActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::CameraCaptureBridge::GetCaptureActions)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6605598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(), "GetCaptureActions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.GetCachedCaptureActionsEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::CameraCaptureBridge::GetCachedCaptureActionsEnumerator)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x66056b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(), "GetCachedCaptureActionsEnumerator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.AddCaptureAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Camera*, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*)>(
        &::UnityEngine::Rendering::CameraCaptureBridge::AddCaptureAction)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6605808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(), "AddCaptureAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraCaptureBridge.RemoveCaptureAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Camera*, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*)>(
        &::UnityEngine::Rendering::CameraCaptureBridge::RemoveCaptureAction)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6605a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(), "RemoveCaptureAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CameraCaptureBridge::setStaticF_actionDict(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>*, "actionDict",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>*
UnityEngine::Rendering::CameraCaptureBridge::getStaticF_actionDict() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>*, "actionDict",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get>();
}
inline void UnityEngine::Rendering::CameraCaptureBridge::setStaticF__enabled(bool value) {
  ::cordl_internals::setStaticField<bool, "_enabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::CameraCaptureBridge::getStaticF__enabled() {
  return ::cordl_internals::getStaticField<bool, "_enabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get>();
}
inline bool UnityEngine::Rendering::CameraCaptureBridge::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(),
                                                                             "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CameraCaptureBridge::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(), "set_enabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
UnityEngine::Rendering::CameraCaptureBridge::GetCaptureActions(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(), "GetCaptureActions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*, false>(
      nullptr, ___internal_method, camera);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
UnityEngine::Rendering::CameraCaptureBridge::GetCachedCaptureActionsEnumerator(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(), "GetCachedCaptureActionsEnumerator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*, false>(
      nullptr, ___internal_method, camera);
}
inline void UnityEngine::Rendering::CameraCaptureBridge::AddCaptureAction(::UnityEngine::Camera* camera,
                                                                          ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(), "AddCaptureAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, action);
}
inline void UnityEngine::Rendering::CameraCaptureBridge::RemoveCaptureAction(::UnityEngine::Camera* camera,
                                                                             ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraCaptureBridge*>::get(), "RemoveCaptureAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, action);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraCaptureBridge::CameraCaptureBridge() {}
