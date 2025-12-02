#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup::OpenXRSettings_ColorSubmissionModeGroup(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup::OpenXRSettings_ColorSubmissionModeGroup() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup::kRenderTextureFormatGroup8888{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup::kRenderTextureFormatGroup1010102_Float{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup::kRenderTextureFormatGroup16161616_Float{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup::kRenderTextureFormatGroup565{ static_cast<int32_t>(
    0x3) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup::kRenderTextureFormatGroup111110_Float{
  static_cast<int32_t>(0x4)
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x67b56c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>&
UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::__cordl_internal_get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
constexpr ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> const&
UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::__cordl_internal_get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::__cordl_internal_set_m_List(
    ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_List)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::OpenXRSettings_ColorSubmissionModeList() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode::OpenXRSettings_RenderMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode::OpenXRSettings_RenderMode() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode::MultiPass{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode::SinglePassInstanced{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode::OpenXRSettings_DepthSubmissionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode::OpenXRSettings_DepthSubmissionMode() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode::Depth16Bit{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode::Depth24Bit{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi::OpenXRSettings_BackendFovationApi(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi::OpenXRSettings_BackendFovationApi() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi::Legacy{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi::SRPFoveation{ static_cast<uint8_t>(0x1u) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat::OpenXRSettings_SpaceWarpMotionVectorTextureFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat::OpenXRSettings_SpaceWarpMotionVectorTextureFormat() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat::RGBA16f{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat::RG16f{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67b576c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._get_colorSubmissionModes_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)(
    int32_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings___c::_get_colorSubmissionModes_b__25_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b5770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get(), "<get_colorSubmissionModes>b__25_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._set_colorSubmissionModes_b__26_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)(
    ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup)>(&::UnityEngine::XR::OpenXR::OpenXRSettings___c::_set_colorSubmissionModes_b__26_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b5778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get(), "<set_colorSubmissionModes>b__26_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._ApplyRenderSettings_b__44_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)(
    ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup)>(&::UnityEngine::XR::OpenXR::OpenXRSettings___c::_ApplyRenderSettings_b__44_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b5780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get(), "<ApplyRenderSettings>b__44_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRSettings___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get>(
      std::forward<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(value));
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9__25_0(::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*, "<>9__25_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get>(
      std::forward<::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>(value));
}
inline ::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*, "<>9__25_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9__26_0(::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*, "<>9__26_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*, "<>9__26_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9__44_0(::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*, "<>9__44_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9__44_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*, "<>9__44_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings___c::_get_colorSubmissionModes_b__25_0(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get(), "<get_colorSubmissionModes>b__25_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, false>(this, ___internal_method, i);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings___c::_set_colorSubmissionModes_b__26_0(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get(), "<set_colorSubmissionModes>b__26_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, e);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings___c::_ApplyRenderSettings_b__44_0(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>::get(), "<ApplyRenderSettings>b__44_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, e);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* UnityEngine::XR::OpenXR::OpenXRSettings___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings___c::OpenXRSettings___c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_featureCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_featureCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67b325c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_featureCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::System::Type*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67b3274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeature", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*> (
        ::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::System::Type*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x67b3300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(
    ::System::Type*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x67b347c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67b35e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x67b3674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_renderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_renderMode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67b3744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_renderMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_renderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_renderMode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x67b389c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_renderMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_autoColorSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_autoColorSubmissionMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b3a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_autoColorSubmissionMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_autoColorSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_autoColorSubmissionMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b3a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_autoColorSubmissionMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_colorSubmissionModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> (
        ::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_colorSubmissionModes)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x67b3a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_colorSubmissionModes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_colorSubmissionModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(
    ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_colorSubmissionModes)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x67b3da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_colorSubmissionModes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.PermissionGrantedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::PermissionGrantedCallback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67b4028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "PermissionGrantedCallback",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_depthSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_depthSubmissionMode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67b41dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_depthSubmissionMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_depthSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_depthSubmissionMode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x67b4334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_depthSubmissionMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_spacewarpMotionVectorTextureFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat (
    ::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_spacewarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67b44ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "get_spacewarpMotionVectorTextureFormat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_spacewarpMotionVectorTextureFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(
    ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_spacewarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x67b4604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_spacewarpMotionVectorTextureFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_optimizeBufferDiscards
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_optimizeBufferDiscards)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b477c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_optimizeBufferDiscards", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_optimizeBufferDiscards
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_optimizeBufferDiscards)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67b4784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_optimizeBufferDiscards",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.ApplyRenderSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::ApplyRenderSettings)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x67b4900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "ApplyRenderSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_symmetricProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_symmetricProjection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b4e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_symmetricProjection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_symmetricProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_symmetricProjection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67b4e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_symmetricProjection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_foveatedRenderingApi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_foveatedRenderingApi)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67b4f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_foveatedRenderingApi", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_foveatedRenderingApi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_foveatedRenderingApi)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x67b5078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_foveatedRenderingApi", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetRenderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetRenderMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67b3998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetRenderMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetRenderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetRenderMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67b3838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "Internal_GetRenderMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetDepthSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetDepthSubmissionMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67b4430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetDepthSubmissionMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetDepthSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetDepthSubmissionMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67b42d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_GetDepthSubmissionMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetSpaceWarpMotionVectorTextureFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSpaceWarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67b4700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetSpaceWarpMotionVectorTextureFormat",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetSpaceWarpMotionVectorTextureFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetSpaceWarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67b45a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                 "Internal_GetSpaceWarpMotionVectorTextureFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetSymmetricProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSymmetricProjection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67b4bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetSymmetricProjection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetOptimizeMultiviewRenderRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetOptimizeMultiviewRenderRegions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67b5174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetOptimizeMultiviewRenderRegions",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetOptimizeBufferDiscards
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetOptimizeBufferDiscards)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67b4884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetOptimizeBufferDiscards",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetUsedFoveatedRenderingApi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetUsedFoveatedRenderingApi)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67b4c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetUsedFoveatedRenderingApi", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetUsedFoveatedRenderingApi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetUsedFoveatedRenderingApi)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67b5014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_GetUsedFoveatedRenderingApi",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_HasRequestedEyeTrackingPermissions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_HasRequestedEyeTrackingPermissions)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67b4ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                 "Internal_HasRequestedEyeTrackingPermissions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetHasEyeTrackingPermissions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetHasEyeTrackingPermissions)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67b51f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_GetHasEyeTrackingPermissions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetHasEyeTrackingPermissions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetHasEyeTrackingPermissions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67b4160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetHasEyeTrackingPermissions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetColorSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>)>(
        &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionMode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67b525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetColorSubmissionMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetColorSubmissionModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int32_t, ::Array<int32_t>*>, int32_t)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionModes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67b3f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetColorSubmissionModes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetColorSubmissionModes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>, int32_t)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetColorSubmissionModes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x67b3cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_GetColorSubmissionModes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetIsUsingLegacyXRDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetIsUsingLegacyXRDisplay)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67b52e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_GetIsUsingLegacyXRDisplay",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x67b534c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.ApplySettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::ApplySettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67b539c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "ApplySettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> (*)(bool)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::GetInstance)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67b40ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetInstance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_ActiveBuildTargetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_ActiveBuildTargetInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b53a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_ActiveBuildTargetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_Instance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b53a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.SetAllowRecentering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, float_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::SetAllowRecentering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67b53b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "SetAllowRecentering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.RefreshRecenterSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::RefreshRecenterSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67b5440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "RefreshRecenterSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_AllowRecentering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_AllowRecentering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67b54a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_AllowRecentering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_FloorOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_FloorOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67b5518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_FloorOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetAllowRecentering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, float_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetAllowRecentering)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67b53b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetAllowRecentering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_RegenerateTrackingOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_RegenerateTrackingOrigin)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67b5444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_RegenerateTrackingOrigin",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetAllowRecentering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetAllowRecentering)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67b54ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "Internal_GetAllowRecentering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetFloorOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetFloorOffset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67b551c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "Internal_GetFloorOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x67b5580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>&
UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_features() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___features;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*> const&
UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_features() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___features;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_features(
    ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___features)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_renderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_renderMode;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_renderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_renderMode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_renderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_renderMode = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_autoColorSubmissionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_autoColorSubmissionMode;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_autoColorSubmissionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_autoColorSubmissionMode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_autoColorSubmissionMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_autoColorSubmissionMode = value;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_colorSubmissionModes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_colorSubmissionModes;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_colorSubmissionModes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_colorSubmissionModes;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_colorSubmissionModes(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_colorSubmissionModes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_eyeTrackingPermissionsToRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eyeTrackingPermissionsToRequest;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_eyeTrackingPermissionsToRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eyeTrackingPermissionsToRequest;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_eyeTrackingPermissionsToRequest(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_eyeTrackingPermissionsToRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_depthSubmissionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depthSubmissionMode;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_depthSubmissionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depthSubmissionMode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_depthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_depthSubmissionMode = value;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_spacewarpMotionVectorTextureFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_spacewarpMotionVectorTextureFormat;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const&
UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_spacewarpMotionVectorTextureFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_spacewarpMotionVectorTextureFormat;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_spacewarpMotionVectorTextureFormat(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_spacewarpMotionVectorTextureFormat = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_optimizeBufferDiscards() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_optimizeBufferDiscards;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_optimizeBufferDiscards() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_optimizeBufferDiscards;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_optimizeBufferDiscards(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_optimizeBufferDiscards = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_symmetricProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_symmetricProjection;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_symmetricProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_symmetricProjection;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_symmetricProjection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_symmetricProjection = value;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_foveatedRenderingApi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_foveatedRenderingApi;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_foveatedRenderingApi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_foveatedRenderingApi;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_foveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_foveatedRenderingApi = value;
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::setStaticF_kDefaultColorMode(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, "kDefaultColorMode",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get>(
      std::forward<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>(value));
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings::getStaticF_kDefaultColorMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, "kDefaultColorMode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::setStaticF_s_RuntimeInstance(::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>, "s_RuntimeInstance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get>(
      std::forward<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>>(value));
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::getStaticF_s_RuntimeInstance() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>, "s_RuntimeInstance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get>();
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::get_featureCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_featureCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TFeature> inline TFeature UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeature",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() }));
  return ::cordl_internals::RunMethodRethrow<TFeature, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature(::System::Type* featureType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeature", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, false>(this, ___internal_method, featureType);
}
template <typename TFeature>
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>
UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>, false>(
      this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>
UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Type* featureType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>, false>(
      this, ___internal_method, featureType);
}
template <typename TFeature> inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Collections::Generic::List_1<TFeature>* featuresOut) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TFeature>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, featuresOut);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Type* featureType,
                                                                    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>* featuresOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, featureType, featuresOut);
}
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>
UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>, false>(
      this, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>* featuresOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, featuresOut);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::get_renderMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_renderMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_renderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_renderMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_autoColorSubmissionMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_autoColorSubmissionMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_autoColorSubmissionMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_autoColorSubmissionMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>
UnityEngine::XR::OpenXR::OpenXRSettings::get_colorSubmissionModes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_colorSubmissionModes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>,
                                             false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_colorSubmissionModes(
    ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_colorSubmissionModes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::PermissionGrantedCallback(::StringW permissionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "PermissionGrantedCallback",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissionName);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::get_depthSubmissionMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_depthSubmissionMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_depthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_depthSubmissionMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat UnityEngine::XR::OpenXR::OpenXRSettings::get_spacewarpMotionVectorTextureFormat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "get_spacewarpMotionVectorTextureFormat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_spacewarpMotionVectorTextureFormat(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_spacewarpMotionVectorTextureFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_optimizeBufferDiscards() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_optimizeBufferDiscards", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_optimizeBufferDiscards(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_optimizeBufferDiscards",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::ApplyRenderSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "ApplyRenderSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_symmetricProjection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_symmetricProjection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_symmetricProjection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_symmetricProjection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings::get_foveatedRenderingApi() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_foveatedRenderingApi", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_foveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_foveatedRenderingApi", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetRenderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode renderMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetRenderMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderMode);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetRenderMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "Internal_GetRenderMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetDepthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode depthSubmissionMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetDepthSubmissionMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, depthSubmissionMode);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetDepthSubmissionMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "Internal_GetDepthSubmissionMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSpaceWarpMotionVectorTextureFormat(
    ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat spaceWarpMotionVectorTextureFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetSpaceWarpMotionVectorTextureFormat",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, spaceWarpMotionVectorTextureFormat);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetSpaceWarpMotionVectorTextureFormat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                               "Internal_GetSpaceWarpMotionVectorTextureFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSymmetricProjection(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetSymmetricProjection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetOptimizeMultiviewRenderRegions(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetOptimizeMultiviewRenderRegions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetOptimizeBufferDiscards(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetOptimizeBufferDiscards",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetUsedFoveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi api) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetUsedFoveatedRenderingApi", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, api);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetUsedFoveatedRenderingApi() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_GetUsedFoveatedRenderingApi",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::Internal_HasRequestedEyeTrackingPermissions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_HasRequestedEyeTrackingPermissions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetHasEyeTrackingPermissions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_GetHasEyeTrackingPermissions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetHasEyeTrackingPermissions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetHasEyeTrackingPermissions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionMode(
    ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> colorSubmissionMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetColorSubmissionMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, colorSubmissionMode);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionModes(::ArrayW<int32_t, ::Array<int32_t>*> colorSubmissionMode, int32_t arraySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetColorSubmissionModes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, colorSubmissionMode, arraySize);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetColorSubmissionModes(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> colorSubmissionMode, int32_t arraySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_GetColorSubmissionModes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, colorSubmissionMode, arraySize);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetIsUsingLegacyXRDisplay() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_GetIsUsingLegacyXRDisplay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::ApplySettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "ApplySettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::GetInstance(bool useActiveBuildTarget) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetInstance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>, false>(nullptr, ___internal_method, useActiveBuildTarget);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::get_ActiveBuildTargetInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_ActiveBuildTargetInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::SetAllowRecentering(bool allowRecentering, float_t floorOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "SetAllowRecentering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, allowRecentering, floorOffset);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::RefreshRecenterSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "RefreshRecenterSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_AllowRecentering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_AllowRecentering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::OpenXR::OpenXRSettings::get_FloorOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_FloorOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetAllowRecentering(bool active, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetAllowRecentering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, active, height);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_RegenerateTrackingOrigin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_RegenerateTrackingOrigin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetAllowRecentering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "Internal_GetAllowRecentering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetFloorOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "Internal_GetFloorOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings* UnityEngine::XR::OpenXR::OpenXRSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::OpenXRSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings::OpenXRSettings() {}
