#pragma once
// IWYU pragma private; include "Zenject/SubContainerPrefabBindingFinalizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__SubContainerPrefabBindingFinalizer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorCached_def.hpp"
#include "Zenject/zzzz__SubContainerPrefabBindingFinalizer_def.hpp"
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::*)()>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0._FinalizeBindingConcrete_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::IProvider* (::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
        &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::_FinalizeBindingConcrete_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4ab8024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                                                 "<FinalizeBindingConcrete>b__0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4ab80d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4ab8128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerPrefabBindingFinalizer*& Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerPrefabBindingFinalizer*> const&
Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_set___4__this(::Zenject::SubContainerPrefabBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*>());
}
inline void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::_FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                                               "<FinalizeBindingConcrete>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0() {}
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::*)()>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab800c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1._FinalizeBindingConcrete_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::IProvider* (::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::*)(::Zenject::DiContainer*, ::System::Type*)>(
        &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::_FinalizeBindingConcrete_b__1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4ab82e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                                                 "<FinalizeBindingConcrete>b__1", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4ab8374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4ab83c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorCached*& Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_get_containerCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorCached*> const&
Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_get_containerCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_set_containerCreator(::Zenject::SubContainerCreatorCached* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___containerCreator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*& Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0*> const&
Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__cordl_internal_set_CS$__8__locals1(::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1*>());
}
inline void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::_FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                                               "<FinalizeBindingConcrete>b__1", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1::__SubContainerPrefabBindingFinalizer____c__DisplayClass5_1() {}
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::*)()>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0._FinalizeBindingSelf_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::IProvider* (::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
        &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::_FinalizeBindingSelf_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4ab8580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                                                 "<FinalizeBindingSelf>b__0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4ab8630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4ab8684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerPrefabBindingFinalizer*& Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerPrefabBindingFinalizer*> const&
Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_set___4__this(::Zenject::SubContainerPrefabBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*>());
}
inline void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::_FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                                               "<FinalizeBindingSelf>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0() {}
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::*)()>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab801c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1._FinalizeBindingSelf_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::IProvider* (::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::*)(::Zenject::DiContainer*, ::System::Type*)>(
        &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::_FinalizeBindingSelf_b__1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4ab883c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                                                 "<FinalizeBindingSelf>b__1", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4ab88d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4ab8924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorCached*& Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_get_containerCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorCached*> const&
Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_get_containerCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_set_containerCreator(::Zenject::SubContainerCreatorCached* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___containerCreator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*& Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0*> const&
Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__cordl_internal_set_CS$__8__locals1(::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1*>());
}
inline void Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::_FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                                               "<FinalizeBindingSelf>b__1", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1::__SubContainerPrefabBindingFinalizer____c__DisplayClass6_1() {}
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer::*)(
    ::Zenject::BindInfo*, ::System::Object*, bool, ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*)>(&::Zenject::SubContainerPrefabBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4aac2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerPrefabBindingFinalizer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer.OnFinalizeBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerPrefabBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4ab7bd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerPrefabBindingFinalizer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerPrefabBindingFinalizer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer.FinalizeBindingConcrete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer::*)(
    ::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Zenject::SubContainerPrefabBindingFinalizer::FinalizeBindingConcrete)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x4ab7e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerPrefabBindingFinalizer*>::get(), "FinalizeBindingConcrete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer.FinalizeBindingSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerPrefabBindingFinalizer::FinalizeBindingSelf)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x4ab7c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerPrefabBindingFinalizer*>::get(), "FinalizeBindingSelf", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__subIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subIdentifier;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__subIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subIdentifier;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_set__subIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__resolveAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolveAll;
}
constexpr bool const& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__resolveAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolveAll;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_set__resolveAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolveAll = value;
}
constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__subContainerCreatorFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainerCreatorFactory;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*> const&
Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__subContainerCreatorFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainerCreatorFactory;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_set__subContainerCreatorFactory(::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subContainerCreatorFactory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SubContainerPrefabBindingFinalizer*
Zenject::SubContainerPrefabBindingFinalizer::New_ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                                                      ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* subContainerCreatorFactory) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::SubContainerPrefabBindingFinalizer*>(bindInfo, subIdentifier, resolveAll, subContainerCreatorFactory));
}
inline void Zenject::SubContainerPrefabBindingFinalizer::_ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                                                               ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* subContainerCreatorFactory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerPrefabBindingFinalizer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo, subIdentifier, resolveAll, subContainerCreatorFactory);
}
inline void Zenject::SubContainerPrefabBindingFinalizer::OnFinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerPrefabBindingFinalizer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void Zenject::SubContainerPrefabBindingFinalizer::FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerPrefabBindingFinalizer*>::get(), "FinalizeBindingConcrete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, concreteTypes);
}
inline void Zenject::SubContainerPrefabBindingFinalizer::FinalizeBindingSelf(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerPrefabBindingFinalizer*>::get(), "FinalizeBindingSelf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerPrefabBindingFinalizer::SubContainerPrefabBindingFinalizer() {}
