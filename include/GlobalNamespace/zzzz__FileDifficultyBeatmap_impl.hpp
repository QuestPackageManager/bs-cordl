#pragma once
// IWYU pragma private; include "GlobalNamespace\FileDifficultyBeatmap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileDifficultyBeatmap_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileDifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileDifficultyBeatmap::*)(::StringW, ::StringW)>(&::GlobalNamespace::FileDifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileDifficultyBeatmap*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileDifficultyBeatmap.GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileDifficultyBeatmap::*)()>(
    &::GlobalNamespace::FileDifficultyBeatmap::GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x372a6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileDifficultyBeatmap*>(), { "GetBeatmapStringAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileDifficultyBeatmap.GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileDifficultyBeatmap::*)()>(
    &::GlobalNamespace::FileDifficultyBeatmap::GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x372a770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileDifficultyBeatmap*>(), { "GetLightshowStringAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileDifficultyBeatmap.GetBeatmapString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileDifficultyBeatmap::*)()>(&::GlobalNamespace::FileDifficultyBeatmap::GetBeatmapString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x372a834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileDifficultyBeatmap*>(), { "GetBeatmapString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileDifficultyBeatmap.GetLightshowString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileDifficultyBeatmap::*)()>(&::GlobalNamespace::FileDifficultyBeatmap::GetLightshowString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x372a8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileDifficultyBeatmap*>(), { "GetLightshowString", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_get__beatmapPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapPath;
}
constexpr ::StringW const& GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_get__beatmapPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapPath;
}
constexpr void GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_set__beatmapPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapPath = value;
}
constexpr ::StringW& GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_get__lightshowPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightshowPath;
}
constexpr ::StringW const& GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_get__lightshowPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightshowPath;
}
constexpr void GlobalNamespace::FileDifficultyBeatmap::__cordl_internal_set__lightshowPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightshowPath = value;
}
inline void GlobalNamespace::FileDifficultyBeatmap::_ctor(::StringW beatmapPath, ::StringW lightshowPath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileDifficultyBeatmap*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapPath, lightshowPath);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileDifficultyBeatmap::GetBeatmapStringAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileDifficultyBeatmap*>(), { "GetBeatmapStringAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileDifficultyBeatmap::GetLightshowStringAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileDifficultyBeatmap*>(), { "GetLightshowStringAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FileDifficultyBeatmap::GetBeatmapString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileDifficultyBeatmap*>(), { "GetBeatmapString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FileDifficultyBeatmap::GetLightshowString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileDifficultyBeatmap*>(), { "GetLightshowString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::FileDifficultyBeatmap* GlobalNamespace::FileDifficultyBeatmap::New_ctor(::StringW beatmapPath, ::StringW lightshowPath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FileDifficultyBeatmap*>(beatmapPath, lightshowPath));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileDifficultyBeatmap::FileDifficultyBeatmap() {}
