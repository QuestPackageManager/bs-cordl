#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PromoViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__IAnnotatedBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__PromoViewController_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair.get_annotatedBeatmapLevelCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IAnnotatedBeatmapLevelCollection* (
    ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair::*)()>(&::GlobalNamespace::__PromoViewController__ButtonPromoTypePair::get_annotatedBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d5d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>::get(),
                                                 "get_annotatedBeatmapLevelCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PromoViewController__ButtonPromoTypePair::*)()>(
    &::GlobalNamespace::__PromoViewController__ButtonPromoTypePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d5e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_get_button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_get_button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_set_button(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>& GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_get_previewLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewLevelPack;
}
constexpr ::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> const& GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_get_previewLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewLevelPack;
}
constexpr void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_set_previewLevelPack(::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewLevelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO>& GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_get_levelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelPack;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> const& GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_get_levelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelPack;
}
constexpr void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_set_levelPack(::UnityW<::GlobalNamespace::BeatmapLevelPackSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_set_beatmapLevel(::UnityW<::GlobalNamespace::BeatmapLevelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*& GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_get__annotatedBeatmapLevelCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotatedBeatmapLevelCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*> const&
GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_get__annotatedBeatmapLevelCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotatedBeatmapLevelCollection;
}
constexpr void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__cordl_internal_set__annotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____annotatedBeatmapLevelCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* GlobalNamespace::__PromoViewController__ButtonPromoTypePair::get_annotatedBeatmapLevelCollection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>::get(),
                                               "get_annotatedBeatmapLevelCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair* GlobalNamespace::__PromoViewController__ButtonPromoTypePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>());
}
inline void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__PromoViewController__ButtonPromoTypePair() {}
//  Writing Method size for method: ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PromoViewController____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__PromoViewController____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d5d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0._DidActivate_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PromoViewController____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__PromoViewController____c__DisplayClass5_0::_DidActivate_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22d5e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*>::get(), "<DidActivate>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*& GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__cordl_internal_get_item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*> const&
GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__cordl_internal_get_item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
constexpr void GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__cordl_internal_set_item(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___item)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PromoViewController>& GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PromoViewController> const& GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PromoViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0* GlobalNamespace::__PromoViewController____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*>());
}
inline void GlobalNamespace::__PromoViewController____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PromoViewController____c__DisplayClass5_0::_DidActivate_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*>::get(), "<DidActivate>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__PromoViewController____c__DisplayClass5_0() {}
//  Writing Method size for method: ::GlobalNamespace::PromoViewController.add_promoButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PromoViewController::*)(
    ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>*)>(
    &::GlobalNamespace::PromoViewController::add_promoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d5ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(), "add_promoButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoViewController.remove_promoButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PromoViewController::*)(
    ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>*)>(
    &::GlobalNamespace::PromoViewController::remove_promoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d5b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(), "remove_promoButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PromoViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::PromoViewController::DidActivate)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x22d5c34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PromoViewController::*)()>(&::GlobalNamespace::PromoViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d5d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, ::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>&
GlobalNamespace::PromoViewController::__cordl_internal_get__elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, ::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*> const&
GlobalNamespace::PromoViewController::__cordl_internal_get__elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr void GlobalNamespace::PromoViewController::__cordl_internal_set__elements(
    ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, ::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>*&
GlobalNamespace::PromoViewController::__cordl_internal_get_promoButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___promoButtonWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>*> const&
GlobalNamespace::PromoViewController::__cordl_internal_get_promoButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___promoButtonWasPressedEvent;
}
constexpr void GlobalNamespace::PromoViewController::__cordl_internal_set_promoButtonWasPressedEvent(
    ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___promoButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PromoViewController::add_promoButtonWasPressedEvent(
    ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(), "add_promoButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PromoViewController::remove_promoButtonWasPressedEvent(
    ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(), "remove_promoButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PromoViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::PromoViewController* GlobalNamespace::PromoViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PromoViewController*>());
}
inline void GlobalNamespace::PromoViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PromoViewController::PromoViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
