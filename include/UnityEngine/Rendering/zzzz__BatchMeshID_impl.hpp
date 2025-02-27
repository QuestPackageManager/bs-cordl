#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchMeshID.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMeshID.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::BatchMeshID::*)()>(&::UnityEngine::Rendering::BatchMeshID::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48d71d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMeshID>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMeshID>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMeshID.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::BatchMeshID::*)(::System::Object*)>(&::UnityEngine::Rendering::BatchMeshID::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x48d71d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMeshID>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMeshID>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMeshID.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::BatchMeshID::*)(::UnityEngine::Rendering::BatchMeshID)>(
    &::UnityEngine::Rendering::BatchMeshID::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x48d7280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMeshID>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchMeshID>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchMeshID::setStaticF_Null(::UnityEngine::Rendering::BatchMeshID value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::BatchMeshID, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMeshID>::get>(
      std::forward<::UnityEngine::Rendering::BatchMeshID>(value));
}
inline ::UnityEngine::Rendering::BatchMeshID UnityEngine::Rendering::BatchMeshID::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::BatchMeshID, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMeshID>::get>();
}
inline int32_t UnityEngine::Rendering::BatchMeshID::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMeshID>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::BatchMeshID::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMeshID>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::Rendering::BatchMeshID::Equals(::UnityEngine::Rendering::BatchMeshID other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMeshID>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchMeshID>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>"
constexpr UnityEngine::Rendering::BatchMeshID::operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>* UnityEngine::Rendering::BatchMeshID::i___System__IEquatable_1___UnityEngine__Rendering__BatchMeshID_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchMeshID::BatchMeshID(uint32_t value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchMeshID::BatchMeshID() {}
