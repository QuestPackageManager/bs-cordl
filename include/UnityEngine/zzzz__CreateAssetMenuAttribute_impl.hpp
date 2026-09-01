#pragma once
// IWYU pragma private; include "UnityEngine\CreateAssetMenuAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__CreateAssetMenuAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::CreateAssetMenuAttribute.set_menuName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CreateAssetMenuAttribute::*)(::StringW)>(&::UnityEngine::CreateAssetMenuAttribute::set_menuName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6adaac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CreateAssetMenuAttribute*>(), { "set_menuName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CreateAssetMenuAttribute.set_fileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CreateAssetMenuAttribute::*)(::StringW)>(&::UnityEngine::CreateAssetMenuAttribute::set_fileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6adaad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CreateAssetMenuAttribute*>(), { "set_fileName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CreateAssetMenuAttribute.set_order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CreateAssetMenuAttribute::*)(int32_t)>(&::UnityEngine::CreateAssetMenuAttribute::set_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6adaad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CreateAssetMenuAttribute*>(), { "set_order", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CreateAssetMenuAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CreateAssetMenuAttribute::*)()>(&::UnityEngine::CreateAssetMenuAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6adaae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CreateAssetMenuAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::CreateAssetMenuAttribute::__cordl_internal_get__menuName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::CreateAssetMenuAttribute::__cordl_internal_get__menuName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuName_k__BackingField;
}
constexpr void UnityEngine::CreateAssetMenuAttribute::__cordl_internal_set__menuName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuName_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::CreateAssetMenuAttribute::__cordl_internal_get__fileName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::CreateAssetMenuAttribute::__cordl_internal_get__fileName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileName_k__BackingField;
}
constexpr void UnityEngine::CreateAssetMenuAttribute::__cordl_internal_set__fileName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileName_k__BackingField = value;
}
constexpr int32_t& UnityEngine::CreateAssetMenuAttribute::__cordl_internal_get__order_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____order_k__BackingField;
}
constexpr int32_t const& UnityEngine::CreateAssetMenuAttribute::__cordl_internal_get__order_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____order_k__BackingField;
}
constexpr void UnityEngine::CreateAssetMenuAttribute::__cordl_internal_set__order_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____order_k__BackingField = value;
}
inline void UnityEngine::CreateAssetMenuAttribute::set_menuName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CreateAssetMenuAttribute*>(), { "set_menuName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::CreateAssetMenuAttribute::set_fileName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CreateAssetMenuAttribute*>(), { "set_fileName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::CreateAssetMenuAttribute::set_order(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CreateAssetMenuAttribute*>(), { "set_order", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::CreateAssetMenuAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CreateAssetMenuAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::CreateAssetMenuAttribute* UnityEngine::CreateAssetMenuAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CreateAssetMenuAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::CreateAssetMenuAttribute::CreateAssetMenuAttribute() {}
