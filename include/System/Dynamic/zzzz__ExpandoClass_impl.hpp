#pragma once
// IWYU pragma private; include "System/Dynamic/ExpandoClass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/zzzz__ExpandoClass_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Dynamic/zzzz__ExpandoObject_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Dynamic::ExpandoClass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::ExpandoClass::*)()>(&::System::Dynamic::ExpandoClass::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x41022dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::ExpandoClass::*)(::ArrayW<::StringW, ::Array<::StringW>*>, int32_t)>(
    &::System::Dynamic::ExpandoClass::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4102384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.FindNewClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::ExpandoClass* (::System::Dynamic::ExpandoClass::*)(::StringW)>(
    &::System::Dynamic::ExpandoClass::FindNewClass)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x41023b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "FindNewClass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.GetTransitionList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::WeakReference*>* (::System::Dynamic::ExpandoClass::*)(int32_t)>(
    &::System::Dynamic::ExpandoClass::GetTransitionList)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x4102774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "GetTransitionList", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.GetValueIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Dynamic::ExpandoClass::*)(::StringW, bool, ::System::Dynamic::ExpandoObject*)>(
    &::System::Dynamic::ExpandoClass::GetValueIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x41028a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "GetValueIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::ExpandoObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.GetValueIndexCaseSensitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Dynamic::ExpandoClass::*)(::StringW)>(
    &::System::Dynamic::ExpandoClass::GetValueIndexCaseSensitive)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4102a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "GetValueIndexCaseSensitive",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.GetValueIndexCaseInsensitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Dynamic::ExpandoClass::*)(::StringW, ::System::Dynamic::ExpandoObject*)>(
    &::System::Dynamic::ExpandoClass::GetValueIndexCaseInsensitive)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x41028b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "GetValueIndexCaseInsensitive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::ExpandoObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::ExpandoClass.get_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Dynamic::ExpandoClass::*)()>(
    &::System::Dynamic::ExpandoClass::get_Keys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4102b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "get_Keys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Dynamic::ExpandoClass::__cordl_internal_get__keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Dynamic::ExpandoClass::__cordl_internal_get__keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
constexpr void System::Dynamic::ExpandoClass::__cordl_internal_set__keys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Dynamic::ExpandoClass::setStaticF_Empty(::System::Dynamic::ExpandoClass* value) {
  ::cordl_internals::setStaticField<::System::Dynamic::ExpandoClass*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get>(
      std::forward<::System::Dynamic::ExpandoClass*>(value));
}
inline ::System::Dynamic::ExpandoClass* System::Dynamic::ExpandoClass::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Dynamic::ExpandoClass*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get>();
}
inline void System::Dynamic::ExpandoClass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Dynamic::ExpandoClass::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> keys, int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keys, hashCode);
}
inline ::System::Dynamic::ExpandoClass* System::Dynamic::ExpandoClass::FindNewClass(::StringW newKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "FindNewClass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::ExpandoClass*, false>(this, ___internal_method, newKey);
}
inline ::System::Collections::Generic::List_1<::System::WeakReference*>* System::Dynamic::ExpandoClass::GetTransitionList(int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "GetTransitionList",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::WeakReference*>*, false>(this, ___internal_method, hashCode);
}
inline int32_t System::Dynamic::ExpandoClass::GetValueIndex(::StringW name, bool caseInsensitive, ::System::Dynamic::ExpandoObject* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "GetValueIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::ExpandoObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name, caseInsensitive, obj);
}
inline int32_t System::Dynamic::ExpandoClass::GetValueIndexCaseSensitive(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "GetValueIndexCaseSensitive",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline int32_t System::Dynamic::ExpandoClass::GetValueIndexCaseInsensitive(::StringW name, ::System::Dynamic::ExpandoObject* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "GetValueIndexCaseInsensitive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::ExpandoObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name, obj);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Dynamic::ExpandoClass::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::ExpandoClass*>::get(), "get_Keys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::System::Dynamic::ExpandoClass* System::Dynamic::ExpandoClass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::ExpandoClass*>());
}
inline ::System::Dynamic::ExpandoClass* System::Dynamic::ExpandoClass::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> keys, int32_t hashCode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::ExpandoClass*>(keys, hashCode));
}
// Ctor Parameters []
constexpr ::System::Dynamic::ExpandoClass::ExpandoClass() {}
