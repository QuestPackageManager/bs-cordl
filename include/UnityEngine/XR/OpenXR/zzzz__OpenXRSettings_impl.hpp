#pragma once
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode::__OpenXRSettings__RenderMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode::__OpenXRSettings__RenderMode() {}
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode::MultiPass{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode::SinglePassInstanced{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode::__OpenXRSettings__DepthSubmissionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode::__OpenXRSettings__DepthSubmissionMode() {}
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode::Depth16Bit{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode::Depth24Bit{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_featureCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_featureCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afa2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_featureCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Features::OpenXRFeature* (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::System::Type*)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2afa308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeature", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::System::Type*)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2afa394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(
    ::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2afa500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
        &::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2afa658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2afa6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_renderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_renderMode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2afa780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_renderMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_renderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::set_renderMode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2afa8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_renderMode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_depthSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_depthSubmissionMode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2afaa28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_depthSubmissionMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_depthSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(
    ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_depthSubmissionMode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2afab68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_depthSubmissionMode", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.ApplyRenderSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::ApplyRenderSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afacd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "ApplyRenderSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetRenderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetRenderMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2afa9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetRenderMode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetRenderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetRenderMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2afa858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "Internal_GetRenderMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetDepthSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode)>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetDepthSubmissionMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2afac54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetDepthSubmissionMode", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetDepthSubmissionMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetDepthSubmissionMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2afab00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "Internal_GetDepthSubmissionMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2afacec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.ApplySettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::ApplySettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afad38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "ApplySettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings* (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetInstance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2afad54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_ActiveBuildTargetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings* (*)()>(
    &::UnityEngine::XR::OpenXR::OpenXRSettings::get_ActiveBuildTargetInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2afadfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_ActiveBuildTargetInstance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::OpenXRSettings* (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_Instance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2afae04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                               "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2afae0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*>& UnityEngine::XR::OpenXR::OpenXRSettings::__get_features() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___features;
}
constexpr ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> const&
UnityEngine::XR::OpenXR::OpenXRSettings::__get_features() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___features;
}
constexpr void
UnityEngine::XR::OpenXR::OpenXRSettings::__set_features(::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___features)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode& UnityEngine::XR::OpenXR::OpenXRSettings::__get_m_renderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_renderMode;
}
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode const& UnityEngine::XR::OpenXR::OpenXRSettings::__get_m_renderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_renderMode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__set_m_renderMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_renderMode = value;
}
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode& UnityEngine::XR::OpenXR::OpenXRSettings::__get_m_depthSubmissionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depthSubmissionMode;
}
constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode const& UnityEngine::XR::OpenXR::OpenXRSettings::__get_m_depthSubmissionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depthSubmissionMode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__set_m_depthSubmissionMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_depthSubmissionMode = value;
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::setStaticF_s_RuntimeInstance(::UnityEngine::XR::OpenXR::OpenXRSettings* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings*, "s_RuntimeInstance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get>(
      std::forward<::UnityEngine::XR::OpenXR::OpenXRSettings*>(value));
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings* UnityEngine::XR::OpenXR::OpenXRSettings::getStaticF_s_RuntimeInstance() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings*, "s_RuntimeInstance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get>();
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::get_featureCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_featureCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TFeature> inline TFeature UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeature",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() }));
  return ::cordl_internals::RunMethodRethrow<TFeature, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRFeature* UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature(::System::Type* featureType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeature", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, false>(this, ___internal_method, featureType);
}
template <typename TFeature>
inline ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*>, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*>
UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Type* featureType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*>, false>(
      this, ___internal_method, featureType);
}
template <typename TFeature> inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Collections::Generic::List_1<TFeature>* featuresOut) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TFeature>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, featuresOut);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Type* featureType,
                                                                    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>* featuresOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, featureType, featuresOut);
}
inline ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*>, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>* featuresOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetFeatures", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, featuresOut);
}
inline ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::get_renderMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_renderMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_renderMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_renderMode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::get_depthSubmissionMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_depthSubmissionMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_depthSubmissionMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "set_depthSubmissionMode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::ApplyRenderSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "ApplyRenderSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetRenderMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode renderMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetRenderMode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderMode);
}
inline ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetRenderMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "Internal_GetRenderMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetDepthSubmissionMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode depthSubmissionMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Internal_SetDepthSubmissionMode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, depthSubmissionMode);
}
inline ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetDepthSubmissionMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "Internal_GetDepthSubmissionMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::ApplySettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "ApplySettings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings* UnityEngine::XR::OpenXR::OpenXRSettings::GetInstance(bool useActiveBuildTarget) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings*, false>(nullptr, ___internal_method, useActiveBuildTarget);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings* UnityEngine::XR::OpenXR::OpenXRSettings::get_ActiveBuildTargetInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(),
                                                                             "get_ActiveBuildTargetInstance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings* UnityEngine::XR::OpenXR::OpenXRSettings::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), "get_Instance",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRSettings*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings* UnityEngine::XR::OpenXR::OpenXRSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::OpenXRSettings*>());
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::OpenXRSettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings::OpenXRSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
