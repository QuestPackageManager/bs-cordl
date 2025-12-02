#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IVolumeDebugSettings2.hpp"
#include "UnityEngine/Rendering/zzzz__IVolumeDebugSettings2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__IVolumeDebugSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IVolumeDebugSettings2.get_targetRenderPipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::Rendering::IVolumeDebugSettings2::*)()>(
    &::UnityEngine::Rendering::IVolumeDebugSettings2::get_targetRenderPipeline)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IVolumeDebugSettings2*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IVolumeDebugSettings2*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IVolumeDebugSettings2.get_volumeComponentsPathAndType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* (
    ::UnityEngine::Rendering::IVolumeDebugSettings2::*)()>(&::UnityEngine::Rendering::IVolumeDebugSettings2::get_volumeComponentsPathAndType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IVolumeDebugSettings2*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IVolumeDebugSettings2*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Type* UnityEngine::Rendering::IVolumeDebugSettings2::get_targetRenderPipeline() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IVolumeDebugSettings2*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* UnityEngine::Rendering::IVolumeDebugSettings2::get_volumeComponentsPathAndType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IVolumeDebugSettings2*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IVolumeDebugSettings"
constexpr UnityEngine::Rendering::IVolumeDebugSettings2::operator ::UnityEngine::Rendering::IVolumeDebugSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IVolumeDebugSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IVolumeDebugSettings"
constexpr ::UnityEngine::Rendering::IVolumeDebugSettings* UnityEngine::Rendering::IVolumeDebugSettings2::i___UnityEngine__Rendering__IVolumeDebugSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IVolumeDebugSettings*>(static_cast<void*>(this));
}
