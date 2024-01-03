#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__JumpReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JumpReceiver.get_jumpToDestinationValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::JumpReceiver::*)()>(&::GlobalNamespace::JumpReceiver::get_jumpToDestinationValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(),
                                                                               "get_jumpToDestinationValid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpReceiver.set_jumpToDestinationValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpReceiver::*)(bool)>(&::GlobalNamespace::JumpReceiver::set_jumpToDestinationValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20f5bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), "set_jumpToDestinationValid",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpReceiver.OnNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpReceiver::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*, ::System::Object*)>(&::GlobalNamespace::JumpReceiver::OnNotify)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x20f5bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), "OnNotify", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpReceiver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpReceiver::*)()>(&::GlobalNamespace::JumpReceiver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
constexpr GlobalNamespace::JumpReceiver::operator ::UnityEngine::Playables::INotificationReceiver*() noexcept {
  return static_cast<::UnityEngine::Playables::INotificationReceiver*>(static_cast<void*>(this));
}
constexpr bool& GlobalNamespace::JumpReceiver::__get__jumpToDestinationValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpToDestinationValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::JumpReceiver::__get__jumpToDestinationValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpToDestinationValid_k__BackingField;
}
constexpr void GlobalNamespace::JumpReceiver::__set__jumpToDestinationValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpToDestinationValid_k__BackingField = value;
}
inline bool GlobalNamespace::JumpReceiver::get_jumpToDestinationValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(),
                                                                             "get_jumpToDestinationValid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::JumpReceiver::set_jumpToDestinationValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), "set_jumpToDestinationValid",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::JumpReceiver::OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), "OnNotify", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, origin, notification, context);
}
inline ::GlobalNamespace::JumpReceiver* GlobalNamespace::JumpReceiver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::JumpReceiver*>());
}
inline void GlobalNamespace::JumpReceiver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpReceiver*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JumpReceiver::JumpReceiver() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
