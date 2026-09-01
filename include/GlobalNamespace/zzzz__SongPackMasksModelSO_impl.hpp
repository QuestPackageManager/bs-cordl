#pragma once
// IWYU pragma private; include "GlobalNamespace\SongPackMasksModelSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelItem_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelItem_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_defaultSongPackMaskItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::SongPackMasksModelSO::*)()>(
    &::GlobalNamespace::SongPackMasksModelSO::get_defaultSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373f1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMasksModelSO*>(), { "get_defaultSongPackMaskItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_customSongPackMaskItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*> (::GlobalNamespace::SongPackMasksModelSO::*)()>(
    &::GlobalNamespace::SongPackMasksModelSO::get_customSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373f1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMasksModelSO*>(), { "get_customSongPackMaskItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPackMasksModelSO::*)()>(&::GlobalNamespace::SongPackMasksModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373f1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMasksModelSO*>(), { ".ctor", {}, {} })));
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
  this->____defaultSongPackMaskItems = value;
}
constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*>& GlobalNamespace::SongPackMasksModelSO::__cordl_internal_get__customSongPackMaskItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSongPackMaskItems;
}
constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*> const& GlobalNamespace::SongPackMasksModelSO::__cordl_internal_get__customSongPackMaskItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSongPackMaskItems;
}
constexpr void GlobalNamespace::SongPackMasksModelSO::__cordl_internal_set__customSongPackMaskItems(::ArrayW<::GlobalNamespace::SongPackMasksModelItem*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customSongPackMaskItems = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::SongPackMasksModelSO::get_defaultSongPackMaskItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMasksModelSO*>(), { "get_defaultSongPackMaskItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*> GlobalNamespace::SongPackMasksModelSO::get_customSongPackMaskItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMasksModelSO*>(), { "get_customSongPackMaskItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*>>(this, ___internal_method);
}
inline void GlobalNamespace::SongPackMasksModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMasksModelSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMasksModelSO* GlobalNamespace::SongPackMasksModelSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongPackMasksModelSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackMasksModelSO::SongPackMasksModelSO() {}
