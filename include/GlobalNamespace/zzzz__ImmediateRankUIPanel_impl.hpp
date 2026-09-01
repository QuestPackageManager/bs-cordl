#pragma once
// IWYU pragma private; include "GlobalNamespace\ImmediateRankUIPanel.hpp"
#include "GlobalNamespace/zzzz__RankModel_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ImmediateRankUIPanel_def.hpp"
#include "GlobalNamespace/zzzz__RelativeScoreAndImmediateRankCounter_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(&::GlobalNamespace::ImmediateRankUIPanel::Start)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59ac224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImmediateRankUIPanel*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel.HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(
    &::GlobalNamespace::ImmediateRankUIPanel::HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ac51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImmediateRankUIPanel*>(), { "HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel.RefreshUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(&::GlobalNamespace::ImmediateRankUIPanel::RefreshUI)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x59ac2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImmediateRankUIPanel*>(), { "RefreshUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(&::GlobalNamespace::ImmediateRankUIPanel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59ac520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImmediateRankUIPanel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__rankText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rankText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__rankText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rankText;
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_set__rankText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rankText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__relativeScoreText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeScoreText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__relativeScoreText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeScoreText;
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_set__relativeScoreText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relativeScoreText = value;
}
constexpr ::UnityW<::GlobalNamespace::RelativeScoreAndImmediateRankCounter>& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__relativeScoreAndImmediateRankCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeScoreAndImmediateRankCounter;
}
constexpr ::UnityW<::GlobalNamespace::RelativeScoreAndImmediateRankCounter> const& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__relativeScoreAndImmediateRankCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeScoreAndImmediateRankCounter;
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_set__relativeScoreAndImmediateRankCounter(::UnityW<::GlobalNamespace::RelativeScoreAndImmediateRankCounter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relativeScoreAndImmediateRankCounter = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stringBuilder = value;
}
constexpr float_t& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__prevRelativeScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRelativeScore;
}
constexpr float_t const& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__prevRelativeScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRelativeScore;
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_set__prevRelativeScore(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevRelativeScore = value;
}
constexpr ::GlobalNamespace::RankModel_Rank& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__prevImmediateRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevImmediateRank;
}
constexpr ::GlobalNamespace::RankModel_Rank const& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__prevImmediateRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevImmediateRank;
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_set__prevImmediateRank(::GlobalNamespace::RankModel_Rank value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevImmediateRank = value;
}
inline void GlobalNamespace::ImmediateRankUIPanel::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImmediateRankUIPanel*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ImmediateRankUIPanel::HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImmediateRankUIPanel*>(), { "HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ImmediateRankUIPanel::RefreshUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImmediateRankUIPanel*>(), { "RefreshUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ImmediateRankUIPanel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImmediateRankUIPanel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmediateRankUIPanel* GlobalNamespace::ImmediateRankUIPanel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ImmediateRankUIPanel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImmediateRankUIPanel::ImmediateRankUIPanel() {}
