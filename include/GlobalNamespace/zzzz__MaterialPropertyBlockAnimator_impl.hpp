#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockAnimator.get_materialPropertyBlockController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MaterialPropertyBlockController> (::GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockAnimator::get_materialPropertyBlockController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5873b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { "get_materialPropertyBlockController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockAnimator.set_materialPropertyBlockController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockAnimator::*)(::GlobalNamespace::MaterialPropertyBlockController*)>(
    &::GlobalNamespace::MaterialPropertyBlockAnimator::set_materialPropertyBlockController)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5873ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(),
                                                             { "set_materialPropertyBlockController", {}, { ::i2c::type_of<::GlobalNamespace::MaterialPropertyBlockController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockAnimator.SetProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockAnimator::SetProperty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5873c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { ::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockAnimator.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockAnimator::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5873c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockAnimator.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockAnimator::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5873cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockAnimator.LazyInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockAnimator::LazyInit)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5873cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { "LazyInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockAnimator.RefreshProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockAnimator::RefreshProperty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5873d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { "RefreshProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockAnimator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5873d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_get__property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property;
}
constexpr ::StringW const& GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_get__property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property;
}
constexpr void GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_set__property(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____property = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr int32_t& GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_get_propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyId;
}
constexpr int32_t const& GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_get_propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyId;
}
constexpr void GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_set_propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propertyId = value;
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::MaterialPropertyBlockAnimator::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
inline ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> GlobalNamespace::MaterialPropertyBlockAnimator::get_materialPropertyBlockController() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { "get_materialPropertyBlockController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockAnimator::set_materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(),
                                                           { "set_materialPropertyBlockController", {}, { ::i2c::type_of<::GlobalNamespace::MaterialPropertyBlockController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MaterialPropertyBlockAnimator::SetProperty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockAnimator::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockAnimator::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockAnimator::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { "LazyInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockAnimator::RefreshProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { "RefreshProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockAnimator* GlobalNamespace::MaterialPropertyBlockAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyBlockAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockAnimator::MaterialPropertyBlockAnimator() {}
