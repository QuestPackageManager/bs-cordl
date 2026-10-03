#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsShape.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsMask_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShape_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsMask_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShape_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode::SurfaceMaterial_PhysicsShape_MixingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode::SurfaceMaterial_PhysicsShape_MixingMode() {}
constexpr ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode::Average{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode::Mean{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode::Multiply{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode::Minimum{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode::Maximum{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6fd85f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial::get_Default)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6fd8618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial::get_Default() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Friction", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Bounciness", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_FrictionMixing", ty: "::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "m_BouncinessMixing", ty: "::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "m_FrictionPriority", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BouncinessPriority", ty: "uint16_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_RollingResistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TangentSpeed", ty: "float_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_CustomColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial::PhysicsShape_SurfaceMaterial(float_t m_Friction, float_t m_Bounciness,
                                                                                                       ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode m_FrictionMixing,
                                                                                                       ::UnityEngine::LowLevelPhysics2D::SurfaceMaterial_PhysicsShape_MixingMode m_BouncinessMixing,
                                                                                                       uint16_t m_FrictionPriority, uint16_t m_BouncinessPriority, float_t m_RollingResistance,
                                                                                                       float_t m_TangentSpeed, ::UnityEngine::Color32 m_CustomColor) noexcept {
  this->m_Friction = m_Friction;
  this->m_Bounciness = m_Bounciness;
  this->m_FrictionMixing = m_FrictionMixing;
  this->m_BouncinessMixing = m_BouncinessMixing;
  this->m_FrictionPriority = m_FrictionPriority;
  this->m_BouncinessPriority = m_BouncinessPriority;
  this->m_RollingResistance = m_RollingResistance;
  this->m_TangentSpeed = m_TangentSpeed;
  this->m_CustomColor = m_CustomColor;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial::PhysicsShape_SurfaceMaterial() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType::PhysicsShape_ShapeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType::PhysicsShape_ShapeType() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType::Circle{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType::Capsule{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType::Segment{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType::Polygon{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType::ChainSegment{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6fd8674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId::get_isValid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6fd877c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_IndexId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_WorldId", ty: "uint16_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_Padding", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_GenerationId", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId::PhysicsShape_ContactId(int32_t m_IndexId, uint16_t m_WorldId, uint16_t m_Padding, int32_t m_GenerationId) noexcept {
  this->m_IndexId = m_IndexId;
  this->m_WorldId = m_WorldId;
  this->m_Padding = m_Padding;
  this->m_GenerationId = m_GenerationId;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId::PhysicsShape_ContactId() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsMask, ::UnityEngine::LowLevelPhysics2D::PhysicsMask, int32_t)>(&::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd87cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsMask>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsMask>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::setStaticF_DefaultCategories(::UnityEngine::LowLevelPhysics2D::PhysicsMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsMask, "DefaultCategories", ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>(
      std::forward<::UnityEngine::LowLevelPhysics2D::PhysicsMask>(value));
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsMask UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::getStaticF_DefaultCategories() {
  return ::cordl_internals::getStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsMask, "DefaultCategories", ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::setStaticF_DefaultContacts(::UnityEngine::LowLevelPhysics2D::PhysicsMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsMask, "DefaultContacts", ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>(
      std::forward<::UnityEngine::LowLevelPhysics2D::PhysicsMask>(value));
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsMask UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::getStaticF_DefaultContacts() {
  return ::cordl_internals::getStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsMask, "DefaultContacts", ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::setStaticF_Everything(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter value) {
  ::cordl_internals::setStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter, "Everything", ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>(
      std::forward<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>(value));
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::getStaticF_Everything() {
  return ::cordl_internals::getStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter, "Everything", ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::setStaticF_defaultFilter(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter value) {
  ::cordl_internals::setStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter, "defaultFilter", ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>(
      std::forward<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>(value));
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::getStaticF_defaultFilter() {
  return ::cordl_internals::getStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter, "defaultFilter", ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::_ctor(::UnityEngine::LowLevelPhysics2D::PhysicsMask categories, ::UnityEngine::LowLevelPhysics2D::PhysicsMask contacts,
                                                                              int32_t groupIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsMask>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsMask>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, categories, contacts, groupIndex);
}
// Ctor Parameters [CppParam { name: "m_Categories", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsMask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Contacts", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsMask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_GroupIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::PhysicsShape_ContactFilter(::UnityEngine::LowLevelPhysics2D::PhysicsMask m_Categories,
                                                                                                   ::UnityEngine::LowLevelPhysics2D::PhysicsMask m_Contacts, int32_t m_GroupIndex) noexcept {
  this->m_Categories = m_Categories;
  this->m_Contacts = m_Contacts;
  this->m_GroupIndex = m_GroupIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter::PhysicsShape_ContactFilter() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6fd8898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_PushLimit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ClipVelocity", ty: "bool", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData::PhysicsShape_MoverData(float_t m_PushLimit, bool m_ClipVelocity) noexcept {
  this->m_PushLimit = m_PushLimit;
  this->m_ClipVelocity = m_ClipVelocity;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData::PhysicsShape_MoverData() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsShape::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsShape::ToString)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6fd8240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsShape::*)(::System::Object*)>(&::UnityEngine::LowLevelPhysics2D::PhysicsShape::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6fd84c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsShape::*)(::UnityEngine::LowLevelPhysics2D::PhysicsShape)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsShape::Equals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6fd8530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LowLevelPhysics2D::PhysicsShape::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsShape::GetHashCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6fd8568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsShape::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsShape::get_isValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6fd5804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape.get_shapeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType (::UnityEngine::LowLevelPhysics2D::PhysicsShape::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsShape::get_shapeType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd8484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { "get_shapeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShape.get_callbackTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::LowLevelPhysics2D::PhysicsShape::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsShape::get_callbackTarget)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd584c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { "get_callbackTarget", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsShape::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsShape::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsShape::Equals(::UnityEngine::LowLevelPhysics2D::PhysicsShape other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::LowLevelPhysics2D::PhysicsShape::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsShape::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType UnityEngine::LowLevelPhysics2D::PhysicsShape::get_shapeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { "get_shapeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ShapeType>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::LowLevelPhysics2D::PhysicsShape::get_callbackTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(), { "get_callbackTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsShape>"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsShape::operator ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsShape>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsShape>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsShape>"
constexpr ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsShape>*
UnityEngine::LowLevelPhysics2D::PhysicsShape::i___System__IEquatable_1___UnityEngine__LowLevelPhysics2D__PhysicsShape_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsShape>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Index1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_World0", ty: "uint16_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_Generation", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape::PhysicsShape(int32_t m_Index1, uint16_t m_World0, uint16_t m_Generation) noexcept {
  this->m_Index1 = m_Index1;
  this->m_World0 = m_World0;
  this->m_Generation = m_Generation;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShape::PhysicsShape() {}
