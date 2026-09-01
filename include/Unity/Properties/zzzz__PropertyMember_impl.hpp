#pragma once
// IWYU pragma private; include "Unity\Properties\PropertyMember.hpp"
#include "Unity/Properties/zzzz__PropertyMember_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IMemberInfo_def.hpp"
//  Writing Method size for method: ::Unity::Properties::PropertyMember.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::PropertyMember::*)()>(&::Unity::Properties::PropertyMember::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ba1ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyMember.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::PropertyMember::*)()>(&::Unity::Properties::PropertyMember::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ba1cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyMember.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Unity::Properties::PropertyMember::*)()>(&::Unity::Properties::PropertyMember::get_ValueType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ba1d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "get_ValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyMember._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PropertyMember::*)(::System::Reflection::PropertyInfo*)>(&::Unity::Properties::PropertyMember::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ba1d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyMember.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Properties::PropertyMember::*)(::System::Object*)>(&::Unity::Properties::PropertyMember::GetValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ba1d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyMember.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PropertyMember::*)(::System::Object*, ::System::Object*)>(&::Unity::Properties::PropertyMember::SetValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ba1d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyMember.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (::Unity::Properties::PropertyMember::*)()>(
    &::Unity::Properties::PropertyMember::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ba1da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "GetCustomAttributes", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::PropertyMember::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Unity::Properties::PropertyMember::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Type* Unity::Properties::PropertyMember::get_ValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "get_ValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline void Unity::Properties::PropertyMember::_ctor(::System::Reflection::PropertyInfo* propertyInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, propertyInfo);
}
inline ::System::Object* Unity::Properties::PropertyMember::GetValue(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, obj);
}
inline void Unity::Properties::PropertyMember::SetValue(::System::Object* obj, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* Unity::Properties::PropertyMember::GetCustomAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyMember>(), { "GetCustomAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Properties::IMemberInfo"
constexpr Unity::Properties::PropertyMember::operator ::Unity::Properties::IMemberInfo*() {
  return static_cast<::Unity::Properties::IMemberInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Properties::IMemberInfo"
constexpr ::Unity::Properties::IMemberInfo* Unity::Properties::PropertyMember::i___Unity__Properties__IMemberInfo() {
  return static_cast<::Unity::Properties::IMemberInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_PropertyInfo", ty: "::System::Reflection::PropertyInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Name_k__BackingField", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::PropertyMember::PropertyMember(::System::Reflection::PropertyInfo* m_PropertyInfo, ::StringW _Name_k__BackingField) noexcept {
  this->m_PropertyInfo = m_PropertyInfo;
  this->_Name_k__BackingField = _Name_k__BackingField;
}
// Ctor Parameters []
constexpr ::Unity::Properties::PropertyMember::PropertyMember() {}
