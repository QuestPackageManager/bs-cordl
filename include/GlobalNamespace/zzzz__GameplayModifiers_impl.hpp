#pragma once
#include "GlobalNamespace/zzzz__GameplayModifiers_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType::__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType::__GameplayModifiers__EnabledObstacleType() {}
constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType GlobalNamespace::__GameplayModifiers__EnabledObstacleType::All{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType GlobalNamespace::__GameplayModifiers__EnabledObstacleType::FullHeightOnly{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType GlobalNamespace::__GameplayModifiers__EnabledObstacleType::NoObstacles{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType::__GameplayModifiers__EnergyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType::__GameplayModifiers__EnergyType() {}
constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType GlobalNamespace::__GameplayModifiers__EnergyType::Bar{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType GlobalNamespace::__GameplayModifiers__EnergyType::Battery{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameplayModifiers__SongSpeed::__GameplayModifiers__SongSpeed(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayModifiers__SongSpeed::__GameplayModifiers__SongSpeed() {}
constexpr ::GlobalNamespace::__GameplayModifiers__SongSpeed GlobalNamespace::__GameplayModifiers__SongSpeed::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GameplayModifiers__SongSpeed GlobalNamespace::__GameplayModifiers__SongSpeed::Faster{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__GameplayModifiers__SongSpeed GlobalNamespace::__GameplayModifiers__SongSpeed::Slower{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__GameplayModifiers__SongSpeed GlobalNamespace::__GameplayModifiers__SongSpeed::SuperFast{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_energyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__GameplayModifiers__EnergyType (::GlobalNamespace::GameplayModifiers::*)()>(
    &::GlobalNamespace::GameplayModifiers::get_energyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_energyType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_noFailOn0Energy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_noFailOn0Energy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_noFailOn0Energy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_instaFail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_instaFail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_instaFail",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_failOnSaberClash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_failOnSaberClash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_failOnSaberClash", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_enabledObstacleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType (::GlobalNamespace::GameplayModifiers::*)()>(
    &::GlobalNamespace::GameplayModifiers::get_enabledObstacleType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_enabledObstacleType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_fastNotes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_fastNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_fastNotes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_strictAngles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_strictAngles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_strictAngles",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_disappearingArrows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_disappearingArrows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_disappearingArrows", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_ghostNotes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_ghostNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12302a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_ghostNotes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_noBombs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_noBombs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12302a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_noBombs",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_songSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__GameplayModifiers__SongSpeed (::GlobalNamespace::GameplayModifiers::*)()>(
    &::GlobalNamespace::GameplayModifiers::get_songSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12302b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_songSpeed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_noArrows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_noArrows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12302b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_noArrows",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_proMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_proMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12302c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_proMode",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_zenMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_zenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12302c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_zenMode",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_smallCubes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_smallCubes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12302d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_smallCubes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_songSpeedMul
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_songSpeedMul)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x12302d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_songSpeedMul",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_cutAngleTolerance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_cutAngleTolerance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x12302fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_cutAngleTolerance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.get_notesUniformScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::get_notesUniformScale)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x123031c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "get_notesUniformScale", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayModifiers::*)()>(&::GlobalNamespace::GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1230334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayModifiers::*)(
    ::GlobalNamespace::__GameplayModifiers__EnergyType, bool, bool, bool, ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType, bool, bool, bool, bool,
    ::GlobalNamespace::__GameplayModifiers__SongSpeed, bool, bool, bool, bool, bool)>(&::GlobalNamespace::GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x12300b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__EnergyType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__SongSpeed>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.CopyWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (
    ::GlobalNamespace::GameplayModifiers::*)(::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnergyType>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>,
                                             ::System::Nullable_1<bool>, ::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType>, ::System::Nullable_1<bool>,
                                             ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>,
                                             ::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__SongSpeed>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>,
                                             ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>)>(&::GlobalNamespace::GameplayModifiers::CopyWith)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x1230360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "CopyWith", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnergyType>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__SongSpeed>>::get(),
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
  constexpr static std::size_t addrs = 0x123068c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                               "IsWithoutModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayModifiers::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::GameplayModifiers::Serialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1230714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::GameplayModifiers::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::GameplayModifiers::LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12307b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiers.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::GameplayModifiers::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1230808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>"
constexpr GlobalNamespace::GameplayModifiers::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayModifiers*>*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType& GlobalNamespace::GameplayModifiers::__get__energyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____energyType;
}
constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType const& GlobalNamespace::GameplayModifiers::__get__energyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____energyType;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__energyType(::GlobalNamespace::__GameplayModifiers__EnergyType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____energyType = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__noFailOn0Energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noFailOn0Energy;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__noFailOn0Energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noFailOn0Energy;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__noFailOn0Energy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noFailOn0Energy = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__instaFail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instaFail;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__instaFail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instaFail;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__instaFail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instaFail = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__failOnSaberClash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failOnSaberClash;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__failOnSaberClash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failOnSaberClash;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__failOnSaberClash(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failOnSaberClash = value;
}
constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType& GlobalNamespace::GameplayModifiers::__get__enabledObstacleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledObstacleType;
}
constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType const& GlobalNamespace::GameplayModifiers::__get__enabledObstacleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledObstacleType;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__enabledObstacleType(::GlobalNamespace::__GameplayModifiers__EnabledObstacleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledObstacleType = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__fastNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fastNotes;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__fastNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fastNotes;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__fastNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fastNotes = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__strictAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strictAngles;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__strictAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strictAngles;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__strictAngles(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strictAngles = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__disappearingArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingArrows;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__disappearingArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingArrows;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__disappearingArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearingArrows = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__ghostNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostNotes;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__ghostNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostNotes;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__ghostNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ghostNotes = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__noBombs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noBombs;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__noBombs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noBombs;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__noBombs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noBombs = value;
}
constexpr ::GlobalNamespace::__GameplayModifiers__SongSpeed& GlobalNamespace::GameplayModifiers::__get__songSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeed;
}
constexpr ::GlobalNamespace::__GameplayModifiers__SongSpeed const& GlobalNamespace::GameplayModifiers::__get__songSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeed;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__songSpeed(::GlobalNamespace::__GameplayModifiers__SongSpeed value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songSpeed = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__noArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noArrows;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__noArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noArrows;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__noArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noArrows = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__proMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proMode;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__proMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proMode;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__proMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____proMode = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__zenMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenMode;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__zenMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zenMode;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__zenMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zenMode = value;
}
constexpr bool& GlobalNamespace::GameplayModifiers::__get__smallCubes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCubes;
}
constexpr bool const& GlobalNamespace::GameplayModifiers::__get__smallCubes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCubes;
}
constexpr void GlobalNamespace::GameplayModifiers::__set__smallCubes(bool value) {
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
inline ::GlobalNamespace::__GameplayModifiers__EnergyType GlobalNamespace::GameplayModifiers::get_energyType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_energyType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__GameplayModifiers__EnergyType, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_noFailOn0Energy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_noFailOn0Energy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_instaFail() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_instaFail",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_failOnSaberClash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_failOnSaberClash", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType GlobalNamespace::GameplayModifiers::get_enabledObstacleType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_enabledObstacleType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_fastNotes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_fastNotes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_strictAngles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_strictAngles",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_disappearingArrows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_disappearingArrows", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_ghostNotes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_ghostNotes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_noBombs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_noBombs",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__GameplayModifiers__SongSpeed GlobalNamespace::GameplayModifiers::get_songSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_songSpeed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__GameplayModifiers__SongSpeed, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_noArrows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_noArrows",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_proMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_proMode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_zenMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_zenMode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayModifiers::get_smallCubes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_smallCubes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::GameplayModifiers::get_songSpeedMul() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "get_songSpeedMul",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::GameplayModifiers::get_cutAngleTolerance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_cutAngleTolerance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::GameplayModifiers::get_notesUniformScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                             "get_notesUniformScale", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifiers::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameplayModifiers*>());
}
inline void GlobalNamespace::GameplayModifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifiers::New_ctor(::GlobalNamespace::__GameplayModifiers__EnergyType energyType, bool noFailOn0Energy, bool instaFail,
                                                                                          bool failOnSaberClash, ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType enabledObstacleType,
                                                                                          bool noBombs, bool fastNotes, bool strictAngles, bool disappearingArrows,
                                                                                          ::GlobalNamespace::__GameplayModifiers__SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode,
                                                                                          bool zenMode, bool smallCubes) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameplayModifiers*>(energyType, noFailOn0Energy, instaFail, failOnSaberClash, enabledObstacleType, noBombs, fastNotes, strictAngles,
                                                                                 disappearingArrows, songSpeed, noArrows, ghostNotes, proMode, zenMode, smallCubes));
}
inline void GlobalNamespace::GameplayModifiers::_ctor(::GlobalNamespace::__GameplayModifiers__EnergyType energyType, bool noFailOn0Energy, bool instaFail, bool failOnSaberClash,
                                                      ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType enabledObstacleType, bool noBombs, bool fastNotes, bool strictAngles,
                                                      bool disappearingArrows, ::GlobalNamespace::__GameplayModifiers__SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode, bool zenMode,
                                                      bool smallCubes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__EnergyType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__SongSpeed>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, energyType, noFailOn0Energy, instaFail, failOnSaberClash, enabledObstacleType, noBombs, fastNotes, strictAngles,
                                                          disappearingArrows, songSpeed, noArrows, ghostNotes, proMode, zenMode, smallCubes);
}
/// @param energyType: ::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnergyType> (default: {})
/// @param noFailOn0Energy: ::System::Nullable_1<bool> (default: {})
/// @param instaFail: ::System::Nullable_1<bool> (default: {})
/// @param failOnSaberClash: ::System::Nullable_1<bool> (default: {})
/// @param enabledObstacleType: ::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType> (default: {})
/// @param noBombs: ::System::Nullable_1<bool> (default: {})
/// @param fastNotes: ::System::Nullable_1<bool> (default: {})
/// @param strictAngles: ::System::Nullable_1<bool> (default: {})
/// @param disappearingArrows: ::System::Nullable_1<bool> (default: {})
/// @param songSpeed: ::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__SongSpeed> (default: {})
/// @param noArrows: ::System::Nullable_1<bool> (default: {})
/// @param ghostNotes: ::System::Nullable_1<bool> (default: {})
/// @param proMode: ::System::Nullable_1<bool> (default: {})
/// @param zenMode: ::System::Nullable_1<bool> (default: {})
/// @param smallCubes: ::System::Nullable_1<bool> (default: {})
inline ::GlobalNamespace::GameplayModifiers*
GlobalNamespace::GameplayModifiers::CopyWith(::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnergyType> energyType, ::System::Nullable_1<bool> noFailOn0Energy,
                                             ::System::Nullable_1<bool> instaFail, ::System::Nullable_1<bool> failOnSaberClash,
                                             ::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType> enabledObstacleType, ::System::Nullable_1<bool> noBombs,
                                             ::System::Nullable_1<bool> fastNotes, ::System::Nullable_1<bool> strictAngles, ::System::Nullable_1<bool> disappearingArrows,
                                             ::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__SongSpeed> songSpeed, ::System::Nullable_1<bool> noArrows,
                                             ::System::Nullable_1<bool> ghostNotes, ::System::Nullable_1<bool> proMode, ::System::Nullable_1<bool> zenMode, ::System::Nullable_1<bool> smallCubes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "CopyWith", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnergyType>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__EnabledObstacleType>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__GameplayModifiers__SongSpeed>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method, energyType, noFailOn0Energy, instaFail, failOnSaberClash, enabledObstacleType,
                                                                                           noBombs, fastNotes, strictAngles, disappearingArrows, songSpeed, noArrows, ghostNotes, proMode, zenMode,
                                                                                           smallCubes);
}
inline bool GlobalNamespace::GameplayModifiers::IsWithoutModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "IsWithoutModifiers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiers::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::GameplayModifiers*
GlobalNamespace::GameplayModifiers::LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifiers::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayModifiers*>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers::GameplayModifiers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
