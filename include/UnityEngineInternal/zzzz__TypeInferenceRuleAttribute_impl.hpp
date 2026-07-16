#pragma once
// IWYU pragma private; include "UnityEngineInternal/TypeInferenceRuleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngineInternal/zzzz__TypeInferenceRuleAttribute_def.hpp"
#include "UnityEngineInternal/zzzz__TypeInferenceRules_def.hpp"
//  Writing Method size for method: ::UnityEngineInternal::TypeInferenceRuleAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngineInternal::TypeInferenceRuleAttribute::*)(::UnityEngineInternal::TypeInferenceRules)>(
    &::UnityEngineInternal::TypeInferenceRuleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a56098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::TypeInferenceRuleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngineInternal::TypeInferenceRules>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::TypeInferenceRuleAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngineInternal::TypeInferenceRuleAttribute::*)(::StringW)>(&::UnityEngineInternal::TypeInferenceRuleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a56110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::TypeInferenceRuleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::TypeInferenceRuleAttribute.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngineInternal::TypeInferenceRuleAttribute::*)()>(&::UnityEngineInternal::TypeInferenceRuleAttribute::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a56118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngineInternal::TypeInferenceRuleAttribute*>(), { ::i2c::class_of<::UnityEngineInternal::TypeInferenceRuleAttribute*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngineInternal::TypeInferenceRuleAttribute::__cordl_internal_get__rule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rule;
}
constexpr ::StringW const& UnityEngineInternal::TypeInferenceRuleAttribute::__cordl_internal_get__rule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rule;
}
constexpr void UnityEngineInternal::TypeInferenceRuleAttribute::__cordl_internal_set__rule(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rule = value;
}
inline void UnityEngineInternal::TypeInferenceRuleAttribute::_ctor(::UnityEngineInternal::TypeInferenceRules rule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::TypeInferenceRuleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngineInternal::TypeInferenceRules>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rule);
}
inline void UnityEngineInternal::TypeInferenceRuleAttribute::_ctor(::StringW rule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::TypeInferenceRuleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rule);
}
inline ::StringW UnityEngineInternal::TypeInferenceRuleAttribute::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngineInternal::TypeInferenceRuleAttribute*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngineInternal::TypeInferenceRuleAttribute* UnityEngineInternal::TypeInferenceRuleAttribute::New_ctor(::UnityEngineInternal::TypeInferenceRules rule) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngineInternal::TypeInferenceRuleAttribute*>(rule));
}
inline ::UnityEngineInternal::TypeInferenceRuleAttribute* UnityEngineInternal::TypeInferenceRuleAttribute::New_ctor(::StringW rule) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngineInternal::TypeInferenceRuleAttribute*>(rule));
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::TypeInferenceRuleAttribute::TypeInferenceRuleAttribute() {}
