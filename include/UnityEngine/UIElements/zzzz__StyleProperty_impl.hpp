#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunctionType_def.hpp"
#include "UnityEngine/UIElements/zzzz__MaterialDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (::UnityEngine::UIElements::StyleProperty::*)()>(
    &::UnityEngine::UIElements::StyleProperty::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71145e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleProperty::*)()>(&::UnityEngine::UIElements::StyleProperty::get_name)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x71145f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleProperty::*)(::StringW)>(&::UnityEngine::UIElements::StyleProperty::set_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x71146dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.get_values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleValueHandle> (::UnityEngine::UIElements::StyleProperty::*)()>(
    &::UnityEngine::UIElements::StyleProperty::get_values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7114818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.set_values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleProperty::*)(::ArrayW<::UnityEngine::UIElements::StyleValueHandle>)>(
    &::UnityEngine::UIElements::StyleProperty::set_values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7114820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(),
                                                                                           { "set_values", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.get_handleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleProperty::*)()>(&::UnityEngine::UIElements::StyleProperty::get_handleCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x7114828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_handleCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.get_isCustomProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleProperty::*)()>(&::UnityEngine::UIElements::StyleProperty::get_isCustomProperty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7114840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_isCustomProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleProperty::*)()>(&::UnityEngine::UIElements::StyleProperty::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x7114850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.CacheId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleProperty::*)(::StringW)>(&::UnityEngine::UIElements::StyleProperty::CacheId)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x71146e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "CacheId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.TryGetMaterialDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleProperty::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::by_ref<::UnityEngine::UIElements::MaterialDefinition>)>(&::UnityEngine::UIElements::StyleProperty::TryGetMaterialDefinition)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0x71148f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(),
                         { "TryGetMaterialDefinition", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MaterialDefinition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.ToFilterFunctionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FilterFunctionType (*)(::UnityEngine::UIElements::StyleValueFunction)>(
    &::UnityEngine::UIElements::StyleProperty::ToFilterFunctionType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x71154f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(),
                                                                                           { "ToFilterFunctionType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleProperty.ConvertDimensionToFilterFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::UIElements::StyleSheets::Dimension)>(&::UnityEngine::UIElements::StyleProperty::ConvertDimensionToFilterFloat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7115504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(),
                                                             { "ConvertDimensionToFilterFloat", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
constexpr void UnityEngine::UIElements::StyleProperty::__cordl_internal_set_m_Id(::UnityEngine::UIElements::StyleSheets::StylePropertyId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Id = value;
}
constexpr ::StringW& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_CustomName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomName;
}
constexpr ::StringW const& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_CustomName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomName;
}
constexpr void UnityEngine::UIElements::StyleProperty::__cordl_internal_set_m_CustomName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CustomName = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Line;
}
constexpr int32_t const& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Line;
}
constexpr void UnityEngine::UIElements::StyleProperty::__cordl_internal_set_m_Line(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Line = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> const& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_m_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr void UnityEngine::UIElements::StyleProperty::__cordl_internal_set_m_Values(::ArrayW<::UnityEngine::UIElements::StyleValueHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Values = value;
}
constexpr bool& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_requireVariableResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requireVariableResolve;
}
constexpr bool const& UnityEngine::UIElements::StyleProperty::__cordl_internal_get_requireVariableResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requireVariableResolve;
}
constexpr void UnityEngine::UIElements::StyleProperty::__cordl_internal_set_requireVariableResolve(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requireVariableResolve = value;
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StyleProperty::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleProperty::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleProperty::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> UnityEngine::UIElements::StyleProperty::get_values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleProperty::set_values(::ArrayW<::UnityEngine::UIElements::StyleValueHandle> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(),
                                                                                         { "set_values", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::StyleProperty::get_handleCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_handleCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleProperty::get_isCustomProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "get_isCustomProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleProperty::CacheId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(), { "CacheId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::StyleProperty::TryGetMaterialDefinition(::UnityEngine::UIElements::StyleSheet* styleSheet, ::by_ref<::UnityEngine::UIElements::MaterialDefinition> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(),
                       { "TryGetMaterialDefinition", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MaterialDefinition>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, styleSheet, value);
}
inline ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::StyleProperty::ToFilterFunctionType(::UnityEngine::UIElements::StyleValueFunction function) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(),
                                                                                         { "ToFilterFunctionType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FilterFunctionType>(nullptr, ___internal_method, function);
}
inline float_t UnityEngine::UIElements::StyleProperty::ConvertDimensionToFilterFloat(::UnityEngine::UIElements::StyleSheets::Dimension dim) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleProperty*>(),
                                                           { "ConvertDimensionToFilterFloat", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, dim);
}
inline ::UnityEngine::UIElements::StyleProperty* UnityEngine::UIElements::StyleProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleProperty::StyleProperty() {}
