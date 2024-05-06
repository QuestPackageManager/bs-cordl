#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPackMasksModel.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SongPackMasksModel__LocalizedText.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SongPackMasksModel__LocalizedText::*)()>(
    &::GlobalNamespace::__SongPackMasksModel__LocalizedText::get_text)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14d824c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get(),
                                                                               "get_text", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPackMasksModel__LocalizedText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPackMasksModel__LocalizedText::*)(::StringW, bool)>(
    &::GlobalNamespace::__SongPackMasksModel__LocalizedText::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x14d7fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__SongPackMasksModel__LocalizedText::setStaticF_empty(::GlobalNamespace::__SongPackMasksModel__LocalizedText value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__SongPackMasksModel__LocalizedText, "empty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get>(
      std::forward<::GlobalNamespace::__SongPackMasksModel__LocalizedText>(value));
}
inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText GlobalNamespace::__SongPackMasksModel__LocalizedText::getStaticF_empty() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__SongPackMasksModel__LocalizedText, "empty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get>();
}
inline ::StringW GlobalNamespace::__SongPackMasksModel__LocalizedText::get_text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get(),
                                                                             "get_text", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SongPackMasksModel__LocalizedText::_ctor(::StringW textKey, bool isPlural) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textKey, isPlural);
}
// Ctor Parameters [CppParam { name: "textKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isPlural", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SongPackMasksModel__LocalizedText::__SongPackMasksModel__LocalizedText(::StringW textKey, bool isPlural) noexcept {
  this->textKey = textKey;
  this->isPlural = isPlural;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongPackMasksModel__LocalizedText::__SongPackMasksModel__LocalizedText() {}
//  Writing Method size for method: ::GlobalNamespace::__SongPackMasksModel__MaskInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPackMasksModel__MaskInfo::*)(
    ::GlobalNamespace::__SongPackMasksModel__LocalizedText, ::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::__SongPackMasksModel__MaskInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x14d7fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMasksModel__MaskInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__SongPackMasksModel__MaskInfo::_ctor(::GlobalNamespace::__SongPackMasksModel__LocalizedText localizedText, ::GlobalNamespace::SongPackMask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMasksModel__MaskInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localizedText, mask);
}
// Ctor Parameters [CppParam { name: "localizedText", ty: "::GlobalNamespace::__SongPackMasksModel__LocalizedText", modifiers: "", def_value: Some("{}") }, CppParam { name: "mask", ty:
// "::GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SongPackMasksModel__MaskInfo::__SongPackMasksModel__MaskInfo(::GlobalNamespace::__SongPackMasksModel__LocalizedText localizedText,
                                                                                            ::GlobalNamespace::SongPackMask mask) noexcept {
  this->localizedText = localizedText;
  this->mask = mask;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongPackMasksModel__MaskInfo::__SongPackMasksModel__MaskInfo() {}
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SongPackMasksModel::*)(::GlobalNamespace::SongPackMasksModelSO*, ::GlobalNamespace::BeatmapLevelsModel*)>(&::GlobalNamespace::SongPackMasksModel::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x14d7720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMasksModel::*)()>(&::GlobalNamespace::SongPackMasksModel::Init)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x14d77c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.ToLocalizedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SongPackMasksModel__LocalizedText (::GlobalNamespace::SongPackMasksModel::*)(::StringW)>(
    &::GlobalNamespace::SongPackMasksModel::ToLocalizedName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x14d7fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToLocalizedName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.ToSongPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::SongPackMasksModel::*)(::StringW)>(
    &::GlobalNamespace::SongPackMasksModel::ToSongPackMask)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x14d7d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToSongPackMask", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.GetSongPackMaskText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SongPackMasksModel__LocalizedText (::GlobalNamespace::SongPackMasksModel::*)(
    ::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::SongPackMasksModel::GetSongPackMaskText)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x14d8084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "GetSongPackMaskText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.ToSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SongPackMasksModel::*)(::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::SongPackMasksModel::ToSerializedName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x14d8120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToSerializedName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO>& GlobalNamespace::SongPackMasksModel::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO> const& GlobalNamespace::SongPackMasksModel::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void GlobalNamespace::SongPackMasksModel::__cordl_internal_set_content(::UnityW<::GlobalNamespace::SongPackMasksModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::SongPackMasksModel::__cordl_internal_get_allSongPackMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allSongPackMask;
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::SongPackMasksModel::__cordl_internal_get_allSongPackMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allSongPackMask;
}
constexpr void GlobalNamespace::SongPackMasksModel::__cordl_internal_set_allSongPackMask(::GlobalNamespace::SongPackMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allSongPackMask = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::SongPackMasksModel::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::SongPackMasksModel::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::SongPackMasksModel::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__MaskInfo>*&
GlobalNamespace::SongPackMasksModel::__cordl_internal_get__songPackSerializedNameToMaskInfoDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackSerializedNameToMaskInfoDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__MaskInfo>*> const&
GlobalNamespace::SongPackMasksModel::__cordl_internal_get__songPackSerializedNameToMaskInfoDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackSerializedNameToMaskInfoDict;
}
constexpr void GlobalNamespace::SongPackMasksModel::__cordl_internal_set__songPackSerializedNameToMaskInfoDict(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__MaskInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackSerializedNameToMaskInfoDict)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*& GlobalNamespace::SongPackMasksModel::__cordl_internal_get__songPackMaskToSerializedNameDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMaskToSerializedNameDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*> const&
GlobalNamespace::SongPackMasksModel::__cordl_internal_get__songPackMaskToSerializedNameDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMaskToSerializedNameDict;
}
constexpr void
GlobalNamespace::SongPackMasksModel::__cordl_internal_set__songPackMaskToSerializedNameDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMaskToSerializedNameDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SongPackMasksModel::setStaticF_kEmptyMaskInfo(::GlobalNamespace::__SongPackMasksModel__MaskInfo value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__SongPackMasksModel__MaskInfo, "kEmptyMaskInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get>(
      std::forward<::GlobalNamespace::__SongPackMasksModel__MaskInfo>(value));
}
inline ::GlobalNamespace::__SongPackMasksModel__MaskInfo GlobalNamespace::SongPackMasksModel::getStaticF_kEmptyMaskInfo() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__SongPackMasksModel__MaskInfo, "kEmptyMaskInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get>();
}
inline ::GlobalNamespace::SongPackMasksModel* GlobalNamespace::SongPackMasksModel::New_ctor(::GlobalNamespace::SongPackMasksModelSO* songPackMasks,
                                                                                            ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SongPackMasksModel*>(songPackMasks, beatmapLevelsModel));
}
inline void GlobalNamespace::SongPackMasksModel::_ctor(::GlobalNamespace::SongPackMasksModelSO* songPackMasks, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songPackMasks, beatmapLevelsModel);
}
inline void GlobalNamespace::SongPackMasksModel::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText GlobalNamespace::SongPackMasksModel::ToLocalizedName(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToLocalizedName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SongPackMasksModel__LocalizedText, false>(this, ___internal_method, serializedName);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMasksModel::ToSongPackMask(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToSongPackMask", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask, false>(this, ___internal_method, serializedName);
}
inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText GlobalNamespace::SongPackMasksModel::GetSongPackMaskText(::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "GetSongPackMaskText", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SongPackMasksModel__LocalizedText, false>(this, ___internal_method, songPackMask);
}
inline ::StringW GlobalNamespace::SongPackMasksModel::ToSerializedName(::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToSerializedName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, songPackMask);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackMasksModel::SongPackMasksModel() {}
