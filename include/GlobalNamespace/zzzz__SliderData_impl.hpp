#pragma once
// IWYU pragma private; include "GlobalNamespace\SliderData.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_impl.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_impl.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SliderData_Type::SliderData_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderData_Type::SliderData_Type() {}
constexpr ::GlobalNamespace::SliderData_Type GlobalNamespace::SliderData_Type::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SliderData_Type GlobalNamespace::SliderData_Type::Burst{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_subtypeGroupIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { ::i2c::class_of<::GlobalNamespace::SliderData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorType (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_colorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::SliderData::set_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_colorType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_sliderType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderData_Type (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_sliderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_sliderType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_sliderType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::SliderData_Type)>(&::GlobalNamespace::SliderData::set_sliderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_sliderType", {}, { ::i2c::type_of<::GlobalNamespace::SliderData_Type>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_hasHeadNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_hasHeadNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_hasHeadNote", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_hasHeadNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::set_hasHeadNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_hasHeadNote", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_hasHeadSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_hasHeadSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_hasHeadSlider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_hasHeadSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::set_hasHeadSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_hasHeadSlider", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_headControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headControlPointLengthMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::set_headControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headControlPointLengthMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_headLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headLineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(int32_t)>(&::GlobalNamespace::SliderData::set_headLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headLineIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_headLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headLineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::SliderData::set_headLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_headBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headBeforeJumpLineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::SliderData::set_headBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headBeforeJumpLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteCutDirection (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_headCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headCutDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::SliderData::set_headCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headCutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_headCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headCutDirectionAngleOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::set_headCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headCutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_hasTailNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_hasTailNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_hasTailNote", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_hasTailNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::set_hasTailNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_hasTailNote", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_hasTailSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_hasTailSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_hasTailSlider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_hasTailSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::set_hasTailSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_hasTailSlider", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::set_tailTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(int32_t)>(&::GlobalNamespace::SliderData::set_tailRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailRotation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailLineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(int32_t)>(&::GlobalNamespace::SliderData::set_tailLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailLineIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailControlPointLengthMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::set_tailControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailControlPointLengthMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailLineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::SliderData::set_tailLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailBeforeJumpLineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::SliderData::set_tailBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailBeforeJumpLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteCutDirection (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailCutDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::SliderData::set_tailCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailCutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailCutDirectionAngleOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::set_tailCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailCutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_midAnchorMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderMidAnchorMode (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_midAnchorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_midAnchorMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_midAnchorMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::SliderMidAnchorMode)>(&::GlobalNamespace::SliderData::set_midAnchorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_midAnchorMode", {}, { ::i2c::type_of<::GlobalNamespace::SliderMidAnchorMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_sliceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_sliceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_sliceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_sliceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(int32_t)>(&::GlobalNamespace::SliderData::set_sliceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_sliceCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_cuttableSliceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_cuttableSliceCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x325d9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_cuttableSliceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_squishAmount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_squishAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325da04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_squishAmount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_squishAmount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::set_squishAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325da0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_squishAmount", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::GetCopy)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x325da14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { ::i2c::class_of<::GlobalNamespace::SliderData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(
    ::GlobalNamespace::SliderData_Type, ::GlobalNamespace::ColorType, bool, float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t,
    ::GlobalNamespace::NoteCutDirection, float_t, bool, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t, ::GlobalNamespace::NoteCutDirection,
    float_t, ::GlobalNamespace::SliderMidAnchorMode, int32_t, float_t)>(&::GlobalNamespace::SliderData::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x325db60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { ".ctor",
                                                                                                                  {},
                                                                                                                  { ::i2c::type_of<::GlobalNamespace::SliderData_Type>(),
                                                                                                                    ::i2c::type_of<::GlobalNamespace::ColorType>(),
                                                                                                                    ::i2c::type_of<bool>(),
                                                                                                                    ::i2c::type_of<float_t>(),
                                                                                                                    ::i2c::type_of<float_t>(),
                                                                                                                    ::i2c::type_of<int32_t>(),
                                                                                                                    ::i2c::type_of<int32_t>(),
                                                                                                                    ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                                                                                    ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                                                                                    ::i2c::type_of<float_t>(),
                                                                                                                    ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                                                                                                                    ::i2c::type_of<float_t>(),
                                                                                                                    ::i2c::type_of<bool>(),
                                                                                                                    ::i2c::type_of<float_t>(),
                                                                                                                    ::i2c::type_of<int32_t>(),
                                                                                                                    ::i2c::type_of<int32_t>(),
                                                                                                                    ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                                                                                    ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                                                                                    ::i2c::type_of<float_t>(),
                                                                                                                    ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                                                                                                                    ::i2c::type_of<float_t>(),
                                                                                                                    ::i2c::type_of<::GlobalNamespace::SliderMidAnchorMode>(),
                                                                                                                    ::i2c::type_of<int32_t>(),
                                                                                                                    ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.CreateSliderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::SliderData* (*)(::GlobalNamespace::ColorType, float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t,
                                                   ::GlobalNamespace::NoteCutDirection, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t,
                                                   ::GlobalNamespace::NoteCutDirection, ::GlobalNamespace::SliderMidAnchorMode)>(&::GlobalNamespace::SliderData::CreateSliderData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x325dc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(),
                                                { "CreateSliderData",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<::GlobalNamespace::SliderMidAnchorMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.CreateBurstSliderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderData* (*)(::GlobalNamespace::ColorType, float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer,
                                                                                          ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, float_t, int32_t, int32_t,
                                                                                          ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, int32_t, float_t)>(
    &::GlobalNamespace::SliderData::CreateBurstSliderData)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x325dd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(),
                            { "CreateBurstSliderData",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.Mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(int32_t)>(&::GlobalNamespace::SliderData::Mirror)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x325dec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { ::i2c::class_of<::GlobalNamespace::SliderData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetHasTailSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::SetHasTailSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325df94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHasTailSlider", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetHasHeadSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::SetHasHeadSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325df9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHasHeadSlider", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetHasHeadNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::SetHasHeadNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dfa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHasHeadNote", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetHasTailNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::SetHasTailNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHasTailNote", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetHeadBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::SliderData::SetHeadBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHeadBeforeJumpLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetTailBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::SliderData::SetTailBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetTailBeforeJumpLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetHeadCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::SetHeadCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHeadCutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetTailCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::SetTailCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetTailCutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SubtypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::SliderData::SubtypeIdentifier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x325dc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SubtypeIdentifier", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::SliderData::__cordl_internal_get__colorType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType_k__BackingField;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::SliderData::__cordl_internal_get__colorType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__colorType_k__BackingField(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorType_k__BackingField = value;
}
constexpr ::GlobalNamespace::SliderData_Type& GlobalNamespace::SliderData::__cordl_internal_get__sliderType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderType_k__BackingField;
}
constexpr ::GlobalNamespace::SliderData_Type const& GlobalNamespace::SliderData::__cordl_internal_get__sliderType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderType_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__sliderType_k__BackingField(::GlobalNamespace::SliderData_Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderType_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SliderData::__cordl_internal_get__hasHeadNote_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasHeadNote_k__BackingField;
}
constexpr bool const& GlobalNamespace::SliderData::__cordl_internal_get__hasHeadNote_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasHeadNote_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__hasHeadNote_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasHeadNote_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SliderData::__cordl_internal_get__hasHeadSlider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasHeadSlider_k__BackingField;
}
constexpr bool const& GlobalNamespace::SliderData::__cordl_internal_get__hasHeadSlider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasHeadSlider_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__hasHeadSlider_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasHeadSlider_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SliderData::__cordl_internal_get__headControlPointLengthMultiplier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headControlPointLengthMultiplier_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SliderData::__cordl_internal_get__headControlPointLengthMultiplier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headControlPointLengthMultiplier_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__headControlPointLengthMultiplier_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headControlPointLengthMultiplier_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::SliderData::__cordl_internal_get__headLineIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headLineIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SliderData::__cordl_internal_get__headLineIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headLineIndex_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__headLineIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headLineIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderData::__cordl_internal_get__headLineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headLineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderData::__cordl_internal_get__headLineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headLineLayer_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__headLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headLineLayer_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderData::__cordl_internal_get__headBeforeJumpLineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headBeforeJumpLineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderData::__cordl_internal_get__headBeforeJumpLineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headBeforeJumpLineLayer_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__headBeforeJumpLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headBeforeJumpLineLayer_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::SliderData::__cordl_internal_get__headCutDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headCutDirection_k__BackingField;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::SliderData::__cordl_internal_get__headCutDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headCutDirection_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__headCutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headCutDirection_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SliderData::__cordl_internal_get__headCutDirectionAngleOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headCutDirectionAngleOffset_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SliderData::__cordl_internal_get__headCutDirectionAngleOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headCutDirectionAngleOffset_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__headCutDirectionAngleOffset_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headCutDirectionAngleOffset_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SliderData::__cordl_internal_get__hasTailNote_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasTailNote_k__BackingField;
}
constexpr bool const& GlobalNamespace::SliderData::__cordl_internal_get__hasTailNote_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasTailNote_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__hasTailNote_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasTailNote_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SliderData::__cordl_internal_get__hasTailSlider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasTailSlider_k__BackingField;
}
constexpr bool const& GlobalNamespace::SliderData::__cordl_internal_get__hasTailSlider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasTailSlider_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__hasTailSlider_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasTailSlider_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SliderData::__cordl_internal_get__tailTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SliderData::__cordl_internal_get__tailTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailTime_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__tailTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailTime_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::SliderData::__cordl_internal_get__tailRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailRotation_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SliderData::__cordl_internal_get__tailRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailRotation_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__tailRotation_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailRotation_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::SliderData::__cordl_internal_get__tailLineIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailLineIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SliderData::__cordl_internal_get__tailLineIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailLineIndex_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__tailLineIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailLineIndex_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SliderData::__cordl_internal_get__tailControlPointLengthMultiplier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailControlPointLengthMultiplier_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SliderData::__cordl_internal_get__tailControlPointLengthMultiplier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailControlPointLengthMultiplier_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__tailControlPointLengthMultiplier_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailControlPointLengthMultiplier_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderData::__cordl_internal_get__tailLineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailLineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderData::__cordl_internal_get__tailLineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailLineLayer_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__tailLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailLineLayer_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderData::__cordl_internal_get__tailBeforeJumpLineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailBeforeJumpLineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderData::__cordl_internal_get__tailBeforeJumpLineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailBeforeJumpLineLayer_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__tailBeforeJumpLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailBeforeJumpLineLayer_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::SliderData::__cordl_internal_get__tailCutDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailCutDirection_k__BackingField;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::SliderData::__cordl_internal_get__tailCutDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailCutDirection_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__tailCutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailCutDirection_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SliderData::__cordl_internal_get__tailCutDirectionAngleOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailCutDirectionAngleOffset_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SliderData::__cordl_internal_get__tailCutDirectionAngleOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailCutDirectionAngleOffset_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__tailCutDirectionAngleOffset_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailCutDirectionAngleOffset_k__BackingField = value;
}
constexpr ::GlobalNamespace::SliderMidAnchorMode& GlobalNamespace::SliderData::__cordl_internal_get__midAnchorMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____midAnchorMode_k__BackingField;
}
constexpr ::GlobalNamespace::SliderMidAnchorMode const& GlobalNamespace::SliderData::__cordl_internal_get__midAnchorMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____midAnchorMode_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__midAnchorMode_k__BackingField(::GlobalNamespace::SliderMidAnchorMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____midAnchorMode_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::SliderData::__cordl_internal_get__sliceCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliceCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SliderData::__cordl_internal_get__sliceCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliceCount_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__sliceCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliceCount_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SliderData::__cordl_internal_get__squishAmount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squishAmount_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SliderData::__cordl_internal_get__squishAmount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squishAmount_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__squishAmount_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____squishAmount_k__BackingField = value;
}
inline int32_t GlobalNamespace::SliderData::get_subtypeGroupIdentifier() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorType GlobalNamespace::SliderData::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_colorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_colorType(::GlobalNamespace::ColorType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_colorType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SliderData_Type GlobalNamespace::SliderData::get_sliderType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_sliderType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData_Type>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_sliderType(::GlobalNamespace::SliderData_Type value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_sliderType", {}, { ::i2c::type_of<::GlobalNamespace::SliderData_Type>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SliderData::get_hasHeadNote() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_hasHeadNote", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_hasHeadNote(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_hasHeadNote", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SliderData::get_hasHeadSlider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_hasHeadSlider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_hasHeadSlider(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_hasHeadSlider", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_headControlPointLengthMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headControlPointLengthMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headControlPointLengthMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headControlPointLengthMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SliderData::get_headLineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headLineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headLineIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headLineIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::SliderData::get_headLineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headLineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::SliderData::get_headBeforeJumpLineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headBeforeJumpLineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headBeforeJumpLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::SliderData::get_headCutDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headCutDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headCutDirection(::GlobalNamespace::NoteCutDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headCutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_headCutDirectionAngleOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_headCutDirectionAngleOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headCutDirectionAngleOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_headCutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SliderData::get_hasTailNote() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_hasTailNote", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_hasTailNote(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_hasTailNote", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SliderData::get_hasTailSlider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_hasTailSlider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_hasTailSlider(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_hasTailSlider", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_tailTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailTime(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SliderData::get_tailRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailRotation(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailRotation", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SliderData::get_tailLineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailLineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailLineIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailLineIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_tailControlPointLengthMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailControlPointLengthMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailControlPointLengthMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailControlPointLengthMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::SliderData::get_tailLineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailLineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::SliderData::get_tailBeforeJumpLineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailBeforeJumpLineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailBeforeJumpLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::SliderData::get_tailCutDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailCutDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailCutDirection(::GlobalNamespace::NoteCutDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailCutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_tailCutDirectionAngleOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_tailCutDirectionAngleOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailCutDirectionAngleOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_tailCutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SliderMidAnchorMode GlobalNamespace::SliderData::get_midAnchorMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_midAnchorMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderMidAnchorMode>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_midAnchorMode(::GlobalNamespace::SliderMidAnchorMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_midAnchorMode", {}, { ::i2c::type_of<::GlobalNamespace::SliderMidAnchorMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SliderData::get_sliceCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_sliceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_sliceCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_sliceCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SliderData::get_cuttableSliceCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_cuttableSliceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderData::get_squishAmount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "get_squishAmount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_squishAmount(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "set_squishAmount", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::SliderData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::_ctor(::GlobalNamespace::SliderData_Type sliderType, ::GlobalNamespace::ColorType colorType, bool hasHeadNote, float_t headTime, float_t headBeat,
                                               int32_t headRotation, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer, ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer,
                                               float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote,
                                               float_t tailTime, int32_t tailRotation, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer,
                                               ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection,
                                               float_t tailCutDirectionAngleOffset, ::GlobalNamespace::SliderMidAnchorMode midAnchorMode, int32_t sliceCount, float_t squishAmount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { ".ctor",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<::GlobalNamespace::SliderData_Type>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::ColorType>(),
                                                                                                                  ::i2c::type_of<bool>(),
                                                                                                                  ::i2c::type_of<float_t>(),
                                                                                                                  ::i2c::type_of<float_t>(),
                                                                                                                  ::i2c::type_of<int32_t>(),
                                                                                                                  ::i2c::type_of<int32_t>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                                                                                  ::i2c::type_of<float_t>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                                                                                                                  ::i2c::type_of<float_t>(),
                                                                                                                  ::i2c::type_of<bool>(),
                                                                                                                  ::i2c::type_of<float_t>(),
                                                                                                                  ::i2c::type_of<int32_t>(),
                                                                                                                  ::i2c::type_of<int32_t>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                                                                                  ::i2c::type_of<float_t>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                                                                                                                  ::i2c::type_of<float_t>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::SliderMidAnchorMode>(),
                                                                                                                  ::i2c::type_of<int32_t>(),
                                                                                                                  ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderType, colorType, hasHeadNote, headTime, headBeat, headRotation, headLineIndex, headLineLayer,
                                                   headBeforeJumpLineLayer, headControlPointLengthMultiplier, headCutDirection, headCutDirectionAngleOffset, hasTailNote, tailTime, tailRotation,
                                                   tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer, tailControlPointLengthMultiplier, tailCutDirection, tailCutDirectionAngleOffset,
                                                   midAnchorMode, sliceCount, squishAmount);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::SliderData::CreateSliderData(::GlobalNamespace::ColorType colorType, float_t headTime, float_t headBeat, int32_t headRotation,
                                                                                    int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                                                                    ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier,
                                                                                    ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailRotation, int32_t tailLineIndex,
                                                                                    ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer,
                                                                                    float_t tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection,
                                                                                    ::GlobalNamespace::SliderMidAnchorMode midAnchorMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(),
                                              { "CreateSliderData",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<::GlobalNamespace::SliderMidAnchorMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*>(nullptr, ___internal_method, colorType, headTime, headBeat, headRotation, headLineIndex, headLineLayer,
                                                                             headBeforeJumpLineLayer, headControlPointLengthMultiplier, headCutDirection, tailTime, tailRotation, tailLineIndex,
                                                                             tailLineLayer, tailBeforeJumpLineLayer, tailControlPointLengthMultiplier, tailCutDirection, midAnchorMode);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::SliderData::CreateBurstSliderData(::GlobalNamespace::ColorType colorType, float_t headTime, float_t headBeat, int32_t headRotation,
                                                                                         int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                                                                         ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection,
                                                                                         float_t tailTime, int32_t tailRotation, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer,
                                                                                         ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, int32_t sliceCount, float_t squishAmount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(),
                          { "CreateBurstSliderData",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                              ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*>(nullptr, ___internal_method, colorType, headTime, headBeat, headRotation, headLineIndex, headLineLayer,
                                                                             headBeforeJumpLineLayer, headCutDirection, tailTime, tailRotation, tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer,
                                                                             sliceCount, squishAmount);
}
inline void GlobalNamespace::SliderData::Mirror(int32_t lineCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineCount);
}
inline void GlobalNamespace::SliderData::SetHasTailSlider(bool hasTailSlider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHasTailSlider", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasTailSlider);
}
inline void GlobalNamespace::SliderData::SetHasHeadSlider(bool hasHeadSlider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHasHeadSlider", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasHeadSlider);
}
inline void GlobalNamespace::SliderData::SetHasHeadNote(bool hasHeadNote) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHasHeadNote", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasHeadNote);
}
inline void GlobalNamespace::SliderData::SetHasTailNote(bool hasTailNote) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHasTailNote", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasTailNote);
}
inline void GlobalNamespace::SliderData::SetHeadBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHeadBeforeJumpLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineLayer);
}
inline void GlobalNamespace::SliderData::SetTailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetTailBeforeJumpLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineLayer);
}
inline void GlobalNamespace::SliderData::SetHeadCutDirectionAngleOffset(float_t headCutDirectionAngleOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetHeadCutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headCutDirectionAngleOffset);
}
inline void GlobalNamespace::SliderData::SetTailCutDirectionAngleOffset(float_t tailCutDirectionAngleOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SetTailCutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tailCutDirectionAngleOffset);
}
inline int32_t GlobalNamespace::SliderData::SubtypeIdentifier(::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderData*>(), { "SubtypeIdentifier", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, colorType);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::SliderData::New_ctor(::GlobalNamespace::SliderData_Type sliderType, ::GlobalNamespace::ColorType colorType, bool hasHeadNote, float_t headTime,
                                                                            float_t headBeat, int32_t headRotation, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                                                            ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier,
                                                                            ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote,
                                                                            float_t tailTime, int32_t tailRotation, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer,
                                                                            ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier,
                                                                            ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset,
                                                                            ::GlobalNamespace::SliderMidAnchorMode midAnchorMode, int32_t sliceCount, float_t squishAmount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderData*>(
                                              sliderType, colorType, hasHeadNote, headTime, headBeat, headRotation, headLineIndex, headLineLayer, headBeforeJumpLineLayer,
                                              headControlPointLengthMultiplier, headCutDirection, headCutDirectionAngleOffset, hasTailNote, tailTime, tailRotation, tailLineIndex, tailLineLayer,
                                              tailBeforeJumpLineLayer, tailControlPointLengthMultiplier, tailCutDirection, tailCutDirectionAngleOffset, midAnchorMode, sliceCount, squishAmount));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderData::SliderData() {}
