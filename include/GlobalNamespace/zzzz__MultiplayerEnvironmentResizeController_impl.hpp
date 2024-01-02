#pragma once
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerCenterResizeController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::__MultiplayerEnvironmentResizeController__ResizeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::__MultiplayerEnvironmentResizeController__ResizeType() {}
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::Position{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::Length{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_resizeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType (
    ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_resizeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                                                 "get_resizeType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_offset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(
    &::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(), "get_offset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_lights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> (
    ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_lights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(), "get_lights",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_otherTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> (
    ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_otherTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                                                 "get_otherTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(
    &::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__resizeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeType;
}
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__resizeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeType;
}
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__set__resizeType(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resizeType = value;
}
constexpr float_t& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr float_t const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__set__offset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offset = value;
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>&
GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__lights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const&
GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__lights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr void
GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__otherTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherTransforms;
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__otherTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherTransforms;
}
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__set__otherTransforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____otherTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_resizeType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                                               "get_resizeType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_offset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(), "get_offset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_lights() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(), "get_lights",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_otherTransforms() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                                               "get_otherTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData* GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>());
}
inline void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__MultiplayerEnvironmentResizeController__ResizeData() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.get_isResizingFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "get_isResizingFinished",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.add_resizingDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x224c2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "add_resizingDidFinishEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.remove_resizingDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x224c33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "remove_resizingDidFinishEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::Start)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x224c3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "Start",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x224c544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "OnDestroy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.HandleEdgeDistanceFromCenterWasCalculated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x224c514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "HandleEdgeDistanceFromCenterWasCalculated",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.HandleSpawnCenterDistanceWasFound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x224c52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "HandleSpawnCenterDistanceWasFound",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.TryResize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x224c694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "TryResize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.Resize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::Resize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x224c6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "Resize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(
    &::GlobalNamespace::MultiplayerEnvironmentResizeController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__platformEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformEnd;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__platformEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformEnd;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__platformEnd(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*, ::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>&
GlobalNamespace::MultiplayerEnvironmentResizeController::__get__resizeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeData;
}
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*, ::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*> const&
GlobalNamespace::MultiplayerEnvironmentResizeController::__get__resizeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeData;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__resizeData(
    ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*, ::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resizeData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerCenterResizeController*& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__centerResizeController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerResizeController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerCenterResizeController*> const&
GlobalNamespace::MultiplayerEnvironmentResizeController::__get__centerResizeController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerResizeController;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__centerResizeController(::GlobalNamespace::MultiplayerCenterResizeController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____centerResizeController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter*& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__beatmapObjectSpawnCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnCenter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnCenter*> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__beatmapObjectSpawnCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnCenter;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__beatmapObjectSpawnCenter(::GlobalNamespace::BeatmapObjectSpawnCenter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawnCenter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerEnvironmentResizeController::__get_resizingDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resizingDidFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__get_resizingDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resizingDidFinishEvent;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set_resizingDidFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resizingDidFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__isResizingFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isResizingFinished;
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__isResizingFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isResizingFinished;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__isResizingFinished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isResizingFinished = value;
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__edgeDistanceFromCenterFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeDistanceFromCenterFound;
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__edgeDistanceFromCenterFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeDistanceFromCenterFound;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__edgeDistanceFromCenterFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____edgeDistanceFromCenterFound = value;
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__spawnCenterDistanceFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistanceFound;
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__spawnCenterDistanceFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistanceFound;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__spawnCenterDistanceFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnCenterDistanceFound = value;
}
inline bool GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                                                                             "get_isResizingFinished", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "add_resizingDidFinishEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "remove_resizingDidFinishEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated(float_t edgeDistanceFromCenter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                                                                             "HandleEdgeDistanceFromCenterWasCalculated", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edgeDistanceFromCenter);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound(float_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(), "HandleSpawnCenterDistanceWasFound",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                                                                             "TryResize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::Resize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                                                                             "Resize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerEnvironmentResizeController* GlobalNamespace::MultiplayerEnvironmentResizeController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerEnvironmentResizeController*>());
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController::MultiplayerEnvironmentResizeController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
