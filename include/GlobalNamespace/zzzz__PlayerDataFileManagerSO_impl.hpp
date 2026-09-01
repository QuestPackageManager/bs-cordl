#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerDataFileManagerSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileManagerSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.get_buildInSongPackSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerDataFileManagerSO::*)()>(&::GlobalNamespace::PlayerDataFileManagerSO::get_buildInSongPackSerializedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3748aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileManagerSO*>(), { "get_buildInSongPackSerializedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO.get_allSongPackSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerDataFileManagerSO::*)()>(&::GlobalNamespace::PlayerDataFileManagerSO::get_allSongPackSerializedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3748ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileManagerSO*>(), { "get_allSongPackSerializedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileManagerSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataFileManagerSO::*)()>(&::GlobalNamespace::PlayerDataFileManagerSO::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3748abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileManagerSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerDataFileManagerSO::__cordl_internal_get__buildInSongPackSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildInSongPackSerializedName;
}
constexpr ::StringW const& GlobalNamespace::PlayerDataFileManagerSO::__cordl_internal_get__buildInSongPackSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildInSongPackSerializedName;
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__cordl_internal_set__buildInSongPackSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buildInSongPackSerializedName = value;
}
constexpr ::StringW& GlobalNamespace::PlayerDataFileManagerSO::__cordl_internal_get__allSongPackSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allSongPackSerializedName;
}
constexpr ::StringW const& GlobalNamespace::PlayerDataFileManagerSO::__cordl_internal_get__allSongPackSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allSongPackSerializedName;
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__cordl_internal_set__allSongPackSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allSongPackSerializedName = value;
}
inline ::StringW GlobalNamespace::PlayerDataFileManagerSO::get_buildInSongPackSerializedName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileManagerSO*>(), { "get_buildInSongPackSerializedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayerDataFileManagerSO::get_allSongPackSerializedName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileManagerSO*>(), { "get_allSongPackSerializedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataFileManagerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileManagerSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerDataFileManagerSO* GlobalNamespace::PlayerDataFileManagerSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerDataFileManagerSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataFileManagerSO::PlayerDataFileManagerSO() {}
