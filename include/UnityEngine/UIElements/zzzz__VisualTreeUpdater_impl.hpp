#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeUpdater.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdater_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualTreeUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdatePhase_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdater_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::*)()>(&::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ccd6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::*)(
    ::UnityEngine::UIElements::VisualTreeUpdatePhase, ::UnityEngine::UIElements::IVisualTreeUpdater*)>(&::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::set_Item)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ccde80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*>(),
                            { "set_Item", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>(), ::i2c::type_of<::UnityEngine::UIElements::IVisualTreeUpdater*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (
    ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ccdc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*>(),
                                                                                           { "get_Item", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::*)(int32_t)>(
    &::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ccd928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*>& UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::__cordl_internal_get_m_VisualTreeUpdaters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualTreeUpdaters;
}
constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*> const& UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::__cordl_internal_get_m_VisualTreeUpdaters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualTreeUpdaters;
}
constexpr void UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::__cordl_internal_set_m_VisualTreeUpdaters(::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisualTreeUpdaters = value;
}
inline void UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::set_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase, ::UnityEngine::UIElements::IVisualTreeUpdater* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*>(),
                                       { "set_Item", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>(), ::i2c::type_of<::UnityEngine::UIElements::IVisualTreeUpdater*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase, value);
}
inline ::UnityEngine::UIElements::IVisualTreeUpdater* UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*>(),
                                                                                         { "get_Item", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualTreeUpdater*>(this, ___internal_method, phase);
}
inline ::UnityEngine::UIElements::IVisualTreeUpdater* UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualTreeUpdater*>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray* UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray::VisualTreeUpdater_UpdaterArray() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::VisualTreeUpdater::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ccd658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeUpdater::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6ccd858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.UpdateVisualTreePhase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(
    &::UnityEngine::UIElements::VisualTreeUpdater::UpdateVisualTreePhase)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6ccd958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(),
                                                                                           { "UpdateVisualTreePhase", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(
    &::UnityEngine::UIElements::VisualTreeUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6ccdc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(),
                                         { "OnVersionChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VersionChangeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.SetUpdater
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)(
    ::UnityEngine::UIElements::IVisualTreeUpdater*, ::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&::UnityEngine::UIElements::VisualTreeUpdater::SetUpdater)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6ccdd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(),
                            { "SetUpdater", {}, { ::i2c::type_of<::UnityEngine::UIElements::IVisualTreeUpdater*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.GetUpdater
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (
    ::UnityEngine::UIElements::VisualTreeUpdater::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&::UnityEngine::UIElements::VisualTreeUpdater::GetUpdater)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ccdee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(),
                                                                                           { "GetUpdater", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeUpdater.SetDefaultUpdaters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeUpdater::SetDefaultUpdaters)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6ccd718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(), { "SetDefaultUpdaters", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::VisualTreeUpdater::__cordl_internal_get_m_Panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::VisualTreeUpdater::__cordl_internal_get_m_Panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr void UnityEngine::UIElements::VisualTreeUpdater::__cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Panel = value;
}
constexpr ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray*& UnityEngine::UIElements::VisualTreeUpdater::__cordl_internal_get_m_UpdaterArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdaterArray;
}
constexpr ::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray* const& UnityEngine::UIElements::VisualTreeUpdater::__cordl_internal_get_m_UpdaterArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdaterArray;
}
constexpr void UnityEngine::UIElements::VisualTreeUpdater::__cordl_internal_set_m_UpdaterArray(::UnityEngine::UIElements::VisualTreeUpdater_UpdaterArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdaterArray = value;
}
inline void UnityEngine::UIElements::VisualTreeUpdater::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::VisualTreeUpdater::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeUpdater::UpdateVisualTreePhase(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(),
                                                                                         { "UpdateVisualTreePhase", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase);
}
inline void UnityEngine::UIElements::VisualTreeUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(),
                                       { "OnVersionChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VersionChangeType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeUpdater::SetUpdater(::UnityEngine::UIElements::IVisualTreeUpdater* updater, ::UnityEngine::UIElements::VisualTreeUpdatePhase phase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(),
                          { "SetUpdater", {}, { ::i2c::type_of<::UnityEngine::UIElements::IVisualTreeUpdater*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updater, phase);
}
template <typename T> inline void UnityEngine::UIElements::VisualTreeUpdater::SetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(),
                                                           { "SetUpdater", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase);
}
inline ::UnityEngine::UIElements::IVisualTreeUpdater* UnityEngine::UIElements::VisualTreeUpdater::GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(),
                                                                                         { "GetUpdater", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeUpdatePhase>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualTreeUpdater*>(this, ___internal_method, phase);
}
inline void UnityEngine::UIElements::VisualTreeUpdater::SetDefaultUpdaters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeUpdater*>(), { "SetDefaultUpdaters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeUpdater* UnityEngine::UIElements::VisualTreeUpdater::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeUpdater*>(panel));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::VisualTreeUpdater::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::VisualTreeUpdater::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeUpdater::VisualTreeUpdater() {}
