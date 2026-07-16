#pragma once
// IWYU pragma private; include "GlobalNamespace/PoseObjectIdSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PoseObjectIdSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PoseObjectIdSO.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PoseObjectIdSO::*)()>(&::GlobalNamespace::PoseObjectIdSO::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e80b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseObjectIdSO*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseObjectIdSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoseObjectIdSO::*)()>(&::GlobalNamespace::PoseObjectIdSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e80b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseObjectIdSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PoseObjectIdSO::__cordl_internal_get__serializedId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedId;
}
constexpr ::StringW const& GlobalNamespace::PoseObjectIdSO::__cordl_internal_get__serializedId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedId;
}
constexpr void GlobalNamespace::PoseObjectIdSO::__cordl_internal_set__serializedId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializedId = value;
}
inline ::StringW GlobalNamespace::PoseObjectIdSO::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseObjectIdSO*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PoseObjectIdSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseObjectIdSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PoseObjectIdSO* GlobalNamespace::PoseObjectIdSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PoseObjectIdSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PoseObjectIdSO::PoseObjectIdSO() {}
