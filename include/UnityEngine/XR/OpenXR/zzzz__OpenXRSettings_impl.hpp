#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e2ef58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>& UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::__cordl_internal_get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
constexpr ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> const& UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::__cordl_internal_get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::__cordl_internal_set_m_List(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_List = value;
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::OpenXRSettings_ColorSubmissionModeList() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode::OpenXRSettings_RenderMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode::OpenXRSettings_RenderMode() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode::MultiPass{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode::SinglePassInstanced{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization::OpenXRSettings_LatencyOptimization(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization::OpenXRSettings_LatencyOptimization() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization::PrioritizeRendering{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization::PrioritizeInputPolling{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode::OpenXRSettings_DepthSubmissionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode::OpenXRSettings_DepthSubmissionMode() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode::Depth16Bit{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode::Depth24Bit{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi::OpenXRSettings_BackendFovationApi(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi::OpenXRSettings_BackendFovationApi() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi::Legacy{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi::SRPFoveation{ static_cast<uint8_t>(0x1u) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi::QuadViews{ static_cast<uint8_t>(0x2u) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat::OpenXRSettings_SpaceWarpMotionVectorTextureFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat::OpenXRSettings_SpaceWarpMotionVectorTextureFormat() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat::RGBA16f{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat::RG16f{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode::OpenXRSettings_MultiviewRenderRegionsOptimizationMode(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode::OpenXRSettings_MultiviewRenderRegionsOptimizationMode() {}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode::None{ static_cast<uint8_t>(
    0x0u) };
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode::FinalPass{
  static_cast<uint8_t>(0x1u)
};
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode::AllPasses{
  static_cast<uint8_t>(0x2u)
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2f000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._get_colorSubmissionModes_b__47_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)(int32_t)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings___c::_get_colorSubmissionModes_b__47_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2f004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(), { "<get_colorSubmissionModes>b__47_0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._set_colorSubmissionModes_b__48_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings___c::_set_colorSubmissionModes_b__48_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2f00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                                                             { "<set_colorSubmissionModes>b__48_0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._ApplyRenderSettings_b__64_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings___c::_ApplyRenderSettings_b__64_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2f014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                                                             { "<ApplyRenderSettings>b__64_0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRSettings___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings___c*, "<>9", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(
      std::forward<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(value));
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings___c*, "<>9", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9__47_0(::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*, "<>9__47_0", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(
      std::forward<::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>(value));
}
inline ::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9__47_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*, "<>9__47_0",
                                           ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9__48_0(::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*, "<>9__48_0", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9__48_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*, "<>9__48_0",
                                           ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9__64_0(::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*, "<>9__64_0", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9__64_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>*, "<>9__64_0",
                                           ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings___c::_get_colorSubmissionModes_b__47_0(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(), { "<get_colorSubmissionModes>b__47_0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>(this, ___internal_method, i);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings___c::_set_colorSubmissionModes_b__48_0(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                                                           { "<set_colorSubmissionModes>b__48_0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, e);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings___c::_ApplyRenderSettings_b__64_0(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                                                           { "<ApplyRenderSettings>b__64_0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, e);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* UnityEngine::XR::OpenXR::OpenXRSettings___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings___c::OpenXRSettings___c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_featureCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_featureCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e2bc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_featureCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::System::Type*)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e2bc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "GetFeature", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::System::Type*)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6e2bce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "GetFeatures", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(
    ::System::Type*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6e2be64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
            { "GetFeatures", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e2bfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "GetFeatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6e2c05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                { "GetFeatures", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.SetAllowRecentering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, float_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::SetAllowRecentering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2c12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "SetAllowRecentering", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.RefreshRecenterSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::RefreshRecenterSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2c1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "RefreshRecenterSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_AllowRecentering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_AllowRecentering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2c224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_AllowRecentering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_FloorOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_FloorOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2c294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_FloorOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetAllowRecentering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, float_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetAllowRecentering)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e2c130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                                                           { "Internal_SetAllowRecentering", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_RegenerateTrackingOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_RegenerateTrackingOrigin)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e2c1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_RegenerateTrackingOrigin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetAllowRecentering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetAllowRecentering)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e2c228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetAllowRecentering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetFloorOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetFloorOffset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e2c298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetFloorOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.PermissionGrantedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::PermissionGrantedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e2c2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "PermissionGrantedCallback", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.IsPermissionGranted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::IsPermissionGranted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2c484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "IsPermissionGranted", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.ApplyPermissionSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::ApplyPermissionSettings)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x6e2c48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "ApplyPermissionSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetHasEyeTrackingPermissions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetHasEyeTrackingPermissions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2c408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_SetHasEyeTrackingPermissions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_renderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_renderMode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e2c80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_renderMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_renderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_renderMode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e2c964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                                                           { "set_renderMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_latencyOptimization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_latencyOptimization)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e2cadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_latencyOptimization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_latencyOptimization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_latencyOptimization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2cc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                             { "set_latencyOptimization", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_autoColorSubmissionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_autoColorSubmissionMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2cc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_autoColorSubmissionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_autoColorSubmissionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_autoColorSubmissionMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2cc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "set_autoColorSubmissionMode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_colorSubmissionModes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_colorSubmissionModes)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6e2cc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_colorSubmissionModes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_colorSubmissionModes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_colorSubmissionModes)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6e2cfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                             { "set_colorSubmissionModes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_depthSubmissionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_depthSubmissionMode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e2d250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_depthSubmissionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_depthSubmissionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_depthSubmissionMode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e2d3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                             { "set_depthSubmissionMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_spacewarpMotionVectorTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_spacewarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e2d520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_spacewarpMotionVectorTextureFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_spacewarpMotionVectorTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_spacewarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e2d678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                { "set_spacewarpMotionVectorTextureFormat", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_optimizeBufferDiscards
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_optimizeBufferDiscards)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2d7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_optimizeBufferDiscards", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_optimizeBufferDiscards
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_optimizeBufferDiscards)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e2d7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "set_optimizeBufferDiscards", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.ApplyRenderSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::ApplyRenderSettings)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6e2d974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "ApplyRenderSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.LogRendererSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::LogRendererSettings)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x6e2dd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "LogRendererSettings", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e2e39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e2e3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_symmetricProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_symmetricProjection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2e3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_symmetricProjection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_symmetricProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_symmetricProjection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e2e3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "set_symmetricProjection", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_optimizeMultiviewRenderRegions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_optimizeMultiviewRenderRegions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e2e4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_optimizeMultiviewRenderRegions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_optimizeMultiviewRenderRegions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_optimizeMultiviewRenderRegions)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6e2e4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "set_optimizeMultiviewRenderRegions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_multiviewRenderRegionsOptimizationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_multiviewRenderRegionsOptimizationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2e5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_multiviewRenderRegionsOptimizationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_multiviewRenderRegionsOptimizationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_multiviewRenderRegionsOptimizationMode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e2e5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                            { "set_multiviewRenderRegionsOptimizationMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_foveatedRenderingApi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_foveatedRenderingApi)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e2e6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_foveatedRenderingApi", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_foveatedRenderingApi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_foveatedRenderingApi)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e2e84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                             { "set_foveatedRenderingApi", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_useOpenXRPredictedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_useOpenXRPredictedTime)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e2e948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_useOpenXRPredictedTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_useOpenXRPredictedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_useOpenXRPredictedTime)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e2eaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "set_useOpenXRPredictedTime", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetRenderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetRenderMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2ca60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                             { "Internal_SetRenderMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetRenderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetRenderMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e2c900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetRenderMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetLatencyOptimization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetLatencyOptimization)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2dcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                             { "Internal_SetLatencyOptimization", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetLatencyOptimization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetLatencyOptimization)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e2cbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetLatencyOptimization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetDepthSubmissionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetDepthSubmissionMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2d4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                             { "Internal_SetDepthSubmissionMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetDepthSubmissionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetDepthSubmissionMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e2d344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetDepthSubmissionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetSpaceWarpMotionVectorTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSpaceWarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2d774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                            { "Internal_SetSpaceWarpMotionVectorTextureFormat", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetSpaceWarpMotionVectorTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetSpaceWarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e2d614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetSpaceWarpMotionVectorTextureFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetSymmetricProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSymmetricProjection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2db04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_SetSymmetricProjection", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetMultiviewRenderRegionsOptimizationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetMultiviewRenderRegionsOptimizationMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2db80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                            { "Internal_SetMultiviewRenderRegionsOptimizationMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetOptimizeBufferDiscards
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetOptimizeBufferDiscards)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2d8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_SetOptimizeBufferDiscards", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetUsedFoveatedRenderingApi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetUsedFoveatedRenderingApi)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2dc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                             { "Internal_SetUsedFoveatedRenderingApi", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetUsedFoveatedRenderingApi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetUsedFoveatedRenderingApi)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e2e7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetUsedFoveatedRenderingApi", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetColorSubmissionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionMode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e2eba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                { "Internal_SetColorSubmissionMode", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetColorSubmissionModes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionModes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e2d1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                             { "Internal_SetColorSubmissionModes", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetColorSubmissionModes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ArrayW<int32_t>>, int32_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetColorSubmissionModes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e2cee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                             { "Internal_GetColorSubmissionModes", {}, { ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetIsUsingLegacyXRDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetIsUsingLegacyXRDisplay)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e2ec2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetIsUsingLegacyXRDisplay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetUseOpenXRPredictedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetUseOpenXRPredictedTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e2ea3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetUseOpenXRPredictedTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetUseOpenXRPredictedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetUseOpenXRPredictedTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2dbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_SetUseOpenXRPredictedTime", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e2ec98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.ApplySettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::ApplySettings)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2ece8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "ApplySettings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetInstance)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e2c354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "GetInstance", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_ActiveBuildTargetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_ActiveBuildTargetInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2afd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_ActiveBuildTargetInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_Instance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2ee68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e2ee70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_features() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___features;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_features() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___features;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_features(::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___features = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_customLoaderName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customLoaderName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_customLoaderName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customLoaderName;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_customLoaderName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___customLoaderName = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_eyeTrackingQuestPermissionsToRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eyeTrackingQuestPermissionsToRequest;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_eyeTrackingQuestPermissionsToRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eyeTrackingQuestPermissionsToRequest;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_eyeTrackingQuestPermissionsToRequest(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_eyeTrackingQuestPermissionsToRequest = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_eyeTrackingAndroidXRPermissionsToRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eyeTrackingAndroidXRPermissionsToRequest;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_eyeTrackingAndroidXRPermissionsToRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eyeTrackingAndroidXRPermissionsToRequest;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_eyeTrackingAndroidXRPermissionsToRequest(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_eyeTrackingAndroidXRPermissionsToRequest = value;
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
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_latencyOptimization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_latencyOptimization;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_latencyOptimization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_latencyOptimization;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_latencyOptimization(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_latencyOptimization = value;
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
  this->___m_colorSubmissionModes = value;
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
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_optimizeMultiviewRenderRegions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_optimizeMultiviewRenderRegions;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_optimizeMultiviewRenderRegions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_optimizeMultiviewRenderRegions;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_optimizeMultiviewRenderRegions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_optimizeMultiviewRenderRegions = value;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_multiviewRenderRegionsOptimizationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_multiviewRenderRegionsOptimizationMode;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode const&
UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_multiviewRenderRegionsOptimizationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_multiviewRenderRegionsOptimizationMode;
}
constexpr void
UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_multiviewRenderRegionsOptimizationMode(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_multiviewRenderRegionsOptimizationMode = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_hasMigratedMultiviewRenderRegionSetting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasMigratedMultiviewRenderRegionSetting;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_hasMigratedMultiviewRenderRegionSetting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasMigratedMultiviewRenderRegionSetting;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_hasMigratedMultiviewRenderRegionSetting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_hasMigratedMultiviewRenderRegionSetting = value;
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
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_useOpenXRPredictedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_useOpenXRPredictedTime;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_useOpenXRPredictedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_useOpenXRPredictedTime;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_useOpenXRPredictedTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_useOpenXRPredictedTime = value;
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::setStaticF_kDefaultColorMode(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, "kDefaultColorMode", ::UnityEngine::XR::OpenXR::OpenXRSettings*>(
      std::forward<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>(value));
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings::getStaticF_kDefaultColorMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, "kDefaultColorMode", ::UnityEngine::XR::OpenXR::OpenXRSettings*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::setStaticF_s_RuntimeInstance(::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>, "s_RuntimeInstance", ::UnityEngine::XR::OpenXR::OpenXRSettings*>(
      std::forward<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>>(value));
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::getStaticF_s_RuntimeInstance() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>, "s_RuntimeInstance", ::UnityEngine::XR::OpenXR::OpenXRSettings*>();
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::get_featureCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_featureCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TFeature>
  requires(::cordl_internals::type_constraint<TFeature, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>)
inline TFeature UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "GetFeature", { ::i2c::class_of<TFeature>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFeature>() })));
  return ::cordl_internals::RunMethodRethrow<TFeature>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature(::System::Type* featureType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "GetFeature", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>(this, ___internal_method, featureType);
}
template <typename TFeature> inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "GetFeatures", { ::i2c::class_of<TFeature>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFeature>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Type* featureType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "GetFeatures", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>>(this, ___internal_method, featureType);
}
template <typename TFeature>
  requires(::cordl_internals::type_constraint<TFeature, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>)
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Collections::Generic::List_1<TFeature>* featuresOut) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "GetFeatures", { ::i2c::class_of<TFeature>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<TFeature>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFeature>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, featuresOut);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Type* featureType,
                                                                    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>* featuresOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
          { "GetFeatures", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, featureType, featuresOut);
}
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "GetFeatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>* featuresOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                              { "GetFeatures", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, featuresOut);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::SetAllowRecentering(bool allowRecentering, float_t floorOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "SetAllowRecentering", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allowRecentering, floorOffset);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::RefreshRecenterSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "RefreshRecenterSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_AllowRecentering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_AllowRecentering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::OpenXR::OpenXRSettings::get_FloorOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_FloorOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetAllowRecentering(bool active, float_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_SetAllowRecentering", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active, height);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_RegenerateTrackingOrigin() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_RegenerateTrackingOrigin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetAllowRecentering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetAllowRecentering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetFloorOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetFloorOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::PermissionGrantedCallback(::StringW permissionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "PermissionGrantedCallback", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, permissionName);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::IsPermissionGranted(::StringW permissionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "IsPermissionGranted", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, permissionName);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::ApplyPermissionSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "ApplyPermissionSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetHasEyeTrackingPermissions(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_SetHasEyeTrackingPermissions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::get_renderMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_renderMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_renderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                                                         { "set_renderMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization UnityEngine::XR::OpenXR::OpenXRSettings::get_latencyOptimization() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_latencyOptimization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_latencyOptimization(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "set_latencyOptimization", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_autoColorSubmissionMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_autoColorSubmissionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_autoColorSubmissionMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "set_autoColorSubmissionMode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> UnityEngine::XR::OpenXR::OpenXRSettings::get_colorSubmissionModes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_colorSubmissionModes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_colorSubmissionModes(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "set_colorSubmissionModes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::get_depthSubmissionMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_depthSubmissionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_depthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "set_depthSubmissionMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat UnityEngine::XR::OpenXR::OpenXRSettings::get_spacewarpMotionVectorTextureFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_spacewarpMotionVectorTextureFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_spacewarpMotionVectorTextureFormat(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                              { "set_spacewarpMotionVectorTextureFormat", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_optimizeBufferDiscards() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_optimizeBufferDiscards", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_optimizeBufferDiscards(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "set_optimizeBufferDiscards", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::ApplyRenderSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "ApplyRenderSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::LogRendererSettings(uint64_t diagnosticsSectionHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "LogRendererSettings", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, diagnosticsSectionHandle);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_symmetricProjection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_symmetricProjection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_symmetricProjection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "set_symmetricProjection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_optimizeMultiviewRenderRegions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_optimizeMultiviewRenderRegions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_optimizeMultiviewRenderRegions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "set_optimizeMultiviewRenderRegions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode UnityEngine::XR::OpenXR::OpenXRSettings::get_multiviewRenderRegionsOptimizationMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_multiviewRenderRegionsOptimizationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_multiviewRenderRegionsOptimizationMode(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                       { "set_multiviewRenderRegionsOptimizationMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings::get_foveatedRenderingApi() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_foveatedRenderingApi", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_foveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "set_foveatedRenderingApi", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_useOpenXRPredictedTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_useOpenXRPredictedTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_useOpenXRPredictedTime(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "set_useOpenXRPredictedTime", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetRenderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode renderMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "Internal_SetRenderMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderMode);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetRenderMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetRenderMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetLatencyOptimization(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization latencyOptimzation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "Internal_SetLatencyOptimization", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, latencyOptimzation);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetLatencyOptimization() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetLatencyOptimization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetDepthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode depthSubmissionMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "Internal_SetDepthSubmissionMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, depthSubmissionMode);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetDepthSubmissionMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetDepthSubmissionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSpaceWarpMotionVectorTextureFormat(
    ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat spaceWarpMotionVectorTextureFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                       { "Internal_SetSpaceWarpMotionVectorTextureFormat", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spaceWarpMotionVectorTextureFormat);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetSpaceWarpMotionVectorTextureFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetSpaceWarpMotionVectorTextureFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSymmetricProjection(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_SetSymmetricProjection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetMultiviewRenderRegionsOptimizationMode(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                          { "Internal_SetMultiviewRenderRegionsOptimizationMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mode);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetOptimizeBufferDiscards(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_SetOptimizeBufferDiscards", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetUsedFoveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi api) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "Internal_SetUsedFoveatedRenderingApi", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, api);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetUsedFoveatedRenderingApi() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetUsedFoveatedRenderingApi", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionMode(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> colorSubmissionMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                              { "Internal_SetColorSubmissionMode", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorSubmissionMode);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionModes(::ArrayW<int32_t> colorSubmissionMode, int32_t arraySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "Internal_SetColorSubmissionModes", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorSubmissionMode, arraySize);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetColorSubmissionModes(::by_ref<::ArrayW<int32_t>> colorSubmissionMode, int32_t arraySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                                                           { "Internal_GetColorSubmissionModes", {}, { ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, colorSubmissionMode, arraySize);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetIsUsingLegacyXRDisplay() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetIsUsingLegacyXRDisplay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetUseOpenXRPredictedTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_GetUseOpenXRPredictedTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetUseOpenXRPredictedTime(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Internal_SetUseOpenXRPredictedTime", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::ApplySettings(bool logSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "ApplySettings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logSettings);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::GetInstance(bool useActiveBuildTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "GetInstance", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>>(nullptr, ___internal_method, useActiveBuildTarget);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::get_ActiveBuildTargetInstance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_ActiveBuildTargetInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings* UnityEngine::XR::OpenXR::OpenXRSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRSettings*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::XR::OpenXR::OpenXRSettings::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::XR::OpenXR::OpenXRSettings::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings::OpenXRSettings() {}
