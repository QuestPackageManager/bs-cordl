#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MaterialDefinition.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MaterialDefinition_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MaterialDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__MaterialPropertyValue_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.get_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UIElements::MaterialDefinition::*)()>(
    &::UnityEngine::UIElements::MaterialDefinition::get_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7105c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "get_material", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.set_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MaterialDefinition::*)(::UnityEngine::Material*)>(
    &::UnityEngine::UIElements::MaterialDefinition::set_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7105c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MaterialDefinition::*)(::UnityEngine::UIElements::MaterialDefinition)>(
    &::UnityEngine::UIElements::MaterialDefinition::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7105c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.FromMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MaterialDefinition (*)(::UnityEngine::Material*)>(&::UnityEngine::UIElements::MaterialDefinition::FromMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7105ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "FromMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.FromObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MaterialDefinition (*)(::System::Object*)>(&::UnityEngine::UIElements::MaterialDefinition::FromObject)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x7105cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "FromObject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.BuildPropertyBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::UnityEngine::UIElements::MaterialDefinition::*)()>(
    &::UnityEngine::UIElements::MaterialDefinition::BuildPropertyBlock)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x7105dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "BuildPropertyBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::MaterialDefinition, ::UnityEngine::UIElements::MaterialDefinition)>(
    &::UnityEngine::UIElements::MaterialDefinition::op_Equality)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x7106090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::MaterialDefinition, ::UnityEngine::UIElements::MaterialDefinition)>(
    &::UnityEngine::UIElements::MaterialDefinition::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x7106260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.op_Implicit___UnityEngine__UIElements__MaterialDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MaterialDefinition (*)(::UnityEngine::Material*)>(
    &::UnityEngine::UIElements::MaterialDefinition::op_Implicit___UnityEngine__UIElements__MaterialDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7106278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::MaterialDefinition::*)(::UnityEngine::UIElements::MaterialDefinition)>(
    &::UnityEngine::UIElements::MaterialDefinition::Equals)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7106280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::MaterialDefinition::*)(::System::Object*)>(&::UnityEngine::UIElements::MaterialDefinition::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7106294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { ::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::MaterialDefinition::*)()>(&::UnityEngine::UIElements::MaterialDefinition::GetHashCode)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x7106314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { ::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::MaterialDefinition::*)()>(&::UnityEngine::UIElements::MaterialDefinition::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x71065b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { ::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::MaterialDefinition::get_material() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "get_material", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::MaterialDefinition::set_material(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MaterialDefinition::_ctor(::UnityEngine::UIElements::MaterialDefinition other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::UnityEngine::UIElements::MaterialDefinition UnityEngine::UIElements::MaterialDefinition::FromMaterial(::UnityEngine::Material* m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "FromMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MaterialDefinition>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::UIElements::MaterialDefinition UnityEngine::UIElements::MaterialDefinition::FromObject(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "FromObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MaterialDefinition>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::UIElements::MaterialDefinition::BuildPropertyBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "BuildPropertyBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::MaterialDefinition::op_Equality(::UnityEngine::UIElements::MaterialDefinition lhs, ::UnityEngine::UIElements::MaterialDefinition rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::MaterialDefinition::op_Inequality(::UnityEngine::UIElements::MaterialDefinition lhs, ::UnityEngine::UIElements::MaterialDefinition rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(),
                                       { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::UIElements::MaterialDefinition UnityEngine::UIElements::MaterialDefinition::op_Implicit___UnityEngine__UIElements__MaterialDefinition(::UnityEngine::Material* m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MaterialDefinition>(nullptr, ___internal_method, m);
}
inline bool UnityEngine::UIElements::MaterialDefinition::Equals(::UnityEngine::UIElements::MaterialDefinition other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::MaterialDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::MaterialDefinition::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::MaterialDefinition::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::MaterialDefinition::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::MaterialDefinition>"
constexpr UnityEngine::UIElements::MaterialDefinition::operator ::System::IEquatable_1<::UnityEngine::UIElements::MaterialDefinition>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::MaterialDefinition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::MaterialDefinition>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::MaterialDefinition>*
UnityEngine::UIElements::MaterialDefinition::i___System__IEquatable_1___UnityEngine__UIElements__MaterialDefinition_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::MaterialDefinition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "propertyValues", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::MaterialPropertyValue>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::MaterialDefinition::MaterialDefinition(::UnityW<::UnityEngine::Material> m_Material,
                                                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MaterialPropertyValue>* propertyValues) noexcept {
  this->m_Material = m_Material;
  this->propertyValues = propertyValues;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MaterialDefinition::MaterialDefinition() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7106a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7106a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::*)(
    ::by_ref<::UnityEngine::UIElements::MaterialDefinition>)>(&::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7106a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::*)(
    ::by_ref<::UnityEngine::UIElements::MaterialDefinition>, ::UnityEngine::Material*)>(&::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7106a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x71069d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline ::StringW UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::GetValue(::by_ref<::UnityEngine::UIElements::MaterialDefinition> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, container);
}
inline void UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::SetValue(::by_ref<::UnityEngine::UIElements::MaterialDefinition> container, ::UnityEngine::Material* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty* UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty::PropertyBag_MaterialDefinition_MaterialProperty() {}
//  Writing Method size for method: ::UnityEngine::UIElements::MaterialDefinition_PropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MaterialDefinition_PropertyBag::*)()>(&::UnityEngine::UIElements::MaterialDefinition_PropertyBag::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x7106908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition_PropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MaterialDefinition_PropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MaterialDefinition_PropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MaterialDefinition_PropertyBag* UnityEngine::UIElements::MaterialDefinition_PropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MaterialDefinition_PropertyBag*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MaterialDefinition_PropertyBag::MaterialDefinition_PropertyBag() {}
