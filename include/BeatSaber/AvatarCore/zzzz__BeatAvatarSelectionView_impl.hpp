#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/BeatAvatarSelectionView.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__BeatAvatarSelectionView_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarTweenController_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarDataModel_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__BeatAvatarVisualController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::BeatAvatarSelectionView.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::BeatAvatarSelectionView::*)()>(&::BeatSaber::AvatarCore::BeatAvatarSelectionView::Init)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3272e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::BeatAvatarSelectionView.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::BeatAvatarSelectionView::*)()>(&::BeatSaber::AvatarCore::BeatAvatarSelectionView::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3272f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::BeatAvatarSelectionView.SetCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::BeatAvatarSelectionView::*)(bool)>(&::BeatSaber::AvatarCore::BeatAvatarSelectionView::SetCreated)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3272fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::BeatAvatarSelectionView.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::BeatAvatarSelectionView::*)()>(&::BeatSaber::AvatarCore::BeatAvatarSelectionView::Activate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3273010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::BeatAvatarSelectionView.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::BeatAvatarSelectionView::*)()>(&::BeatSaber::AvatarCore::BeatAvatarSelectionView::Deactivate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x327304c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::BeatAvatarSelectionView.HandleAvatarDataModelDidChangeAvatarData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::BeatAvatarSelectionView::*)(::BeatSaber::BeatAvatarSDK::AvatarData*)>(
    &::BeatSaber::AvatarCore::BeatAvatarSelectionView::HandleAvatarDataModelDidChangeAvatarData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3273060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(),
                                                             { "HandleAvatarDataModelDidChangeAvatarData", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::BeatAvatarSelectionView.UpdateAvatarVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::BeatAvatarSelectionView::*)()>(&::BeatSaber::AvatarCore::BeatAvatarSelectionView::UpdateAvatarVisuals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3272f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { "UpdateAvatarVisuals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::BeatAvatarSelectionView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::BeatAvatarSelectionView::*)()>(&::BeatSaber::AvatarCore::BeatAvatarSelectionView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3273064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_get__avatarContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_get__avatarContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarContainer;
}
constexpr void BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_set__avatarContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarContainer = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController>& BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_get__beatAvatarVisualController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAvatarVisualController;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> const& BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_get__beatAvatarVisualController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAvatarVisualController;
}
constexpr void BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_set__beatAvatarVisualController(::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatAvatarVisualController = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController>& BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_get__avatarTweenController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTweenController;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> const& BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_get__avatarTweenController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTweenController;
}
constexpr void BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_set__avatarTweenController(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarTweenController = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_get__avatarDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* const& BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_get__avatarDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr void BeatSaber::AvatarCore::BeatAvatarSelectionView::__cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarDataModel = value;
}
inline void BeatSaber::AvatarCore::BeatAvatarSelectionView::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::BeatAvatarSelectionView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::BeatAvatarSelectionView::SetCreated(bool isCreated) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCreated);
}
inline void BeatSaber::AvatarCore::BeatAvatarSelectionView::Activate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::BeatAvatarSelectionView::Deactivate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::BeatAvatarSelectionView::HandleAvatarDataModelDidChangeAvatarData(::BeatSaber::BeatAvatarSDK::AvatarData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(),
                                                           { "HandleAvatarDataModelDidChangeAvatarData", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void BeatSaber::AvatarCore::BeatAvatarSelectionView::UpdateAvatarVisuals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { "UpdateAvatarVisuals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::BeatAvatarSelectionView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::BeatAvatarSelectionView* BeatSaber::AvatarCore::BeatAvatarSelectionView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::BeatAvatarSelectionView*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::BeatAvatarSelectionView::BeatAvatarSelectionView() {}
