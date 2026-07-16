#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConditionalActiveByLayout.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConditionalActiveByLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConditionalActiveByLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition::MultiplayerConditionalActiveByLayout_Condition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition::MultiplayerConditionalActiveByLayout_Condition() {}
constexpr ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition::ShowIf{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition::HideIf{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConditionalActiveByLayout.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConditionalActiveByLayout::*)()>(&::GlobalNamespace::MultiplayerConditionalActiveByLayout::Start)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59ca974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConditionalActiveByLayout.HandlePlayersLayoutWasCalculated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConditionalActiveByLayout::*)(::GlobalNamespace::MultiplayerPlayerLayout, int32_t)>(
    &::GlobalNamespace::MultiplayerConditionalActiveByLayout::HandlePlayersLayoutWasCalculated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59caa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>(),
                                                             { "HandlePlayersLayoutWasCalculated", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlayerLayout>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConditionalActiveByLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConditionalActiveByLayout::*)()>(&::GlobalNamespace::MultiplayerConditionalActiveByLayout::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59cab68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition& GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_get__condition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____condition;
}
constexpr ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition const& GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_get__condition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____condition;
}
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_set__condition(::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____condition = value;
}
constexpr ::GlobalNamespace::MultiplayerPlayerLayout& GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_get__layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layout;
}
constexpr ::GlobalNamespace::MultiplayerPlayerLayout const& GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_get__layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layout;
}
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_set__layout(::GlobalNamespace::MultiplayerPlayerLayout value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layout = value;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layoutProvider = value;
}
inline void GlobalNamespace::MultiplayerConditionalActiveByLayout::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConditionalActiveByLayout::HandlePlayersLayoutWasCalculated(::GlobalNamespace::MultiplayerPlayerLayout layout, int32_t playersCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>(),
                                                           { "HandlePlayersLayoutWasCalculated", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlayerLayout>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layout, playersCount);
}
inline void GlobalNamespace::MultiplayerConditionalActiveByLayout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConditionalActiveByLayout* GlobalNamespace::MultiplayerConditionalActiveByLayout::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConditionalActiveByLayout::MultiplayerConditionalActiveByLayout() {}
