#pragma once
#include "UnityEngine/XR/zzzz__MeshId_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::MeshId.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::MeshId::*)()>(&::UnityEngine::XR::MeshId::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3608310;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::MeshId.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::MeshId::*)()>(&::UnityEngine::XR::MeshId::GetHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x36083a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::MeshId.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::MeshId::*)(::System::Object*)>(&::UnityEngine::XR::MeshId::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36083d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::MeshId.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::MeshId::*)(::UnityEngine::XR::MeshId)>(&::UnityEngine::XR::MeshId::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3608460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::MeshId>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::MeshId>"
constexpr UnityEngine::XR::MeshId::operator ::System::IEquatable_1<::UnityEngine::XR::MeshId>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::MeshId>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::MeshId>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::MeshId>* UnityEngine::XR::MeshId::i___System__IEquatable_1___UnityEngine__XR__MeshId_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::MeshId>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::XR::MeshId::setStaticF_s_InvalidId(::UnityEngine::XR::MeshId value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::MeshId, "s_InvalidId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get>(
      std::forward<::UnityEngine::XR::MeshId>(value));
}
inline ::UnityEngine::XR::MeshId UnityEngine::XR::MeshId::getStaticF_s_InvalidId() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::MeshId, "s_InvalidId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get>();
}
inline ::StringW UnityEngine::XR::MeshId::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::MeshId::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::MeshId::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::XR::MeshId::Equals(::UnityEngine::XR::MeshId other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::MeshId>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::MeshId>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_SubId1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SubId2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::MeshId::MeshId(uint64_t m_SubId1, uint64_t m_SubId2) noexcept {
  this->m_SubId1 = m_SubId1;
  this->m_SubId2 = m_SubId2;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::MeshId::MeshId() {}
