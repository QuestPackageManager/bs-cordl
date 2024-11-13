#pragma once
// IWYU pragma private; include "GlobalNamespace/GameObjectKeywordSwitchEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectKeywordSwitchEffect_def.hpp"
#include "GlobalNamespace/zzzz__GameObjectKeywordSwitchEffect_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::*)()>(
    &::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b275e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::__cordl_internal_get_keyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyword;
}
constexpr ::StringW const& GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::__cordl_internal_get_keyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyword;
}
constexpr void GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::__cordl_internal_set_keyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyword)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem* GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>());
}
inline void GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem() {}
//  Writing Method size for method: ::GlobalNamespace::GameObjectKeywordSwitchEffect.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectKeywordSwitchEffect::*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::GameObjectKeywordSwitchEffect::Initialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3b2749c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectKeywordSwitchEffect*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectKeywordSwitchEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectKeywordSwitchEffect::*)()>(
    &::GlobalNamespace::GameObjectKeywordSwitchEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b275e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectKeywordSwitchEffect*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_get__defaultGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_get__defaultGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultGameObject;
}
constexpr void GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_set__defaultGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*, ::Array<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>*>&
GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_get__gameObjectKeywordItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectKeywordItems;
}
constexpr ::ArrayW<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*, ::Array<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>*> const&
GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_get__gameObjectKeywordItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectKeywordItems;
}
constexpr void GlobalNamespace::GameObjectKeywordSwitchEffect::__cordl_internal_set__gameObjectKeywordItems(
    ::ArrayW<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*, ::Array<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjectKeywordItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameObjectKeywordSwitchEffect::Initialize(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectKeywordSwitchEffect*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapData);
}
inline ::GlobalNamespace::GameObjectKeywordSwitchEffect* GlobalNamespace::GameObjectKeywordSwitchEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameObjectKeywordSwitchEffect*>());
}
inline void GlobalNamespace::GameObjectKeywordSwitchEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectKeywordSwitchEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameObjectKeywordSwitchEffect::GameObjectKeywordSwitchEffect() {}
