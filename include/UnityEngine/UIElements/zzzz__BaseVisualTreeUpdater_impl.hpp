#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVisualTreeUpdater.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualTreeUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)()>(
    &::UnityEngine::UIElements::BaseVisualTreeUpdater::UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ccdef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { "UnityEngine.UIElements.IVisualTreeUpdater.get_FrameCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.UnityEngine_UIElements_IVisualTreeUpdater_set_FrameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)(int64_t)>(
    &::UnityEngine::UIElements::BaseVisualTreeUpdater::UnityEngine_UIElements_IVisualTreeUpdater_set_FrameCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ccdf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(),
                                                                                           { "UnityEngine.UIElements.IVisualTreeUpdater.set_FrameCount", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.add_panelChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*)>(
    &::UnityEngine::UIElements::BaseVisualTreeUpdater::add_panelChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6ccdf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(),
                                                             { "add_panelChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.remove_panelChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*)>(
    &::UnityEngine::UIElements::BaseVisualTreeUpdater::remove_panelChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6ccdfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(),
                                                             { "remove_panelChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.get_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BaseVisualElementPanel* (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)()>(
    &::UnityEngine::UIElements::BaseVisualTreeUpdater::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cca644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { "get_panel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.set_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::BaseVisualTreeUpdater::set_panel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6cce088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(),
                                                                                           { "set_panel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.get_visualTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)()>(
    &::UnityEngine::UIElements::BaseVisualTreeUpdater::get_visualTree)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ccbdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { "get_visualTree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.get_profilerMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)()>(
    &::UnityEngine::UIElements::BaseVisualTreeUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)()>(&::UnityEngine::UIElements::BaseVisualTreeUpdater::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6cce0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)(bool)>(&::UnityEngine::UIElements::BaseVisualTreeUpdater::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cce11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)()>(&::UnityEngine::UIElements::BaseVisualTreeUpdater::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::BaseVisualTreeUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeUpdater::*)()>(&::UnityEngine::UIElements::BaseVisualTreeUpdater::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cca710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEngine::UIElements::BaseVisualTreeUpdater::__cordl_internal_get_frameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameCount;
}
constexpr int64_t const& UnityEngine::UIElements::BaseVisualTreeUpdater::__cordl_internal_get_frameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameCount;
}
constexpr void UnityEngine::UIElements::BaseVisualTreeUpdater::__cordl_internal_set_frameCount(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frameCount = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*& UnityEngine::UIElements::BaseVisualTreeUpdater::__cordl_internal_get_panelChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelChanged;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* const& UnityEngine::UIElements::BaseVisualTreeUpdater::__cordl_internal_get_panelChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelChanged;
}
constexpr void UnityEngine::UIElements::BaseVisualTreeUpdater::__cordl_internal_set_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panelChanged = value;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::BaseVisualTreeUpdater::__cordl_internal_get_m_Panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::BaseVisualTreeUpdater::__cordl_internal_get_m_Panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr void UnityEngine::UIElements::BaseVisualTreeUpdater::__cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Panel = value;
}
inline int64_t UnityEngine::UIElements::BaseVisualTreeUpdater::UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { "UnityEngine.UIElements.IVisualTreeUpdater.get_FrameCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualTreeUpdater::UnityEngine_UIElements_IVisualTreeUpdater_set_FrameCount(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(),
                                                                                         { "UnityEngine.UIElements.IVisualTreeUpdater.set_FrameCount", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualTreeUpdater::add_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(),
                                                           { "add_panelChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualTreeUpdater::remove_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(),
                                                           { "remove_panelChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::BaseVisualElementPanel* UnityEngine::UIElements::BaseVisualTreeUpdater::get_panel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { "get_panel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseVisualElementPanel*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualTreeUpdater::set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(),
                                                                                         { "set_panel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseVisualTreeUpdater::get_visualTree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { "get_visualTree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::BaseVisualTreeUpdater::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualTreeUpdater::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualTreeUpdater::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::BaseVisualTreeUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualTreeUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::BaseVisualTreeUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseVisualTreeUpdater* UnityEngine::UIElements::BaseVisualTreeUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseVisualTreeUpdater*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IVisualTreeUpdater"
constexpr UnityEngine::UIElements::BaseVisualTreeUpdater::operator ::UnityEngine::UIElements::IVisualTreeUpdater*() noexcept {
  return static_cast<::UnityEngine::UIElements::IVisualTreeUpdater*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IVisualTreeUpdater"
constexpr ::UnityEngine::UIElements::IVisualTreeUpdater* UnityEngine::UIElements::BaseVisualTreeUpdater::i___UnityEngine__UIElements__IVisualTreeUpdater() noexcept {
  return static_cast<::UnityEngine::UIElements::IVisualTreeUpdater*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::BaseVisualTreeUpdater::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::BaseVisualTreeUpdater::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseVisualTreeUpdater::BaseVisualTreeUpdater() {}
