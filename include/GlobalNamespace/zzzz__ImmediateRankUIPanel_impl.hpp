#pragma once
// IWYU pragma private; include "GlobalNamespace/ImmediateRankUIPanel.hpp"
#include "GlobalNamespace/zzzz__RankModel_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ImmediateRankUIPanel_def.hpp"
#include "GlobalNamespace/zzzz__RelativeScoreAndImmediateRankCounter_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(&::GlobalNamespace::ImmediateRankUIPanel::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26f76d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel.HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(
    &::GlobalNamespace::ImmediateRankUIPanel::HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26f799c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(),
                                                                               "HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel.RefreshUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(&::GlobalNamespace::ImmediateRankUIPanel::RefreshUI)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x26f7794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(), "RefreshUI",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(&::GlobalNamespace::ImmediateRankUIPanel::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26f79a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rankText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeScoreText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeScoreAndImmediateRankCounter)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::GlobalNamespace::__RankModel__Rank& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__prevImmediateRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevImmediateRank;
}
constexpr ::GlobalNamespace::__RankModel__Rank const& GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_get__prevImmediateRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevImmediateRank;
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__cordl_internal_set__prevImmediateRank(::GlobalNamespace::__RankModel__Rank value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevImmediateRank = value;
}
inline void GlobalNamespace::ImmediateRankUIPanel::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ImmediateRankUIPanel::HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(),
                                                                             "HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ImmediateRankUIPanel::RefreshUI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(), "RefreshUI",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ImmediateRankUIPanel* GlobalNamespace::ImmediateRankUIPanel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ImmediateRankUIPanel*>());
}
inline void GlobalNamespace::ImmediateRankUIPanel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImmediateRankUIPanel::ImmediateRankUIPanel() {}
