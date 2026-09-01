#pragma once
// IWYU pragma private; include "GlobalNamespace\LevelPackInfo.hpp"
#include "GlobalNamespace/zzzz__LevelInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelPackInfo_def.hpp"
#include "GlobalNamespace/zzzz__LevelInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelPackInfo.get_packID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LevelPackInfo::*)()>(&::GlobalNamespace::LevelPackInfo::get_packID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "get_packID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackInfo.set_packID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackInfo::*)(::StringW)>(&::GlobalNamespace::LevelPackInfo::set_packID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "set_packID", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackInfo.get_levels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::LevelInfo*> (::GlobalNamespace::LevelPackInfo::*)()>(&::GlobalNamespace::LevelPackInfo::get_levels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "get_levels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackInfo.set_levels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackInfo::*)(::ArrayW<::GlobalNamespace::LevelInfo*>)>(&::GlobalNamespace::LevelPackInfo::set_levels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "set_levels", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::LevelInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackInfo.get_minimumProtocolVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::LevelPackInfo::*)()>(&::GlobalNamespace::LevelPackInfo::get_minimumProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "get_minimumProtocolVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackInfo.set_minimumProtocolVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackInfo::*)(uint32_t)>(&::GlobalNamespace::LevelPackInfo::set_minimumProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b8da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "set_minimumProtocolVersion", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackInfo::*)()>(&::GlobalNamespace::LevelPackInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LevelPackInfo::__cordl_internal_get__packID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packID_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::LevelPackInfo::__cordl_internal_get__packID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packID_k__BackingField;
}
constexpr void GlobalNamespace::LevelPackInfo::__cordl_internal_set__packID_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packID_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::LevelInfo*>& GlobalNamespace::LevelPackInfo::__cordl_internal_get__levels_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levels_k__BackingField;
}
constexpr ::ArrayW<::GlobalNamespace::LevelInfo*> const& GlobalNamespace::LevelPackInfo::__cordl_internal_get__levels_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levels_k__BackingField;
}
constexpr void GlobalNamespace::LevelPackInfo::__cordl_internal_set__levels_k__BackingField(::ArrayW<::GlobalNamespace::LevelInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levels_k__BackingField = value;
}
constexpr uint32_t& GlobalNamespace::LevelPackInfo::__cordl_internal_get__minimumProtocolVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumProtocolVersion_k__BackingField;
}
constexpr uint32_t const& GlobalNamespace::LevelPackInfo::__cordl_internal_get__minimumProtocolVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumProtocolVersion_k__BackingField;
}
constexpr void GlobalNamespace::LevelPackInfo::__cordl_internal_set__minimumProtocolVersion_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minimumProtocolVersion_k__BackingField = value;
}
inline ::StringW GlobalNamespace::LevelPackInfo::get_packID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "get_packID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackInfo::set_packID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "set_packID", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::LevelInfo*> GlobalNamespace::LevelPackInfo::get_levels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "get_levels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LevelInfo*>>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackInfo::set_levels(::ArrayW<::GlobalNamespace::LevelInfo*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "set_levels", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::LevelInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t GlobalNamespace::LevelPackInfo::get_minimumProtocolVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "get_minimumProtocolVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackInfo::set_minimumProtocolVersion(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { "set_minimumProtocolVersion", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelPackInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelPackInfo* GlobalNamespace::LevelPackInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelPackInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelPackInfo::LevelPackInfo() {}
