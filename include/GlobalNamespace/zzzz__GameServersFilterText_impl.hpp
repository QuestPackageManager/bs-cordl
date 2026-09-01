#pragma once
// IWYU pragma private; include "GlobalNamespace\GameServersFilterText.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameServersFilterText_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__GameServersFilter_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServersFilterText.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServersFilterText::*)(::GlobalNamespace::GameServersFilter*, bool)>(
    &::GlobalNamespace::GameServersFilterText::Setup)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5a23958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServersFilterText*>(),
                                                                                           { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::GameServersFilter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServersFilterText.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServersFilterText::*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::SongPackMask, bool)>(
    &::GlobalNamespace::GameServersFilterText::Setup)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5a23c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServersFilterText*>(),
                                         { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServersFilterText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServersFilterText::*)()>(&::GlobalNamespace::GameServersFilterText::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a23e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServersFilterText*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& GlobalNamespace::GameServersFilterText::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& GlobalNamespace::GameServersFilterText::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::GameServersFilterText::__cordl_internal_set__text(::UnityW<::HMUI::CurvedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::GlobalNamespace::SongPackMasksModel*& GlobalNamespace::GameServersFilterText::__cordl_internal_get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr ::GlobalNamespace::SongPackMasksModel* const& GlobalNamespace::GameServersFilterText::__cordl_internal_get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::GameServersFilterText::__cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPackMasksModel = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::GameServersFilterText::__cordl_internal_get__stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::GameServersFilterText::__cordl_internal_get__stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr void GlobalNamespace::GameServersFilterText::__cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stringBuilder = value;
}
inline void GlobalNamespace::GameServersFilterText::Setup(::GlobalNamespace::GameServersFilter* filter, bool visible) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServersFilterText*>(),
                                                                                         { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::GameServersFilter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter, visible);
}
inline void GlobalNamespace::GameServersFilterText::Setup(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, ::GlobalNamespace::SongPackMask songPackMask, bool visible) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServersFilterText*>(),
                                       { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapDifficultyMask, songPackMask, visible);
}
inline void GlobalNamespace::GameServersFilterText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServersFilterText*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServersFilterText* GlobalNamespace::GameServersFilterText::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServersFilterText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServersFilterText::GameServersFilterText() {}
