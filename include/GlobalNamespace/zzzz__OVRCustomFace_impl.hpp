#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCustomFace.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_impl.hpp"
#include "GlobalNamespace/zzzz__OVRFace_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCustomFace_def.hpp"
#include "GlobalNamespace/zzzz__OVRCustomFace_def.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRCustomFace_RetargetingType::OVRCustomFace_RetargetingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCustomFace_RetargetingType::OVRCustomFace_RetargetingType() {}
constexpr ::GlobalNamespace::OVRCustomFace_RetargetingType GlobalNamespace::OVRCustomFace_RetargetingType::OculusFace{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRCustomFace_RetargetingType GlobalNamespace::OVRCustomFace_RetargetingType::Custom{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.get_Mappings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> (::GlobalNamespace::OVRCustomFace::*)()>(
    &::GlobalNamespace::OVRCustomFace::get_Mappings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df5dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "get_Mappings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.set_Mappings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)(::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>)>(
    &::GlobalNamespace::OVRCustomFace::set_Mappings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df5ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "set_Mappings", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.get_RetargetingValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRCustomFace_RetargetingType (::GlobalNamespace::OVRCustomFace::*)()>(
    &::GlobalNamespace::OVRCustomFace::get_RetargetingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df5de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "get_RetargetingValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.set_RetargetingValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)(::GlobalNamespace::OVRCustomFace_RetargetingType)>(
    &::GlobalNamespace::OVRCustomFace::set_RetargetingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df5dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(),
                                                                                           { "set_RetargetingValue", {}, { ::i2c::type_of<::GlobalNamespace::OVRCustomFace_RetargetingType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.get_AllowDuplicateMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::get_AllowDuplicateMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df5df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "get_AllowDuplicateMapping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.set_AllowDuplicateMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)(bool)>(&::GlobalNamespace::OVRCustomFace::set_AllowDuplicateMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df5dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "set_AllowDuplicateMapping", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df5e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { ::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.GetFaceExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRFaceExpressions_FaceExpression (::GlobalNamespace::OVRCustomFace::*)(int32_t)>(
    &::GlobalNamespace::OVRCustomFace::GetFaceExpression)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5df5e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { ::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.GetCustomBlendShapeNameAndExpressionPairs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::ArrayW<::StringW>, ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>> (
    ::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::GetCustomBlendShapeNameAndExpressionPairs)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5df5ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { ::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5df5fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>& GlobalNamespace::OVRCustomFace::__cordl_internal_get__mappings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mappings;
}
constexpr ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> const& GlobalNamespace::OVRCustomFace::__cordl_internal_get__mappings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mappings;
}
constexpr void GlobalNamespace::OVRCustomFace::__cordl_internal_set__mappings(::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mappings = value;
}
constexpr ::GlobalNamespace::OVRCustomFace_RetargetingType& GlobalNamespace::OVRCustomFace::__cordl_internal_get_retargetingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retargetingType;
}
constexpr ::GlobalNamespace::OVRCustomFace_RetargetingType const& GlobalNamespace::OVRCustomFace::__cordl_internal_get_retargetingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retargetingType;
}
constexpr void GlobalNamespace::OVRCustomFace::__cordl_internal_set_retargetingType(::GlobalNamespace::OVRCustomFace_RetargetingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___retargetingType = value;
}
constexpr bool& GlobalNamespace::OVRCustomFace::__cordl_internal_get__allowDuplicateMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowDuplicateMapping;
}
constexpr bool const& GlobalNamespace::OVRCustomFace::__cordl_internal_get__allowDuplicateMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowDuplicateMapping;
}
constexpr void GlobalNamespace::OVRCustomFace::__cordl_internal_set__allowDuplicateMapping(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowDuplicateMapping = value;
}
inline ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> GlobalNamespace::OVRCustomFace::get_Mappings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "get_Mappings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomFace::set_Mappings(::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "set_Mappings", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRCustomFace_RetargetingType GlobalNamespace::OVRCustomFace::get_RetargetingValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "get_RetargetingValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRCustomFace_RetargetingType>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomFace::set_RetargetingValue(::GlobalNamespace::OVRCustomFace_RetargetingType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "set_RetargetingValue", {}, { ::i2c::type_of<::GlobalNamespace::OVRCustomFace_RetargetingType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRCustomFace::get_AllowDuplicateMapping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "get_AllowDuplicateMapping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomFace::set_AllowDuplicateMapping(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { "set_AllowDuplicateMapping", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRCustomFace::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRCustomFace::GetFaceExpression(int32_t blendShapeIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRFaceExpressions_FaceExpression>(this, ___internal_method, blendShapeIndex);
}
inline ::System::ValueTuple_2<::ArrayW<::StringW>, ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>> GlobalNamespace::OVRCustomFace::GetCustomBlendShapeNameAndExpressionPairs() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::ArrayW<::StringW>, ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomFace::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFace*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRCustomFace* GlobalNamespace::OVRCustomFace::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRCustomFace*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCustomFace::OVRCustomFace() {}
