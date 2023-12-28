#pragma once
#include "UnityEngine/XR/zzzz__Eyes_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Eyes.get_deviceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::XR::Eyes::*)()>(&::UnityEngine::XR::Eyes::get_deviceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eb26b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(), "get_deviceId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Eyes.get_featureIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::XR::Eyes::*)()>(&::UnityEngine::XR::Eyes::get_featureIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eb26c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(), "get_featureIndex",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Eyes.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Eyes::*)(::System::Object*)>(&::UnityEngine::XR::Eyes::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2eb26c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Eyes.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Eyes::*)(::UnityEngine::XR::Eyes)>(&::UnityEngine::XR::Eyes::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2eb2750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Eyes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Eyes.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::Eyes::*)()>(&::UnityEngine::XR::Eyes::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2eb2774;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::Eyes>"
constexpr UnityEngine::XR::Eyes::operator ::System::IEquatable_1<::UnityEngine::XR::Eyes>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::Eyes>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline uint64_t UnityEngine::XR::Eyes::get_deviceId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(), "get_deviceId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::XR::Eyes::get_featureIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(), "get_featureIndex",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Eyes::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::XR::Eyes::Equals(::UnityEngine::XR::Eyes other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Eyes>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t UnityEngine::XR::Eyes::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Eyes>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FeatureIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Eyes::Eyes(uint64_t m_DeviceId, uint32_t m_FeatureIndex) noexcept {
  this->m_DeviceId = m_DeviceId;
  this->m_FeatureIndex = m_FeatureIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Eyes::Eyes() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
