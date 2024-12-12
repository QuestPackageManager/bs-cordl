#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchPackedCullingViewID.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchPackedCullingViewID_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchPackedCullingViewID.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::BatchPackedCullingViewID::*)()>(
    &::UnityEngine::Rendering::BatchPackedCullingViewID::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48c83ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchPackedCullingViewID>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchPackedCullingViewID>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchPackedCullingViewID.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::BatchPackedCullingViewID::*)(::UnityEngine::Rendering::BatchPackedCullingViewID)>(
    &::UnityEngine::Rendering::BatchPackedCullingViewID::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x48c83f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchPackedCullingViewID>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchPackedCullingViewID>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchPackedCullingViewID.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::BatchPackedCullingViewID::*)(::System::Object*)>(
    &::UnityEngine::Rendering::BatchPackedCullingViewID::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x48c8404;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchPackedCullingViewID>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchPackedCullingViewID>::get(), 0));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::BatchPackedCullingViewID::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchPackedCullingViewID>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::BatchPackedCullingViewID::Equals(::UnityEngine::Rendering::BatchPackedCullingViewID other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchPackedCullingViewID>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchPackedCullingViewID>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::BatchPackedCullingViewID::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchPackedCullingViewID>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>"
constexpr UnityEngine::Rendering::BatchPackedCullingViewID::operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>*
UnityEngine::Rendering::BatchPackedCullingViewID::i___System__IEquatable_1___UnityEngine__Rendering__BatchPackedCullingViewID_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchPackedCullingViewID::BatchPackedCullingViewID(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchPackedCullingViewID::BatchPackedCullingViewID() {}
