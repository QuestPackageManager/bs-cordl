#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataCallbackWrapper_1.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
template <typename T> constexpr ::GlobalNamespace::BeatmapDataCallback_1<T>*& GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::__cordl_internal_get__callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
template <typename T> constexpr ::GlobalNamespace::BeatmapDataCallback_1<T>* const& GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::__cordl_internal_get__callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
template <typename T> constexpr void GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::__cordl_internal_set__callback(::GlobalNamespace::BeatmapDataCallback_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callback = value;
}
template <typename T>
inline void GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::_ctor(::GlobalNamespace::BeatmapDataCallback_1<T>* callback, float_t aheadTime, ::ArrayW<int32_t> beatmapEventSubtypeIdentifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataCallback_1<T>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, aheadTime, beatmapEventSubtypeIdentifiers);
}
template <typename T> inline void GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::CallCallback(::GlobalNamespace::BeatmapDataItem* beatmapData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapData);
}
template <typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>* GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::New_ctor(::GlobalNamespace::BeatmapDataCallback_1<T>* callback, float_t aheadTime,
                                                                                                                      ::ArrayW<int32_t> beatmapEventSubtypeIdentifiers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>*>(callback, aheadTime, beatmapEventSubtypeIdentifiers));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::BeatmapDataCallbackWrapper_1() {}
