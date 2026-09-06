#pragma once
// IWYU pragma private; include "Unity/Properties/IMemberInfo.hpp"
#include "Unity/Properties/zzzz__IMemberInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Properties::IMemberInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::IMemberInfo::*)()>(&::Unity::Properties::IMemberInfo::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IMemberInfo*>(), { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::IMemberInfo.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::IMemberInfo::*)()>(&::Unity::Properties::IMemberInfo::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IMemberInfo*>(), { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::IMemberInfo.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Unity::Properties::IMemberInfo::*)()>(&::Unity::Properties::IMemberInfo::get_ValueType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IMemberInfo*>(), { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::IMemberInfo.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Properties::IMemberInfo::*)(::System::Object*)>(&::Unity::Properties::IMemberInfo::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IMemberInfo*>(), { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::IMemberInfo.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::IMemberInfo::*)(::System::Object*, ::System::Object*)>(&::Unity::Properties::IMemberInfo::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IMemberInfo*>(), { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::IMemberInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (::Unity::Properties::IMemberInfo::*)()>(
    &::Unity::Properties::IMemberInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IMemberInfo*>(), { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 5 }));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::IMemberInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::IMemberInfo::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Unity::Properties::IMemberInfo::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* Unity::Properties::IMemberInfo::GetValue(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline void Unity::Properties::IMemberInfo::SetValue(::System::Object* obj, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* Unity::Properties::IMemberInfo::GetCustomAttributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IMemberInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>(this, ___internal_method);
}
