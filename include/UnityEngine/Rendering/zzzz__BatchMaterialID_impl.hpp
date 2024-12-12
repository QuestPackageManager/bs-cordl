#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchMaterialID.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMaterialID.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::BatchMaterialID::*)()>(&::UnityEngine::Rendering::BatchMaterialID::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48c81dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMaterialID>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMaterialID>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMaterialID.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::BatchMaterialID::*)(::System::Object*)>(
    &::UnityEngine::Rendering::BatchMaterialID::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x48c81e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMaterialID>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMaterialID>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMaterialID.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::BatchMaterialID::*)(::UnityEngine::Rendering::BatchMaterialID)>(
    &::UnityEngine::Rendering::BatchMaterialID::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x48c828c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMaterialID>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchMaterialID>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchMaterialID::setStaticF_Null(::UnityEngine::Rendering::BatchMaterialID value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::BatchMaterialID, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMaterialID>::get>(
      std::forward<::UnityEngine::Rendering::BatchMaterialID>(value));
}
inline ::UnityEngine::Rendering::BatchMaterialID UnityEngine::Rendering::BatchMaterialID::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::BatchMaterialID, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMaterialID>::get>();
}
inline int32_t UnityEngine::Rendering::BatchMaterialID::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMaterialID>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::BatchMaterialID::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMaterialID>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::Rendering::BatchMaterialID::Equals(::UnityEngine::Rendering::BatchMaterialID other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchMaterialID>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchMaterialID>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>"
constexpr UnityEngine::Rendering::BatchMaterialID::operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>* UnityEngine::Rendering::BatchMaterialID::i___System__IEquatable_1___UnityEngine__Rendering__BatchMaterialID_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchMaterialID::BatchMaterialID(uint32_t value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchMaterialID::BatchMaterialID() {}
