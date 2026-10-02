#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRUtility.Inverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::UnityEngine::XR::OpenXR::OpenXRUtility::Inverse)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e37fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "Inverse", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRUtility.ComputePoseToWorldSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*, ::UnityEngine::Camera*)>(
    &::UnityEngine::XR::OpenXR::OpenXRUtility::ComputePoseToWorldSpace)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6e38064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(),
                                                             { "ComputePoseToWorldSpace", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRUtility.get_IsSessionFocused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRUtility::get_IsSessionFocused)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e382a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "get_IsSessionFocused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRUtility.get_IsUserPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRUtility::get_IsUserPresent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e38364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "get_IsUserPresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRUtility.GetFirstDisplaySubsystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (*)()>(&::UnityEngine::XR::OpenXR::OpenXRUtility::GetFirstDisplaySubsystem)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e38420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "GetFirstDisplaySubsystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRUtility.Internal_IsSessionFocused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRUtility::Internal_IsSessionFocused)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e382f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "Internal_IsSessionFocused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRUtility.Internal_GetUserPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRUtility::Internal_GetUserPresence)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e383b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "Internal_GetUserPresence", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRUtility::setStaticF_s_DisplaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_DisplaySubsystems", ::UnityEngine::XR::OpenXR::OpenXRUtility*>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* UnityEngine::XR::OpenXR::OpenXRUtility::getStaticF_s_DisplaySubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_DisplaySubsystems", ::UnityEngine::XR::OpenXR::OpenXRUtility*>();
}
inline ::UnityEngine::Pose UnityEngine::XR::OpenXR::OpenXRUtility::Inverse(::UnityEngine::Pose p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "Inverse", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, p);
}
inline ::UnityEngine::Pose UnityEngine::XR::OpenXR::OpenXRUtility::ComputePoseToWorldSpace(::UnityEngine::Transform* t, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(),
                                                           { "ComputePoseToWorldSpace", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, t, camera);
}
inline bool UnityEngine::XR::OpenXR::OpenXRUtility::get_IsSessionFocused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "get_IsSessionFocused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRUtility::get_IsUserPresent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "get_IsUserPresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline Il2CppObject* UnityEngine::XR::OpenXR::OpenXRUtility::GetFirstDisplaySubsystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "GetFirstDisplaySubsystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRUtility::Internal_IsSessionFocused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "Internal_IsSessionFocused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRUtility::Internal_GetUserPresence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRUtility*>(), { "Internal_GetUserPresence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRUtility::OpenXRUtility() {}
