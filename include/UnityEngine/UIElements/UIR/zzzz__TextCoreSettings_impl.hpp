#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextCoreSettings_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextCoreSettings.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::TextCoreSettings::*)(::System::Object*)>(
    &::UnityEngine::UIElements::UIR::TextCoreSettings::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2dcc738;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextCoreSettings>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextCoreSettings>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextCoreSettings.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::TextCoreSettings::*)(::UnityEngine::UIElements::UIR::TextCoreSettings)>(
    &::UnityEngine::UIElements::UIR::TextCoreSettings::Equals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2dcc7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextCoreSettings>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::TextCoreSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextCoreSettings.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::TextCoreSettings::*)()>(
    &::UnityEngine::UIElements::UIR::TextCoreSettings::GetHashCode)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2dcc8b0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextCoreSettings>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextCoreSettings>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>"
constexpr UnityEngine::UIElements::UIR::TextCoreSettings::operator ::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*
UnityEngine::UIElements::UIR::TextCoreSettings::i___System__IEquatable_1___UnityEngine__UIElements__UIR__TextCoreSettings_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline bool UnityEngine::UIElements::UIR::TextCoreSettings::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextCoreSettings>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::UIElements::UIR::TextCoreSettings::Equals(::UnityEngine::UIElements::UIR::TextCoreSettings other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextCoreSettings>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::TextCoreSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t UnityEngine::UIElements::UIR::TextCoreSettings::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextCoreSettings>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "faceColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "outlineColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "outlineWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlayColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "underlayOffset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlaySoftness", ty: "float_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::TextCoreSettings::TextCoreSettings(::UnityEngine::Color faceColor, ::UnityEngine::Color outlineColor, float_t outlineWidth,
                                                                             ::UnityEngine::Color underlayColor, ::UnityEngine::Vector2 underlayOffset, float_t underlaySoftness) noexcept {
  this->faceColor = faceColor;
  this->outlineColor = outlineColor;
  this->outlineWidth = outlineWidth;
  this->underlayColor = underlayColor;
  this->underlayOffset = underlayOffset;
  this->underlaySoftness = underlaySoftness;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::TextCoreSettings::TextCoreSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
