#pragma once
// IWYU pragma private; include "GlobalNamespace/JumpReceiver.hpp"
#include "UnityEngine/Playables/zzzz__INotificationReceiver_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__JumpReceiver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JumpReceiver.get_jumpToDestinationValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::JumpReceiver::*)()>(&::GlobalNamespace::JumpReceiver::get_jumpToDestinationValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39c0060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(),
                                                                               "get_jumpToDestinationValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpReceiver.set_jumpToDestinationValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpReceiver::*)(bool)>(&::GlobalNamespace::JumpReceiver::set_jumpToDestinationValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39c0068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), "set_jumpToDestinationValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpReceiver.OnNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpReceiver::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*, ::System::Object*)>(&::GlobalNamespace::JumpReceiver::OnNotify)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x39c0074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), "OnNotify", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpReceiver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpReceiver::*)()>(&::GlobalNamespace::JumpReceiver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39c01b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::JumpReceiver::__cordl_internal_get__jumpToDestinationValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpToDestinationValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::JumpReceiver::__cordl_internal_get__jumpToDestinationValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpToDestinationValid_k__BackingField;
}
constexpr void GlobalNamespace::JumpReceiver::__cordl_internal_set__jumpToDestinationValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpToDestinationValid_k__BackingField = value;
}
inline bool GlobalNamespace::JumpReceiver::get_jumpToDestinationValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(),
                                                                             "get_jumpToDestinationValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::JumpReceiver::set_jumpToDestinationValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), "set_jumpToDestinationValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::JumpReceiver::OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), "OnNotify", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, origin, notification, context);
}
inline void GlobalNamespace::JumpReceiver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::JumpReceiver* GlobalNamespace::JumpReceiver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::JumpReceiver*>());
}
/// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
constexpr GlobalNamespace::JumpReceiver::operator ::UnityEngine::Playables::INotificationReceiver*() noexcept {
  return static_cast<::UnityEngine::Playables::INotificationReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::INotificationReceiver"
constexpr ::UnityEngine::Playables::INotificationReceiver* GlobalNamespace::JumpReceiver::i___UnityEngine__Playables__INotificationReceiver() noexcept {
  return static_cast<::UnityEngine::Playables::INotificationReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JumpReceiver::JumpReceiver() {}
