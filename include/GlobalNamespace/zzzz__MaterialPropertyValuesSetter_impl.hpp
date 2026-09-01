#pragma once
// IWYU pragma private; include "GlobalNamespace\MaterialPropertyValuesSetter.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyValuesSetter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyValuesSetter_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyValuesSetter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase.get_propertyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::get_propertyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5872bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase*>(), { "get_propertyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase.set_propertyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::*)(int32_t)>(
    &::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::set_propertyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5872c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase*>(), { "set_propertyId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5872c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase.RefreshPropertyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::RefreshPropertyId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5872bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase*>(), { "RefreshPropertyId", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyName = value;
}
constexpr int32_t& GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::__cordl_internal_get__propertyId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::__cordl_internal_get__propertyId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId_k__BackingField;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::__cordl_internal_set__propertyId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId_k__BackingField = value;
}
inline int32_t GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::get_propertyId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase*>(), { "get_propertyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::set_propertyId(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase*>(), { "set_propertyId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::RefreshPropertyId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase*>(), { "RefreshPropertyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase* GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase::MaterialPropertyValuesSetter_PropertyValuePairBase() {}
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5872c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair::__cordl_internal_set_value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair* GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair::MaterialPropertyValuesSetter_PropertyNameFloatValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5872c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair::__cordl_internal_set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair* GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair::MaterialPropertyValuesSetter_PropertyNameIntValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5872c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair::__cordl_internal_get_vector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vector;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair::__cordl_internal_get_vector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vector;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair::__cordl_internal_set_vector(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vector = value;
}
inline void GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair* GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair::MaterialPropertyValuesSetter_PropertyNameVectorValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5872c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
inline void GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair* GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair::MaterialPropertyValuesSetter_PropertyNameColorValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(&::GlobalNamespace::MaterialPropertyValuesSetter::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x587280c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(&::GlobalNamespace::MaterialPropertyValuesSetter::OnValidate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5872b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.RefreshPropertyIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(&::GlobalNamespace::MaterialPropertyValuesSetter::RefreshPropertyIds)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5872824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter*>(), { "RefreshPropertyIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.ApplyParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(&::GlobalNamespace::MaterialPropertyValuesSetter::ApplyParams)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x587298c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter*>(), { "ApplyParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(&::GlobalNamespace::MaterialPropertyValuesSetter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5872bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*>& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__floats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floats;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*> const& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__floats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floats;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_set__floats(::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floats = value;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*>& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__vectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vectors;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*> const& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__vectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vectors;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_set__vectors(::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vectors = value;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*>& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*> const& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_set__colors(::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colors = value;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*>& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__ints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ints;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*> const& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__ints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ints;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_set__ints(::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ints = value;
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::RefreshPropertyIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter*>(), { "RefreshPropertyIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::ApplyParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter*>(), { "ApplyParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyValuesSetter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyValuesSetter* GlobalNamespace::MaterialPropertyValuesSetter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyValuesSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyValuesSetter::MaterialPropertyValuesSetter() {}
