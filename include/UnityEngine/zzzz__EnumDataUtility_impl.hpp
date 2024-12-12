#pragma once
// IWYU pragma private; include "UnityEngine/EnumDataUtility.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EnumDataUtility___c::*)()>(&::UnityEngine::EnumDataUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48a9760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._GetCachedEnumData_b__2_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EnumDataUtility___c::*)(::System::Reflection::FieldInfo*)>(
    &::UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_5)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48a9768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), "<GetCachedEnumData>b__2_5", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._GetCachedEnumData_b__2_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EnumDataUtility___c::*)(::System::Reflection::FieldInfo*)>(
    &::UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48a9790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), "<GetCachedEnumData>b__2_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._GetCachedEnumData_b__2_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Enum* (::UnityEngine::EnumDataUtility___c::*)(::System::Reflection::FieldInfo*)>(
    &::UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_2)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x48a97e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), "<GetCachedEnumData>b__2_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._GetCachedEnumData_b__2_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EnumDataUtility___c::*)(::System::Enum*)>(
    &::UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_3)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x48a9878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), "<GetCachedEnumData>b__2_3",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Enum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c._GetCachedEnumData_b__2_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EnumDataUtility___c::*)(::System::Enum*)>(
    &::UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_4)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x48a98d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), "<GetCachedEnumData>b__2_4",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Enum*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::EnumDataUtility___c::setStaticF___9(::UnityEngine::EnumDataUtility___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EnumDataUtility___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>(
      std::forward<::UnityEngine::EnumDataUtility___c*>(value));
}
inline ::UnityEngine::EnumDataUtility___c* UnityEngine::EnumDataUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::EnumDataUtility___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>();
}
inline void UnityEngine::EnumDataUtility___c::setStaticF___9__2_5(::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*, "<>9__2_5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* UnityEngine::EnumDataUtility___c::getStaticF___9__2_5() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, int32_t>*, "<>9__2_5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>();
}
inline void UnityEngine::EnumDataUtility___c::setStaticF___9__2_1(::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>*, "<>9__2_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* UnityEngine::EnumDataUtility___c::getStaticF___9__2_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>*, "<>9__2_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>();
}
inline void UnityEngine::EnumDataUtility___c::setStaticF___9__2_2(::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>*, "<>9__2_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>* UnityEngine::EnumDataUtility___c::getStaticF___9__2_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::System::Enum*>*, "<>9__2_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>();
}
inline void UnityEngine::EnumDataUtility___c::setStaticF___9__2_3(::System::Func_2<::System::Enum*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Enum*, int32_t>*, "<>9__2_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>(
      std::forward<::System::Func_2<::System::Enum*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Enum*, int32_t>* UnityEngine::EnumDataUtility___c::getStaticF___9__2_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Enum*, int32_t>*, "<>9__2_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>();
}
inline void UnityEngine::EnumDataUtility___c::setStaticF___9__2_4(::System::Func_2<::System::Enum*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Enum*, int32_t>*, "<>9__2_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>(
      std::forward<::System::Func_2<::System::Enum*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Enum*, int32_t>* UnityEngine::EnumDataUtility___c::getStaticF___9__2_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Enum*, int32_t>*, "<>9__2_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get>();
}
inline void UnityEngine::EnumDataUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_5(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), "<GetCachedEnumData>b__2_5", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_1(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), "<GetCachedEnumData>b__2_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, f);
}
inline ::System::Enum* UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_2(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), "<GetCachedEnumData>b__2_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Enum*, false>(this, ___internal_method, f);
}
inline int32_t UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_3(::System::Enum* v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), "<GetCachedEnumData>b__2_3",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Enum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, v);
}
inline int32_t UnityEngine::EnumDataUtility___c::_GetCachedEnumData_b__2_4(::System::Enum* v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c*>::get(), "<GetCachedEnumData>b__2_4",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Enum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, v);
}
inline ::UnityEngine::EnumDataUtility___c* UnityEngine::EnumDataUtility___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::EnumDataUtility___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EnumDataUtility___c::EnumDataUtility___c() {}
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EnumDataUtility___c__DisplayClass2_0::*)()>(
    &::UnityEngine::EnumDataUtility___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48a8d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c__DisplayClass2_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility___c__DisplayClass2_0._GetCachedEnumData_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EnumDataUtility___c__DisplayClass2_0::*)(::System::Reflection::FieldInfo*)>(
    &::UnityEngine::EnumDataUtility___c__DisplayClass2_0::_GetCachedEnumData_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x48a9930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c__DisplayClass2_0*>::get(), "<GetCachedEnumData>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nicifyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::EnumDataUtility___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c__DisplayClass2_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::EnumDataUtility___c__DisplayClass2_0::_GetCachedEnumData_b__0(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility___c__DisplayClass2_0*>::get(), "<GetCachedEnumData>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, f);
}
inline ::UnityEngine::EnumDataUtility___c__DisplayClass2_0* UnityEngine::EnumDataUtility___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::EnumDataUtility___c__DisplayClass2_0*>());
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::EnumData (*)(::System::Type*, ::UnityEngine::EnumDataUtility_CachedType, ::System::Func_2<::StringW, ::StringW>*)>(&::UnityEngine::EnumDataUtility::GetCachedEnumData)> {
  constexpr static std::size_t size = 0xeac;
  constexpr static std::size_t addrs = 0x48a7ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "GetCachedEnumData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EnumDataUtility_CachedType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility.HandleInspectorOrderAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::ByRef<::UnityEngine::EnumData>)>(
    &::UnityEngine::EnumDataUtility::HandleInspectorOrderAttribute)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x48a8eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "HandleInspectorOrderAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::EnumData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility.CheckObsoleteAddition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::FieldInfo*, ::UnityEngine::EnumDataUtility_CachedType)>(
    &::UnityEngine::EnumDataUtility::CheckObsoleteAddition)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x48a8d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "CheckObsoleteAddition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EnumDataUtility_CachedType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility.EnumTooltipFromEnumField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::FieldInfo*)>(&::UnityEngine::EnumDataUtility::EnumTooltipFromEnumField)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x48a9324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "EnumTooltipFromEnumField", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility.EnumNameFromEnumField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::FieldInfo*, ::System::Func_2<::StringW, ::StringW>*)>(
    &::UnityEngine::EnumDataUtility::EnumNameFromEnumField)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x48a945c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "EnumNameFromEnumField", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EnumDataUtility._EnumNameFromEnumField_g__NicifyName_8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ByRef<::UnityEngine::EnumDataUtility___c__DisplayClass8_0>)>(
    &::UnityEngine::EnumDataUtility::_EnumNameFromEnumField_g__NicifyName_8_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x48a9628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "<EnumNameFromEnumField>g__NicifyName|8_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::EnumDataUtility___c__DisplayClass8_0>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::EnumDataUtility::setStaticF_s_EnumData(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::EnumDataUtility_CachedType, ::System::Type*>, ::UnityEngine::EnumData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::EnumDataUtility_CachedType, ::System::Type*>, ::UnityEngine::EnumData>*,
                                    "s_EnumData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::EnumDataUtility_CachedType, ::System::Type*>, ::UnityEngine::EnumData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::EnumDataUtility_CachedType, ::System::Type*>, ::UnityEngine::EnumData>*
UnityEngine::EnumDataUtility::getStaticF_s_EnumData() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::EnumDataUtility_CachedType, ::System::Type*>, ::UnityEngine::EnumData>*,
                                           "s_EnumData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get>();
}
inline ::UnityEngine::EnumData UnityEngine::EnumDataUtility::GetCachedEnumData(::System::Type* enumType, ::UnityEngine::EnumDataUtility_CachedType cachedType,
                                                                               ::System::Func_2<::StringW, ::StringW>* nicifyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "GetCachedEnumData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EnumDataUtility_CachedType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EnumData, false>(nullptr, ___internal_method, enumType, cachedType, nicifyName);
}
inline void UnityEngine::EnumDataUtility::HandleInspectorOrderAttribute(::System::Type* enumType, ::ByRef<::UnityEngine::EnumData> enumData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "HandleInspectorOrderAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::EnumData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enumType, enumData);
}
inline bool UnityEngine::EnumDataUtility::CheckObsoleteAddition(::System::Reflection::FieldInfo* field, ::UnityEngine::EnumDataUtility_CachedType cachedType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "CheckObsoleteAddition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EnumDataUtility_CachedType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, field, cachedType);
}
inline ::StringW UnityEngine::EnumDataUtility::EnumTooltipFromEnumField(::System::Reflection::FieldInfo* field) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "EnumTooltipFromEnumField", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, field);
}
inline ::StringW UnityEngine::EnumDataUtility::EnumNameFromEnumField(::System::Reflection::FieldInfo* field, ::System::Func_2<::StringW, ::StringW>* nicifyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "EnumNameFromEnumField", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, field, nicifyName);
}
inline ::StringW UnityEngine::EnumDataUtility::_EnumNameFromEnumField_g__NicifyName_8_0(::ByRef<::UnityEngine::EnumDataUtility___c__DisplayClass8_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EnumDataUtility*>::get(), "<EnumNameFromEnumField>g__NicifyName|8_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::EnumDataUtility___c__DisplayClass8_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::EnumDataUtility::EnumDataUtility() {}
