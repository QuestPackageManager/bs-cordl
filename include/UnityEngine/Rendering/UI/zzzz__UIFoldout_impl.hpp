#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/UIFoldout.hpp"
#include "UnityEngine/UI/zzzz__Toggle_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__UIFoldout_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::UIFoldout.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::UIFoldout::*)()>(&::UnityEngine::Rendering::UI::UIFoldout::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6804360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::UIFoldout.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::UIFoldout::*)()>(&::UnityEngine::Rendering::UI::UIFoldout::OnValidate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x680442c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::UIFoldout.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::UIFoldout::*)(bool)>(&::UnityEngine::Rendering::UI::UIFoldout::SetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6804424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), { "SetState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::UIFoldout.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::UIFoldout::*)(bool, bool)>(&::UnityEngine::Rendering::UI::UIFoldout::SetState)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6804438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), { "SetState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::UIFoldout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::UIFoldout::*)()>(&::UnityEngine::Rendering::UI::UIFoldout::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6804630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_set_content(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_arrowOpened() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrowOpened;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_arrowOpened() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrowOpened;
}
constexpr void UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_set_arrowOpened(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrowOpened = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_arrowClosed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrowClosed;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_arrowClosed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrowClosed;
}
constexpr void UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_set_arrowClosed(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrowClosed = value;
}
inline void UnityEngine::Rendering::UI::UIFoldout::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::UIFoldout::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::UIFoldout::SetState(bool state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), { "SetState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::Rendering::UI::UIFoldout::SetState(bool state, bool rebuildLayout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), { "SetState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, rebuildLayout);
}
inline void UnityEngine::Rendering::UI::UIFoldout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::UIFoldout*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::UIFoldout* UnityEngine::Rendering::UI::UIFoldout::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::UIFoldout*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::UIFoldout::UIFoldout() {}
