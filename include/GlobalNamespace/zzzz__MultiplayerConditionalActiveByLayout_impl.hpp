#pragma once
#include "GlobalNamespace/zzzz__MultiplayerConditionalActiveByLayout_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConditionalActiveByLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConditionalActiveByLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition::__MultiplayerConditionalActiveByLayout__Condition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition::__MultiplayerConditionalActiveByLayout__Condition() {}
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition::ShowIf{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition::HideIf{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConditionalActiveByLayout.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConditionalActiveByLayout::*)()>(
    &::GlobalNamespace::MultiplayerConditionalActiveByLayout::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2606ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConditionalActiveByLayout.HandlePlayersLayoutWasCalculated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConditionalActiveByLayout::*)(
    ::GlobalNamespace::MultiplayerPlayerLayout, int32_t)>(&::GlobalNamespace::MultiplayerConditionalActiveByLayout::HandlePlayersLayoutWasCalculated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x260709c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                                                 "HandlePlayersLayoutWasCalculated", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConditionalActiveByLayout._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConditionalActiveByLayout::*)()>(
    &::GlobalNamespace::MultiplayerConditionalActiveByLayout::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26070f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition& GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_get__condition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____condition;
}
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const& GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_get__condition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____condition;
}
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_set__condition(::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition value) {
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const&
GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layoutProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerConditionalActiveByLayout::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConditionalActiveByLayout::HandlePlayersLayoutWasCalculated(::GlobalNamespace::MultiplayerPlayerLayout layout, int32_t playersCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                                               "HandlePlayersLayoutWasCalculated", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layout, playersCount);
}
inline ::GlobalNamespace::MultiplayerConditionalActiveByLayout* GlobalNamespace::MultiplayerConditionalActiveByLayout::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>());
}
inline void GlobalNamespace::MultiplayerConditionalActiveByLayout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConditionalActiveByLayout::MultiplayerConditionalActiveByLayout() {}
