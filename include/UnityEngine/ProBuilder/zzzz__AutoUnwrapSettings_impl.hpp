#pragma once
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::__AutoUnwrapSettings__Anchor(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::__AutoUnwrapSettings__Anchor() {}
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::UpperLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::UpperCenter{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::UpperRight{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::MiddleLeft{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::MiddleCenter{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::MiddleRight{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::LowerLeft{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::LowerCenter{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::LowerRight{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor::None{ static_cast<int32_t>(0x9) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill::__AutoUnwrapSettings__Fill(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill::__AutoUnwrapSettings__Fill() {}
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill::Fit{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill::Tile{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill::Stretch{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_defaultAutoUnwrapSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::get_defaultAutoUnwrapSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1c7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                               "get_defaultAutoUnwrapSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_useWorldSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::get_useWorldSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                               "get_useWorldSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.set_useWorldSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::set_useWorldSpace)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1c834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_useWorldSpace",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_flipU
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipU)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                               "get_flipU", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.set_flipU
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipU)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1c848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_flipU",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_flipV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                               "get_flipV", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.set_flipV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipV)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1c85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_flipV",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_swapUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::get_swapUV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                               "get_swapUV", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.set_swapUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::set_swapUV)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1c870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_swapUV",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_fill
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::get_fill)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_fill",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.set_fill
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill)>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::set_fill)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_fill", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_scale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::get_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                               "get_scale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.set_scale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::set_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_scale", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_offset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                               "get_offset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.set_offset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::set_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_offset", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                               "get_rotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.set_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)(float_t)>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::set_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_rotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_anchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::get_anchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                               "get_anchor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.set_anchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor)>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::set_anchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_anchor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)(::UnityEngine::ProBuilder::AutoUnwrapSettings)>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c1c8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_tile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&::UnityEngine::ProBuilder::AutoUnwrapSettings::get_tile)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1c928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_tile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_fit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&::UnityEngine::ProBuilder::AutoUnwrapSettings::get_fit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1c940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_fit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.get_stretch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&::UnityEngine::ProBuilder::AutoUnwrapSettings::get_stretch)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1c958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                               "get_stretch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&::UnityEngine::ProBuilder::AutoUnwrapSettings::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1c814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::AutoUnwrapSettings.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(
    &::UnityEngine::ProBuilder::AutoUnwrapSettings::ToString)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x2c1c970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), 3));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::AutoUnwrapSettings::get_defaultAutoUnwrapSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                             "get_defaultAutoUnwrapSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::AutoUnwrapSettings, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::ProBuilder::AutoUnwrapSettings::get_useWorldSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                             "get_useWorldSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::set_useWorldSpace(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_useWorldSpace",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipU() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_flipU",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipU(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_flipU",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipV() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_flipV",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipV(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_flipV",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::AutoUnwrapSettings::get_swapUV() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_swapUV",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::set_swapUV(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_swapUV",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill UnityEngine::ProBuilder::AutoUnwrapSettings::get_fill() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_fill",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::set_fill(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_fill", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::AutoUnwrapSettings::get_scale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_scale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::set_scale(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_scale", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::AutoUnwrapSettings::get_offset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_offset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::set_offset(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_offset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ProBuilder::AutoUnwrapSettings::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                             "get_rotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::set_rotation(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_rotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::AutoUnwrapSettings::get_anchor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_anchor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::set_anchor(::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "set_anchor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::_ctor(::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unwrapSettings);
}
inline ::UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::AutoUnwrapSettings::get_tile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_tile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::AutoUnwrapSettings, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::AutoUnwrapSettings::get_fit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "get_fit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::AutoUnwrapSettings, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::AutoUnwrapSettings::get_stretch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                             "get_stretch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::AutoUnwrapSettings, false>(nullptr, ___internal_method);
}
inline void UnityEngine::ProBuilder::AutoUnwrapSettings::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::ProBuilder::AutoUnwrapSettings::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_UseWorldSpace", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FlipU", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_FlipV", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SwapUV", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Fill", ty:
// "::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Rotation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Anchor", ty: "::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::AutoUnwrapSettings::AutoUnwrapSettings(bool m_UseWorldSpace, bool m_FlipU, bool m_FlipV, bool m_SwapUV,
                                                                            ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Fill m_Fill, ::UnityEngine::Vector2 m_Scale,
                                                                            ::UnityEngine::Vector2 m_Offset, float_t m_Rotation,
                                                                            ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor m_Anchor) noexcept {
  this->m_UseWorldSpace = m_UseWorldSpace;
  this->m_FlipU = m_FlipU;
  this->m_FlipV = m_FlipV;
  this->m_SwapUV = m_SwapUV;
  this->m_Fill = m_Fill;
  this->m_Scale = m_Scale;
  this->m_Offset = m_Offset;
  this->m_Rotation = m_Rotation;
  this->m_Anchor = m_Anchor;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::AutoUnwrapSettings::AutoUnwrapSettings() {}
