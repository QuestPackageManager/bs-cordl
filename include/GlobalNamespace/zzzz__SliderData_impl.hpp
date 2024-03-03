#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectData_impl.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__SliderData_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_impl.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SliderData__Type::__SliderData__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderData__Type::__SliderData__Type() {}
constexpr ::GlobalNamespace::__SliderData__Type GlobalNamespace::__SliderData__Type::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SliderData__Type GlobalNamespace::__SliderData__Type::Burst{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_subtypeGroupIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe575e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_colorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorType (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe575f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_colorType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_colorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::ColorType)>(
    &::GlobalNamespace::SliderData::set_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe575f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_colorType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_sliderType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SliderData__Type (::GlobalNamespace::SliderData::*)()>(
    &::GlobalNamespace::SliderData::get_sliderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_sliderType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_sliderType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::__SliderData__Type)>(
    &::GlobalNamespace::SliderData::set_sliderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_sliderType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderData__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_hasHeadNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_hasHeadNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_hasHeadNote",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_hasHeadNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::set_hasHeadNote)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe57618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_hasHeadNote",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_headControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_headControlPointLengthMultiplier",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(
    &::GlobalNamespace::SliderData::set_headControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5762c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headControlPointLengthMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headLineIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_headLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_headLineIndex",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headLineIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(int32_t)>(&::GlobalNamespace::SliderData::set_headLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5763c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headLineIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::SliderData::*)()>(
    &::GlobalNamespace::SliderData::get_headLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_headLineLayer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::SliderData::set_headLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5764c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headLineLayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::SliderData::*)()>(
    &::GlobalNamespace::SliderData::get_headBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(),
                                                                               "get_headBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::SliderData::set_headBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5765c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headCutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::GlobalNamespace::SliderData::*)()>(
    &::GlobalNamespace::SliderData::get_headCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_headCutDirection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headCutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteCutDirection)>(
    &::GlobalNamespace::SliderData::set_headCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5766c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headCutDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_headCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_headCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_headCutDirectionAngleOffset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_headCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::set_headCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5767c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headCutDirectionAngleOffset",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_hasTailNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_hasTailNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_hasTailNote",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_hasTailNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::set_hasTailNote)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe5768c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_hasTailNote",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::set_tailTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailLineIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailLineIndex",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailLineIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(int32_t)>(&::GlobalNamespace::SliderData::set_tailLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailLineIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailControlPointLengthMultiplier",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(
    &::GlobalNamespace::SliderData::set_tailControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailControlPointLengthMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::SliderData::*)()>(
    &::GlobalNamespace::SliderData::get_tailLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailLineLayer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::SliderData::set_tailLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailLineLayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::SliderData::*)()>(
    &::GlobalNamespace::SliderData::get_tailBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(),
                                                                               "get_tailBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::SliderData::set_tailBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailCutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::GlobalNamespace::SliderData::*)()>(
    &::GlobalNamespace::SliderData::get_tailCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailCutDirection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailCutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteCutDirection)>(
    &::GlobalNamespace::SliderData::set_tailCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailCutDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_tailCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_tailCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe576f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailCutDirectionAngleOffset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_tailCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::set_tailCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailCutDirectionAngleOffset",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_midAnchorMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderMidAnchorMode (::GlobalNamespace::SliderData::*)()>(
    &::GlobalNamespace::SliderData::get_midAnchorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_midAnchorMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_midAnchorMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::SliderMidAnchorMode)>(
    &::GlobalNamespace::SliderData::set_midAnchorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_midAnchorMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_sliceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_sliceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_sliceCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_sliceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(int32_t)>(&::GlobalNamespace::SliderData::set_sliceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_sliceCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.get_squishAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::get_squishAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_squishAmount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.set_squishAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t)>(&::GlobalNamespace::SliderData::set_squishAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_squishAmount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.GetCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::SliderData::*)()>(&::GlobalNamespace::SliderData::GetCopy)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xe57738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(
    ::GlobalNamespace::__SliderData__Type, ::GlobalNamespace::ColorType, bool, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t,
    ::GlobalNamespace::NoteCutDirection, float_t, bool, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t, ::GlobalNamespace::NoteCutDirection, float_t,
    ::GlobalNamespace::SliderMidAnchorMode, int32_t, float_t)>(&::GlobalNamespace::SliderData::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xe57894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 21>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderData__Type>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.CreateSliderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::SliderData* (*)(::GlobalNamespace::ColorType, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t,
                                                   ::GlobalNamespace::NoteCutDirection, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t,
                                                   ::GlobalNamespace::NoteCutDirection, ::GlobalNamespace::SliderMidAnchorMode)>(&::GlobalNamespace::SliderData::CreateSliderData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xe579e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "CreateSliderData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 14>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.CreateBurstSliderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::GlobalNamespace::SliderData* (*)(::GlobalNamespace::ColorType, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, float_t,
                                       int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, int32_t, float_t)>(&::GlobalNamespace::SliderData::CreateBurstSliderData)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xe57afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "CreateBurstSliderData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.Mirror
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(int32_t)>(&::GlobalNamespace::SliderData::Mirror)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe57c14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetHasHeadNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::SetHasHeadNote)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe57cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SetHasHeadNote",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetHasTailNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(bool)>(&::GlobalNamespace::SliderData::SetHasTailNote)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe57cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SetHasTailNote",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetHeadBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::SliderData::SetHeadBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SetHeadBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetTailBeforeJumpLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::SliderData::SetTailBeforeJumpLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe57cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SetTailBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SetCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderData::*)(float_t, float_t)>(
    &::GlobalNamespace::SliderData::SetCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe57ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SetCutDirectionAngleOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderData.SubtypeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::SliderData::SubtypeIdentifier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe579dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SubtypeIdentifier", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
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
constexpr ::GlobalNamespace::__SliderData__Type& GlobalNamespace::SliderData::__cordl_internal_get__sliderType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderType_k__BackingField;
}
constexpr ::GlobalNamespace::__SliderData__Type const& GlobalNamespace::SliderData::__cordl_internal_get__sliderType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderType_k__BackingField;
}
constexpr void GlobalNamespace::SliderData::__cordl_internal_set__sliderType_k__BackingField(::GlobalNamespace::__SliderData__Type value) {
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
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorType GlobalNamespace::SliderData::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_colorType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_colorType(::GlobalNamespace::ColorType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_colorType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__SliderData__Type GlobalNamespace::SliderData::get_sliderType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_sliderType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SliderData__Type, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_sliderType(::GlobalNamespace::__SliderData__Type value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_sliderType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderData__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SliderData::get_hasHeadNote() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_hasHeadNote",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_hasHeadNote(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_hasHeadNote",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_headControlPointLengthMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_headControlPointLengthMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headControlPointLengthMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headControlPointLengthMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SliderData::get_headLineIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_headLineIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headLineIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headLineIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::SliderData::get_headLineLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_headLineLayer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headLineLayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::SliderData::get_headBeforeJumpLineLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(),
                                                                             "get_headBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::SliderData::get_headCutDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_headCutDirection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headCutDirection(::GlobalNamespace::NoteCutDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headCutDirection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_headCutDirectionAngleOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(),
                                                                             "get_headCutDirectionAngleOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_headCutDirectionAngleOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_headCutDirectionAngleOffset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SliderData::get_hasTailNote() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_hasTailNote",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_hasTailNote(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_hasTailNote",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_tailTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailTime", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SliderData::get_tailLineIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailLineIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailLineIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailLineIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_tailControlPointLengthMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailControlPointLengthMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailControlPointLengthMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailControlPointLengthMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::SliderData::get_tailLineLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailLineLayer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailLineLayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::SliderData::get_tailBeforeJumpLineLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(),
                                                                             "get_tailBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::SliderData::get_tailCutDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_tailCutDirection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailCutDirection(::GlobalNamespace::NoteCutDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailCutDirection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_tailCutDirectionAngleOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(),
                                                                             "get_tailCutDirectionAngleOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_tailCutDirectionAngleOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_tailCutDirectionAngleOffset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SliderMidAnchorMode GlobalNamespace::SliderData::get_midAnchorMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_midAnchorMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderMidAnchorMode, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_midAnchorMode(::GlobalNamespace::SliderMidAnchorMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_midAnchorMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SliderData::get_sliceCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_sliceCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_sliceCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_sliceCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderData::get_squishAmount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "get_squishAmount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderData::set_squishAmount(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "set_squishAmount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::SliderData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::SliderData::New_ctor(::GlobalNamespace::__SliderData__Type sliderType, ::GlobalNamespace::ColorType colorType, bool hasHeadNote,
                                                                            float_t headTime, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                                                            ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier,
                                                                            ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote,
                                                                            float_t tailTime, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer,
                                                                            ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier,
                                                                            ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset,
                                                                            ::GlobalNamespace::SliderMidAnchorMode midAnchorMode, int32_t sliceCount, float_t squishAmount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderData*>(
      sliderType, colorType, hasHeadNote, headTime, headLineIndex, headLineLayer, headBeforeJumpLineLayer, headControlPointLengthMultiplier, headCutDirection, headCutDirectionAngleOffset, hasTailNote,
      tailTime, tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer, tailControlPointLengthMultiplier, tailCutDirection, tailCutDirectionAngleOffset, midAnchorMode, sliceCount, squishAmount));
}
inline void GlobalNamespace::SliderData::_ctor(::GlobalNamespace::__SliderData__Type sliderType, ::GlobalNamespace::ColorType colorType, bool hasHeadNote, float_t headTime, int32_t headLineIndex,
                                               ::GlobalNamespace::NoteLineLayer headLineLayer, ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier,
                                               ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote, float_t tailTime, int32_t tailLineIndex,
                                               ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier,
                                               ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset, ::GlobalNamespace::SliderMidAnchorMode midAnchorMode,
                                               int32_t sliceCount, float_t squishAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 21>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderData__Type>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderType, colorType, hasHeadNote, headTime, headLineIndex, headLineLayer, headBeforeJumpLineLayer,
                                                          headControlPointLengthMultiplier, headCutDirection, headCutDirectionAngleOffset, hasTailNote, tailTime, tailLineIndex, tailLineLayer,
                                                          tailBeforeJumpLineLayer, tailControlPointLengthMultiplier, tailCutDirection, tailCutDirectionAngleOffset, midAnchorMode, sliceCount,
                                                          squishAmount);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::SliderData::CreateSliderData(::GlobalNamespace::ColorType colorType, float_t headTime, int32_t headLineIndex,
                                                                                    ::GlobalNamespace::NoteLineLayer headLineLayer, ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer,
                                                                                    float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime,
                                                                                    int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer,
                                                                                    ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier,
                                                                                    ::GlobalNamespace::NoteCutDirection tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode midAnchorMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "CreateSliderData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 14>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*, false>(nullptr, ___internal_method, colorType, headTime, headLineIndex, headLineLayer, headBeforeJumpLineLayer,
                                                                                    headControlPointLengthMultiplier, headCutDirection, tailTime, tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer,
                                                                                    tailControlPointLengthMultiplier, tailCutDirection, midAnchorMode);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::SliderData::CreateBurstSliderData(::GlobalNamespace::ColorType colorType, float_t headTime, int32_t headLineIndex,
                                                                                         ::GlobalNamespace::NoteLineLayer headLineLayer, ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer,
                                                                                         ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex,
                                                                                         ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer,
                                                                                         int32_t sliceCount, float_t squishAmount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "CreateBurstSliderData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*, false>(nullptr, ___internal_method, colorType, headTime, headLineIndex, headLineLayer, headBeforeJumpLineLayer,
                                                                                    headCutDirection, tailTime, tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer, sliceCount, squishAmount);
}
inline void GlobalNamespace::SliderData::Mirror(int32_t lineCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineCount);
}
inline void GlobalNamespace::SliderData::SetHasHeadNote(bool hasHeadNote) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SetHasHeadNote",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasHeadNote);
}
inline void GlobalNamespace::SliderData::SetHasTailNote(bool hasTailNote) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SetHasTailNote",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasTailNote);
}
inline void GlobalNamespace::SliderData::SetHeadBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SetHeadBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineLayer);
}
inline void GlobalNamespace::SliderData::SetTailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SetTailBeforeJumpLineLayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineLayer);
}
inline void GlobalNamespace::SliderData::SetCutDirectionAngleOffset(float_t headCutDirectionAngleOffset, float_t tailCutDirectionAngleOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SetCutDirectionAngleOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headCutDirectionAngleOffset, tailCutDirectionAngleOffset);
}
inline int32_t GlobalNamespace::SliderData::SubtypeIdentifier(::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderData*>::get(), "SubtypeIdentifier", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, colorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderData::SliderData() {}
