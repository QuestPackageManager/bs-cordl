#pragma once
// IWYU pragma private; include "JetBrains/Annotations/MeansImplicitUseAttribute.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseKindFlags_impl.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__MeansImplicitUseAttribute_def.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseKindFlags_def.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::MeansImplicitUseAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::MeansImplicitUseAttribute::*)()>(&::JetBrains::Annotations::MeansImplicitUseAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a5b468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MeansImplicitUseAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::MeansImplicitUseAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::MeansImplicitUseAttribute::*)(
    ::JetBrains::Annotations::ImplicitUseKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags)>(&::JetBrains::Annotations::MeansImplicitUseAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5b478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MeansImplicitUseAttribute*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::JetBrains::Annotations::ImplicitUseKindFlags>(), ::i2c::type_of<::JetBrains::Annotations::ImplicitUseTargetFlags>() } })));
    return ___internal_method;
  }
};
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags& JetBrains::Annotations::MeansImplicitUseAttribute::__cordl_internal_get__UseKindFlags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseKindFlags_k__BackingField;
}
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags const& JetBrains::Annotations::MeansImplicitUseAttribute::__cordl_internal_get__UseKindFlags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseKindFlags_k__BackingField;
}
constexpr void JetBrains::Annotations::MeansImplicitUseAttribute::__cordl_internal_set__UseKindFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseKindFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseKindFlags_k__BackingField = value;
}
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags& JetBrains::Annotations::MeansImplicitUseAttribute::__cordl_internal_get__TargetFlags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetFlags_k__BackingField;
}
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags const& JetBrains::Annotations::MeansImplicitUseAttribute::__cordl_internal_get__TargetFlags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetFlags_k__BackingField;
}
constexpr void JetBrains::Annotations::MeansImplicitUseAttribute::__cordl_internal_set__TargetFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseTargetFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TargetFlags_k__BackingField = value;
}
inline void JetBrains::Annotations::MeansImplicitUseAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MeansImplicitUseAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JetBrains::Annotations::MeansImplicitUseAttribute::_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MeansImplicitUseAttribute*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::JetBrains::Annotations::ImplicitUseKindFlags>(), ::i2c::type_of<::JetBrains::Annotations::ImplicitUseTargetFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useKindFlags, targetFlags);
}
inline ::JetBrains::Annotations::MeansImplicitUseAttribute* JetBrains::Annotations::MeansImplicitUseAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::MeansImplicitUseAttribute*>());
}
inline ::JetBrains::Annotations::MeansImplicitUseAttribute* JetBrains::Annotations::MeansImplicitUseAttribute::New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags,
                                                                                                                        ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::MeansImplicitUseAttribute*>(useKindFlags, targetFlags));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::MeansImplicitUseAttribute::MeansImplicitUseAttribute() {}
