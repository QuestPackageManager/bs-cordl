#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeConstantRuntimeResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeConstantRuntimeResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>)>(
    &::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GetRuntimeResources)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65df1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::Initialize)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x65df210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get(), "Initialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources.GetSkySamplingDirections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (*)()>(
    &::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GetSkySamplingDirections)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65df598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get(),
                                                 "GetSkySamplingDirections", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::Cleanup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65df5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources.GenerateSkyDirections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (*)()>(
    &::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GenerateSkyDirections)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x65df37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get(), "GenerateSkyDirections",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::setStaticF_m_SkySamplingDirectionsBuffer(::UnityEngine::ComputeBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ComputeBuffer*, "m_SkySamplingDirectionsBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get>(
      std::forward<::UnityEngine::ComputeBuffer*>(value));
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::getStaticF_m_SkySamplingDirectionsBuffer() {
  return ::cordl_internals::getStaticField<::UnityEngine::ComputeBuffer*, "m_SkySamplingDirectionsBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get>();
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::setStaticF_m_AntiLeakDataBuffer(::UnityEngine::ComputeBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ComputeBuffer*, "m_AntiLeakDataBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get>(
      std::forward<::UnityEngine::ComputeBuffer*>(value));
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::getStaticF_m_AntiLeakDataBuffer() {
  return ::cordl_internals::getStaticField<::UnityEngine::ComputeBuffer*, "m_AntiLeakDataBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get>();
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::setStaticF_k_SkyDirections(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "k_SkyDirections",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::getStaticF_k_SkyDirections() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "k_SkyDirections",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get>();
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::setStaticF_k_AntiLeakData(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "k_AntiLeakData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::getStaticF_k_AntiLeakData() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "k_AntiLeakData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get>();
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GetRuntimeResources(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get(), "GetRuntimeResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rr);
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get(), "Initialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GetSkySamplingDirections() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get(),
                                               "GetSkySamplingDirections", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GenerateSkyDirections() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>::get(), "GenerateSkyDirections",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::ProbeVolumeConstantRuntimeResources() {}
