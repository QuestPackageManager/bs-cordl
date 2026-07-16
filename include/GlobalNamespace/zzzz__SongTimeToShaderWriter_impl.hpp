#pragma once
// IWYU pragma private; include "GlobalNamespace/SongTimeToShaderWriter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongTimeToShaderWriter_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongTimeToShaderWriter.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongTimeToShaderWriter::*)()>(&::GlobalNamespace::SongTimeToShaderWriter::Update)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5904b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongTimeToShaderWriter*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongTimeToShaderWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongTimeToShaderWriter::*)()>(&::GlobalNamespace::SongTimeToShaderWriter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5904d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongTimeToShaderWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::SongTimeToShaderWriter::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::SongTimeToShaderWriter::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::SongTimeToShaderWriter::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
inline void GlobalNamespace::SongTimeToShaderWriter::setStaticF__songTimePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_songTimePropertyId", ::GlobalNamespace::SongTimeToShaderWriter*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SongTimeToShaderWriter::getStaticF__songTimePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_songTimePropertyId", ::GlobalNamespace::SongTimeToShaderWriter*>();
}
inline void GlobalNamespace::SongTimeToShaderWriter::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongTimeToShaderWriter*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongTimeToShaderWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongTimeToShaderWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SongTimeToShaderWriter* GlobalNamespace::SongTimeToShaderWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongTimeToShaderWriter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongTimeToShaderWriter::SongTimeToShaderWriter() {}
