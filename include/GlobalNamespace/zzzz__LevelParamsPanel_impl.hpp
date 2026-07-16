#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelParamsPanel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelParamsPanel_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelParamsPanel.set_notesPerSecond
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelParamsPanel::*)(float_t)>(&::GlobalNamespace::LevelParamsPanel::set_notesPerSecond)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a1ea18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelParamsPanel*>(), { "set_notesPerSecond", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelParamsPanel.set_notesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelParamsPanel::*)(int32_t)>(&::GlobalNamespace::LevelParamsPanel::set_notesCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a1ea98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelParamsPanel*>(), { "set_notesCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelParamsPanel.set_obstaclesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelParamsPanel::*)(int32_t)>(&::GlobalNamespace::LevelParamsPanel::set_obstaclesCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a1eadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelParamsPanel*>(), { "set_obstaclesCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelParamsPanel.set_bombsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelParamsPanel::*)(int32_t)>(&::GlobalNamespace::LevelParamsPanel::set_bombsCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a1eb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelParamsPanel*>(), { "set_bombsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelParamsPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelParamsPanel::*)()>(&::GlobalNamespace::LevelParamsPanel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1eb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelParamsPanel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelParamsPanel::__cordl_internal_get__notesPerSecondText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesPerSecondText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelParamsPanel::__cordl_internal_get__notesPerSecondText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesPerSecondText;
}
constexpr void GlobalNamespace::LevelParamsPanel::__cordl_internal_set__notesPerSecondText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notesPerSecondText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelParamsPanel::__cordl_internal_get__notesCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelParamsPanel::__cordl_internal_get__notesCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesCountText;
}
constexpr void GlobalNamespace::LevelParamsPanel::__cordl_internal_set__notesCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notesCountText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelParamsPanel::__cordl_internal_get__obstaclesCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelParamsPanel::__cordl_internal_get__obstaclesCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesCountText;
}
constexpr void GlobalNamespace::LevelParamsPanel::__cordl_internal_set__obstaclesCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstaclesCountText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelParamsPanel::__cordl_internal_get__bombsCountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombsCountText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelParamsPanel::__cordl_internal_get__bombsCountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombsCountText;
}
constexpr void GlobalNamespace::LevelParamsPanel::__cordl_internal_set__bombsCountText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombsCountText = value;
}
inline void GlobalNamespace::LevelParamsPanel::set_notesPerSecond(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelParamsPanel*>(), { "set_notesPerSecond", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelParamsPanel::set_notesCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelParamsPanel*>(), { "set_notesCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelParamsPanel::set_obstaclesCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelParamsPanel*>(), { "set_obstaclesCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelParamsPanel::set_bombsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelParamsPanel*>(), { "set_bombsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelParamsPanel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelParamsPanel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelParamsPanel* GlobalNamespace::LevelParamsPanel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelParamsPanel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelParamsPanel::LevelParamsPanel() {}
