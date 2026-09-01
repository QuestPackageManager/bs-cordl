#pragma once
// IWYU pragma private; include "UnityEngine\SendMouseEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Camera_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__SendMouseEvents_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__SendMouseEvents_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::SendMouseEvents_HitInfo.SendMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SendMouseEvents_HitInfo::*)(::StringW)>(&::UnityEngine::SendMouseEvents_HitInfo::SendMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b63538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents_HitInfo>(), { "SendMessage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents_HitInfo.op_Implicit_bool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SendMouseEvents_HitInfo)>(&::UnityEngine::SendMouseEvents_HitInfo::op_Implicit_bool)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b63494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents_HitInfo>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::SendMouseEvents_HitInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents_HitInfo.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SendMouseEvents_HitInfo, ::UnityEngine::SendMouseEvents_HitInfo)>(&::UnityEngine::SendMouseEvents_HitInfo::Compare)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b63558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents_HitInfo>(),
                                                { "Compare", {}, { ::i2c::type_of<::UnityEngine::SendMouseEvents_HitInfo>(), ::i2c::type_of<::UnityEngine::SendMouseEvents_HitInfo>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::SendMouseEvents_HitInfo::SendMessage(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents_HitInfo>(), { "SendMessage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline bool UnityEngine::SendMouseEvents_HitInfo::op_Implicit_bool(::UnityEngine::SendMouseEvents_HitInfo exists) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents_HitInfo>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::SendMouseEvents_HitInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exists);
}
inline bool UnityEngine::SendMouseEvents_HitInfo::Compare(::UnityEngine::SendMouseEvents_HitInfo lhs, ::UnityEngine::SendMouseEvents_HitInfo rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents_HitInfo>(),
                                                           { "Compare", {}, { ::i2c::type_of<::UnityEngine::SendMouseEvents_HitInfo>(), ::i2c::type_of<::UnityEngine::SendMouseEvents_HitInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
// Ctor Parameters [CppParam { name: "target", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SendMouseEvents_HitInfo::SendMouseEvents_HitInfo(::UnityW<::UnityEngine::GameObject> target, ::UnityW<::UnityEngine::Camera> camera) noexcept {
  this->target = target;
  this->camera = camera;
}
// Ctor Parameters []
constexpr ::UnityEngine::SendMouseEvents_HitInfo::SendMouseEvents_HitInfo() {}
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.UpdateMouse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::SendMouseEvents::UpdateMouse)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6b6245c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents*>(), { "UpdateMouse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.SetMouseMoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::SendMouseEvents::SetMouseMoved)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b62630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents*>(), { "SetMouseMoved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.DoSendMouseEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::SendMouseEvents::DoSendMouseEvents)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0x6b62690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents*>(), { "DoSendMouseEvents", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.SendEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::SendMouseEvents_HitInfo)>(&::UnityEngine::SendMouseEvents::SendEvents)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x6b6301c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents*>(), { "SendEvents", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SendMouseEvents_HitInfo>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::SendMouseEvents::setStaticF_s_MouseUsed(bool value) {
  ::cordl_internals::setStaticField<bool, "s_MouseUsed", ::UnityEngine::SendMouseEvents*>(std::forward<bool>(value));
}
inline bool UnityEngine::SendMouseEvents::getStaticF_s_MouseUsed() {
  return ::cordl_internals::getStaticField<bool, "s_MouseUsed", ::UnityEngine::SendMouseEvents*>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_m_LastHit(::ArrayW<::UnityEngine::SendMouseEvents_HitInfo> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::SendMouseEvents_HitInfo>, "m_LastHit", ::UnityEngine::SendMouseEvents*>(
      std::forward<::ArrayW<::UnityEngine::SendMouseEvents_HitInfo>>(value));
}
inline ::ArrayW<::UnityEngine::SendMouseEvents_HitInfo> UnityEngine::SendMouseEvents::getStaticF_m_LastHit() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::SendMouseEvents_HitInfo>, "m_LastHit", ::UnityEngine::SendMouseEvents*>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_m_MouseDownHit(::ArrayW<::UnityEngine::SendMouseEvents_HitInfo> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::SendMouseEvents_HitInfo>, "m_MouseDownHit", ::UnityEngine::SendMouseEvents*>(
      std::forward<::ArrayW<::UnityEngine::SendMouseEvents_HitInfo>>(value));
}
inline ::ArrayW<::UnityEngine::SendMouseEvents_HitInfo> UnityEngine::SendMouseEvents::getStaticF_m_MouseDownHit() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::SendMouseEvents_HitInfo>, "m_MouseDownHit", ::UnityEngine::SendMouseEvents*>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_m_CurrentHit(::ArrayW<::UnityEngine::SendMouseEvents_HitInfo> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::SendMouseEvents_HitInfo>, "m_CurrentHit", ::UnityEngine::SendMouseEvents*>(
      std::forward<::ArrayW<::UnityEngine::SendMouseEvents_HitInfo>>(value));
}
inline ::ArrayW<::UnityEngine::SendMouseEvents_HitInfo> UnityEngine::SendMouseEvents::getStaticF_m_CurrentHit() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::SendMouseEvents_HitInfo>, "m_CurrentHit", ::UnityEngine::SendMouseEvents*>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_m_Cameras(::ArrayW<::UnityW<::UnityEngine::Camera>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Camera>>, "m_Cameras", ::UnityEngine::SendMouseEvents*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Camera>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> UnityEngine::SendMouseEvents::getStaticF_m_Cameras() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Camera>>, "m_Cameras", ::UnityEngine::SendMouseEvents*>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_s_GetMouseState(::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>*, "s_GetMouseState", ::UnityEngine::SendMouseEvents*>(
      std::forward<::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>*>(value));
}
inline ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>* UnityEngine::SendMouseEvents::getStaticF_s_GetMouseState() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>*, "s_GetMouseState", ::UnityEngine::SendMouseEvents*>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_s_MousePosition(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_MousePosition", ::UnityEngine::SendMouseEvents*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::SendMouseEvents::getStaticF_s_MousePosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_MousePosition", ::UnityEngine::SendMouseEvents*>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_s_MouseButtonPressedThisFrame(bool value) {
  ::cordl_internals::setStaticField<bool, "s_MouseButtonPressedThisFrame", ::UnityEngine::SendMouseEvents*>(std::forward<bool>(value));
}
inline bool UnityEngine::SendMouseEvents::getStaticF_s_MouseButtonPressedThisFrame() {
  return ::cordl_internals::getStaticField<bool, "s_MouseButtonPressedThisFrame", ::UnityEngine::SendMouseEvents*>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_s_MouseButtonIsPressed(bool value) {
  ::cordl_internals::setStaticField<bool, "s_MouseButtonIsPressed", ::UnityEngine::SendMouseEvents*>(std::forward<bool>(value));
}
inline bool UnityEngine::SendMouseEvents::getStaticF_s_MouseButtonIsPressed() {
  return ::cordl_internals::getStaticField<bool, "s_MouseButtonIsPressed", ::UnityEngine::SendMouseEvents*>();
}
inline void UnityEngine::SendMouseEvents::UpdateMouse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents*>(), { "UpdateMouse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::SendMouseEvents::SetMouseMoved() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents*>(), { "SetMouseMoved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::SendMouseEvents::DoSendMouseEvents(int32_t skipRTCameras) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents*>(), { "DoSendMouseEvents", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, skipRTCameras);
}
inline void UnityEngine::SendMouseEvents::SendEvents(int32_t i, ::UnityEngine::SendMouseEvents_HitInfo hit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SendMouseEvents*>(), { "SendEvents", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SendMouseEvents_HitInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, hit);
}
// Ctor Parameters []
constexpr ::UnityEngine::SendMouseEvents::SendMouseEvents() {}
