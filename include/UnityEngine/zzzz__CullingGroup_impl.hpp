#pragma once
// IWYU pragma private; include "UnityEngine\CullingGroup.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__CullingGroup_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__CullingGroupEvent_def.hpp"
#include "UnityEngine/zzzz__CullingGroup_def.hpp"
#include "UnityEngine/zzzz__CullingQueryOptions_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::CullingGroup_StateChanged._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup_StateChanged::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::CullingGroup_StateChanged::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a763ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup_StateChanged*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup_StateChanged.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup_StateChanged::*)(::UnityEngine::CullingGroupEvent)>(&::UnityEngine::CullingGroup_StateChanged::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a76418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup_StateChanged*>(), { ::i2c::class_of<::UnityEngine::CullingGroup_StateChanged*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::CullingGroup_StateChanged::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup_StateChanged*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::CullingGroup_StateChanged::Invoke(::UnityEngine::CullingGroupEvent sphere) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::CullingGroup_StateChanged*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sphere);
}
inline ::UnityEngine::CullingGroup_StateChanged* UnityEngine::CullingGroup_StateChanged::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CullingGroup_StateChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::CullingGroup_StateChanged::CullingGroup_StateChanged() {}
//  Writing Method size for method: ::UnityEngine::CullingGroup_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::CullingGroup*)>(&::UnityEngine::CullingGroup_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a7642c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::CullingGroup*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::CullingGroup_BindingsMarshaller::ConvertToNative(::UnityEngine::CullingGroup* cullingGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::CullingGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, cullingGroup);
}
// Ctor Parameters []
constexpr ::UnityEngine::CullingGroup_BindingsMarshaller::CullingGroup_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::CullingGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)()>(&::UnityEngine::CullingGroup::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a75b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)()>(&::UnityEngine::CullingGroup::Finalize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a75c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { ::i2c::class_of<::UnityEngine::CullingGroup*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.DisposeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)()>(&::UnityEngine::CullingGroup::DisposeInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a75cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "DisposeInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)()>(&::UnityEngine::CullingGroup::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6a75d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.set_targetCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)(::UnityEngine::Camera*)>(&::UnityEngine::CullingGroup::set_targetCamera)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a75d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "set_targetCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.SetBoundingSpheres
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)(::ArrayW<::UnityEngine::BoundingSphere>)>(&::UnityEngine::CullingGroup::SetBoundingSpheres)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a75e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetBoundingSpheres", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::BoundingSphere>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.SetBoundingSphereCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)(int32_t)>(&::UnityEngine::CullingGroup::SetBoundingSphereCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a75eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetBoundingSphereCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.QueryIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::CullingGroup::*)(bool, ::ArrayW<int32_t>, int32_t)>(&::UnityEngine::CullingGroup::QueryIndices)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a75f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "QueryIndices", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.QueryIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::CullingGroup::*)(bool, int32_t, ::UnityEngine::CullingQueryOptions, ::ArrayW<int32_t>, int32_t)>(
    &::UnityEngine::CullingGroup::QueryIndices)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a75f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "QueryIndices",
                                                                                            {},
                                                                                            { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CullingQueryOptions>(),
                                                                                              ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.SetBoundingDistances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)(::ArrayW<float_t>)>(&::UnityEngine::CullingGroup::SetBoundingDistances)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a76130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetBoundingDistances", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.SetDistanceReferencePoint_InternalVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)(::UnityEngine::Vector3)>(&::UnityEngine::CullingGroup::SetDistanceReferencePoint_InternalVector3)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a76264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetDistanceReferencePoint_InternalVector3", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.SetDistanceReferencePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)(::UnityEngine::Vector3)>(&::UnityEngine::CullingGroup::SetDistanceReferencePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a76310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetDistanceReferencePoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.SendEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::CullingGroup*, ::System::IntPtr, int32_t)>(&::UnityEngine::CullingGroup::SendEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a76314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(),
                                                             { "SendEvents", {}, { ::i2c::type_of<::UnityEngine::CullingGroup*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Object*)>(&::UnityEngine::CullingGroup::Init)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a75be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "Init", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.FinalizerFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CullingGroup::*)()>(&::UnityEngine::CullingGroup::FinalizerFailure)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a75c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "FinalizerFailure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.DisposeInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::CullingGroup::DisposeInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a75d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "DisposeInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.set_targetCamera_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::CullingGroup::set_targetCamera_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a75e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "set_targetCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.SetBoundingSpheres_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::UnityEngine::BoundingSphere>)>(&::UnityEngine::CullingGroup::SetBoundingSpheres_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a75ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(),
                                                { "SetBoundingSpheres_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::BoundingSphere>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.SetBoundingSphereCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::CullingGroup::SetBoundingSphereCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a75f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetBoundingSphereCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.QueryIndices_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, bool, int32_t, ::UnityEngine::CullingQueryOptions, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                   int32_t)>(&::UnityEngine::CullingGroup::QueryIndices_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a760bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(),
                                                { "QueryIndices_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CullingQueryOptions>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.SetBoundingDistances_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::CullingGroup::SetBoundingDistances_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a76220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(),
                                         { "SetBoundingDistances_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.SetDistanceReferencePoint_InternalVector3_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::CullingGroup::SetDistanceReferencePoint_InternalVector3_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a762cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(),
                                         { "SetDistanceReferencePoint_InternalVector3_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CullingGroup.FinalizerFailure_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::CullingGroup::FinalizerFailure_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a76370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "FinalizerFailure_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::CullingGroup::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::CullingGroup::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::CullingGroup::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::UnityEngine::CullingGroup_StateChanged*& UnityEngine::CullingGroup::__cordl_internal_get_m_OnStateChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnStateChanged;
}
constexpr ::UnityEngine::CullingGroup_StateChanged* const& UnityEngine::CullingGroup::__cordl_internal_get_m_OnStateChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnStateChanged;
}
constexpr void UnityEngine::CullingGroup::__cordl_internal_set_m_OnStateChanged(::UnityEngine::CullingGroup_StateChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnStateChanged = value;
}
inline void UnityEngine::CullingGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::CullingGroup::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::CullingGroup*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::CullingGroup::DisposeInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "DisposeInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::CullingGroup::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::CullingGroup::set_targetCamera(::UnityEngine::Camera* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "set_targetCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::CullingGroup::SetBoundingSpheres(::ArrayW<::UnityEngine::BoundingSphere> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetBoundingSpheres", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::BoundingSphere>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void UnityEngine::CullingGroup::SetBoundingSphereCount(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetBoundingSphereCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline int32_t UnityEngine::CullingGroup::QueryIndices(bool visible, ::ArrayW<int32_t> result, int32_t firstIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "QueryIndices", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, visible, result, firstIndex);
}
inline int32_t UnityEngine::CullingGroup::QueryIndices(bool visible, int32_t distanceIndex, ::UnityEngine::CullingQueryOptions options, ::ArrayW<int32_t> result, int32_t firstIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "QueryIndices",
                                                                                          {},
                                                                                          { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CullingQueryOptions>(),
                                                                                            ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, visible, distanceIndex, options, result, firstIndex);
}
inline void UnityEngine::CullingGroup::SetBoundingDistances(::ArrayW<float_t> distances) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetBoundingDistances", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distances);
}
inline void UnityEngine::CullingGroup::SetDistanceReferencePoint_InternalVector3(::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetDistanceReferencePoint_InternalVector3", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
inline void UnityEngine::CullingGroup::SetDistanceReferencePoint(::UnityEngine::Vector3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetDistanceReferencePoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
inline void UnityEngine::CullingGroup::SendEvents(::UnityEngine::CullingGroup* cullingGroup, ::System::IntPtr eventsPtr, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(),
                                                           { "SendEvents", {}, { ::i2c::type_of<::UnityEngine::CullingGroup*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cullingGroup, eventsPtr, count);
}
inline ::System::IntPtr UnityEngine::CullingGroup::Init(::System::Object* scripting) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "Init", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, scripting);
}
inline void UnityEngine::CullingGroup::FinalizerFailure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "FinalizerFailure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::CullingGroup::DisposeInternal_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "DisposeInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::CullingGroup::set_targetCamera_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "set_targetCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CullingGroup::SetBoundingSpheres_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::BoundingSphere> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(),
                                                           { "SetBoundingSpheres_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::BoundingSphere>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, array);
}
inline void UnityEngine::CullingGroup::SetBoundingSphereCount_Injected(::System::IntPtr _unity_self, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "SetBoundingSphereCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, count);
}
inline int32_t UnityEngine::CullingGroup::QueryIndices_Injected(::System::IntPtr _unity_self, bool visible, int32_t distanceIndex, ::UnityEngine::CullingQueryOptions options,
                                                                ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> result, int32_t firstIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(),
                                              { "QueryIndices_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CullingQueryOptions>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, visible, distanceIndex, options, result, firstIndex);
}
inline void UnityEngine::CullingGroup::SetBoundingDistances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> distances) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(),
                                       { "SetBoundingDistances_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, distances);
}
inline void UnityEngine::CullingGroup::SetDistanceReferencePoint_InternalVector3_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(),
                                       { "SetDistanceReferencePoint_InternalVector3_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, point);
}
inline void UnityEngine::CullingGroup::FinalizerFailure_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CullingGroup*>(), { "FinalizerFailure_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::CullingGroup* UnityEngine::CullingGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CullingGroup*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::CullingGroup::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::CullingGroup::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::CullingGroup::CullingGroup() {}
