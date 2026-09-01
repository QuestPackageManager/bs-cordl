#pragma once
// IWYU pragma private; include "System\Dynamic\ExpandoClass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/zzzz__ExpandoClass_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Dynamic/zzzz__ExpandoObject_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Dynamic::ExpandoClass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Dynamic::ExpandoClass::*)()>(&::System::Dynamic::ExpandoClass::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fc4230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Dynamic::ExpandoClass::*)(::ArrayW<::StringW>, int32_t)>(&::System::Dynamic::ExpandoClass::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc42d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.FindNewClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::ExpandoClass* (::System::Dynamic::ExpandoClass::*)(::StringW)>(&::System::Dynamic::ExpandoClass::FindNewClass)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x5fc42e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { "FindNewClass", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.GetTransitionList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::WeakReference*>* (::System::Dynamic::ExpandoClass::*)(int32_t)>(
    &::System::Dynamic::ExpandoClass::GetTransitionList)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5fc46d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { "GetTransitionList", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.GetValueIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Dynamic::ExpandoClass::*)(::StringW, bool, ::System::Dynamic::ExpandoObject*)>(
    &::System::Dynamic::ExpandoClass::GetValueIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fc4854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(),
                                                             { "GetValueIndex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Dynamic::ExpandoObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.GetValueIndexCaseSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Dynamic::ExpandoClass::*)(::StringW)>(&::System::Dynamic::ExpandoClass::GetValueIndexCaseSensitive)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fc49e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { "GetValueIndexCaseSensitive", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.GetValueIndexCaseInsensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Dynamic::ExpandoClass::*)(::StringW, ::System::Dynamic::ExpandoObject*)>(
    &::System::Dynamic::ExpandoClass::GetValueIndexCaseInsensitive)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5fc4864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(),
                                                             { "GetValueIndexCaseInsensitive", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Dynamic::ExpandoObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Dynamic::ExpandoClass::*)()>(&::System::Dynamic::ExpandoClass::get_Keys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc4b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { "get_Keys", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& System::Dynamic::ExpandoClass::__cordl_internal_get__keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
constexpr ::ArrayW<::StringW> const& System::Dynamic::ExpandoClass::__cordl_internal_get__keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
constexpr void System::Dynamic::ExpandoClass::__cordl_internal_set__keys(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keys = value;
}
constexpr int32_t& System::Dynamic::ExpandoClass::__cordl_internal_get__hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashCode;
}
constexpr int32_t const& System::Dynamic::ExpandoClass::__cordl_internal_get__hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashCode;
}
constexpr void System::Dynamic::ExpandoClass::__cordl_internal_set__hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashCode = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::WeakReference*>*>*&
System::Dynamic::ExpandoClass::__cordl_internal_get__transitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitions;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::WeakReference*>*>* const&
System::Dynamic::ExpandoClass::__cordl_internal_get__transitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitions;
}
constexpr void
System::Dynamic::ExpandoClass::__cordl_internal_set__transitions(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::WeakReference*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transitions = value;
}
inline void System::Dynamic::ExpandoClass::setStaticF_Empty(::System::Dynamic::ExpandoClass* value) {
  ::cordl_internals::setStaticField<::System::Dynamic::ExpandoClass*, "Empty", ::System::Dynamic::ExpandoClass*>(std::forward<::System::Dynamic::ExpandoClass*>(value));
}
inline ::System::Dynamic::ExpandoClass* System::Dynamic::ExpandoClass::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Dynamic::ExpandoClass*, "Empty", ::System::Dynamic::ExpandoClass*>();
}
inline void System::Dynamic::ExpandoClass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Dynamic::ExpandoClass::_ctor(::ArrayW<::StringW> keys, int32_t hashCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys, hashCode);
}
inline ::System::Dynamic::ExpandoClass* System::Dynamic::ExpandoClass::FindNewClass(::StringW newKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { "FindNewClass", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::ExpandoClass*>(this, ___internal_method, newKey);
}
inline ::System::Collections::Generic::List_1<::System::WeakReference*>* System::Dynamic::ExpandoClass::GetTransitionList(int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { "GetTransitionList", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::WeakReference*>*>(this, ___internal_method, hashCode);
}
inline int32_t System::Dynamic::ExpandoClass::GetValueIndex(::StringW name, bool caseInsensitive, ::System::Dynamic::ExpandoObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(),
                                                           { "GetValueIndex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Dynamic::ExpandoObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name, caseInsensitive, obj);
}
inline int32_t System::Dynamic::ExpandoClass::GetValueIndexCaseSensitive(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { "GetValueIndexCaseSensitive", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline int32_t System::Dynamic::ExpandoClass::GetValueIndexCaseInsensitive(::StringW name, ::System::Dynamic::ExpandoObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(),
                                                           { "GetValueIndexCaseInsensitive", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Dynamic::ExpandoObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name, obj);
}
inline ::ArrayW<::StringW> System::Dynamic::ExpandoClass::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::ExpandoClass*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::Dynamic::ExpandoClass* System::Dynamic::ExpandoClass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Dynamic::ExpandoClass*>());
}
inline ::System::Dynamic::ExpandoClass* System::Dynamic::ExpandoClass::New_ctor(::ArrayW<::StringW> keys, int32_t hashCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Dynamic::ExpandoClass*>(keys, hashCode));
}
// Ctor Parameters []
constexpr ::System::Dynamic::ExpandoClass::ExpandoClass() {}
