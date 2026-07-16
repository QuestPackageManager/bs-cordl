#pragma once
// IWYU pragma private; include "Unity/Properties/FieldMember.hpp"
#include "Unity/Properties/zzzz__FieldMember_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IMemberInfo_def.hpp"
//  Writing Method size for method: ::Unity::Properties::FieldMember._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::FieldMember::*)(::System::Reflection::FieldInfo*)>(&::Unity::Properties::FieldMember::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b9e5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::FieldMember.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::FieldMember::*)()>(&::Unity::Properties::FieldMember::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b9e6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::FieldMember.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::FieldMember::*)()>(&::Unity::Properties::FieldMember::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b9e6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::FieldMember.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Unity::Properties::FieldMember::*)()>(&::Unity::Properties::FieldMember::get_ValueType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b9e6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "get_ValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::FieldMember.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Properties::FieldMember::*)(::System::Object*)>(&::Unity::Properties::FieldMember::GetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b9e71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::FieldMember.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::FieldMember::*)(::System::Object*, ::System::Object*)>(&::Unity::Properties::FieldMember::SetValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b9e73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::FieldMember.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (::Unity::Properties::FieldMember::*)()>(
    &::Unity::Properties::FieldMember::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b9e754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "GetCustomAttributes", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::FieldMember::_ctor(::System::Reflection::FieldInfo* fieldInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fieldInfo);
}
inline ::StringW Unity::Properties::FieldMember::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Unity::Properties::FieldMember::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Type* Unity::Properties::FieldMember::get_ValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "get_ValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline ::System::Object* Unity::Properties::FieldMember::GetValue(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, obj);
}
inline void Unity::Properties::FieldMember::SetValue(::System::Object* obj, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* Unity::Properties::FieldMember::GetCustomAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::FieldMember>(), { "GetCustomAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Properties::IMemberInfo"
constexpr Unity::Properties::FieldMember::operator ::Unity::Properties::IMemberInfo*() {
  return static_cast<::Unity::Properties::IMemberInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Properties::IMemberInfo"
constexpr ::Unity::Properties::IMemberInfo* Unity::Properties::FieldMember::i___Unity__Properties__IMemberInfo() {
  return static_cast<::Unity::Properties::IMemberInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_FieldInfo", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Name_k__BackingField", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::FieldMember::FieldMember(::System::Reflection::FieldInfo* m_FieldInfo, ::StringW _Name_k__BackingField) noexcept {
  this->m_FieldInfo = m_FieldInfo;
  this->_Name_k__BackingField = _Name_k__BackingField;
}
// Ctor Parameters []
constexpr ::Unity::Properties::FieldMember::FieldMember() {}
