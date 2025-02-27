#pragma once
// IWYU pragma private; include "Zenject/ConditionCopyNonLazyBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__CopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindingCondition_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__CopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename T> inline void Zenject::ConditionCopyNonLazyBinder___c__4_1<T>::setStaticF___9(::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>* value) {
  ::cordl_internals::setStaticField<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*>::get>(
      std::forward<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*>(value));
}
template <typename T> inline ::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>* Zenject::ConditionCopyNonLazyBinder___c__4_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*>::get>();
}
template <typename T> inline void Zenject::ConditionCopyNonLazyBinder___c__4_1<T>::setStaticF___9__4_0(::Zenject::BindingCondition* value) {
  ::cordl_internals::setStaticField<::Zenject::BindingCondition*, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*>::get>(
      std::forward<::Zenject::BindingCondition*>(value));
}
template <typename T> inline ::Zenject::BindingCondition* Zenject::ConditionCopyNonLazyBinder___c__4_1<T>::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::Zenject::BindingCondition*, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*>::get>();
}
template <typename T> inline void Zenject::ConditionCopyNonLazyBinder___c__4_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Zenject::ConditionCopyNonLazyBinder___c__4_1<T>::_WhenInjectedInto_b__4_0(::Zenject::InjectContext* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*>::get(), "<WhenInjectedInto>b__4_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r);
}
template <typename T> inline ::System::Object* Zenject::ConditionCopyNonLazyBinder___c__4_1<T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::ConditionCopyNonLazyBinder___c__4_1<T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>* Zenject::ConditionCopyNonLazyBinder___c__4_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>::ConditionCopyNonLazyBinder___c__4_1() {}
template <typename T> inline void Zenject::ConditionCopyNonLazyBinder___c__5_1<T>::setStaticF___9(::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>* value) {
  ::cordl_internals::setStaticField<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*>::get>(
      std::forward<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*>(value));
}
template <typename T> inline ::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>* Zenject::ConditionCopyNonLazyBinder___c__5_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*>::get>();
}
template <typename T> inline void Zenject::ConditionCopyNonLazyBinder___c__5_1<T>::setStaticF___9__5_0(::Zenject::BindingCondition* value) {
  ::cordl_internals::setStaticField<::Zenject::BindingCondition*, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*>::get>(
      std::forward<::Zenject::BindingCondition*>(value));
}
template <typename T> inline ::Zenject::BindingCondition* Zenject::ConditionCopyNonLazyBinder___c__5_1<T>::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::Zenject::BindingCondition*, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*>::get>();
}
template <typename T> inline void Zenject::ConditionCopyNonLazyBinder___c__5_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Zenject::ConditionCopyNonLazyBinder___c__5_1<T>::_WhenNotInjectedInto_b__5_0(::Zenject::InjectContext* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*>::get(), "<WhenNotInjectedInto>b__5_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r);
}
template <typename T> inline ::System::Object* Zenject::ConditionCopyNonLazyBinder___c__5_1<T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::ConditionCopyNonLazyBinder___c__5_1<T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>* Zenject::ConditionCopyNonLazyBinder___c__5_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>::ConditionCopyNonLazyBinder___c__5_1() {}
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::*)()>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4b0ca8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0._WhenInjectedIntoInstance_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::*)(::Zenject::InjectContext*)>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::_WhenInjectedIntoInstance_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4b0cb5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0*>::get(), "<WhenInjectedIntoInstance>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4b0cb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4b0cbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::__cordl_internal_get_instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
constexpr ::System::Object* const& Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::__cordl_internal_get_instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
constexpr void Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::__cordl_internal_set_instance(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___instance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::_WhenInjectedIntoInstance_b__0(::Zenject::InjectContext* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0*>::get(), "<WhenInjectedIntoInstance>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r);
}
inline ::System::Object* Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0* Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0::ConditionCopyNonLazyBinder___c__DisplayClass2_0() {}
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::*)()>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4b0cb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0._WhenInjectedInto_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::*)(::Zenject::InjectContext*)>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::_WhenInjectedInto_b__0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4b0cd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0*>::get(), "<WhenInjectedInto>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4b0ce84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4b0ced8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::__cordl_internal_get_targets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targets;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::__cordl_internal_get_targets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targets;
}
constexpr void Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::__cordl_internal_set_targets(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::_WhenInjectedInto_b__0(::Zenject::InjectContext* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0*>::get(), "<WhenInjectedInto>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r);
}
inline ::System::Object* Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0* Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0::ConditionCopyNonLazyBinder___c__DisplayClass3_0() {}
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::*)()>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4b0ce7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1._WhenInjectedInto_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::*)(::System::Type*)>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::_WhenInjectedInto_b__1)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4b0d090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1*>::get(), "<WhenInjectedInto>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4b0d150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4b0d1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::InjectContext*& Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr ::Zenject::InjectContext* const& Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::__cordl_internal_set_r(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___r)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::_WhenInjectedInto_b__1(::System::Type* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1*>::get(), "<WhenInjectedInto>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1* Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1::ConditionCopyNonLazyBinder___c__DisplayClass3_1() {}
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConditionCopyNonLazyBinder::*)(::Zenject::BindInfo*)>(
    &::Zenject::ConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4b0c9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder.When
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::ConditionCopyNonLazyBinder::*)(::Zenject::BindingCondition*)>(
    &::Zenject::ConditionCopyNonLazyBinder::When)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4b0c9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "When", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingCondition*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder.WhenInjectedIntoInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::ConditionCopyNonLazyBinder::*)(::System::Object*)>(
    &::Zenject::ConditionCopyNonLazyBinder::WhenInjectedIntoInstance)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4b0c9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenInjectedIntoInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder.WhenInjectedInto
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (
    ::Zenject::ConditionCopyNonLazyBinder::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4b0ca94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenInjectedInto", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
inline void Zenject::ConditionCopyNonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::When(::Zenject::BindingCondition* condition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "When", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingCondition*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, condition);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::WhenInjectedIntoInstance(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenInjectedIntoInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, instance);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto(::ArrayW<::System::Type*, ::Array<::System::Type*>*> targets) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenInjectedInto", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, targets);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenInjectedInto",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::WhenNotInjectedInto() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenNotInjectedInto",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method);
}
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConditionCopyNonLazyBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::ConditionCopyNonLazyBinder::ConditionCopyNonLazyBinder() {}
