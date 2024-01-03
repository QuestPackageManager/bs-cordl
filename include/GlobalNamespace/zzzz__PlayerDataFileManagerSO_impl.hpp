#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataV1_0_1_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesListSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerDataFileManagerSO::*)(::GlobalNamespace::ISaveData*, ::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::PlayerDataFileManagerSO::Save)> {
  constexpr static std::size_t size = 0x110c;
  constexpr static std::size_t addrs = 0x236d5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "Save", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (
    ::GlobalNamespace::PlayerDataFileManagerSO::*)(::GlobalNamespace::ISaveData*, ::GlobalNamespace::BeatmapCharacteristicCollection*)>(&::GlobalNamespace::PlayerDataFileManagerSO::Load)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x236e6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "Load", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.LoadFromJSONString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (
    ::GlobalNamespace::PlayerDataFileManagerSO::*)(::StringW, ::GlobalNamespace::BeatmapCharacteristicCollection*)>(&::GlobalNamespace::PlayerDataFileManagerSO::LoadFromJSONString)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x236e7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "LoadFromJSONString", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.LoadFromCurrentVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileManagerSO::*)(::GlobalNamespace::PlayerSaveData*, ::GlobalNamespace::BeatmapCharacteristicCollection*)>(
        &::GlobalNamespace::PlayerDataFileManagerSO::LoadFromCurrentVersion)> {
  constexpr static std::size_t size = 0x1190;
  constexpr static std::size_t addrs = 0x236f610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "LoadFromCurrentVersion", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.LoadFromVersionV1_0_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileManagerSO::*)(::GlobalNamespace::PlayerSaveDataV1_0_1*, ::GlobalNamespace::BeatmapCharacteristicCollection*)>(
        &::GlobalNamespace::PlayerDataFileManagerSO::LoadFromVersionV1_0_1)> {
  constexpr static std::size_t size = 0xb88;
  constexpr static std::size_t addrs = 0x236ea88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "LoadFromVersionV1_0_1", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveDataV1_0_1*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.CreateDefaultPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileManagerSO::*)()>(
    &::GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultPlayerData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x236e990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(),
                                                                               "CreateDefaultPlayerData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.GetLevelIdFromV_1_0_1LevelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*)>(
    &::GlobalNamespace::PlayerDataFileManagerSO::GetLevelIdFromV_1_0_1LevelId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2370c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "GetLevelIdFromV_1_0_1LevelId", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.GetBeatmapCharacteristicFromV_1_0_1LevelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (*)(::GlobalNamespace::BeatmapCharacteristicCollection*, ::StringW)>(
    &::GlobalNamespace::PlayerDataFileManagerSO::GetBeatmapCharacteristicFromV_1_0_1LevelId)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x23708d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "GetBeatmapCharacteristicFromV_1_0_1LevelId", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.CreateDefaultOverrideEnvironmentSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OverrideEnvironmentSettings* (::GlobalNamespace::PlayerDataFileManagerSO::*)()>(
    &::GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultOverrideEnvironmentSettings)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23707a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(),
                                                                               "CreateDefaultOverrideEnvironmentSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.GetEnvironmentInfoBySerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (::GlobalNamespace::PlayerDataFileManagerSO::*)(::StringW)>(
    &::GlobalNamespace::PlayerDataFileManagerSO::GetEnvironmentInfoBySerializedName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2370cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "GetEnvironmentInfoBySerializedName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.LoadCorrectedSongPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayerDataFileManagerSO::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::PlayerDataFileManagerSO::LoadCorrectedSongPackMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2370850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "LoadCorrectedSongPackMask", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerDataFileManagerSO::*)()>(&::GlobalNamespace::PlayerDataFileManagerSO::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2370cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorSchemesListSO*& GlobalNamespace::PlayerDataFileManagerSO::__get__defaultColorSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColorSchemes;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemesListSO*> const& GlobalNamespace::PlayerDataFileManagerSO::__get__defaultColorSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColorSchemes;
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__defaultColorSchemes(::GlobalNamespace::ColorSchemesListSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultColorSchemes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentsListSO*& GlobalNamespace::PlayerDataFileManagerSO::__get__allEnvironmentInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allEnvironmentInfos;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListSO*> const& GlobalNamespace::PlayerDataFileManagerSO::__get__allEnvironmentInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allEnvironmentInfos;
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__allEnvironmentInfos(::GlobalNamespace::EnvironmentsListSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allEnvironmentInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentTypeSO*& GlobalNamespace::PlayerDataFileManagerSO::__get__normalEnvironmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalEnvironmentType;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentTypeSO*> const& GlobalNamespace::PlayerDataFileManagerSO::__get__normalEnvironmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalEnvironmentType;
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__normalEnvironmentType(::GlobalNamespace::EnvironmentTypeSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalEnvironmentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentTypeSO*& GlobalNamespace::PlayerDataFileManagerSO::__get__a360DegreesEnvironmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____a360DegreesEnvironmentType;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentTypeSO*> const& GlobalNamespace::PlayerDataFileManagerSO::__get__a360DegreesEnvironmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____a360DegreesEnvironmentType;
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__a360DegreesEnvironmentType(::GlobalNamespace::EnvironmentTypeSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____a360DegreesEnvironmentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::PlayerDataFileManagerSO::__get__defaultLastSelectedBeatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLastSelectedBeatmapCharacteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& GlobalNamespace::PlayerDataFileManagerSO::__get__defaultLastSelectedBeatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLastSelectedBeatmapCharacteristic;
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__defaultLastSelectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultLastSelectedBeatmapCharacteristic)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerDataFileManagerSO::__get__buildInSongPackSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildInSongPackSerializedName;
}
constexpr ::StringW const& GlobalNamespace::PlayerDataFileManagerSO::__get__buildInSongPackSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildInSongPackSerializedName;
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__buildInSongPackSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buildInSongPackSerializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerDataFileManagerSO::__get__allSongPackSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allSongPackSerializedName;
}
constexpr ::StringW const& GlobalNamespace::PlayerDataFileManagerSO::__get__allSongPackSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allSongPackSerializedName;
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__allSongPackSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allSongPackSerializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerDataFileManagerSO::setStaticF__lastVersionWithoutSavedCustomColorSchemeBoostColors(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "_lastVersionWithoutSavedCustomColorSchemeBoostColors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get>(std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::PlayerDataFileManagerSO::getStaticF__lastVersionWithoutSavedCustomColorSchemeBoostColors() {
  return ::cordl_internals::getStaticField<::System::Version*, "_lastVersionWithoutSavedCustomColorSchemeBoostColors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get>();
}
inline void GlobalNamespace::PlayerDataFileManagerSO::setStaticF__eulaUpdateVersion(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "_eulaUpdateVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get>(
      std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::PlayerDataFileManagerSO::getStaticF__eulaUpdateVersion() {
  return ::cordl_internals::getStaticField<::System::Version*, "_eulaUpdateVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get>();
}
inline void GlobalNamespace::PlayerDataFileManagerSO::setStaticF__lastVersionWithoutArcsOptions(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "_lastVersionWithoutArcsOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get>(
      std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::PlayerDataFileManagerSO::getStaticF__lastVersionWithoutArcsOptions() {
  return ::cordl_internals::getStaticField<::System::Version*, "_lastVersionWithoutArcsOptions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get>();
}
inline void GlobalNamespace::PlayerDataFileManagerSO::Save(::GlobalNamespace::ISaveData* saveData, ::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "Save", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveData, playerData);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileManagerSO::Load(::GlobalNamespace::ISaveData* saveData,
                                                                                     ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "Load", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method, saveData, beatmapCharacteristicCollection);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileManagerSO::LoadFromJSONString(::StringW jsonString,
                                                                                                   ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "LoadFromJSONString", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method, jsonString, beatmapCharacteristicCollection);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileManagerSO::LoadFromCurrentVersion(::GlobalNamespace::PlayerSaveData* playerSaveData,
                                                                                                       ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "LoadFromCurrentVersion", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method, playerSaveData, beatmapCharacteristicCollection);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileManagerSO::LoadFromVersionV1_0_1(::GlobalNamespace::PlayerSaveDataV1_0_1* playerDataModelSaveData,
                                                                                                      ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "LoadFromVersionV1_0_1", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveDataV1_0_1*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method, playerDataModelSaveData, beatmapCharacteristicCollection);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultPlayerData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(),
                                                                             "CreateDefaultPlayerData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayerDataFileManagerSO::GetLevelIdFromV_1_0_1LevelId(::StringW oldLevelId, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "GetLevelIdFromV_1_0_1LevelId", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oldLevelId, beatmapCharacteristic);
}
inline ::GlobalNamespace::BeatmapCharacteristicSO*
GlobalNamespace::PlayerDataFileManagerSO::GetBeatmapCharacteristicFromV_1_0_1LevelId(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "GetBeatmapCharacteristicFromV_1_0_1LevelId", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO*, false>(nullptr, ___internal_method, beatmapCharacteristicCollection, levelId);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultOverrideEnvironmentSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(),
                                                                             "CreateDefaultOverrideEnvironmentSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OverrideEnvironmentSettings*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::PlayerDataFileManagerSO::GetEnvironmentInfoBySerializedName(::StringW environmentName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "GetEnvironmentInfoBySerializedName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(this, ___internal_method, environmentName);
}
inline ::StringW GlobalNamespace::PlayerDataFileManagerSO::LoadCorrectedSongPackMask(::ArrayW<uint8_t, ::Array<uint8_t>*> songMaskPackBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), "LoadCorrectedSongPackMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, songMaskPackBytes);
}
inline ::GlobalNamespace::PlayerDataFileManagerSO* GlobalNamespace::PlayerDataFileManagerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerDataFileManagerSO*>());
}
inline void GlobalNamespace::PlayerDataFileManagerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileManagerSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataFileManagerSO::PlayerDataFileManagerSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
