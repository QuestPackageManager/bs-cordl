#pragma once
// IWYU pragma private; include "GlobalNamespace/BlockLevelGameplayAnalyticsEventsCache.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BlockLevelGameplayAnalyticsEventsCache_def.hpp"
#include "GlobalNamespace/zzzz__BlockLevelGameplayAnalyticsEventsCache_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__IBlockLevelGameplayAnalyticsEventsCache_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData::*)(float_t, float_t, uint8_t, uint8_t, ::System::Nullable_1<uint8_t>, ::System::Nullable_1<uint8_t>)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58ba7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData.WriteFieldsToJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData::*)(::Newtonsoft::Json::JsonWriter*)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData::WriteFieldsToJson)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58bba1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>::get(),
                        "WriteFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData::_ctor(float_t  beat, float_t  score, uint8_t  colorType, uint8_t  gameplayType, ::System::Nullable_1<uint8_t>  lineIndex, ::System::Nullable_1<uint8_t>  lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, score, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData::WriteFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>::get(),
                        "WriteFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonWriter);
}
// Ctor Parameters [CppParam { name: "Beat", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Score", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ColorType", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "GameplayType", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LineIndex", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "LineLayer", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData(float_t  Beat, float_t  Score, uint8_t  ColorType, uint8_t  GameplayType, ::System::Nullable_1<uint8_t>  LineIndex, ::System::Nullable_1<uint8_t>  LineLayer) noexcept  {
this->Beat = Beat;
this->Score = Score;
this->ColorType = ColorType;
this->GameplayType = GameplayType;
this->LineIndex = LineIndex;
this->LineLayer = LineLayer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData()   {
}
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData::*)(float_t, uint8_t, uint8_t, uint8_t, ::System::Nullable_1<uint8_t>, ::System::Nullable_1<uint8_t>)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58ba9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData.WriteFieldsToJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData::*)(::Newtonsoft::Json::JsonWriter*)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData::WriteFieldsToJson)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58bb97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>::get(),
                        "WriteFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData::_ctor(float_t  beat, uint8_t  failReason, uint8_t  colorType, uint8_t  gameplayType, ::System::Nullable_1<uint8_t>  lineIndex, ::System::Nullable_1<uint8_t>  lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, failReason, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData::WriteFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>::get(),
                        "WriteFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonWriter);
}
// Ctor Parameters [CppParam { name: "Beat", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FailReason", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ColorType", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "GameplayType", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LineIndex", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "LineLayer", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData(float_t  Beat, uint8_t  FailReason, uint8_t  ColorType, uint8_t  GameplayType, ::System::Nullable_1<uint8_t>  LineIndex, ::System::Nullable_1<uint8_t>  LineLayer) noexcept  {
this->Beat = Beat;
this->FailReason = FailReason;
this->ColorType = ColorType;
this->GameplayType = GameplayType;
this->LineIndex = LineIndex;
this->LineLayer = LineLayer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData()   {
}
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData::*)(float_t, uint8_t, uint8_t, ::System::Nullable_1<uint8_t>, ::System::Nullable_1<uint8_t>)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58bab58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData.WriteFieldsToJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData::*)(::Newtonsoft::Json::JsonWriter*)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData::WriteFieldsToJson)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58bb80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>::get(),
                        "WriteFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData::_ctor(float_t  beat, uint8_t  colorType, uint8_t  gameplayType, ::System::Nullable_1<uint8_t>  lineIndex, ::System::Nullable_1<uint8_t>  lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData::WriteFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>::get(),
                        "WriteFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonWriter);
}
// Ctor Parameters [CppParam { name: "Beat", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ColorType", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "GameplayType", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LineIndex", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "LineLayer", ty: "::System::Nullable_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData(float_t  Beat, uint8_t  ColorType, uint8_t  GameplayType, ::System::Nullable_1<uint8_t>  LineIndex, ::System::Nullable_1<uint8_t>  LineLayer) noexcept  {
this->Beat = Beat;
this->ColorType = ColorType;
this->GameplayType = GameplayType;
this->LineIndex = LineIndex;
this->LineLayer = LineLayer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData()   {
}
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData::*)(float_t)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bbce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData.WriteFieldsToJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData::*)(::Newtonsoft::Json::JsonWriter*)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData::WriteFieldsToJson)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58bb82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>::get(),
                        "WriteFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData::_ctor(float_t  beat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData::WriteFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>::get(),
                        "WriteFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonWriter);
}
// Ctor Parameters [CppParam { name: "Beat", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData::BlockLevelGameplayAnalyticsEventsCache_BombHitData(float_t  Beat) noexcept  {
this->Beat = Beat;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData::BlockLevelGameplayAnalyticsEventsCache_BombHitData()   {
}
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData::*)(float_t, float_t)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bace0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData.WriteFieldsToJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData::*)(::Newtonsoft::Json::JsonWriter*)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData::WriteFieldsToJson)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58bb8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>::get(),
                        "WriteFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData::_ctor(float_t  beat, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, duration);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData::WriteFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>::get(),
                        "WriteFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonWriter);
}
// Ctor Parameters [CppParam { name: "Beat", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData(float_t  Beat, float_t  Duration) noexcept  {
this->Beat = Beat;
this->Duration = Duration;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData()   {
}
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x58ba498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.AddGoodCut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)(float_t, float_t, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteData_GameplayType, ::System::Nullable_1<int32_t>, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::AddGoodCut)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x58ba668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "AddGoodCut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.AddBadCut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)(float_t, ::GlobalNamespace::NoteCutInfo_FailReason, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteData_GameplayType, ::System::Nullable_1<int32_t>, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::AddBadCut)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x58ba804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "AddBadCut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfo_FailReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.AddBlockMiss
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)(float_t, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteData_GameplayType, ::System::Nullable_1<int32_t>, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::AddBlockMiss)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x58ba9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "AddBlockMiss",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.AddBombCut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)(float_t)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::AddBombCut)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58bab70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "AddBombCut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.AddObstacleHit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)(float_t, float_t)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::AddObstacleHit)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58bac24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "AddObstacleHit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.SerializeJSON
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)()>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::SerializeJSON)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x58bace8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "SerializeJSON",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.IsEmpty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)()>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::IsEmpty)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x58bb710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "IsEmpty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.WriteMissedBlocksArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)(::Newtonsoft::Json::JsonTextWriter*, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteMissedBlocksArray)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x58bb240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteMissedBlocksArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.WriteBombsHitArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)(::Newtonsoft::Json::JsonTextWriter*, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteBombsHitArray)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x58bb3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteBombsHitArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.WriteObstaclesHitArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)(::Newtonsoft::Json::JsonTextWriter*, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteObstaclesHitArray)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x58bb57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteObstaclesHitArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.WriteBadHitBlocksArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::*)(::Newtonsoft::Json::JsonTextWriter*, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteBadHitBlocksArray)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x58bb0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteBadHitBlocksArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.WriteGoodCutsArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Newtonsoft::Json::JsonTextWriter*, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteGoodCutsArray)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x58baf0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteGoodCutsArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache.WriteCommonBlockFieldsToJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Newtonsoft::Json::JsonWriter*, float_t, uint8_t, uint8_t, ::System::Nullable_1<uint8_t>, ::System::Nullable_1<uint8_t>)>(&::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteCommonBlockFieldsToJson)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x58bbabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteCommonBlockFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*& GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_get__goodCuts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____goodCuts;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>* const& GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_get__goodCuts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____goodCuts;
}
constexpr void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_set__goodCuts(::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____goodCuts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*& GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_get__badCuts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____badCuts;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>* const& GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_get__badCuts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____badCuts;
}
constexpr void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_set__badCuts(::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____badCuts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*& GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_get__missedBlocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missedBlocks;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>* const& GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_get__missedBlocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missedBlocks;
}
constexpr void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_set__missedBlocks(::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missedBlocks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*& GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_get__bombHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bombHits;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>* const& GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_get__bombHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bombHits;
}
constexpr void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_set__bombHits(::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombHits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*& GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_get__obstacleHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____obstacleHits;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>* const& GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_get__obstacleHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____obstacleHits;
}
constexpr void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::__cordl_internal_set__obstacleHits(::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleHits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::_ctor(int32_t  maxBlocks, int32_t  maxBombs, int32_t  maxObstacles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxBlocks, maxBombs, maxObstacles);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::AddGoodCut(float_t  beat, float_t  score, ::GlobalNamespace::ColorType  colorType, ::GlobalNamespace::NoteData_GameplayType  gameplayType, ::System::Nullable_1<int32_t>  lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>  lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "AddGoodCut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, score, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::AddBadCut(float_t  beat, ::GlobalNamespace::NoteCutInfo_FailReason  failReason, ::GlobalNamespace::ColorType  colorType, ::GlobalNamespace::NoteData_GameplayType  gameplayType, ::System::Nullable_1<int32_t>  lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>  lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "AddBadCut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfo_FailReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, failReason, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::AddBlockMiss(float_t  beat, ::GlobalNamespace::ColorType  colorType, ::GlobalNamespace::NoteData_GameplayType  gameplayType, ::System::Nullable_1<int32_t>  lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>  lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "AddBlockMiss",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, colorType, gameplayType, lineIndex, lineLayer);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::AddBombCut(float_t  beat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "AddBombCut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::AddObstacleHit(float_t  beat, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "AddObstacleHit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, duration);
}
inline ::StringW GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::SerializeJSON()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "SerializeJSON",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "IsEmpty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteMissedBlocksArray(::Newtonsoft::Json::JsonTextWriter*  jsonWriter, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*  missedBlocks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteMissedBlocksArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_MissedBlockData>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonWriter, missedBlocks);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteBombsHitArray(::Newtonsoft::Json::JsonTextWriter*  jsonWriter, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*  bombHits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteBombsHitArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BombHitData>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonWriter, bombHits);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteObstaclesHitArray(::Newtonsoft::Json::JsonTextWriter*  jsonWriter, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*  obstacleHits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteObstaclesHitArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_ObstacleHitData>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonWriter, obstacleHits);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteBadHitBlocksArray(::Newtonsoft::Json::JsonTextWriter*  jsonWriter, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*  blocks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteBadHitBlocksArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_BadHitBlockData>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonWriter, blocks);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteGoodCutsArray(::Newtonsoft::Json::JsonTextWriter*  jsonWriter, ::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*  blocks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteGoodCutsArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache_GoodHitBlockData>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jsonWriter, blocks);
}
inline void GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::WriteCommonBlockFieldsToJson(::Newtonsoft::Json::JsonWriter*  jsonWriter, float_t  beat, uint8_t  colorType, uint8_t  gameplayType, ::System::Nullable_1<uint8_t>  lineIndex, ::System::Nullable_1<uint8_t>  lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>::get(),
                        "WriteCommonBlockFieldsToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jsonWriter, beat, colorType, gameplayType, lineIndex, lineLayer);
}
inline ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache* GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::New_ctor(int32_t  maxBlocks, int32_t  maxBombs, int32_t  maxObstacles)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache*>(maxBlocks, maxBombs, maxObstacles));
}
/// @brief Convert operator to "::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache"
constexpr  GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::operator ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*() noexcept {
return static_cast<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache"
constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::i___GlobalNamespace__IBlockLevelGameplayAnalyticsEventsCache() noexcept {
return static_cast<::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlockLevelGameplayAnalyticsEventsCache::BlockLevelGameplayAnalyticsEventsCache()   {
}
