#pragma once
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "GlobalNamespace/zzzz__IOVRSceneComponent_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob::*)()>(
    &::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob::Execute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27a593c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::get(),
                                                                               "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::get(),
                                                                             "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "::Unity::Collections::NativeArray_1<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob::__OVRScenePlane__GetBoundaryLengthJob(::GlobalNamespace::OVRSpace Space,
                                                                                                          ::Unity::Collections::NativeArray_1<int32_t> Length) noexcept {
  this->Space = Space;
  this->Length = Length;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob::__OVRScenePlane__GetBoundaryLengthJob() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRScenePlane__GetBoundaryJob.HasBoundaryChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRScenePlane__GetBoundaryJob::*)()>(
    &::GlobalNamespace::__OVRScenePlane__GetBoundaryJob::HasBoundaryChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27a59c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::get(),
                                                                               "HasBoundaryChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRScenePlane__GetBoundaryJob.SetNaN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>)>(
    &::GlobalNamespace::__OVRScenePlane__GetBoundaryJob::SetNaN)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27a5a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::get(), "SetNaN", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRScenePlane__GetBoundaryJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRScenePlane__GetBoundaryJob::*)()>(
    &::GlobalNamespace::__OVRScenePlane__GetBoundaryJob::Execute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27a5a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::get(),
                                                                               "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::__OVRScenePlane__GetBoundaryJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::__OVRScenePlane__GetBoundaryJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline bool GlobalNamespace::__OVRScenePlane__GetBoundaryJob::HasBoundaryChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::get(),
                                                                             "HasBoundaryChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRScenePlane__GetBoundaryJob::SetNaN(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> array) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::get(), "SetNaN", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array);
}
inline void GlobalNamespace::__OVRScenePlane__GetBoundaryJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::get(),
                                                                             "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "Boundary", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "PreviousBoundary", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRScenePlane__GetBoundaryJob::__OVRScenePlane__GetBoundaryJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary,
                                                                                              ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> PreviousBoundary) noexcept {
  this->Space = Space;
  this->Boundary = Boundary;
  this->PreviousBoundary = PreviousBoundary;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRScenePlane__GetBoundaryJob::__OVRScenePlane__GetBoundaryJob() {}
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_Width
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a4c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "get_Width",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.set_Width
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)(float_t)>(&::GlobalNamespace::OVRScenePlane::set_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a4c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "set_Width", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_Height
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a4c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "get_Height",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.set_Height
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)(float_t)>(&::GlobalNamespace::OVRScenePlane::set_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a4c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "set_Height", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_Dimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_Dimensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a4c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "get_Dimensions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_Boundary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* (::GlobalNamespace::OVRScenePlane::*)()>(
    &::GlobalNamespace::OVRScenePlane::get_Boundary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a4c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "get_Boundary",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_ScaleChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_ScaleChildren)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a4c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "get_ScaleChildren",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.set_ScaleChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)(bool)>(&::GlobalNamespace::OVRScenePlane::set_ScaleChildren)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27a4c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "set_ScaleChildren",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.SetChildScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*, float_t, float_t)>(&::GlobalNamespace::OVRScenePlane::SetChildScale)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27a4c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "SetChildScale", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x27a4d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27a4df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.IOVRSceneComponent_Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::IOVRSceneComponent_Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x27a4e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(),
                                                                               "IOVRSceneComponent.Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.ScheduleGetLengthJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::ScheduleGetLengthJob)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x27a4f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "ScheduleGetLengthJob",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.RequestBoundary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::RequestBoundary)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x27a4df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "RequestBoundary",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::Update)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x27a50d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::OnDisable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27a57a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27a58b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
constexpr GlobalNamespace::OVRScenePlane::operator ::GlobalNamespace::IOVRSceneComponent*() noexcept {
  return static_cast<::GlobalNamespace::IOVRSceneComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
constexpr ::GlobalNamespace::IOVRSceneComponent* GlobalNamespace::OVRScenePlane::i___GlobalNamespace__IOVRSceneComponent() noexcept {
  return static_cast<::GlobalNamespace::IOVRSceneComponent*>(static_cast<void*>(this));
}
constexpr float_t& GlobalNamespace::OVRScenePlane::__cordl_internal_get__Width_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Width_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__Width_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Width_k__BackingField;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__Width_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Width_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::OVRScenePlane::__cordl_internal_get__Height_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Height_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__Height_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Height_k__BackingField;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__Height_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Height_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRScenePlane::__cordl_internal_get__scaleChildren() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleChildren;
}
constexpr bool const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__scaleChildren() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleChildren;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__scaleChildren(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleChildren = value;
}
constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle>& GlobalNamespace::OVRScenePlane::__cordl_internal_get__jobHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jobHandle;
}
constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__jobHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jobHandle;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__jobHandle(::System::Nullable_1<::Unity::Jobs::JobHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jobHandle = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& GlobalNamespace::OVRScenePlane::__cordl_internal_get__previousBoundary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousBoundary;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__previousBoundary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousBoundary;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__previousBoundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousBoundary = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundaryLength;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundaryLength;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__boundaryLength(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundaryLength = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundaryBuffer;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundaryBuffer;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__boundaryBuffer(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundaryBuffer = value;
}
constexpr bool& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryRequested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundaryRequested;
}
constexpr bool const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryRequested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundaryRequested;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__boundaryRequested(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundaryRequested = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& GlobalNamespace::OVRScenePlane::__cordl_internal_get__sceneAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneAnchor;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__sceneAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneAnchor;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__sceneAnchor(::UnityW<::GlobalNamespace::OVRSceneAnchor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundary;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__boundary(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boundary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t GlobalNamespace::OVRScenePlane::get_Width() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "get_Width",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::set_Width(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "set_Width", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRScenePlane::get_Height() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "get_Height",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::set_Height(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "set_Height", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRScenePlane::get_Dimensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "get_Dimensions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* GlobalNamespace::OVRScenePlane::get_Boundary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "get_Boundary",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRScenePlane::get_ScaleChildren() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "get_ScaleChildren",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::set_ScaleChildren(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "set_ScaleChildren",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRScenePlane::SetChildScale(::UnityEngine::Transform* parentTransform, float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "SetChildScale", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parentTransform, width, height);
}
inline void GlobalNamespace::OVRScenePlane::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::IOVRSceneComponent_Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(),
                                                                             "IOVRSceneComponent.Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::ScheduleGetLengthJob() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "ScheduleGetLengthJob",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::RequestBoundary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "RequestBoundary",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRScenePlane* GlobalNamespace::OVRScenePlane::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRScenePlane*>());
}
inline void GlobalNamespace::OVRScenePlane::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePlane*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRScenePlane::OVRScenePlane() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
