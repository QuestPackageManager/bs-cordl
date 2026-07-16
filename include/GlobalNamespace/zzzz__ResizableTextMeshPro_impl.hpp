#pragma once
// IWYU pragma private; include "GlobalNamespace/ResizableTextMeshPro.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ResizableTextMeshPro_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResizableTextMeshPro.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResizableTextMeshPro::*)()>(&::GlobalNamespace::ResizableTextMeshPro::Start)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58fd688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResizableTextMeshPro*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResizableTextMeshPro.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResizableTextMeshPro::*)()>(&::GlobalNamespace::ResizableTextMeshPro::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58fd760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResizableTextMeshPro*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResizableTextMeshPro.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResizableTextMeshPro::*)()>(&::GlobalNamespace::ResizableTextMeshPro::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58fd7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResizableTextMeshPro*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResizableTextMeshPro.HandleTextDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResizableTextMeshPro::*)(::UnityEngine::Object*)>(&::GlobalNamespace::ResizableTextMeshPro::HandleTextDidChange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58fd898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResizableTextMeshPro*>(), { "HandleTextDidChange", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResizableTextMeshPro._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResizableTextMeshPro::*)()>(&::GlobalNamespace::ResizableTextMeshPro::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58fd92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResizableTextMeshPro*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::ResizableTextMeshPro::__cordl_internal_get__textMeshPro() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textMeshPro;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::ResizableTextMeshPro::__cordl_internal_get__textMeshPro() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textMeshPro;
}
constexpr void GlobalNamespace::ResizableTextMeshPro::__cordl_internal_set__textMeshPro(::UnityW<::TMPro::TMP_Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textMeshPro = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::ResizableTextMeshPro::__cordl_internal_get__rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::ResizableTextMeshPro::__cordl_internal_get__rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr void GlobalNamespace::ResizableTextMeshPro::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rectTransform = value;
}
constexpr float_t& GlobalNamespace::ResizableTextMeshPro::__cordl_internal_get__textExtraSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textExtraSpace;
}
constexpr float_t const& GlobalNamespace::ResizableTextMeshPro::__cordl_internal_get__textExtraSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textExtraSpace;
}
constexpr void GlobalNamespace::ResizableTextMeshPro::__cordl_internal_set__textExtraSpace(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textExtraSpace = value;
}
inline void GlobalNamespace::ResizableTextMeshPro::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResizableTextMeshPro*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ResizableTextMeshPro::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResizableTextMeshPro*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ResizableTextMeshPro::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResizableTextMeshPro*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ResizableTextMeshPro::HandleTextDidChange(::UnityEngine::Object* textMeshPro) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResizableTextMeshPro*>(), { "HandleTextDidChange", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textMeshPro);
}
inline void GlobalNamespace::ResizableTextMeshPro::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResizableTextMeshPro*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ResizableTextMeshPro* GlobalNamespace::ResizableTextMeshPro::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ResizableTextMeshPro*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResizableTextMeshPro::ResizableTextMeshPro() {}
