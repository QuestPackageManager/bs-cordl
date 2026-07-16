#pragma once
// IWYU pragma private; include "Zenject/GameObjectCreationParameters.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::GameObjectCreationParameters::*)()>(&::Zenject::GameObjectCreationParameters::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GameObjectCreationParameters::*)(::StringW)>(&::Zenject::GameObjectCreationParameters::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.get_GroupName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::GameObjectCreationParameters::*)()>(&::Zenject::GameObjectCreationParameters::get_GroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_GroupName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.set_GroupName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GameObjectCreationParameters::*)(::StringW)>(&::Zenject::GameObjectCreationParameters::set_GroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "set_GroupName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.get_ParentTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Zenject::GameObjectCreationParameters::*)()>(
    &::Zenject::GameObjectCreationParameters::get_ParentTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_ParentTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.set_ParentTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GameObjectCreationParameters::*)(::UnityEngine::Transform*)>(&::Zenject::GameObjectCreationParameters::set_ParentTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "set_ParentTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.get_ParentTransformGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* (::Zenject::GameObjectCreationParameters::*)()>(
    &::Zenject::GameObjectCreationParameters::get_ParentTransformGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_ParentTransformGetter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.set_ParentTransformGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GameObjectCreationParameters::*)(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>*)>(
    &::Zenject::GameObjectCreationParameters::set_ParentTransformGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(),
                                                { "set_ParentTransformGetter", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::Zenject::GameObjectCreationParameters::*)()>(
    &::Zenject::GameObjectCreationParameters::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e5d0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_Position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GameObjectCreationParameters::*)(::System::Nullable_1<::UnityEngine::Vector3>)>(
    &::Zenject::GameObjectCreationParameters::set_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5d0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "set_Position", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.get_Rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Quaternion> (::Zenject::GameObjectCreationParameters::*)()>(
    &::Zenject::GameObjectCreationParameters::get_Rotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e5d0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_Rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.set_Rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GameObjectCreationParameters::*)(::System::Nullable_1<::UnityEngine::Quaternion>)>(
    &::Zenject::GameObjectCreationParameters::set_Rotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e5d0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "set_Rotation", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::GameObjectCreationParameters* (*)()>(&::Zenject::GameObjectCreationParameters::get_Default)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e5d104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::GameObjectCreationParameters::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e5d160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::GameObjectCreationParameters::*)()>(&::Zenject::GameObjectCreationParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6e5d1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { ::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::GameObjectCreationParameters::*)(::System::Object*)>(&::Zenject::GameObjectCreationParameters::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6e5d3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { ::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::GameObjectCreationParameters::*)(::Zenject::GameObjectCreationParameters*)>(&::Zenject::GameObjectCreationParameters::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e5d564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "Equals", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Zenject::GameObjectCreationParameters*, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::GameObjectCreationParameters::op_Equality)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e5d4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Zenject::GameObjectCreationParameters*, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::GameObjectCreationParameters::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e5d5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GameObjectCreationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GameObjectCreationParameters::*)()>(&::Zenject::GameObjectCreationParameters::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e59f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::GameObjectCreationParameters::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& Zenject::GameObjectCreationParameters::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void Zenject::GameObjectCreationParameters::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr ::StringW& Zenject::GameObjectCreationParameters::__cordl_internal_get__GroupName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GroupName_k__BackingField;
}
constexpr ::StringW const& Zenject::GameObjectCreationParameters::__cordl_internal_get__GroupName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GroupName_k__BackingField;
}
constexpr void Zenject::GameObjectCreationParameters::__cordl_internal_set__GroupName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____GroupName_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Zenject::GameObjectCreationParameters::__cordl_internal_get__ParentTransform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParentTransform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Zenject::GameObjectCreationParameters::__cordl_internal_get__ParentTransform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParentTransform_k__BackingField;
}
constexpr void Zenject::GameObjectCreationParameters::__cordl_internal_set__ParentTransform_k__BackingField(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ParentTransform_k__BackingField = value;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>*& Zenject::GameObjectCreationParameters::__cordl_internal_get__ParentTransformGetter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParentTransformGetter_k__BackingField;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* const&
Zenject::GameObjectCreationParameters::__cordl_internal_get__ParentTransformGetter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParentTransformGetter_k__BackingField;
}
constexpr void
Zenject::GameObjectCreationParameters::__cordl_internal_set__ParentTransformGetter_k__BackingField(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ParentTransformGetter_k__BackingField = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& Zenject::GameObjectCreationParameters::__cordl_internal_get__Position_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Position_k__BackingField;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& Zenject::GameObjectCreationParameters::__cordl_internal_get__Position_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Position_k__BackingField;
}
constexpr void Zenject::GameObjectCreationParameters::__cordl_internal_set__Position_k__BackingField(::System::Nullable_1<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Position_k__BackingField = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& Zenject::GameObjectCreationParameters::__cordl_internal_get__Rotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Rotation_k__BackingField;
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& Zenject::GameObjectCreationParameters::__cordl_internal_get__Rotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Rotation_k__BackingField;
}
constexpr void Zenject::GameObjectCreationParameters::__cordl_internal_set__Rotation_k__BackingField(::System::Nullable_1<::UnityEngine::Quaternion> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Rotation_k__BackingField = value;
}
inline void Zenject::GameObjectCreationParameters::setStaticF__default(::Zenject::GameObjectCreationParameters* value) {
  ::cordl_internals::setStaticField<::Zenject::GameObjectCreationParameters*, "_default", ::Zenject::GameObjectCreationParameters*>(std::forward<::Zenject::GameObjectCreationParameters*>(value));
}
inline ::Zenject::GameObjectCreationParameters* Zenject::GameObjectCreationParameters::getStaticF__default() {
  return ::cordl_internals::getStaticField<::Zenject::GameObjectCreationParameters*, "_default", ::Zenject::GameObjectCreationParameters*>();
}
inline ::StringW Zenject::GameObjectCreationParameters::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Zenject::GameObjectCreationParameters::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Zenject::GameObjectCreationParameters::get_GroupName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_GroupName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Zenject::GameObjectCreationParameters::set_GroupName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "set_GroupName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Zenject::GameObjectCreationParameters::get_ParentTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_ParentTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Zenject::GameObjectCreationParameters::set_ParentTransform(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "set_ParentTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* Zenject::GameObjectCreationParameters::get_ParentTransformGetter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_ParentTransformGetter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>*>(this, ___internal_method);
}
inline void Zenject::GameObjectCreationParameters::set_ParentTransformGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(),
                                              { "set_ParentTransformGetter", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::Transform>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::Vector3> Zenject::GameObjectCreationParameters::get_Position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_Position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void Zenject::GameObjectCreationParameters::set_Position(::System::Nullable_1<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "set_Position", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::Quaternion> Zenject::GameObjectCreationParameters::get_Rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_Rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Quaternion>>(this, ___internal_method);
}
inline void Zenject::GameObjectCreationParameters::set_Rotation(::System::Nullable_1<::UnityEngine::Quaternion> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "set_Rotation", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::GameObjectCreationParameters* Zenject::GameObjectCreationParameters::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::GameObjectCreationParameters*>(nullptr, ___internal_method);
}
inline void Zenject::GameObjectCreationParameters::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t Zenject::GameObjectCreationParameters::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Zenject::GameObjectCreationParameters::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool Zenject::GameObjectCreationParameters::Equals(::Zenject::GameObjectCreationParameters* that) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { "Equals", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, that);
}
inline bool Zenject::GameObjectCreationParameters::op_Equality(::Zenject::GameObjectCreationParameters* left, ::Zenject::GameObjectCreationParameters* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Zenject::GameObjectCreationParameters::op_Inequality(::Zenject::GameObjectCreationParameters* left, ::Zenject::GameObjectCreationParameters* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline void Zenject::GameObjectCreationParameters::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GameObjectCreationParameters*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::GameObjectCreationParameters* Zenject::GameObjectCreationParameters::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::GameObjectCreationParameters*>());
}
// Ctor Parameters []
constexpr ::Zenject::GameObjectCreationParameters::GameObjectCreationParameters() {}
