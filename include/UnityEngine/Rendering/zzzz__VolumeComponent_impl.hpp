#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeComponent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent_Indent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent_Indent::*)(int32_t)>(&::UnityEngine::Rendering::VolumeComponent_Indent::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67c6df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent_Indent*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::VolumeComponent_Indent::__cordl_internal_get_relativeAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativeAmount;
}
constexpr int32_t const& UnityEngine::Rendering::VolumeComponent_Indent::__cordl_internal_get_relativeAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativeAmount;
}
constexpr void UnityEngine::Rendering::VolumeComponent_Indent::__cordl_internal_set_relativeAmount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___relativeAmount = value;
}
inline void UnityEngine::Rendering::VolumeComponent_Indent::_ctor(int32_t relativeAmount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent_Indent*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relativeAmount);
}
inline ::UnityEngine::Rendering::VolumeComponent_Indent* UnityEngine::Rendering::VolumeComponent_Indent::New_ctor(int32_t relativeAmount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeComponent_Indent*>(relativeAmount));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeComponent_Indent::VolumeComponent_Indent() {}
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent___c::*)()>(&::UnityEngine::Rendering::VolumeComponent___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c6e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent___c._FindParameters_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::VolumeComponent___c::*)(::System::Reflection::FieldInfo*)>(
    &::UnityEngine::Rendering::VolumeComponent___c::_FindParameters_b__10_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67c6e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent___c*>(),
                                                                                           { "<FindParameters>b__10_0", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::VolumeComponent___c::setStaticF___9(::UnityEngine::Rendering::VolumeComponent___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::VolumeComponent___c*, "<>9", ::UnityEngine::Rendering::VolumeComponent___c*>(
      std::forward<::UnityEngine::Rendering::VolumeComponent___c*>(value));
}
inline ::UnityEngine::Rendering::VolumeComponent___c* UnityEngine::Rendering::VolumeComponent___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VolumeComponent___c*, "<>9", ::UnityEngine::Rendering::VolumeComponent___c*>();
}
inline void UnityEngine::Rendering::VolumeComponent___c::setStaticF___9__10_0(::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*, "<>9__10_0", ::UnityEngine::Rendering::VolumeComponent___c*>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* UnityEngine::Rendering::VolumeComponent___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*, "<>9__10_0", ::UnityEngine::Rendering::VolumeComponent___c*>();
}
inline void UnityEngine::Rendering::VolumeComponent___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::VolumeComponent___c::_FindParameters_b__10_0(::System::Reflection::FieldInfo* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent___c*>(), { "<FindParameters>b__10_0", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, t);
}
inline ::UnityEngine::Rendering::VolumeComponent___c* UnityEngine::Rendering::VolumeComponent___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeComponent___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeComponent___c::VolumeComponent___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::VolumeComponent::*)()>(&::UnityEngine::Rendering::VolumeComponent::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c5b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.set_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent::*)(::StringW)>(&::UnityEngine::Rendering::VolumeComponent::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c5b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.get_parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* (
    ::UnityEngine::Rendering::VolumeComponent::*)()>(&::UnityEngine::Rendering::VolumeComponent::get_parameters)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67c5b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "get_parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.FindParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>*,
                                                                ::System::Func_2<::System::Reflection::FieldInfo*, bool>*)>(&::UnityEngine::Rendering::VolumeComponent::FindParameters)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x67c5bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(),
                                                { "FindParameters",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>*>(),
                                                    ::i2c::type_of<::System::Func_2<::System::Reflection::FieldInfo*, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent::*)()>(&::UnityEngine::Rendering::VolumeComponent::OnEnable)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x67c61f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { ::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent::*)()>(&::UnityEngine::Rendering::VolumeComponent::OnDisable)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x67c6404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { ::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.Override
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent::*)(::UnityEngine::Rendering::VolumeComponent*, float_t)>(
    &::UnityEngine::Rendering::VolumeComponent::Override)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x67c6508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { ::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.SetAllOverridesTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent::*)(bool)>(&::UnityEngine::Rendering::VolumeComponent::SetAllOverridesTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67c6638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "SetAllOverridesTo", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.SetOverridesTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::VolumeParameter*>*,
                                                                                                           bool)>(&::UnityEngine::Rendering::VolumeComponent::SetOverridesTo)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x67c6648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(),
                            { "SetOverridesTo", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::VolumeParameter*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::VolumeComponent::*)()>(&::UnityEngine::Rendering::VolumeComponent::GetHashCode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67c6b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { ::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.AnyPropertiesIsOverridden
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeComponent::*)()>(&::UnityEngine::Rendering::VolumeComponent::AnyPropertiesIsOverridden)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x67c6bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "AnyPropertiesIsOverridden", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent::*)()>(&::UnityEngine::Rendering::VolumeComponent::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c6c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { ::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent::*)()>(&::UnityEngine::Rendering::VolumeComponent::Release)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67c6ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponent::*)()>(&::UnityEngine::Rendering::VolumeComponent::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67c6d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::VolumeComponent::__cordl_internal_get_active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___active;
}
constexpr bool const& UnityEngine::Rendering::VolumeComponent::__cordl_internal_get_active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___active;
}
constexpr void UnityEngine::Rendering::VolumeComponent::__cordl_internal_set_active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___active = value;
}
constexpr ::StringW& UnityEngine::Rendering::VolumeComponent::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::VolumeComponent::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void UnityEngine::Rendering::VolumeComponent::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>*& UnityEngine::Rendering::VolumeComponent::__cordl_internal_get_parameterList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameterList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>* const& UnityEngine::Rendering::VolumeComponent::__cordl_internal_get_parameterList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameterList;
}
constexpr void UnityEngine::Rendering::VolumeComponent::__cordl_internal_set_parameterList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameterList = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*&
UnityEngine::Rendering::VolumeComponent::__cordl_internal_get_m_ParameterReadOnlyCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParameterReadOnlyCollection;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* const&
UnityEngine::Rendering::VolumeComponent::__cordl_internal_get_m_ParameterReadOnlyCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParameterReadOnlyCollection;
}
constexpr void UnityEngine::Rendering::VolumeComponent::__cordl_internal_set_m_ParameterReadOnlyCollection(
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParameterReadOnlyCollection = value;
}
inline ::StringW UnityEngine::Rendering::VolumeComponent::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeComponent::set_displayName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* UnityEngine::Rendering::VolumeComponent::get_parameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "get_parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeComponent::FindParameters(::System::Object* o, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>* parameters,
                                                                    ::System::Func_2<::System::Reflection::FieldInfo*, bool>* filter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(),
                                              { "FindParameters",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>*>(),
                                                  ::i2c::type_of<::System::Func_2<::System::Reflection::FieldInfo*, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o, parameters, filter);
}
inline void UnityEngine::Rendering::VolumeComponent::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeComponent::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeComponent::Override(::UnityEngine::Rendering::VolumeComponent* state, float_t interpFactor) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, interpFactor);
}
inline void UnityEngine::Rendering::VolumeComponent::SetAllOverridesTo(bool state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "SetAllOverridesTo", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::Rendering::VolumeComponent::SetOverridesTo(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::VolumeParameter*>* enumerable, bool state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(),
                          { "SetOverridesTo", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::VolumeParameter*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumerable, state);
}
inline int32_t UnityEngine::Rendering::VolumeComponent::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeComponent::AnyPropertiesIsOverridden() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "AnyPropertiesIsOverridden", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeComponent::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeComponent::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeComponent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeComponent* UnityEngine::Rendering::VolumeComponent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeComponent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeComponent::VolumeComponent() {}
