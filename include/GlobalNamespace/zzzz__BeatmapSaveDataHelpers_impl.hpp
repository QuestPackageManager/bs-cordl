#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapSaveDataHelpers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSaveDataHelpers_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData.get_v
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::*)()>(
    &::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::get_v)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe05124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*>::get(), "get_v",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::*)()>(
    &::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe05154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__set__version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::get_v() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*>::get(), "get_v",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData* GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*>());
}
inline void GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__BeatmapSaveDataHelpers__VersionSerializedData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapSaveDataHelpers.GetVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)(::StringW)>(&::GlobalNamespace::BeatmapSaveDataHelpers::GetVersion)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe05078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSaveDataHelpers*>::get(), "GetVersion", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::Version* GlobalNamespace::BeatmapSaveDataHelpers::GetVersion(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSaveDataHelpers*>::get(), "GetVersion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapSaveDataHelpers::BeatmapSaveDataHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
