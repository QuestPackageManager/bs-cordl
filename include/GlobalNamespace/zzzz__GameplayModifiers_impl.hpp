#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifiers.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType::GameplayModifiers_EnabledObstacleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType::GameplayModifiers_EnabledObstacleType() {}
constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType GlobalNamespace::GameplayModifiers_EnabledObstacleType::All{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType GlobalNamespace::GameplayModifiers_EnabledObstacleType::FullHeightOnly{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType GlobalNamespace::GameplayModifiers_EnabledObstacleType::NoObstacles{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifiers_EnergyType::GameplayModifiers_EnergyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers_EnergyType::GameplayModifiers_EnergyType() {}
constexpr ::GlobalNamespace::GameplayModifiers_EnergyType GlobalNamespace::GameplayModifiers_EnergyType::Bar{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayModifiers_EnergyType GlobalNamespace::GameplayModifiers_EnergyType::Battery{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifiers_SongSpeed::GameplayModifiers_SongSpeed(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers_SongSpeed::GameplayModifiers_SongSpeed() {}
constexpr ::GlobalNamespace::GameplayModifiers_SongSpeed GlobalNamespace::GameplayModifiers_SongSpeed::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayModifiers_SongSpeed GlobalNamespace::GameplayModifiers_SongSpeed::Faster{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameplayModifiers_SongSpeed GlobalNamespace::GameplayModifiers_SongSpeed::Slower{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::GameplayModifiers_SongSpeed GlobalNamespace::GameplayModifiers_SongSpeed::SuperFast{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_energyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers_EnergyType (::GlobalNamespace::GameplayModifiers::*)()>(
    &::GlobalNamespace::GameplayModifiers::get_energyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_energyType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_noFailOn0Energy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_noFailOn0Energy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_noFailOn0Energy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_instaFail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_instaFail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_instaFail",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_failOnSaberClash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_failOnSaberClash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_failOnSaberClash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_enabledObstacleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers_EnabledObstacleType (::GlobalNamespace::GameplayModifiers::*)()>(
    &::GlobalNamespace::GameplayModifiers::get_enabledObstacleType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_enabledObstacleType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_fastNotes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_fastNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_fastNotes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_strictAngles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_strictAngles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_strictAngles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_disappearingArrows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_disappearingArrows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_disappearingArrows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_ghostNotes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_ghostNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_ghostNotes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_noBombs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_noBombs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_noBombs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_songSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers_SongSpeed (::GlobalNamespace::GameplayModifiers::*)()>(
    &::GlobalNamespace::GameplayModifiers::get_songSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_songSpeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_noArrows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_noArrows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_noArrows",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_proMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_proMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_proMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_zenMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_zenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2720298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_zenMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_smallCubes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_smallCubes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27202a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_smallCubes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_songSpeedMul
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_songSpeedMul)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27202a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_songSpeedMul",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_cutAngleTolerance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_cutAngleTolerance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27202cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_cutAngleTolerance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_notesUniformScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_notesUniformScale)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27202ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_notesUniformScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2720304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayModifiers::*)(
    ::GlobalNamespace::GameplayModifiers_EnergyType, bool, bool, bool, ::GlobalNamespace::GameplayModifiers_EnabledObstacleType, bool, bool, bool, bool, ::GlobalNamespace::GameplayModifiers_SongSpeed,
    bool, bool, bool, bool, bool)>(&::GlobalNamespace::GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2720080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 15>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers_EnergyType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers_EnabledObstacleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers_SongSpeed>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.CopyWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (
    ::GlobalNamespace::GameplayModifiers::*)(::System::Nullable_1<::GlobalNamespace::GameplayModifiers_EnergyType>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>,
                                             ::System::Nullable_1<::GlobalNamespace::GameplayModifiers_EnabledObstacleType>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>,
                                             ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<::GlobalNamespace::GameplayModifiers_SongSpeed>, ::System::Nullable_1<bool>,
                                             ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>)>(
    &::GlobalNamespace::GameplayModifiers::CopyWith)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2720330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "CopyWith", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 15>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::GameplayModifiers_EnergyType>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::GameplayModifiers_EnabledObstacleType>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::GameplayModifiers_SongSpeed>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.IsWithoutModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::IsWithoutModifiers)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2720638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "IsWithoutModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayModifiers::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::GameplayModifiers::Serialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27206c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::GameplayModifiers::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::GameplayModifiers::LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2720760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.FromGameplayModifierMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (*)(::GlobalNamespace::GameplayModifierMask)>(
    &::GlobalNamespace::GameplayModifiers::FromGameplayModifierMask)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27208e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "FromGameplayModifierMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::GameplayModifiers::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x27207b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "CreateFromSerializedData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.AreValuesEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameplayModifiers::AreValuesEqual)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x27208ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "AreValuesEqual", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayModifiers_EnergyType& GlobalNamespace::GameplayModifiers::__cordl_internal_get__energyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____energyType;
}
constexpr ::GlobalNamespace::GameplayModifiers_EnergyType const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__energyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____energyType;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__energyType(::GlobalNamespace::GameplayModifiers_EnergyType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____energyType = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__noFailOn0Energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noFailOn0Energy;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__noFailOn0Energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noFailOn0Energy;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__noFailOn0Energy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noFailOn0Energy = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__instaFail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instaFail;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__instaFail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instaFail;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__instaFail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instaFail = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__failOnSaberClash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failOnSaberClash;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__failOnSaberClash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failOnSaberClash;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__failOnSaberClash(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failOnSaberClash = value;
}
constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType& GlobalNamespace::GameplayModifiers::__cordl_internal_get__enabledObstacleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledObstacleType;
}
constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__enabledObstacleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledObstacleType;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__enabledObstacleType(::GlobalNamespace::GameplayModifiers_EnabledObstacleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledObstacleType = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__fastNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fastNotes;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__fastNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fastNotes;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__fastNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fastNotes = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__strictAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strictAngles;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__strictAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strictAngles;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__strictAngles(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strictAngles = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__disappearingArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingArrows;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__disappearingArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingArrows;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__disappearingArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearingArrows = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__ghostNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostNotes;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__ghostNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostNotes;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__ghostNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ghostNotes = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__noBombs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noBombs;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__noBombs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noBombs;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__noBombs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noBombs = value;
}
constexpr ::GlobalNamespace::GameplayModifiers_SongSpeed& GlobalNamespace::GameplayModifiers::__cordl_internal_get__songSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeed;
}
constexpr ::GlobalNamespace::GameplayModifiers_SongSpeed const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__songSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeed;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__songSpeed(::GlobalNamespace::GameplayModifiers_SongSpeed value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songSpeed = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__noArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noArrows;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__noArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noArrows;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__noArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noArrows = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__proMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proMode;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__proMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proMode;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__proMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____proMode = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__zenMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenMode;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__zenMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenMode;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__zenMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zenMode = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__cordl_internal_get__smallCubes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCubes;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__cordl_internal_get__smallCubes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCubes;
}
constexpr void GlobalNamespace::GameplayModifiers::__cordl_internal_set__smallCubes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smallCubes = value;
}
inline void GlobalNamespace::GameplayModifiers::setStaticF_noModifiers(::GlobalNamespace::GameplayModifiers* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiers*, "noModifiers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get>(
      std::forward<::GlobalNamespace::GameplayModifiers*>(value));
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifiers::getStaticF_noModifiers() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiers*, "noModifiers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get>();
}
inline ::GlobalNamespace::GameplayModifiers_EnergyType GlobalNamespace::GameplayModifiers::get_energyType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_energyType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers_EnergyType, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_noFailOn0Energy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_noFailOn0Energy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_instaFail() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_instaFail",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_failOnSaberClash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_failOnSaberClash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers_EnabledObstacleType GlobalNamespace::GameplayModifiers::get_enabledObstacleType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_enabledObstacleType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers_EnabledObstacleType, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_fastNotes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_fastNotes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_strictAngles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_strictAngles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_disappearingArrows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_disappearingArrows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_ghostNotes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_ghostNotes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_noBombs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_noBombs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers_SongSpeed GlobalNamespace::GameplayModifiers::get_songSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_songSpeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers_SongSpeed, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_noArrows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_noArrows",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_proMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_proMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_zenMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_zenMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_smallCubes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_smallCubes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::GameplayModifiers::get_songSpeedMul() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_songSpeedMul",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::GameplayModifiers::get_cutAngleTolerance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_cutAngleTolerance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::GameplayModifiers::get_notesUniformScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_notesUniformScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiers::_ctor(::GlobalNamespace::GameplayModifiers_EnergyType energyType, bool noFailOn0Energy, bool instaFail, bool failOnSaberClash,
                                                      ::GlobalNamespace::GameplayModifiers_EnabledObstacleType enabledObstacleType, bool noBombs, bool fastNotes, bool strictAngles,
                                                      bool disappearingArrows, ::GlobalNamespace::GameplayModifiers_SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode, bool zenMode,
                                                      bool smallCubes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 15>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers_EnergyType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers_EnabledObstacleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers_SongSpeed>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, energyType, noFailOn0Energy, instaFail, failOnSaberClash, enabledObstacleType, noBombs, fastNotes, strictAngles,
                                                          disappearingArrows, songSpeed, noArrows, ghostNotes, proMode, zenMode, smallCubes);
}
inline ::GlobalNamespace::GameplayModifiers*
GlobalNamespace::GameplayModifiers::CopyWith(::System::Nullable_1<::GlobalNamespace::GameplayModifiers_EnergyType> energyType, ::System::Nullable_1<bool> noFailOn0Energy,
                                             ::System::Nullable_1<bool> instaFail, ::System::Nullable_1<bool> failOnSaberClash,
                                             ::System::Nullable_1<::GlobalNamespace::GameplayModifiers_EnabledObstacleType> enabledObstacleType, ::System::Nullable_1<bool> noBombs,
                                             ::System::Nullable_1<bool> fastNotes, ::System::Nullable_1<bool> strictAngles, ::System::Nullable_1<bool> disappearingArrows,
                                             ::System::Nullable_1<::GlobalNamespace::GameplayModifiers_SongSpeed> songSpeed, ::System::Nullable_1<bool> noArrows, ::System::Nullable_1<bool> ghostNotes,
                                             ::System::Nullable_1<bool> proMode, ::System::Nullable_1<bool> zenMode, ::System::Nullable_1<bool> smallCubes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "CopyWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 15>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::GameplayModifiers_EnergyType>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::GameplayModifiers_EnabledObstacleType>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::GameplayModifiers_SongSpeed>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method, energyType, noFailOn0Energy, instaFail, failOnSaberClash, enabledObstacleType,
                                                                                           noBombs, fastNotes, strictAngles, disappearingArrows, songSpeed, noArrows, ghostNotes, proMode, zenMode,
                                                                                           smallCubes);
}
inline bool GlobalNamespace::GameplayModifiers::IsWithoutModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "IsWithoutModifiers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiers::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::GameplayModifiers*
GlobalNamespace::GameplayModifiers::LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifiers::FromGameplayModifierMask(::GlobalNamespace::GameplayModifierMask mask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "FromGameplayModifierMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(nullptr, ___internal_method, mask);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifiers::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "CreateFromSerializedData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(nullptr, ___internal_method, reader);
}
inline bool GlobalNamespace::GameplayModifiers::AreValuesEqual(::GlobalNamespace::GameplayModifiers* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "AreValuesEqual", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifiers::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameplayModifiers*>());
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifiers::New_ctor(::GlobalNamespace::GameplayModifiers_EnergyType energyType, bool noFailOn0Energy, bool instaFail,
                                                                                          bool failOnSaberClash, ::GlobalNamespace::GameplayModifiers_EnabledObstacleType enabledObstacleType,
                                                                                          bool noBombs, bool fastNotes, bool strictAngles, bool disappearingArrows,
                                                                                          ::GlobalNamespace::GameplayModifiers_SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode,
                                                                                          bool zenMode, bool smallCubes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameplayModifiers*>(energyType, noFailOn0Energy, instaFail, failOnSaberClash, enabledObstacleType, noBombs, fastNotes,
                                                                                         strictAngles, disappearingArrows, songSpeed, noArrows, ghostNotes, proMode, zenMode, smallCubes));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>"
constexpr GlobalNamespace::GameplayModifiers::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>*
GlobalNamespace::GameplayModifiers::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__GameplayModifiers__() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers::GameplayModifiers() {}
