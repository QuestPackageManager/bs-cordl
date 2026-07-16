#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapInfo.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapInfo.get_characteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapInfo::*)()>(&::GlobalNamespace::BeatmapInfo::get_characteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b7658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapInfo*>(), { "get_characteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapInfo.set_characteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapInfo::*)(::StringW)>(&::GlobalNamespace::BeatmapInfo::set_characteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b7660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapInfo*>(), { "set_characteristic", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapInfo.get_difficulties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficultyMask (::GlobalNamespace::BeatmapInfo::*)()>(&::GlobalNamespace::BeatmapInfo::get_difficulties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b7668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapInfo*>(), { "get_difficulties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapInfo.set_difficulties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapInfo::*)(::GlobalNamespace::BeatmapDifficultyMask)>(&::GlobalNamespace::BeatmapInfo::set_difficulties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b7670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapInfo*>(), { "set_difficulties", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapInfo::*)()>(&::GlobalNamespace::BeatmapInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b7678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapInfo::__cordl_internal_get__characteristic_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::BeatmapInfo::__cordl_internal_get__characteristic_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapInfo::__cordl_internal_set__characteristic_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characteristic_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::BeatmapInfo::__cordl_internal_get__difficulties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulties_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::BeatmapInfo::__cordl_internal_get__difficulties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulties_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapInfo::__cordl_internal_set__difficulties_k__BackingField(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulties_k__BackingField = value;
}
inline ::StringW GlobalNamespace::BeatmapInfo::get_characteristic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapInfo*>(), { "get_characteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapInfo::set_characteristic(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapInfo*>(), { "set_characteristic", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::BeatmapInfo::get_difficulties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapInfo*>(), { "get_difficulties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficultyMask>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapInfo::set_difficulties(::GlobalNamespace::BeatmapDifficultyMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapInfo*>(), { "set_difficulties", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapInfo* GlobalNamespace::BeatmapInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapInfo::BeatmapInfo() {}
