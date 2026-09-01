#pragma once
// IWYU pragma private; include "HMUI\SelectableCellStaticAnimations.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__SelectableCellStaticAnimations_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::HMUI::SelectableCellStaticAnimations.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SelectableCellStaticAnimations::*)()>(&::HMUI::SelectableCellStaticAnimations::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x588b364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCellStaticAnimations.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SelectableCellStaticAnimations::*)()>(&::HMUI::SelectableCellStaticAnimations::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588b450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCellStaticAnimations.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SelectableCellStaticAnimations::*)()>(&::HMUI::SelectableCellStaticAnimations::OnDestroy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x588b4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCellStaticAnimations.HandleSelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SelectableCellStaticAnimations::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell_TransitionType, ::System::Object*)>(
    &::HMUI::SelectableCellStaticAnimations::HandleSelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588b5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(),
            { "HandleSelectionDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCellStaticAnimations.HandleHighlightDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SelectableCellStaticAnimations::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell_TransitionType)>(
    &::HMUI::SelectableCellStaticAnimations::HandleHighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588b5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(),
                                                { "HandleHighlightDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCellStaticAnimations.RefreshVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SelectableCellStaticAnimations::*)()>(&::HMUI::SelectableCellStaticAnimations::RefreshVisuals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x588b454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(), { "RefreshVisuals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCellStaticAnimations._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SelectableCellStaticAnimations::*)()>(&::HMUI::SelectableCellStaticAnimations::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588b5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::SelectableCell>& HMUI::SelectableCellStaticAnimations::__cordl_internal_get__selectableCell() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectableCell;
}
constexpr ::UnityW<::HMUI::SelectableCell> const& HMUI::SelectableCellStaticAnimations::__cordl_internal_get__selectableCell() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectableCell;
}
constexpr void HMUI::SelectableCellStaticAnimations::__cordl_internal_set__selectableCell(::UnityW<::HMUI::SelectableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectableCell = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SelectableCellStaticAnimations::__cordl_internal_get__normalAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SelectableCellStaticAnimations::__cordl_internal_get__normalAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalAnimationClip;
}
constexpr void HMUI::SelectableCellStaticAnimations::__cordl_internal_set__normalAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalAnimationClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SelectableCellStaticAnimations::__cordl_internal_get__highlightedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SelectableCellStaticAnimations::__cordl_internal_get__highlightedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedAnimationClip;
}
constexpr void HMUI::SelectableCellStaticAnimations::__cordl_internal_set__highlightedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedAnimationClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SelectableCellStaticAnimations::__cordl_internal_get__selectedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SelectableCellStaticAnimations::__cordl_internal_get__selectedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAnimationClip;
}
constexpr void HMUI::SelectableCellStaticAnimations::__cordl_internal_set__selectedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAnimationClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SelectableCellStaticAnimations::__cordl_internal_get__selectedAndHighlightedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SelectableCellStaticAnimations::__cordl_internal_get__selectedAndHighlightedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedAnimationClip;
}
constexpr void HMUI::SelectableCellStaticAnimations::__cordl_internal_set__selectedAndHighlightedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedAnimationClip = value;
}
inline void HMUI::SelectableCellStaticAnimations::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SelectableCellStaticAnimations::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SelectableCellStaticAnimations::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SelectableCellStaticAnimations::HandleSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell_TransitionType transitionType,
                                                                           ::System::Object* changeOwner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(),
          { "HandleSelectionDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectableCell, transitionType, changeOwner);
}
inline void HMUI::SelectableCellStaticAnimations::HandleHighlightDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell_TransitionType transitionType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(),
                                              { "HandleHighlightDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectableCell, transitionType);
}
inline void HMUI::SelectableCellStaticAnimations::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(), { "RefreshVisuals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SelectableCellStaticAnimations::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SelectableCellStaticAnimations*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::SelectableCellStaticAnimations* HMUI::SelectableCellStaticAnimations::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::SelectableCellStaticAnimations*>());
}
// Ctor Parameters []
constexpr ::HMUI::SelectableCellStaticAnimations::SelectableCellStaticAnimations() {}
