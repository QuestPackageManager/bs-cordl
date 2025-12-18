#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingLayerRange.hpp"
#include "UnityEngine/Rendering/zzzz__SortingLayerRange_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SortingLayerRange.get_all
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SortingLayerRange (*)()>(&::UnityEngine::Rendering::SortingLayerRange::get_all)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x695653c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SortingLayerRange>::get(), "get_all",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingLayerRange.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SortingLayerRange::*)(::UnityEngine::Rendering::SortingLayerRange)>(
    &::UnityEngine::Rendering::SortingLayerRange::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x695d75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SortingLayerRange>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SortingLayerRange>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingLayerRange.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SortingLayerRange::*)(::System::Object*)>(
    &::UnityEngine::Rendering::SortingLayerRange::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x695d780;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SortingLayerRange>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SortingLayerRange>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingLayerRange.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::SortingLayerRange::*)()>(
    &::UnityEngine::Rendering::SortingLayerRange::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x695d808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SortingLayerRange>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SortingLayerRange>::get(), 2));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::SortingLayerRange UnityEngine::Rendering::SortingLayerRange::get_all() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SortingLayerRange>::get(), "get_all",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SortingLayerRange, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::SortingLayerRange::Equals(::UnityEngine::Rendering::SortingLayerRange other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SortingLayerRange>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SortingLayerRange>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::SortingLayerRange::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SortingLayerRange>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::SortingLayerRange::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SortingLayerRange>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>"
constexpr UnityEngine::Rendering::SortingLayerRange::operator ::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>* UnityEngine::Rendering::SortingLayerRange::i___System__IEquatable_1___UnityEngine__Rendering__SortingLayerRange_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_LowerBound", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UpperBound", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SortingLayerRange::SortingLayerRange(int16_t m_LowerBound, int16_t m_UpperBound) noexcept {
  this->m_LowerBound = m_LowerBound;
  this->m_UpperBound = m_UpperBound;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SortingLayerRange::SortingLayerRange() {}
