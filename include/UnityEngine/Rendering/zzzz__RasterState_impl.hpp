#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RasterState.hpp"
#include "UnityEngine/Rendering/zzzz__CullMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RasterState_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RasterState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RasterState::*)(::UnityEngine::Rendering::CullMode, int32_t, float_t, bool)>(
    &::UnityEngine::Rendering::RasterState::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68eda60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CullMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RasterState.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RasterState::*)(::UnityEngine::Rendering::RasterState)>(
    &::UnityEngine::Rendering::RasterState::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68edaf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RasterState.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RasterState::*)(::System::Object*)>(&::UnityEngine::Rendering::RasterState::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x68edb70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RasterState.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RasterState::*)()>(&::UnityEngine::Rendering::RasterState::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x68edc24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get(), 2));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RasterState::setStaticF_defaultValue(::UnityEngine::Rendering::RasterState value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RasterState, "defaultValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get>(
      std::forward<::UnityEngine::Rendering::RasterState>(value));
}
inline ::UnityEngine::Rendering::RasterState UnityEngine::Rendering::RasterState::getStaticF_defaultValue() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RasterState, "defaultValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get>();
}
inline void UnityEngine::Rendering::RasterState::_ctor(::UnityEngine::Rendering::CullMode cullingMode, int32_t offsetUnits, float_t offsetFactor, bool depthClip) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CullMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cullingMode, offsetUnits, offsetFactor, depthClip);
}
inline bool UnityEngine::Rendering::RasterState::Equals(::UnityEngine::Rendering::RasterState other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterState>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::RasterState::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::RasterState::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RasterState>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RasterState>"
constexpr UnityEngine::Rendering::RasterState::operator ::System::IEquatable_1<::UnityEngine::Rendering::RasterState>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::RasterState>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RasterState>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RasterState>* UnityEngine::Rendering::RasterState::i___System__IEquatable_1___UnityEngine__Rendering__RasterState_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::RasterState>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_CullingMode", ty: "::UnityEngine::Rendering::CullMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OffsetUnits", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_OffsetFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DepthClip", ty: "uint8_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Conservative", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Padding1", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Padding2", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RasterState::RasterState(::UnityEngine::Rendering::CullMode m_CullingMode, int32_t m_OffsetUnits, float_t m_OffsetFactor, uint8_t m_DepthClip,
                                                             uint8_t m_Conservative, uint8_t m_Padding1, uint8_t m_Padding2) noexcept {
  this->m_CullingMode = m_CullingMode;
  this->m_OffsetUnits = m_OffsetUnits;
  this->m_OffsetFactor = m_OffsetFactor;
  this->m_DepthClip = m_DepthClip;
  this->m_Conservative = m_Conservative;
  this->m_Padding1 = m_Padding1;
  this->m_Padding2 = m_Padding2;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RasterState::RasterState() {}
