#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StylePropertyName.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (::UnityEngine::UIElements::StylePropertyName::*)()>(
    &::UnityEngine::UIElements::StylePropertyName::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9a6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StylePropertyName::*)()>(&::UnityEngine::UIElements::StylePropertyName::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9a6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName.StylePropertyIdFromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (*)(::StringW)>(
    &::UnityEngine::UIElements::StylePropertyName::StylePropertyIdFromString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6c9a6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { "StylePropertyIdFromString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyName::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(
    &::UnityEngine::UIElements::StylePropertyName::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6c9a794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyName::*)(::StringW)>(&::UnityEngine::UIElements::StylePropertyName::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6c9a848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StylePropertyName, ::UnityEngine::UIElements::StylePropertyName)>(
    &::UnityEngine::UIElements::StylePropertyName::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c9a87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>(), ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StylePropertyName, ::UnityEngine::UIElements::StylePropertyName)>(
    &::UnityEngine::UIElements::StylePropertyName::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c9a888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(),
                                         { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>(), ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName.op_Implicit___UnityEngine__UIElements__StylePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StylePropertyName (*)(::StringW)>(
    &::UnityEngine::UIElements::StylePropertyName::op_Implicit___UnityEngine__UIElements__StylePropertyName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c9a894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StylePropertyName::*)()>(&::UnityEngine::UIElements::StylePropertyName::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9a8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { ::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyName::*)(::System::Object*)>(&::UnityEngine::UIElements::StylePropertyName::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c9a8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { ::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyName::*)(::UnityEngine::UIElements::StylePropertyName)>(
    &::UnityEngine::UIElements::StylePropertyName::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c9a938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StylePropertyName::*)()>(&::UnityEngine::UIElements::StylePropertyName::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9a948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { ::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StylePropertyName::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StylePropertyName::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StylePropertyName::StylePropertyIdFromString(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { "StylePropertyIdFromString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(nullptr, ___internal_method, name);
}
inline void UnityEngine::UIElements::StylePropertyName::_ctor(::UnityEngine::UIElements::StyleSheets::StylePropertyId stylePropertyId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stylePropertyId);
}
inline void UnityEngine::UIElements::StylePropertyName::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline bool UnityEngine::UIElements::StylePropertyName::op_Equality(::UnityEngine::UIElements::StylePropertyName lhs, ::UnityEngine::UIElements::StylePropertyName rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>(), ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::StylePropertyName::op_Inequality(::UnityEngine::UIElements::StylePropertyName lhs, ::UnityEngine::UIElements::StylePropertyName rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(),
                                       { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>(), ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::UIElements::StylePropertyName UnityEngine::UIElements::StylePropertyName::op_Implicit___UnityEngine__UIElements__StylePropertyName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StylePropertyName>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::UIElements::StylePropertyName::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyName::Equals(::System::Object* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::StylePropertyName::Equals(::UnityEngine::UIElements::StylePropertyName other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW UnityEngine::UIElements::StylePropertyName::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StylePropertyName>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr UnityEngine::UIElements::StylePropertyName::operator ::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>* UnityEngine::UIElements::StylePropertyName::i___System__IEquatable_1___UnityEngine__UIElements__StylePropertyName_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StylePropertyName::StylePropertyName(::UnityEngine::UIElements::StyleSheets::StylePropertyId _id_k__BackingField, ::StringW _name_k__BackingField) noexcept {
  this->_id_k__BackingField = _id_k__BackingField;
  this->_name_k__BackingField = _name_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyName::StylePropertyName() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9ab34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9ab3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::*)(
    ::by_ref<::UnityEngine::UIElements::StylePropertyName>)>(&::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9ab44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::*)(
    ::by_ref<::UnityEngine::UIElements::StylePropertyName>, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c9ab4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c9aa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline ::StringW UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId
UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::GetValue(::by_ref<::UnityEngine::UIElements::StylePropertyName> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(this, ___internal_method, container);
}
inline void UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::SetValue(::by_ref<::UnityEngine::UIElements::StylePropertyName> container,
                                                                                        ::UnityEngine::UIElements::StyleSheets::StylePropertyId value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty* UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyBag_StylePropertyName_IdProperty::PropertyBag_StylePropertyName_IdProperty() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9ab50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9ab58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::*)(::by_ref<::UnityEngine::UIElements::StylePropertyName>)>(
    &::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9ab60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::*)(
    ::by_ref<::UnityEngine::UIElements::StylePropertyName>, ::StringW)>(&::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c9ab68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c9aacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline ::StringW UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::GetValue(::by_ref<::UnityEngine::UIElements::StylePropertyName> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, container);
}
inline void UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::SetValue(::by_ref<::UnityEngine::UIElements::StylePropertyName> container, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty* UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyBag_StylePropertyName_NameProperty::PropertyBag_StylePropertyName_NameProperty() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyName_PropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyName_PropertyBag::*)()>(&::UnityEngine::UIElements::StylePropertyName_PropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6c9a950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName_PropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyName_PropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StylePropertyName_PropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyName_PropertyBag* UnityEngine::UIElements::StylePropertyName_PropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyName_PropertyBag*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyName_PropertyBag::StylePropertyName_PropertyBag() {}
