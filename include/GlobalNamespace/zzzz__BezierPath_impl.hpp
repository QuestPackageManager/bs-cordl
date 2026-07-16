#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierPath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BezierPath_ControlMode::BezierPath_ControlMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierPath_ControlMode::BezierPath_ControlMode() {}
constexpr ::GlobalNamespace::BezierPath_ControlMode GlobalNamespace::BezierPath_ControlMode::Aligned{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BezierPath_ControlMode GlobalNamespace::BezierPath_ControlMode::Mirrored{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BezierPath_ControlMode GlobalNamespace::BezierPath_ControlMode::Free{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::BezierPath_ControlMode GlobalNamespace::BezierPath_ControlMode::Automatic{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::BezierPath.get_controlPointMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BezierPath_ControlMode (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::get_controlPointMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59004d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "get_controlPointMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.set_controlPointMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(::GlobalNamespace::BezierPath_ControlMode)>(&::GlobalNamespace::BezierPath::set_controlPointMode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59004d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "set_controlPointMode", {}, { ::i2c::type_of<::GlobalNamespace::BezierPath_ControlMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.add_bezierPathWasModifiedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(::System::Action*)>(&::GlobalNamespace::BezierPath::add_bezierPathWasModifiedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59005c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "add_bezierPathWasModifiedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.remove_bezierPathWasModifiedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(::System::Action*)>(&::GlobalNamespace::BezierPath::remove_bezierPathWasModifiedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5900674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "remove_bezierPathWasModifiedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.get_pointsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::get_pointsCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5900720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "get_pointsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.get_anchorPointsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::get_anchorPointsCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5900770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "get_anchorPointsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.get_segmentsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::get_segmentsCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59007dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "get_segmentsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(::UnityEngine::Vector3, bool)>(&::GlobalNamespace::BezierPath::_ctor)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x5900844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.UpdateByAnchorPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*)>(
    &::GlobalNamespace::BezierPath::UpdateByAnchorPoints)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x5900da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(),
                                                             { "UpdateByAnchorPoints", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.UpdateControlPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*)>(
    &::GlobalNamespace::BezierPath::UpdateControlPoints)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x59018f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(),
                                                             { "UpdateControlPoints", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5901c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.GetPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::GetPoint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5901c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "GetPoint", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.SetPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::BezierPath::SetPoint)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5901b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "SetPoint", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.AddSegmentToEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BezierPath::AddSegmentToEnd)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x59013c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "AddSegmentToEnd", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.GetPointsInSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t, ::by_ref<::ArrayW<::UnityEngine::Vector3>>)>(
    &::GlobalNamespace::BezierPath::GetPointsInSegment)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5901d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(),
                                                             { "GetPointsInSegment", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.GetPointsInSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                                               ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::BezierPath::GetPointsInSegment)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5901ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(),
                                                             { "GetPointsInSegment",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.GetAnchorNormalAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::GetAnchorNormalAngle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5901ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "GetAnchorNormalAngle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.SetAnchorNormalAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t, float_t)>(&::GlobalNamespace::BezierPath::SetAnchorNormalAngle)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5901f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "SetAnchorNormalAngle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.AutoSetAllAffectedControlPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::AutoSetAllAffectedControlPoints)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5901ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "AutoSetAllAffectedControlPoints", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.AutoSetAllControlPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::AutoSetAllControlPoints)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5900524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "AutoSetAllControlPoints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.AutoSetAnchorControlPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::AutoSetAnchorControlPoints)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5902110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "AutoSetAnchorControlPoints", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.AutoSetStartAndEndControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::AutoSetStartAndEndControls)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5902638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "AutoSetStartAndEndControls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.LoopIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::LoopIndex)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59020a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "LoopIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.NotifyPathModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::NotifyPathModified)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59005ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "NotifyPathModified", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::BezierPath::__cordl_internal_get_bezierPathWasModifiedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bezierPathWasModifiedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::BezierPath::__cordl_internal_get_bezierPathWasModifiedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bezierPathWasModifiedEvent;
}
constexpr void GlobalNamespace::BezierPath::__cordl_internal_set_bezierPathWasModifiedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bezierPathWasModifiedEvent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::BezierPath::__cordl_internal_get__points() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____points;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::BezierPath::__cordl_internal_get__points() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____points;
}
constexpr void GlobalNamespace::BezierPath::__cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____points = value;
}
constexpr ::GlobalNamespace::BezierPath_ControlMode& GlobalNamespace::BezierPath::__cordl_internal_get__controlMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controlMode;
}
constexpr ::GlobalNamespace::BezierPath_ControlMode const& GlobalNamespace::BezierPath::__cordl_internal_get__controlMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controlMode;
}
constexpr void GlobalNamespace::BezierPath::__cordl_internal_set__controlMode(::GlobalNamespace::BezierPath_ControlMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controlMode = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::BezierPath::__cordl_internal_get__perAnchorNormalsAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perAnchorNormalsAngle;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::BezierPath::__cordl_internal_get__perAnchorNormalsAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perAnchorNormalsAngle;
}
constexpr void GlobalNamespace::BezierPath::__cordl_internal_set__perAnchorNormalsAngle(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____perAnchorNormalsAngle = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BezierPath::__cordl_internal_get__neighbourDistances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neighbourDistances;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BezierPath::__cordl_internal_get__neighbourDistances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neighbourDistances;
}
constexpr void GlobalNamespace::BezierPath::__cordl_internal_set__neighbourDistances(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____neighbourDistances = value;
}
inline ::GlobalNamespace::BezierPath_ControlMode GlobalNamespace::BezierPath::get_controlPointMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "get_controlPointMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BezierPath_ControlMode>(this, ___internal_method);
}
inline void GlobalNamespace::BezierPath::set_controlPointMode(::GlobalNamespace::BezierPath_ControlMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "set_controlPointMode", {}, { ::i2c::type_of<::GlobalNamespace::BezierPath_ControlMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BezierPath::add_bezierPathWasModifiedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "add_bezierPathWasModifiedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BezierPath::remove_bezierPathWasModifiedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "remove_bezierPathWasModifiedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BezierPath::get_pointsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "get_pointsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BezierPath::get_anchorPointsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "get_anchorPointsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BezierPath::get_segmentsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "get_segmentsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BezierPath::_ctor(::UnityEngine::Vector3 centre, bool initTwoSegments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, centre, initTwoSegments);
}
inline void GlobalNamespace::BezierPath::UpdateByAnchorPoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* points) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(),
                                                           { "UpdateByAnchorPoints", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void GlobalNamespace::BezierPath::UpdateControlPoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* points) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(),
                                                           { "UpdateControlPoints", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierPath::get_Item(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, i);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierPath::GetPoint(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "GetPoint", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, i);
}
inline void GlobalNamespace::BezierPath::SetPoint(int32_t i, ::UnityEngine::Vector3 localPosition, bool suppressPathModified) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "SetPoint", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, localPosition, suppressPathModified);
}
inline void GlobalNamespace::BezierPath::AddSegmentToEnd(::UnityEngine::Vector3 anchorPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "AddSegmentToEnd", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorPos);
}
inline void GlobalNamespace::BezierPath::GetPointsInSegment(int32_t segmentIndex, ::by_ref<::ArrayW<::UnityEngine::Vector3>> points) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(),
                                                           { "GetPointsInSegment", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentIndex, points);
}
inline void GlobalNamespace::BezierPath::GetPointsInSegment(int32_t segmentIndex, ::by_ref<::UnityEngine::Vector3> p0, ::by_ref<::UnityEngine::Vector3> p1, ::by_ref<::UnityEngine::Vector3> p2,
                                                            ::by_ref<::UnityEngine::Vector3> p3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(),
                                                           { "GetPointsInSegment",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentIndex, p0, p1, p2, p3);
}
inline float_t GlobalNamespace::BezierPath::GetAnchorNormalAngle(int32_t anchorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "GetAnchorNormalAngle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, anchorIndex);
}
inline void GlobalNamespace::BezierPath::SetAnchorNormalAngle(int32_t anchorIndex, float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "SetAnchorNormalAngle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorIndex, angle);
}
inline void GlobalNamespace::BezierPath::AutoSetAllAffectedControlPoints(int32_t updatedAnchorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "AutoSetAllAffectedControlPoints", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatedAnchorIndex);
}
inline void GlobalNamespace::BezierPath::AutoSetAllControlPoints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "AutoSetAllControlPoints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BezierPath::AutoSetAnchorControlPoints(int32_t anchorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "AutoSetAnchorControlPoints", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorIndex);
}
inline void GlobalNamespace::BezierPath::AutoSetStartAndEndControls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "AutoSetStartAndEndControls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BezierPath::LoopIndex(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "LoopIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline void GlobalNamespace::BezierPath::NotifyPathModified() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierPath*>(), { "NotifyPathModified", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BezierPath* GlobalNamespace::BezierPath::New_ctor(::UnityEngine::Vector3 centre, bool initTwoSegments) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BezierPath*>(centre, initTwoSegments));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierPath::BezierPath() {}
