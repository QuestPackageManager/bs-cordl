#pragma once
// IWYU pragma private; include "GlobalNamespace\SyncText.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SyncText_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SyncText.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncText::*)()>(&::GlobalNamespace::SyncText::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x59aed9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncText*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncText.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncText::*)()>(&::GlobalNamespace::SyncText::OnDisable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59af070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncText*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncText.HandleTextChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncText::*)(::UnityEngine::Object*)>(&::GlobalNamespace::SyncText::HandleTextChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59af148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncText*>(), { "HandleTextChanged", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncText.UpdateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncText::*)()>(&::GlobalNamespace::SyncText::UpdateText)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x59aee7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncText*>(), { "UpdateText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncText::*)()>(&::GlobalNamespace::SyncText::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59af1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncText*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::SyncText::__cordl_internal_get__otherTextComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherTextComponent;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::SyncText::__cordl_internal_get__otherTextComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherTextComponent;
}
constexpr void GlobalNamespace::SyncText::__cordl_internal_set__otherTextComponent(::UnityW<::TMPro::TMP_Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____otherTextComponent = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::SyncText::__cordl_internal_get__textComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textComponent;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::SyncText::__cordl_internal_get__textComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textComponent;
}
constexpr void GlobalNamespace::SyncText::__cordl_internal_set__textComponent(::UnityW<::TMPro::TMP_Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textComponent = value;
}
inline void GlobalNamespace::SyncText::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncText*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncText::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncText*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncText::HandleTextChanged(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncText*>(), { "HandleTextChanged", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::SyncText::UpdateText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncText*>(), { "UpdateText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncText*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SyncText* GlobalNamespace::SyncText::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SyncText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SyncText::SyncText() {}
