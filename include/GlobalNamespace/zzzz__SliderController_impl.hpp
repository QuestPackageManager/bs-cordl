#pragma once
#include "GlobalNamespace/zzzz__SliderControllerBase_impl.hpp"
#include "GlobalNamespace/zzzz__SliderController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderHeadDidMovePastCutMarkEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ISliderTailDidMovePastCutMarkEvent_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__SliderMovement_def.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateVector3SmoothValue_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
#include "GlobalNamespace/zzzz__SliderIntensityEffect_def.hpp"
#include "GlobalNamespace/zzzz__SliderMeshController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SliderController__LengthType::__SliderController__LengthType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController__LengthType::__SliderController__LengthType() {}
constexpr ::GlobalNamespace::__SliderController__LengthType GlobalNamespace::__SliderController__LengthType::Short{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SliderController__LengthType GlobalNamespace::__SliderController__LengthType::Medium{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SliderController__LengthType GlobalNamespace::__SliderController__LengthType::Long{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDidFinishJumpEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* (
    ::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderDidFinishJumpEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fa74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderDidFinishJumpEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDidStartDissolvingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* (
    ::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fa7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderDidStartDissolvingEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDidDissolveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* (
    ::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderDidDissolveEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fa84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderDidDissolveEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderHeadDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* (
    ::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderHeadDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fa8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderHeadDidMovePastCutMark", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderTailDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* (
    ::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderTailDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fa94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderTailDidMovePastCutMark", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_lengthType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SliderController__LengthType (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_lengthType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fa9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_lengthType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderData* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238faa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderData",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_saberInteractionParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_saberInteractionParam)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x238faac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_saberInteractionParam", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderMeshController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderMeshController* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderMeshController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderMeshController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderMovement* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderMovement", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_initColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_initColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x238fb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_initColor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_randomValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_randomValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_randomValue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_zDistanceBetweenNotes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_zDistanceBetweenNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_zDistanceBetweenNotes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_jumpDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_jumpDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_jumpDistance",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_headJumpOffsetY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_headJumpOffsetY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_headJumpOffsetY", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_closeSmoothedSaberInteractionPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::FixedUpdateVector3SmoothValue* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_closeSmoothedSaberInteractionPos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_closeSmoothedSaberInteractionPos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderIntensityEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderIntensityEffect* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderIntensityEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238fb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderIntensityEffect", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(
    ::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::SliderData*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
    float_t, float_t, float_t)>(&::GlobalNamespace::SliderController::Init)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x238fb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__LengthType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2390bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2390f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::OnDestroy)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2391110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2391628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::FixedUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23916a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "FixedUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::ManualUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x239162c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "ManualUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.UpdateMaterialPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(float_t)>(
    &::GlobalNamespace::SliderController::UpdateMaterialPropertyBlock)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2390ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "UpdateMaterialPropertyBlock",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.DissolveCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SliderController::*)(float_t)>(
    &::GlobalNamespace::SliderController::DissolveCoroutine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2391aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "DissolveCoroutine", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Dissolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(float_t)>(&::GlobalNamespace::SliderController::Dissolve)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2391b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Dissolve", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(bool)>(&::GlobalNamespace::SliderController::Hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2391bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Hide", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(bool)>(&::GlobalNamespace::SliderController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2391bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Pause", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.IsNoteStartOfThisSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SliderController::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::SliderController::IsNoteStartOfThisSlider)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2391c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "IsNoteStartOfThisSlider", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleMovementDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::HandleMovementDidFinish)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2391cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "HandleMovementDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleHeadDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::HandleHeadDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2391ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "HandleHeadDidMovePastCutMark", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleTailDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::HandleTailDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x23920e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "HandleTailDidMovePastCutMark", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::SliderController::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23922c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "HandleNoteWasMissed", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SliderController::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::SliderController::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x239233c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "HandleNoteWasCut", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleFadeInDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::HandleFadeInDidStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23923bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "HandleFadeInDidStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.SetSaberAttraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(bool)>(&::GlobalNamespace::SliderController::SetSaberAttraction)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23909d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "SetSaberAttraction", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.GetSaberInteractionPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::Saber*)>(
    &::GlobalNamespace::SliderController::GetSaberInteractionPoint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2390a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "GetSaberInteractionPoint", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x239244c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
constexpr GlobalNamespace::SliderController::operator ::GlobalNamespace::IBeatmapObjectController*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectController*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::SliderIntensityEffect*& GlobalNamespace::SliderController::__get__sliderIntensityEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderIntensityEffect;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderIntensityEffect*> const& GlobalNamespace::SliderController::__get__sliderIntensityEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderIntensityEffect;
}
constexpr void GlobalNamespace::SliderController::__set__sliderIntensityEffect(::GlobalNamespace::SliderIntensityEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderIntensityEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SliderMeshController*& GlobalNamespace::SliderController::__get__sliderMeshController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderMeshController*> const& GlobalNamespace::SliderController::__get__sliderMeshController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshController;
}
constexpr void GlobalNamespace::SliderController::__set__sliderMeshController(::GlobalNamespace::SliderMeshController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderMeshController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SliderMovement*& GlobalNamespace::SliderController::__get__sliderMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMovement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderMovement*> const& GlobalNamespace::SliderController::__get__sliderMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMovement;
}
constexpr void GlobalNamespace::SliderController::__set__sliderMovement(::GlobalNamespace::SliderMovement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderMovement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SliderController::__get__closeInteractionSaberPosSmoothParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeInteractionSaberPosSmoothParam;
}
constexpr float_t const& GlobalNamespace::SliderController::__get__closeInteractionSaberPosSmoothParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeInteractionSaberPosSmoothParam;
}
constexpr void GlobalNamespace::SliderController::__set__closeInteractionSaberPosSmoothParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closeInteractionSaberPosSmoothParam = value;
}
constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& GlobalNamespace::SliderController::__get__beatmapObjectSpawnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& GlobalNamespace::SliderController::__get__beatmapObjectSpawnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr void GlobalNamespace::SliderController::__set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawnController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SliderController::__get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::SliderController::__get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SliderController::__set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::SliderController::__get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::SliderController::__get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::SliderController::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberManager*& GlobalNamespace::SliderController::__get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& GlobalNamespace::SliderController::__get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::SliderController::__set__saberManager(::GlobalNamespace::SaberManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*& GlobalNamespace::SliderController::__get__sliderDidFinishMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidFinishMovement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*> const&
GlobalNamespace::SliderController::__get__sliderDidFinishMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidFinishMovement;
}
constexpr void GlobalNamespace::SliderController::__set__sliderDidFinishMovement(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderDidFinishMovement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*& GlobalNamespace::SliderController::__get__sliderDidStartDissolving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidStartDissolving;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*> const&
GlobalNamespace::SliderController::__get__sliderDidStartDissolving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidStartDissolving;
}
constexpr void GlobalNamespace::SliderController::__set__sliderDidStartDissolving(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderDidStartDissolving)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*& GlobalNamespace::SliderController::__get__sliderDidDissolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidDissolve;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*> const&
GlobalNamespace::SliderController::__get__sliderDidDissolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidDissolve;
}
constexpr void GlobalNamespace::SliderController::__set__sliderDidDissolve(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderDidDissolve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*& GlobalNamespace::SliderController::__get__sliderHeadDidMovePastCutMark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderHeadDidMovePastCutMark;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*> const&
GlobalNamespace::SliderController::__get__sliderHeadDidMovePastCutMark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderHeadDidMovePastCutMark;
}
constexpr void GlobalNamespace::SliderController::__set__sliderHeadDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderHeadDidMovePastCutMark)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*& GlobalNamespace::SliderController::__get__sliderTailDidMovePastCutMark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderTailDidMovePastCutMark;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*> const&
GlobalNamespace::SliderController::__get__sliderTailDidMovePastCutMark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderTailDidMovePastCutMark;
}
constexpr void GlobalNamespace::SliderController::__set__sliderTailDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderTailDidMovePastCutMark)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SliderController__LengthType& GlobalNamespace::SliderController::__get__lengthType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lengthType;
}
constexpr ::GlobalNamespace::__SliderController__LengthType const& GlobalNamespace::SliderController::__get__lengthType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lengthType;
}
constexpr void GlobalNamespace::SliderController::__set__lengthType(::GlobalNamespace::__SliderController__LengthType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lengthType = value;
}
constexpr ::GlobalNamespace::SliderData*& GlobalNamespace::SliderController::__get__sliderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderData*> const& GlobalNamespace::SliderController::__get__sliderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderData;
}
constexpr void GlobalNamespace::SliderController::__set__sliderData(::GlobalNamespace::SliderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Saber*& GlobalNamespace::SliderController::__get__saber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& GlobalNamespace::SliderController::__get__saber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr void GlobalNamespace::SliderController::__set__saber(::GlobalNamespace::Saber* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SliderController::__get__headJumpOffsetY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headJumpOffsetY;
}
constexpr float_t const& GlobalNamespace::SliderController::__get__headJumpOffsetY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headJumpOffsetY;
}
constexpr void GlobalNamespace::SliderController::__set__headJumpOffsetY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headJumpOffsetY = value;
}
constexpr float_t& GlobalNamespace::SliderController::__get__sliderDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDuration;
}
constexpr float_t const& GlobalNamespace::SliderController::__get__sliderDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDuration;
}
constexpr void GlobalNamespace::SliderController::__set__sliderDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderDuration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SliderController::__get__initColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SliderController::__get__initColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initColor;
}
constexpr void GlobalNamespace::SliderController::__set__initColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initColor = value;
}
constexpr bool& GlobalNamespace::SliderController::__get__attractingSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attractingSaber;
}
constexpr bool const& GlobalNamespace::SliderController::__get__attractingSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attractingSaber;
}
constexpr void GlobalNamespace::SliderController::__set__attractingSaber(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attractingSaber = value;
}
constexpr float_t& GlobalNamespace::SliderController::__get__randomValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValue;
}
constexpr float_t const& GlobalNamespace::SliderController::__get__randomValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValue;
}
constexpr void GlobalNamespace::SliderController::__set__randomValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomValue = value;
}
constexpr float_t& GlobalNamespace::SliderController::__get__zDistanceBetweenNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zDistanceBetweenNotes;
}
constexpr float_t const& GlobalNamespace::SliderController::__get__zDistanceBetweenNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zDistanceBetweenNotes;
}
constexpr void GlobalNamespace::SliderController::__set__zDistanceBetweenNotes(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zDistanceBetweenNotes = value;
}
constexpr float_t& GlobalNamespace::SliderController::__get__jumpDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDistance;
}
constexpr float_t const& GlobalNamespace::SliderController::__get__jumpDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDistance;
}
constexpr void GlobalNamespace::SliderController::__set__jumpDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpDistance = value;
}
constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue*& GlobalNamespace::SliderController::__get__closeSmoothedSaberInteractionPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeSmoothedSaberInteractionPos;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FixedUpdateVector3SmoothValue*> const& GlobalNamespace::SliderController::__get__closeSmoothedSaberInteractionPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeSmoothedSaberInteractionPos;
}
constexpr void GlobalNamespace::SliderController::__set__closeSmoothedSaberInteractionPos(::GlobalNamespace::FixedUpdateVector3SmoothValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeSmoothedSaberInteractionPos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* GlobalNamespace::SliderController::get_sliderDidFinishJumpEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderDidFinishJumpEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* GlobalNamespace::SliderController::get_sliderDidStartDissolvingEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderDidStartDissolvingEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* GlobalNamespace::SliderController::get_sliderDidDissolveEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderDidDissolveEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* GlobalNamespace::SliderController::get_sliderHeadDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderHeadDidMovePastCutMark", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* GlobalNamespace::SliderController::get_sliderTailDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderTailDidMovePastCutMark", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SliderController__LengthType GlobalNamespace::SliderController::get_lengthType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_lengthType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SliderController__LengthType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::SliderController::get_sliderData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_saberInteractionParam() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_saberInteractionParam", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderMeshController* GlobalNamespace::SliderController::get_sliderMeshController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderMeshController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderMeshController*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderMovement* GlobalNamespace::SliderController::get_sliderMovement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderMovement",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderMovement*, false>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::SliderController::get_initColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_initColor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_randomValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_randomValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_zDistanceBetweenNotes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_zDistanceBetweenNotes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_jumpDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_jumpDistance",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_headJumpOffsetY() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_headJumpOffsetY",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_sliderDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderDuration",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* GlobalNamespace::SliderController::get_closeSmoothedSaberInteractionPos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_closeSmoothedSaberInteractionPos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FixedUpdateVector3SmoothValue*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderIntensityEffect* GlobalNamespace::SliderController::get_sliderIntensityEffect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderIntensityEffect", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderIntensityEffect*, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::Init(::GlobalNamespace::__SliderController__LengthType lengthType, ::GlobalNamespace::SliderData* sliderData, float_t worldRotation,
                                                    ::UnityEngine::Vector3 headNoteJumpStartPos, ::UnityEngine::Vector3 tailNoteJumpStartPos, ::UnityEngine::Vector3 headNoteJumpEndPos,
                                                    ::UnityEngine::Vector3 tailNoteJumpEndPos, float_t jumpDuration, float_t startNoteJumpGravity, float_t endNoteJumpGravity,
                                                    float_t noteUniformScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__LengthType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lengthType, sliderData, worldRotation, headNoteJumpStartPos, tailNoteJumpStartPos, headNoteJumpEndPos,
                                                          tailNoteJumpEndPos, jumpDuration, startNoteJumpGravity, endNoteJumpGravity, noteUniformScale);
}
inline void GlobalNamespace::SliderController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "FixedUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "ManualUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "UpdateMaterialPropertyBlock",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSinceHeadNoteJump);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SliderController::DissolveCoroutine(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "DissolveCoroutine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, duration);
}
inline void GlobalNamespace::SliderController::Dissolve(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Dissolve", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, duration);
}
inline void GlobalNamespace::SliderController::Hide(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Hide", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hide);
}
inline void GlobalNamespace::SliderController::Pause(bool pause) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Pause", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pause);
}
inline bool GlobalNamespace::SliderController::IsNoteStartOfThisSlider(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "IsNoteStartOfThisSlider", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, noteData);
}
inline void GlobalNamespace::SliderController::HandleMovementDidFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "HandleMovementDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::HandleHeadDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "HandleHeadDidMovePastCutMark", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::HandleTailDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "HandleTailDidMovePastCutMark", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "HandleNoteWasMissed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::SliderController::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "HandleNoteWasCut", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::SliderController::HandleFadeInDidStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "HandleFadeInDidStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::SetSaberAttraction(bool saberAttraction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "SetSaberAttraction", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberAttraction);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SliderController::GetSaberInteractionPoint(::GlobalNamespace::Saber* saber) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "GetSaberInteractionPoint", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, saber);
}
inline ::GlobalNamespace::SliderController* GlobalNamespace::SliderController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SliderController*>());
}
inline void GlobalNamespace::SliderController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderController::SliderController() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool__Short._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController__Pool__Short::*)()>(
    &::GlobalNamespace::__SliderController__Pool__Short::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x239271c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Short*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SliderController__Pool__Short* GlobalNamespace::__SliderController__Pool__Short::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SliderController__Pool__Short*>());
}
inline void GlobalNamespace::__SliderController__Pool__Short::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Short*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController__Pool__Short::__SliderController__Pool__Short() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool__Medium._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController__Pool__Medium::*)()>(
    &::GlobalNamespace::__SliderController__Pool__Medium::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2392764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Medium*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SliderController__Pool__Medium* GlobalNamespace::__SliderController__Pool__Medium::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SliderController__Pool__Medium*>());
}
inline void GlobalNamespace::__SliderController__Pool__Medium::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Medium*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController__Pool__Medium::__SliderController__Pool__Medium() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool__Long._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController__Pool__Long::*)()>(
    &::GlobalNamespace::__SliderController__Pool__Long::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23927ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Long*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SliderController__Pool__Long* GlobalNamespace::__SliderController__Pool__Long::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SliderController__Pool__Long*>());
}
inline void GlobalNamespace::__SliderController__Pool__Long::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Long*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController__Pool__Long::__SliderController__Pool__Long() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController__Pool::*)(
    ::GlobalNamespace::__SliderController__Pool__Short*, ::GlobalNamespace::__SliderController__Pool__Medium*, ::GlobalNamespace::__SliderController__Pool__Long*)>(
    &::GlobalNamespace::__SliderController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23925e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Short*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Medium*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Long*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool.GetPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::MonoMemoryPool_1<::GlobalNamespace::SliderController*>* (
    ::GlobalNamespace::__SliderController__Pool::*)(::GlobalNamespace::__SliderController__LengthType)>(&::GlobalNamespace::__SliderController__Pool::GetPool)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2392624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), "GetPool", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__LengthType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool.GetLengthFromSliderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SliderController__LengthType (*)(
    ::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData)>(&::GlobalNamespace::__SliderController__Pool::GetLengthFromSliderData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23926c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), "GetLengthFromSliderData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__SliderController__Pool__Short*& GlobalNamespace::__SliderController__Pool::__get__shortPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Short*> const& GlobalNamespace::__SliderController__Pool::__get__shortPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortPool;
}
constexpr void GlobalNamespace::__SliderController__Pool::__set__shortPool(::GlobalNamespace::__SliderController__Pool__Short* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shortPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SliderController__Pool__Medium*& GlobalNamespace::__SliderController__Pool::__get__mediumPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediumPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Medium*> const& GlobalNamespace::__SliderController__Pool::__get__mediumPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediumPool;
}
constexpr void GlobalNamespace::__SliderController__Pool::__set__mediumPool(::GlobalNamespace::__SliderController__Pool__Medium* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mediumPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SliderController__Pool__Long*& GlobalNamespace::__SliderController__Pool::__get__longPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Long*> const& GlobalNamespace::__SliderController__Pool::__get__longPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longPool;
}
constexpr void GlobalNamespace::__SliderController__Pool::__set__longPool(::GlobalNamespace::__SliderController__Pool__Long* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____longPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SliderController__Pool* GlobalNamespace::__SliderController__Pool::New_ctor(::GlobalNamespace::__SliderController__Pool__Short* shortPool,
                                                                                                        ::GlobalNamespace::__SliderController__Pool__Medium* mediumPool,
                                                                                                        ::GlobalNamespace::__SliderController__Pool__Long* longPool) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SliderController__Pool*>(shortPool, mediumPool, longPool));
}
inline void GlobalNamespace::__SliderController__Pool::_ctor(::GlobalNamespace::__SliderController__Pool__Short* shortPool, ::GlobalNamespace::__SliderController__Pool__Medium* mediumPool,
                                                             ::GlobalNamespace::__SliderController__Pool__Long* longPool) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Short*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Medium*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Long*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shortPool, mediumPool, longPool);
}
inline ::Zenject::MonoMemoryPool_1<::GlobalNamespace::SliderController*>* GlobalNamespace::__SliderController__Pool::GetPool(::GlobalNamespace::__SliderController__LengthType lengthType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), "GetPool", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__LengthType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MonoMemoryPool_1<::GlobalNamespace::SliderController*>*, false>(this, ___internal_method, lengthType);
}
inline ::GlobalNamespace::__SliderController__LengthType
GlobalNamespace::__SliderController__Pool::GetLengthFromSliderData(::GlobalNamespace::SliderData* sliderNoteData,
                                                                   ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), "GetLengthFromSliderData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SliderController__LengthType, false>(nullptr, ___internal_method, sliderNoteData, sliderSpawnData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController__Pool::__SliderController__Pool() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)(int32_t)>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2391b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)()>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23927f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)()>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::MoveNext)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x23927f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)()>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2392be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)()>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2392bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)()>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2392c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__SliderController___DissolveCoroutine_d__70::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__SliderController___DissolveCoroutine_d__70::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__SliderController___DissolveCoroutine_d__70::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SliderController*& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderController*> const& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__set___4__this(::GlobalNamespace::SliderController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
inline ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70* GlobalNamespace::__SliderController___DissolveCoroutine_d__70::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>(__1__state));
}
inline void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__SliderController___DissolveCoroutine_d__70::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__SliderController___DissolveCoroutine_d__70() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
