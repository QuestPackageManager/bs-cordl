#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPackMasksModelSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelItem_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_defaultSongPackMaskItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::SongPackMasksModelSO::*)()>(
    &::GlobalNamespace::SongPackMasksModelSO::get_defaultSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e493c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                               "get_defaultSongPackMaskItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_customSongPackMaskItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> (
    ::GlobalNamespace::SongPackMasksModelSO::*)()>(&::GlobalNamespace::SongPackMasksModelSO::get_customSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e4944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                               "get_customSongPackMaskItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMasksModelSO::*)()>(&::GlobalNamespace::SongPackMasksModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e494c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::SongPackMasksModelSO::__cordl_internal_get__defaultSongPackMaskItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSongPackMaskItems;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::SongPackMasksModelSO::__cordl_internal_get__defaultSongPackMaskItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSongPackMaskItems;
}
constexpr void GlobalNamespace::SongPackMasksModelSO::__cordl_internal_set__defaultSongPackMaskItems(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultSongPackMaskItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*>&
GlobalNamespace::SongPackMasksModelSO::__cordl_internal_get__customSongPackMaskItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSongPackMaskItems;
}
constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> const&
GlobalNamespace::SongPackMasksModelSO::__cordl_internal_get__customSongPackMaskItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSongPackMaskItems;
}
constexpr void
GlobalNamespace::SongPackMasksModelSO::__cordl_internal_set__customSongPackMaskItems(::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customSongPackMaskItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::SongPackMasksModelSO::get_defaultSongPackMaskItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                             "get_defaultSongPackMaskItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> GlobalNamespace::SongPackMasksModelSO::get_customSongPackMaskItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                                                                             "get_customSongPackMaskItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPackMasksModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMasksModelSO* GlobalNamespace::SongPackMasksModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SongPackMasksModelSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackMasksModelSO::SongPackMasksModelSO() {}
