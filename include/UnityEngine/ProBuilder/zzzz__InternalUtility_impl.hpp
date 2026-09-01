#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\InternalUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__InternalUtility_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__InternalUtility_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::*)()>(
    &::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66c2b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0._TryParseColor_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::*)(char16_t)>(
    &::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::_TryParseColor_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66c2b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0*>(), { "<TryParseColor>b__0", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::__cordl_internal_get_valid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valid;
}
constexpr ::StringW const& UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::__cordl_internal_get_valid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valid;
}
constexpr void UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::__cordl_internal_set_valid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valid = value;
}
inline void UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::_TryParseColor_b__0(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0*>(), { "<TryParseColor>b__0", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0* UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0::InternalUtility___c__DisplayClass6_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::InternalUtility.EmptyGameObjectWithTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::Transform*)>(&::UnityEngine::ProBuilder::InternalUtility::EmptyGameObjectWithTransform)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x66c25b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(), { "EmptyGameObjectWithTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::InternalUtility.MeshGameObjectWithTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::UnityEngine::Transform*, ::UnityEngine::Mesh*, ::UnityEngine::Material*, bool)>(
    &::UnityEngine::ProBuilder::InternalUtility::MeshGameObjectWithTransform)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x66c26a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(),
                                                             { "MeshGameObjectWithTransform",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Mesh*>(),
                                                                 ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::InternalUtility.ControlKeyString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t)>(&::UnityEngine::ProBuilder::InternalUtility::ControlKeyString)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x66c27b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(), { "ControlKeyString", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::InternalUtility.TryParseColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::ProBuilder::InternalUtility::TryParseColor)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x66c28d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(),
                                                             { "TryParseColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::InternalUtility::GetComponents(::UnityEngine::GameObject* go) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(),
                                                                                              { "GetComponents", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, go);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::InternalUtility::GetComponents(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>* transforms) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(),
                                       { "GetComponents", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, transforms);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::ProBuilder::InternalUtility::EmptyGameObjectWithTransform(::UnityEngine::Transform* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(), { "EmptyGameObjectWithTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, t);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::ProBuilder::InternalUtility::MeshGameObjectWithTransform(::StringW name, ::UnityEngine::Transform* t, ::UnityEngine::Mesh* mesh,
                                                                                                                 ::UnityEngine::Material* mat, bool inheritParent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(),
                                                           { "MeshGameObjectWithTransform",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Mesh*>(),
                                                               ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, name, t, mesh, mat, inheritParent);
}
template <typename T> inline T UnityEngine::ProBuilder::InternalUtility::NextEnumValue(T current) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(), { "NextEnumValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, current);
}
inline ::StringW UnityEngine::ProBuilder::InternalUtility::ControlKeyString(char16_t character) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(), { "ControlKeyString", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, character);
}
inline bool UnityEngine::ProBuilder::InternalUtility::TryParseColor(::StringW value, ::by_ref<::UnityEngine::Color> col) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(),
                                                                                         { "TryParseColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, col);
}
template <typename T> inline T UnityEngine::ProBuilder::InternalUtility::DemandComponent(::UnityEngine::Component* component) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(),
                                                                                              { "DemandComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, component);
}
template <typename T> inline T UnityEngine::ProBuilder::InternalUtility::DemandComponent(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::InternalUtility*>(),
                                                                                              { "DemandComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::InternalUtility::InternalUtility() {}
