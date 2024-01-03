#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelItem_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_defaultSongPackMaskItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::SongPackMasksModelSO::*)()>(
    &::GlobalNamespace::SongPackMasksModelSO::get_defaultSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236461c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                               "get_defaultSongPackMaskItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_customSongPackMaskItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> (
    ::GlobalNamespace::SongPackMasksModelSO::*)()>(&::GlobalNamespace::SongPackMasksModelSO::get_customSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2364624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                               "get_customSongPackMaskItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_ostAndExtrasCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPackCollectionSO* (::GlobalNamespace::SongPackMasksModelSO::*)()>(
    &::GlobalNamespace::SongPackMasksModelSO::get_ostAndExtrasCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236462c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                               "get_ostAndExtrasCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_dlcCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPackCollectionSO* (::GlobalNamespace::SongPackMasksModelSO::*)()>(
    &::GlobalNamespace::SongPackMasksModelSO::get_dlcCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2364634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                               "get_dlcCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMasksModelSO::*)()>(&::GlobalNamespace::SongPackMasksModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236463c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::SongPackMasksModelSO::__get__defaultSongPackMaskItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSongPackMaskItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::SongPackMasksModelSO::__get__defaultSongPackMaskItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSongPackMaskItems;
}
constexpr void GlobalNamespace::SongPackMasksModelSO::__set__defaultSongPackMaskItems(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultSongPackMaskItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*>& GlobalNamespace::SongPackMasksModelSO::__get__customSongPackMaskItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSongPackMaskItems;
}
constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> const&
GlobalNamespace::SongPackMasksModelSO::__get__customSongPackMaskItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSongPackMaskItems;
}
constexpr void GlobalNamespace::SongPackMasksModelSO::__set__customSongPackMaskItems(::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customSongPackMaskItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& GlobalNamespace::SongPackMasksModelSO::__get__ostAndExtrasCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ostAndExtrasCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& GlobalNamespace::SongPackMasksModelSO::__get__ostAndExtrasCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ostAndExtrasCollection;
}
constexpr void GlobalNamespace::SongPackMasksModelSO::__set__ostAndExtrasCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ostAndExtrasCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& GlobalNamespace::SongPackMasksModelSO::__get__dlcCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& GlobalNamespace::SongPackMasksModelSO::__get__dlcCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcCollection;
}
constexpr void GlobalNamespace::SongPackMasksModelSO::__set__dlcCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::SongPackMasksModelSO::get_defaultSongPackMaskItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                             "get_defaultSongPackMaskItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> GlobalNamespace::SongPackMasksModelSO::get_customSongPackMaskItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                             "get_customSongPackMaskItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::SongPackMasksModelSO::get_ostAndExtrasCollection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                             "get_ostAndExtrasCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPackCollectionSO*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::SongPackMasksModelSO::get_dlcCollection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                             "get_dlcCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPackCollectionSO*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMasksModelSO* GlobalNamespace::SongPackMasksModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongPackMasksModelSO*>());
}
inline void GlobalNamespace::SongPackMasksModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackMasksModelSO::SongPackMasksModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
