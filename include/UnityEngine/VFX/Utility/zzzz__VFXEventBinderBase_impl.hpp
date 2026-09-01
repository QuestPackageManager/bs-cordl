#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXEventBinderBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEventBinderBase.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXEventBinderBase::*)()>(&::UnityEngine::VFX::Utility::VFXEventBinderBase::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69e0f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEventBinderBase.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXEventBinderBase::*)()>(&::UnityEngine::VFX::Utility::VFXEventBinderBase::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69e1e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEventBinderBase.UpdateCacheEventAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXEventBinderBase::*)()>(&::UnityEngine::VFX::Utility::VFXEventBinderBase::UpdateCacheEventAttribute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69e1d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), { "UpdateCacheEventAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEventBinderBase.SetEventAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXEventBinderBase::*)(::ArrayW<::System::Object*>)>(
    &::UnityEngine::VFX::Utility::VFXEventBinderBase::SetEventAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEventBinderBase.SendEventToVisualEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXEventBinderBase::*)(::ArrayW<::System::Object*>)>(
    &::UnityEngine::VFX::Utility::VFXEventBinderBase::SendEventToVisualEffect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x69e1060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), { "SendEventToVisualEffect", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEventBinderBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXEventBinderBase::*)()>(&::UnityEngine::VFX::Utility::VFXEventBinderBase::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x69e1394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& UnityEngine::VFX::Utility::VFXEventBinderBase::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& UnityEngine::VFX::Utility::VFXEventBinderBase::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void UnityEngine::VFX::Utility::VFXEventBinderBase::__cordl_internal_set_target(::UnityW<::UnityEngine::VFX::VisualEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___target = value;
}
constexpr ::StringW& UnityEngine::VFX::Utility::VFXEventBinderBase::__cordl_internal_get_EventName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventName;
}
constexpr ::StringW const& UnityEngine::VFX::Utility::VFXEventBinderBase::__cordl_internal_get_EventName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventName;
}
constexpr void UnityEngine::VFX::Utility::VFXEventBinderBase::__cordl_internal_set_EventName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EventName = value;
}
constexpr ::UnityEngine::VFX::VFXEventAttribute*& UnityEngine::VFX::Utility::VFXEventBinderBase::__cordl_internal_get_eventAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventAttribute;
}
constexpr ::UnityEngine::VFX::VFXEventAttribute* const& UnityEngine::VFX::Utility::VFXEventBinderBase::__cordl_internal_get_eventAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventAttribute;
}
constexpr void UnityEngine::VFX::Utility::VFXEventBinderBase::__cordl_internal_set_eventAttribute(::UnityEngine::VFX::VFXEventAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventAttribute = value;
}
inline void UnityEngine::VFX::Utility::VFXEventBinderBase::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXEventBinderBase::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXEventBinderBase::UpdateCacheEventAttribute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), { "UpdateCacheEventAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXEventBinderBase::SetEventAttribute(::ArrayW<::System::Object*> parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void UnityEngine::VFX::Utility::VFXEventBinderBase::SendEventToVisualEffect(::ArrayW<::System::Object*> parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), { "SendEventToVisualEffect", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void UnityEngine::VFX::Utility::VFXEventBinderBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXEventBinderBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXEventBinderBase* UnityEngine::VFX::Utility::VFXEventBinderBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXEventBinderBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXEventBinderBase::VFXEventBinderBase() {}
