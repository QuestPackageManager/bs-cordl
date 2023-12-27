#pragma once
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "Polyglot/zzzz__Language_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SongPackMasksModel__LocalizedText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPackMasksModel__LocalizedText::*)(::StringW, bool)>(
    &::GlobalNamespace::__SongPackMasksModel__LocalizedText::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2364000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
inline void GlobalNamespace::__SongPackMasksModel__LocalizedText::_ctor(::StringW text, bool isPlural) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMasksModel__LocalizedText>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, isPlural);
}
// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isPlural", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SongPackMasksModel__LocalizedText::__SongPackMasksModel__LocalizedText(::StringW text, bool isPlural) noexcept {
  this->text = text;
  this->isPlural = isPlural;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongPackMasksModel__LocalizedText::__SongPackMasksModel__LocalizedText() {}
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMasksModel::*)(::GlobalNamespace::SongPackMasksModelSO*)>(
    &::GlobalNamespace::SongPackMasksModel::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2363478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMasksModelSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMasksModel::*)()>(&::GlobalNamespace::SongPackMasksModel::Init)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x236350c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.GetSongPackMaskText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SongPackMasksModel__LocalizedText (::GlobalNamespace::SongPackMasksModel::*)(
    ByRef<::GlobalNamespace::SongPackMask>)>(&::GlobalNamespace::SongPackMasksModel::GetSongPackMaskText)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2364010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "GetSongPackMaskText", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.ToLocalizedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SongPackMasksModel__LocalizedText (::GlobalNamespace::SongPackMasksModel::*)(::StringW)>(
    &::GlobalNamespace::SongPackMasksModel::ToLocalizedName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2364130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToLocalizedName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.TryGetSongPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SongPackMasksModel::*)(::StringW, ByRef<::GlobalNamespace::SongPackMask>)>(
    &::GlobalNamespace::SongPackMasksModel::TryGetSongPackMask)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23641dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "TryGetSongPackMask", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.ToSongPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::SongPackMasksModel::*)(::StringW)>(
    &::GlobalNamespace::SongPackMasksModel::ToSongPackMask)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2363b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToSongPackMask", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.TryGetSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SongPackMasksModel::*)(::GlobalNamespace::SongPackMask, ByRef<::StringW>)>(
    &::GlobalNamespace::SongPackMasksModel::TryGetSerializedName)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23640a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "TryGetSerializedName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.ToSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SongPackMasksModel::*)(::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::SongPackMasksModel::ToSerializedName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2364244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToSerializedName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SongPackMasksModelSO*& GlobalNamespace::SongPackMasksModel::__get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___content;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModelSO*> const& GlobalNamespace::SongPackMasksModel::__get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___content;
}
constexpr void GlobalNamespace::SongPackMasksModel::__set_content(::GlobalNamespace::SongPackMasksModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::SongPackMasksModel::__get_allSongPackMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allSongPackMask;
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::SongPackMasksModel::__get_allSongPackMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allSongPackMask;
}
constexpr void GlobalNamespace::SongPackMasksModel::__set_allSongPackMask(::GlobalNamespace::SongPackMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___allSongPackMask = value;
}
constexpr ::Polyglot::Language& GlobalNamespace::SongPackMasksModel::__get__currentLocalizedLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentLocalizedLanguage;
}
constexpr ::Polyglot::Language const& GlobalNamespace::SongPackMasksModel::__get__currentLocalizedLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentLocalizedLanguage;
}
constexpr void GlobalNamespace::SongPackMasksModel::__set__currentLocalizedLanguage(::Polyglot::Language value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____currentLocalizedLanguage = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__LocalizedText>*&
GlobalNamespace::SongPackMasksModel::__get__songPackSerializedNameToLocalizedNameDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPackSerializedNameToLocalizedNameDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__LocalizedText>*> const&
GlobalNamespace::SongPackMasksModel::__get__songPackSerializedNameToLocalizedNameDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPackSerializedNameToLocalizedNameDict;
}
constexpr void GlobalNamespace::SongPackMasksModel::__set__songPackSerializedNameToLocalizedNameDict(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__LocalizedText>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackSerializedNameToLocalizedNameDict)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*& GlobalNamespace::SongPackMasksModel::__get__songPackSerializedNameToMaskDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPackSerializedNameToMaskDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*> const&
GlobalNamespace::SongPackMasksModel::__get__songPackSerializedNameToMaskDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPackSerializedNameToMaskDict;
}
constexpr void GlobalNamespace::SongPackMasksModel::__set__songPackSerializedNameToMaskDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackSerializedNameToMaskDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*& GlobalNamespace::SongPackMasksModel::__get__songPackMaskToSerializedNameDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPackMaskToSerializedNameDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*> const&
GlobalNamespace::SongPackMasksModel::__get__songPackMaskToSerializedNameDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPackMaskToSerializedNameDict;
}
constexpr void GlobalNamespace::SongPackMasksModel::__set__songPackMaskToSerializedNameDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMaskToSerializedNameDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SongPackMasksModel* GlobalNamespace::SongPackMasksModel::New_ctor(::GlobalNamespace::SongPackMasksModelSO* songPackMasks) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongPackMasksModel*>(songPackMasks));
}
inline void GlobalNamespace::SongPackMasksModel::_ctor(::GlobalNamespace::SongPackMasksModelSO* songPackMasks) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMasksModelSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songPackMasks);
}
inline void GlobalNamespace::SongPackMasksModel::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText GlobalNamespace::SongPackMasksModel::GetSongPackMaskText(ByRef<::GlobalNamespace::SongPackMask> songPackMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "GetSongPackMaskText", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SongPackMasksModel__LocalizedText, false>(this, ___internal_method, songPackMask);
}
inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText GlobalNamespace::SongPackMasksModel::ToLocalizedName(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToLocalizedName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SongPackMasksModel__LocalizedText, false>(this, ___internal_method, serializedName);
}
inline bool GlobalNamespace::SongPackMasksModel::TryGetSongPackMask(::StringW serializedName, ByRef<::GlobalNamespace::SongPackMask> songPackMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "TryGetSongPackMask", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, serializedName, songPackMask);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMasksModel::ToSongPackMask(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToSongPackMask", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask, false>(this, ___internal_method, serializedName);
}
inline bool GlobalNamespace::SongPackMasksModel::TryGetSerializedName(::GlobalNamespace::SongPackMask songPackMask, ByRef<::StringW> serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "TryGetSerializedName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, songPackMask, serializedName);
}
inline ::StringW GlobalNamespace::SongPackMasksModel::ToSerializedName(::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "ToSerializedName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, songPackMask);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackMasksModel::SongPackMasksModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
