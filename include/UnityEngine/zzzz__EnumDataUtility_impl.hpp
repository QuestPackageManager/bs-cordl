#pragma once
// IWYU pragma private; include "UnityEngine\EnumDataUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__EnumDataUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__EnumDataUtility_def.hpp"
#include "UnityEngine/zzzz__EnumData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EnumDataUtility_CachedType::EnumDataUtility_CachedType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::EnumDataUtility_CachedType::EnumDataUtility_CachedType() {}
constexpr ::UnityEngine::EnumDataUtility_CachedType UnityEngine::EnumDataUtility_CachedType::ExcludeObsolete{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::EnumDataUtility_CachedType UnityEngine::EnumDataUtility_CachedType::IncludeObsoleteExceptErrors{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::EnumDataUtility_CachedType UnityEngine::EnumDataUtility_CachedType::IncludeAllObsolete{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EnumDataUtility___c::*)()>(&::UnityEngine::EnumDataUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6adfe18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._GetCachedEnumData_b__2_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EnumDataUtility___c::*)(::System::Reflection::FieldInfo*)>(
    &::UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_5)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6adfe1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { "<GetCachedEnumData>b__2_5", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._GetCachedEnumData_b__2_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EnumDataUtility___c::*)(::System::Reflection::FieldInfo*)>(
    &::UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6adfe40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { "<GetCachedEnumData>b__2_1", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._GetCachedEnumData_b__2_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Enum* (::UnityEngine::EnumDataUtility___c::*)(::System::Reflection::FieldInfo*)>(
    &::UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6adfe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { "<GetCachedEnumData>b__2_2", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._GetCachedEnumData_b__2_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EnumDataUtility___c::*)(::System::Enum*)>(&::UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_3)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6adfefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { "<GetCachedEnumData>b__2_3", {}, { ::i2c::type_of<::System::Enum*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._GetCachedEnumData_b__2_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EnumDataUtility___c::*)(::System::Enum*)>(&::UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6adff5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { "<GetCachedEnumData>b__2_4", {}, { ::i2c::type_of<::System::Enum*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::EnumDataUtility___c::setStaticF___9(::UnityEngine::EnumDataUtility___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EnumDataUtility___c*, "<>9", ::UnityEngine::EnumDataUtility___c*>(std::forward<::UnityEngine::EnumDataUtility___c*>(value));
}
inline ::UnityEngine::EnumDataUtility___c* UnityEngine::EnumDataUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::EnumDataUtility___c*, "<>9", ::UnityEngine::EnumDataUtility___c*>();
}
inline void UnityEngine::EnumDataUtility___c::setStaticF___9__2_5(::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*, "<>9__2_5", ::UnityEngine::EnumDataUtility___c*>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* UnityEngine::EnumDataUtility___c::getStaticF___9__2_5() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*, "<>9__2_5", ::UnityEngine::EnumDataUtility___c*>();
}
inline void UnityEngine::EnumDataUtility___c::setStaticF___9__2_1(::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>*, "<>9__2_1", ::UnityEngine::EnumDataUtility___c*>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* UnityEngine::EnumDataUtility___c::getStaticF___9__2_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>*, "<>9__2_1", ::UnityEngine::EnumDataUtility___c*>();
}
inline void UnityEngine::EnumDataUtility___c::setStaticF___9__2_2(::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>*, "<>9__2_2", ::UnityEngine::EnumDataUtility___c*>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>* UnityEngine::EnumDataUtility___c::getStaticF___9__2_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>*, "<>9__2_2", ::UnityEngine::EnumDataUtility___c*>();
}
inline void UnityEngine::EnumDataUtility___c::setStaticF___9__2_3(::System::Func_2<::System::Enum*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Enum*, int32_t>*, "<>9__2_3", ::UnityEngine::EnumDataUtility___c*>(std::forward<::System::Func_2<::System::Enum*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Enum*, int32_t>* UnityEngine::EnumDataUtility___c::getStaticF___9__2_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Enum*, int32_t>*, "<>9__2_3", ::UnityEngine::EnumDataUtility___c*>();
}
inline void UnityEngine::EnumDataUtility___c::setStaticF___9__2_4(::System::Func_2<::System::Enum*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Enum*, int32_t>*, "<>9__2_4", ::UnityEngine::EnumDataUtility___c*>(std::forward<::System::Func_2<::System::Enum*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Enum*, int32_t>* UnityEngine::EnumDataUtility___c::getStaticF___9__2_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Enum*, int32_t>*, "<>9__2_4", ::UnityEngine::EnumDataUtility___c*>();
}
inline void UnityEngine::EnumDataUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_5(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { "<GetCachedEnumData>b__2_5", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_1(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { "<GetCachedEnumData>b__2_1", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, f);
}
inline ::System::Enum* UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_2(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { "<GetCachedEnumData>b__2_2", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Enum*>(this, ___internal_method, f);
}
inline int32_t UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_3(::System::Enum* v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { "<GetCachedEnumData>b__2_3", {}, { ::i2c::type_of<::System::Enum*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, v);
}
inline int32_t UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_4(::System::Enum* v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c*>(), { "<GetCachedEnumData>b__2_4", {}, { ::i2c::type_of<::System::Enum*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, v);
}
inline ::UnityEngine::EnumDataUtility___c* UnityEngine::EnumDataUtility___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EnumDataUtility___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EnumDataUtility___c::EnumDataUtility___c() {}
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EnumDataUtility___c__DisplayClass2_0::*)()>(&::UnityEngine::EnumDataUtility___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6adf3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c__DisplayClass2_0._GetCachedEnumData_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EnumDataUtility___c__DisplayClass2_0::*)(::System::Reflection::FieldInfo*)>(
    &::UnityEngine::EnumDataUtility___c__DisplayClass2_0::_GetCachedEnumData_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6adffbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c__DisplayClass2_0*>(),
                                                                                           { "<GetCachedEnumData>b__0", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::StringW, ::StringW>*& UnityEngine::EnumDataUtility___c__DisplayClass2_0::__cordl_internal_get_nicifyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nicifyName;
}
constexpr ::System::Func_2<::StringW, ::StringW>* const& UnityEngine::EnumDataUtility___c__DisplayClass2_0::__cordl_internal_get_nicifyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nicifyName;
}
constexpr void UnityEngine::EnumDataUtility___c__DisplayClass2_0::__cordl_internal_set_nicifyName(::System::Func_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nicifyName = value;
}
inline void UnityEngine::EnumDataUtility___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::EnumDataUtility___c__DisplayClass2_0::_GetCachedEnumData_b__0(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility___c__DisplayClass2_0*>(),
                                                                                         { "<GetCachedEnumData>b__0", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, f);
}
inline ::UnityEngine::EnumDataUtility___c__DisplayClass2_0* UnityEngine::EnumDataUtility___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EnumDataUtility___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EnumDataUtility___c__DisplayClass2_0::EnumDataUtility___c__DisplayClass2_0() {}
// Ctor Parameters [CppParam { name: "nicifyName", ty: "::System::Func_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "field", ty:
// "::System::Reflection::FieldInfo*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EnumDataUtility___c__DisplayClass8_0::EnumDataUtility___c__DisplayClass8_0(::System::Func_2<::StringW, ::StringW>* nicifyName,
                                                                                                    ::System::Reflection::FieldInfo* field) noexcept {
  this->nicifyName = nicifyName;
  this->field = field;
}
// Ctor Parameters []
constexpr ::UnityEngine::EnumDataUtility___c__DisplayClass8_0::EnumDataUtility___c__DisplayClass8_0() {}
//  Writing Method size for method: ::UnityEngine::EnumDataUtility.GetCachedEnumData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EnumData (*)(::System::Type*, ::UnityEngine::EnumDataUtility_CachedType, ::System::Func_2<::StringW, ::StringW>*)>(
    &::UnityEngine::EnumDataUtility::GetCachedEnumData)> {
  constexpr static std::size_t size = 0xd80;
  constexpr static std::size_t addrs = 0x6ade66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(), { "GetCachedEnumData",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::EnumDataUtility_CachedType>(),
                                                                                                        ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility.HandleInspectorOrderAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::by_ref<::UnityEngine::EnumData>)>(&::UnityEngine::EnumDataUtility::HandleInspectorOrderAttribute)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x6adf50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(),
                                                             { "HandleInspectorOrderAttribute", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::EnumData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility.CheckObsoleteAddition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::FieldInfo*, ::UnityEngine::EnumDataUtility_CachedType)>(&::UnityEngine::EnumDataUtility::CheckObsoleteAddition)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6adf3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(),
                                                { "CheckObsoleteAddition", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::UnityEngine::EnumDataUtility_CachedType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility.EnumTooltipFromEnumField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::FieldInfo*)>(&::UnityEngine::EnumDataUtility::EnumTooltipFromEnumField)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6adf9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(), { "EnumTooltipFromEnumField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility.EnumNameFromEnumField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::FieldInfo*, ::System::Func_2<::StringW, ::StringW>*)>(
    &::UnityEngine::EnumDataUtility::EnumNameFromEnumField)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6adfad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(),
                                                { "EnumNameFromEnumField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility._EnumNameFromEnumField_g__NicifyName_8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::UnityEngine::EnumDataUtility___c__DisplayClass8_0>)>(
    &::UnityEngine::EnumDataUtility::_EnumNameFromEnumField_g__NicifyName_8_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6adfcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(),
                                                             { "<EnumNameFromEnumField>g__NicifyName|8_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::EnumDataUtility___c__DisplayClass8_0>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::EnumDataUtility::setStaticF_s_EnumData(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::EnumDataUtility_CachedType, ::System::Type*>, ::UnityEngine::EnumData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::EnumDataUtility_CachedType, ::System::Type*>, ::UnityEngine::EnumData>*,
                                    "s_EnumData", ::UnityEngine::EnumDataUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::EnumDataUtility_CachedType, ::System::Type*>, ::UnityEngine::EnumData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::EnumDataUtility_CachedType, ::System::Type*>, ::UnityEngine::EnumData>*
UnityEngine::EnumDataUtility::getStaticF_s_EnumData() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::EnumDataUtility_CachedType, ::System::Type*>, ::UnityEngine::EnumData>*,
                                           "s_EnumData", ::UnityEngine::EnumDataUtility*>();
}
inline ::UnityEngine::EnumData UnityEngine::EnumDataUtility::GetCachedEnumData(::System::Type* enumType, ::UnityEngine::EnumDataUtility_CachedType cachedType,
                                                                               ::System::Func_2<::StringW, ::StringW>* nicifyName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::EnumDataUtility*>(),
          { "GetCachedEnumData", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::EnumDataUtility_CachedType>(), ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EnumData>(nullptr, ___internal_method, enumType, cachedType, nicifyName);
}
inline void UnityEngine::EnumDataUtility::HandleInspectorOrderAttribute(::System::Type* enumType, ::by_ref<::UnityEngine::EnumData> enumData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(),
                                                           { "HandleInspectorOrderAttribute", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::EnumData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enumType, enumData);
}
inline bool UnityEngine::EnumDataUtility::CheckObsoleteAddition(::System::Reflection::FieldInfo* field, ::UnityEngine::EnumDataUtility_CachedType cachedType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(),
                                              { "CheckObsoleteAddition", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::UnityEngine::EnumDataUtility_CachedType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, field, cachedType);
}
inline ::StringW UnityEngine::EnumDataUtility::EnumTooltipFromEnumField(::System::Reflection::FieldInfo* field) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(), { "EnumTooltipFromEnumField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, field);
}
inline ::StringW UnityEngine::EnumDataUtility::EnumNameFromEnumField(::System::Reflection::FieldInfo* field, ::System::Func_2<::StringW, ::StringW>* nicifyName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(),
                                              { "EnumNameFromEnumField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, field, nicifyName);
}
inline ::StringW UnityEngine::EnumDataUtility::_EnumNameFromEnumField_g__NicifyName_8_0(::by_ref<::UnityEngine::EnumDataUtility___c__DisplayClass8_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EnumDataUtility*>(),
                                                           { "<EnumNameFromEnumField>g__NicifyName|8_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::EnumDataUtility___c__DisplayClass8_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::EnumDataUtility::EnumDataUtility() {}
