#pragma once
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMaskModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMasksModel::*)(::GlobalNamespace::SongPackMaskModelSO*)>(
    &::GlobalNamespace::SongPackMasksModel::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22153d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMaskModelSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.GetAllSongsMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::SongPackMasksModel::*)()>(
    &::GlobalNamespace::SongPackMasksModel::GetAllSongsMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2215450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "GetAllSongsMask",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.GetSongPackMaskText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SongPackMasksModel::*)(ByRef<::GlobalNamespace::SongPackMask>)>(
    &::GlobalNamespace::SongPackMasksModel::GetSongPackMaskText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x221545c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "GetSongPackMaskText", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModel.GetSongPackMaskText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SongPackMasksModel::*)(ByRef<::GlobalNamespace::SongPackMask>, ByRef<bool>)>(
    &::GlobalNamespace::SongPackMasksModel::GetSongPackMaskText)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2215474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "GetSongPackMaskText", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SongPackMaskModelSO*& GlobalNamespace::SongPackMasksModel::__get__songPackMaskModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMaskModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMaskModelSO*> const& GlobalNamespace::SongPackMasksModel::__get__songPackMaskModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMaskModel;
}
constexpr void GlobalNamespace::SongPackMasksModel::__set__songPackMaskModel(::GlobalNamespace::SongPackMaskModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMaskModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::SongPackMasksModel::__get__allSongPackMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allSongPackMask;
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::SongPackMasksModel::__get__allSongPackMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allSongPackMask;
}
constexpr void GlobalNamespace::SongPackMasksModel::__set__allSongPackMask(::GlobalNamespace::SongPackMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allSongPackMask = value;
}
inline ::GlobalNamespace::SongPackMasksModel* GlobalNamespace::SongPackMasksModel::New_ctor(::GlobalNamespace::SongPackMaskModelSO* songPackMasks) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongPackMasksModel*>(songPackMasks));
}
inline void GlobalNamespace::SongPackMasksModel::_ctor(::GlobalNamespace::SongPackMaskModelSO* songPackMasks) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMaskModelSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songPackMasks);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMasksModel::GetAllSongsMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "GetAllSongsMask",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SongPackMasksModel::GetSongPackMaskText(ByRef<::GlobalNamespace::SongPackMask> songPackMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "GetSongPackMaskText", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, songPackMask);
}
inline ::StringW GlobalNamespace::SongPackMasksModel::GetSongPackMaskText(ByRef<::GlobalNamespace::SongPackMask> songPackMask, ByRef<bool> plural) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModel*>::get(), "GetSongPackMaskText", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, songPackMask, plural);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackMasksModel::SongPackMasksModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
