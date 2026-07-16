#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSemanticLabels.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticLabels_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticLabels_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification::OVRSemanticLabels_Classification(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification::OVRSemanticLabels_Classification() {}
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::Floor{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::Ceiling{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::WallFace{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::Table{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::Couch{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::DoorFrame{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::WindowFrame{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::Other{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::Storage{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::Bed{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::Screen{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::Lamp{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::Plant{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::WallArt{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::SceneMesh{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels_Classification::InvisibleWallFace{ static_cast<int32_t>(0xf) };
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.IOVRAnchorComponent_OVRSemanticLabels__get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRSemanticLabels::*)()>(
    &::GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent_OVRSemanticLabels__get_Type)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e1198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "IOVRAnchorComponent<OVRSemanticLabels>.get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.IOVRAnchorComponent_OVRSemanticLabels__get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRSemanticLabels::*)()>(
    &::GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent_OVRSemanticLabels__get_Handle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e119e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "IOVRAnchorComponent<OVRSemanticLabels>.get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.IOVRAnchorComponent_OVRSemanticLabels__FromAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSemanticLabels (::GlobalNamespace::OVRSemanticLabels::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent_OVRSemanticLabels__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e11a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "IOVRAnchorComponent<OVRSemanticLabels>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSemanticLabels::*)()>(&::GlobalNamespace::OVRSemanticLabels::get_IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e11ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSemanticLabels::*)()>(&::GlobalNamespace::OVRSemanticLabels::get_IsEnabled)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e11b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.IOVRAnchorComponent_OVRSemanticLabels__SetEnabledAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSemanticLabels::*)(bool, double_t)>(
    &::GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent_OVRSemanticLabels__SetEnabledAsync)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e11c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                                             { "IOVRAnchorComponent<OVRSemanticLabels>.SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSemanticLabels::*)(::GlobalNamespace::OVRSemanticLabels)>(&::GlobalNamespace::OVRSemanticLabels::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e11c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSemanticLabels, ::GlobalNamespace::OVRSemanticLabels)>(&::GlobalNamespace::OVRSemanticLabels::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e11cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels>(), ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSemanticLabels, ::GlobalNamespace::OVRSemanticLabels)>(&::GlobalNamespace::OVRSemanticLabels::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e11d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels>(), ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSemanticLabels::*)(::System::Object*)>(&::GlobalNamespace::OVRSemanticLabels::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e11dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { ::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSemanticLabels::*)()>(&::GlobalNamespace::OVRSemanticLabels::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e11e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { ::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRSemanticLabels::*)()>(&::GlobalNamespace::OVRSemanticLabels::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e11eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { ::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRSemanticLabels::*)()>(&::GlobalNamespace::OVRSemanticLabels::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e119e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRSemanticLabels::*)()>(&::GlobalNamespace::OVRSemanticLabels::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e11f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSemanticLabels::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRSemanticLabels::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e11a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.get_Labels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRSemanticLabels::*)()>(&::GlobalNamespace::OVRSemanticLabels::get_Labels)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e11f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "get_Labels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.GetClassifications
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSemanticLabels::*)(
    ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*)>(&::GlobalNamespace::OVRSemanticLabels::GetClassifications)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5e12070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                         { "GetClassifications", {}, { ::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.FromApiLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSemanticLabels_Classification (*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::GlobalNamespace::OVRSemanticLabels::FromApiLabel)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0x5e1250c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "FromApiLabel", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.FromApiString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::ReadOnlySpan_1<char16_t>, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*)>(&::GlobalNamespace::OVRSemanticLabels::FromApiString)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5e12378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                                             { "FromApiString",
                                                               {},
                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.ToApiLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::OVRSemanticLabels_Classification)>(&::GlobalNamespace::OVRSemanticLabels::ToApiLabel)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5e1308c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "ToApiLabel", {}, { ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels_Classification>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels.ToApiString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>*)>(
    &::GlobalNamespace::OVRSemanticLabels::ToApiString)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5e1321c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                                { "ToApiString", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels._FromApiString_g__AddLabel_30_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*)>(
        &::GlobalNamespace::OVRSemanticLabels::_FromApiString_g__AddLabel_30_0)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5e12de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                                             { "<FromApiString>g__AddLabel|30_0",
                                                               {},
                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticLabels._FromApiString_g__IndexOf_30_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, char16_t, int32_t)>(&::GlobalNamespace::OVRSemanticLabels::_FromApiString_g__IndexOf_30_1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e12fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                         { "<FromApiString>g__IndexOf|30_1", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSemanticLabels::setStaticF_Null(::GlobalNamespace::OVRSemanticLabels value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRSemanticLabels, "Null", ::GlobalNamespace::OVRSemanticLabels>(std::forward<::GlobalNamespace::OVRSemanticLabels>(value));
}
inline ::GlobalNamespace::OVRSemanticLabels GlobalNamespace::OVRSemanticLabels::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRSemanticLabels, "Null", ::GlobalNamespace::OVRSemanticLabels>();
}
inline void GlobalNamespace::OVRSemanticLabels::setStaticF__semanticLabelsBuffer(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "_semanticLabelsBuffer", ::GlobalNamespace::OVRSemanticLabels>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> GlobalNamespace::OVRSemanticLabels::getStaticF__semanticLabelsBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "_semanticLabelsBuffer", ::GlobalNamespace::OVRSemanticLabels>();
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent_OVRSemanticLabels__get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "IOVRAnchorComponent<OVRSemanticLabels>.get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent_OVRSemanticLabels__get_Handle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "IOVRAnchorComponent<OVRSemanticLabels>.get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRSemanticLabels GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent_OVRSemanticLabels__FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "IOVRAnchorComponent<OVRSemanticLabels>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSemanticLabels>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRSemanticLabels::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSemanticLabels::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent_OVRSemanticLabels__SetEnabledAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                                           { "IOVRAnchorComponent<OVRSemanticLabels>.SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRSemanticLabels::Equals(::GlobalNamespace::OVRSemanticLabels other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRSemanticLabels::op_Equality(::GlobalNamespace::OVRSemanticLabels lhs, ::GlobalNamespace::OVRSemanticLabels rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels>(), ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRSemanticLabels::op_Inequality(::GlobalNamespace::OVRSemanticLabels lhs, ::GlobalNamespace::OVRSemanticLabels rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels>(), ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRSemanticLabels::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRSemanticLabels::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRSemanticLabels::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRSemanticLabels::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRSemanticLabels::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSemanticLabels::_ctor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
inline ::StringW GlobalNamespace::OVRSemanticLabels::get_Labels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "get_Labels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSemanticLabels::GetClassifications(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>* classifications) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                       { "GetClassifications", {}, { ::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, classifications);
}
inline ::GlobalNamespace::OVRSemanticLabels_Classification GlobalNamespace::OVRSemanticLabels::FromApiLabel(::System::ReadOnlySpan_1<char16_t> singleLabel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "FromApiLabel", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSemanticLabels_Classification>(nullptr, ___internal_method, singleLabel);
}
inline void GlobalNamespace::OVRSemanticLabels::FromApiString(::System::ReadOnlySpan_1<char16_t> apiLabels,
                                                              ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>* classifications) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                                           { "FromApiString",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, apiLabels, classifications);
}
inline ::StringW GlobalNamespace::OVRSemanticLabels::ToApiLabel(::GlobalNamespace::OVRSemanticLabels_Classification classification) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(), { "ToApiLabel", {}, { ::i2c::type_of<::GlobalNamespace::OVRSemanticLabels_Classification>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, classification);
}
inline ::StringW GlobalNamespace::OVRSemanticLabels::ToApiString(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>* classifications) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                              { "ToApiString", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, classifications);
}
inline void GlobalNamespace::OVRSemanticLabels::_FromApiString_g__AddLabel_30_0(::System::ReadOnlySpan_1<char16_t> label,
                                                                                ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>* labels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                                           { "<FromApiString>g__AddLabel|30_0",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, label, labels);
}
inline int32_t GlobalNamespace::OVRSemanticLabels::_FromApiString_g__IndexOf_30_1(::System::ReadOnlySpan_1<char16_t> s, char16_t c, int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSemanticLabels>(),
                                       { "<FromApiString>g__IndexOf|30_1", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, c, start);
}
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>"
constexpr GlobalNamespace::OVRSemanticLabels::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>*() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>*
GlobalNamespace::OVRSemanticLabels::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRSemanticLabels_() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>"
constexpr GlobalNamespace::OVRSemanticLabels::operator ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>* GlobalNamespace::OVRSemanticLabels::i___System__IEquatable_1___GlobalNamespace__OVRSemanticLabels_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSemanticLabels::OVRSemanticLabels(uint64_t _Handle_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSemanticLabels::OVRSemanticLabels() {}
