#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreCameraValues.hpp"
#include "UnityEngine/Rendering/zzzz__CoreCameraValues_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CoreCameraValues.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CoreCameraValues::*)(::UnityEngine::Rendering::CoreCameraValues)>(
    &::UnityEngine::Rendering::CoreCameraValues::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3456e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreCameraValues>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CoreCameraValues>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreCameraValues.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::CoreCameraValues::*)(::System::Object*)>(
    &::UnityEngine::Rendering::CoreCameraValues::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3456e98;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreCameraValues>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreCameraValues>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreCameraValues.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CoreCameraValues::*)()>(
    &::UnityEngine::Rendering::CoreCameraValues::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3456f30;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreCameraValues>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreCameraValues>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>"
constexpr UnityEngine::Rendering::CoreCameraValues::operator ::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>* UnityEngine::Rendering::CoreCameraValues::i___System__IEquatable_1___UnityEngine__Rendering__CoreCameraValues_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline bool UnityEngine::Rendering::CoreCameraValues::Equals(::UnityEngine::Rendering::CoreCameraValues other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreCameraValues>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CoreCameraValues>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::CoreCameraValues::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreCameraValues>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::CoreCameraValues::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreCameraValues>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "filterMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CoreCameraValues::CoreCameraValues(int32_t filterMode, uint32_t cullingMask, int32_t instanceID) noexcept {
  this->filterMode = filterMode;
  this->cullingMask = cullingMask;
  this->instanceID = instanceID;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreCameraValues::CoreCameraValues() {}
