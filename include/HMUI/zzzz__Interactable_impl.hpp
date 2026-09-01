#pragma once
// IWYU pragma private; include "HMUI\Interactable.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "HMUI/zzzz__Interactable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::HMUI::Interactable.add_interactableChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::Interactable::*)(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*)>(&::HMUI::Interactable::add_interactableChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5879854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { "add_interactableChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Interactable.remove_interactableChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::Interactable::*)(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*)>(
    &::HMUI::Interactable::remove_interactableChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5879914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { "remove_interactableChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Interactable.get_interactable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::Interactable::*)()>(&::HMUI::Interactable::get_interactable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58799d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { "get_interactable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Interactable.set_interactable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::Interactable::*)(bool)>(&::HMUI::Interactable::set_interactable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58799f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { "set_interactable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Interactable.OnCanvasGroupChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::Interactable::*)()>(&::HMUI::Interactable::OnCanvasGroupChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5879a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { ::i2c::class_of<::HMUI::Interactable*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Interactable.ParentGroupAllowsInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::Interactable::*)()>(&::HMUI::Interactable::ParentGroupAllowsInteraction)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5879b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { "ParentGroupAllowsInteraction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Interactable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::Interactable::*)()>(&::HMUI::Interactable::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5875574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::Interactable::__cordl_internal_get__interactable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactable;
}
constexpr bool const& HMUI::Interactable::__cordl_internal_get__interactable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactable;
}
constexpr void HMUI::Interactable::__cordl_internal_set__interactable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____interactable = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*& HMUI::Interactable::__cordl_internal_get_interactableChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactableChangeEvent;
}
constexpr ::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* const& HMUI::Interactable::__cordl_internal_get_interactableChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactableChangeEvent;
}
constexpr void HMUI::Interactable::__cordl_internal_set_interactableChangeEvent(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___interactableChangeEvent = value;
}
constexpr bool& HMUI::Interactable::__cordl_internal_get__groupsAllowInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupsAllowInteraction;
}
constexpr bool const& HMUI::Interactable::__cordl_internal_get__groupsAllowInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupsAllowInteraction;
}
constexpr void HMUI::Interactable::__cordl_internal_set__groupsAllowInteraction(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupsAllowInteraction = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& HMUI::Interactable::__cordl_internal_get__canvasGroupCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroupCache;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* const& HMUI::Interactable::__cordl_internal_get__canvasGroupCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroupCache;
}
constexpr void HMUI::Interactable::__cordl_internal_set__canvasGroupCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canvasGroupCache = value;
}
inline void HMUI::Interactable::add_interactableChangeEvent(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { "add_interactableChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::Interactable::remove_interactableChangeEvent(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { "remove_interactableChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HMUI::Interactable::get_interactable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { "get_interactable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::Interactable::set_interactable(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { "set_interactable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::Interactable::OnCanvasGroupChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::Interactable*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::Interactable::ParentGroupAllowsInteraction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { "ParentGroupAllowsInteraction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::Interactable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::Interactable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::Interactable* HMUI::Interactable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::Interactable*>());
}
// Ctor Parameters []
constexpr ::HMUI::Interactable::Interactable() {}
