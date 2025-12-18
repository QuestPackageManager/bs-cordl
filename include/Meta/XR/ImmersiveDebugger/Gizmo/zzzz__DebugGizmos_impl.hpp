#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/DebugGizmos.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__DebugGizmos_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__DebugGizmos_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__PolylineRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope::*)(::UnityEngine::Color)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58bcd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58bf3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope::_ctor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_savedColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope::DebugGizmos_ColorScope(::UnityEngine::Color _savedColor) noexcept {
  this->_savedColor = _savedColor;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope::DebugGizmos_ColorScope() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::Init)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58bb2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                               "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.get_Root
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> (*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_Root)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x58bb33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                               "get_Root", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::OnEnable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58bb5ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.get_Renderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_Renderer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58bb700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                               "get_Renderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58bbc00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.ClearSegments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::ClearSegments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bbd74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                               "ClearSegments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.RenderSegments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::RenderSegments)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58bbd7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                               "RenderSegments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::LateUpdate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58bc01c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.AddSegment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Color, ::UnityEngine::Color)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::AddSegment)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x58bc0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "AddSegment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.get_RenderSinglePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_RenderSinglePass)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58bc318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                               "get_RenderSinglePass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.set_RenderSinglePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::set_RenderSinglePass)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58bc374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "set_RenderSinglePass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPoint)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x58bc480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawLine)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x58bc5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawLine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawWireCube
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Transform*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawWireCube)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x58bc708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawWireCube", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x58bca74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawAxis", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Pose, float_t)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58bcde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                               "DrawAxis", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*, float_t)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58bce90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawAxis", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPlane)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x58bcf68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawPlane", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Pose, float_t, float_t)>(&::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPlane)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58bd5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawPlane", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, float_t, bool)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawBox)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x58bd698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawBox", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos.DrawBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Pose, float_t, float_t, float_t, bool)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawBox)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58bdf10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawBox", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58be000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__points() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____points;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__points() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____points;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____points)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_set__colors(::System::Collections::Generic::List_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__addedSegmentSinceLastUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addedSegmentSinceLastUpdate;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__addedSegmentSinceLastUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addedSegmentSinceLastUpdate;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_set__addedSegmentSinceLastUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addedSegmentSinceLastUpdate = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__polylineRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____polylineRenderer;
}
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* const& Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_get__polylineRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____polylineRenderer;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::__cordl_internal_set__polylineRenderer(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____polylineRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF__root(::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> value) {
  ::cordl_internals::setStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>, "_root",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>(
      std::forward<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>>(value));
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF__root() {
  return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>, "_root",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF__renderSinglePass(bool value) {
  ::cordl_internals::setStaticField<bool, "_renderSinglePass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>(
      std::forward<bool>(value));
}
inline bool Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF__renderSinglePass() {
  return ::cordl_internals::getStaticField<bool, "_renderSinglePass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_Color(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "Color", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_Color() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "Color", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_LineWidth(float_t value) {
  ::cordl_internals::setStaticField<float_t, "LineWidth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>(
      std::forward<float_t>(value));
}
inline float_t Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_LineWidth() {
  return ::cordl_internals::getStaticField<float_t, "LineWidth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_PLANE_POINTS(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*, "PLANE_POINTS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_PLANE_POINTS() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*, "PLANE_POINTS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_PLANE_SEGMENTS(::System::Collections::Generic::IReadOnlyList_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, "PLANE_SEGMENTS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_PLANE_SEGMENTS() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, "PLANE_SEGMENTS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_CUBE_POINTS(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, "CUBE_POINTS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_CUBE_POINTS() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, "CUBE_POINTS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::setStaticF_CUBE_SEGMENTS(::System::Collections::Generic::IReadOnlyList_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, "CUBE_SEGMENTS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::getStaticF_CUBE_SEGMENTS() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, "CUBE_SEGMENTS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_Root() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                             "get_Root", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos>, false>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_Renderer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                             "get_Renderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::ClearSegments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                             "ClearSegments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::RenderSegments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                             "RenderSegments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::LateUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::AddSegment(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, float_t width, ::UnityEngine::Color color0, ::UnityEngine::Color color1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "AddSegment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p0, p1, width, color0, color1);
}
inline bool Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::get_RenderSinglePass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(),
                                                                             "get_RenderSinglePass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::set_RenderSinglePass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "set_RenderSinglePass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPoint(::UnityEngine::Vector3 p0, ::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p0, t);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawLine(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawLine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p0, p1, t);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawWireCube(::UnityEngine::Vector3 center, float_t size, ::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawWireCube", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, center, size, t);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawAxis", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, position, rotation, size);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis(::UnityEngine::Pose pose, float_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawAxis", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pose, size);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawAxis(::UnityEngine::Transform* t, float_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawAxis", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, size);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPlane(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawPlane", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, position, rotation, width, height);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawPlane(::UnityEngine::Pose pose, float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawPlane", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pose, width, height);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawBox(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t width, float_t height, float_t depth,
                                                                     bool isPivotTopSurface) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawBox", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, position, rotation, width, height, depth, isPivotTopSurface);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DrawBox(::UnityEngine::Pose pose, float_t width, float_t height, float_t depth, bool isPivotTopSurface) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), "DrawBox", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pose, width, height, depth, isPivotTopSurface);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos* Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos::DebugGizmos() {}
