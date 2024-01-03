#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__DisposableManager_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DisposableManager_def.hpp"
#include "Zenject/zzzz__ILateDisposable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::__DisposableManager__DisposableInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DisposableManager__DisposableInfo::*)(::System::IDisposable*, int32_t)>(
    &::Zenject::__DisposableManager__DisposableInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f0f868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager__DisposableInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Zenject::__DisposableManager__DisposableInfo::_ctor(::System::IDisposable* disposable, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager__DisposableInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposable, priority);
}
// Ctor Parameters [CppParam { name: "Disposable", ty: "::System::IDisposable*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Zenject::__DisposableManager__DisposableInfo::__DisposableManager__DisposableInfo(::System::IDisposable* Disposable, int32_t Priority) noexcept {
  this->Disposable = Disposable;
  this->Priority = Priority;
}
// Ctor Parameters []
constexpr ::Zenject::__DisposableManager__DisposableInfo::__DisposableManager__DisposableInfo() {}
//  Writing Method size for method: ::Zenject::__DisposableManager__LateDisposableInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DisposableManager__LateDisposableInfo::*)(::Zenject::ILateDisposable*, int32_t)>(
    &::Zenject::__DisposableManager__LateDisposableInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2f0f87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager__LateDisposableInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateDisposable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager__LateDisposableInfo.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__DisposableManager__LateDisposableInfo::__zenCreate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2f10a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager__LateDisposableInfo*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager__LateDisposableInfo.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__DisposableManager__LateDisposableInfo::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2f10b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager__LateDisposableInfo*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Zenject::ILateDisposable*& Zenject::__DisposableManager__LateDisposableInfo::__get_LateDisposable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LateDisposable;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::ILateDisposable*> const& Zenject::__DisposableManager__LateDisposableInfo::__get_LateDisposable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LateDisposable;
}
constexpr void Zenject::__DisposableManager__LateDisposableInfo::__set_LateDisposable(::Zenject::ILateDisposable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LateDisposable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Zenject::__DisposableManager__LateDisposableInfo::__get_Priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Priority;
}
constexpr int32_t const& Zenject::__DisposableManager__LateDisposableInfo::__get_Priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Priority;
}
constexpr void Zenject::__DisposableManager__LateDisposableInfo::__set_Priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Priority = value;
}
inline ::Zenject::__DisposableManager__LateDisposableInfo* Zenject::__DisposableManager__LateDisposableInfo::New_ctor(::Zenject::ILateDisposable* lateDisposable, int32_t priority) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__DisposableManager__LateDisposableInfo*>(lateDisposable, priority));
}
inline void Zenject::__DisposableManager__LateDisposableInfo::_ctor(::Zenject::ILateDisposable* lateDisposable, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager__LateDisposableInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateDisposable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lateDisposable, priority);
}
inline ::System::Object* Zenject::__DisposableManager__LateDisposableInfo::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager__LateDisposableInfo*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__DisposableManager__LateDisposableInfo::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager__LateDisposableInfo*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__DisposableManager__LateDisposableInfo::__DisposableManager__LateDisposableInfo() {}
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DisposableManager____c__DisplayClass4_0::*)()>(
    &::Zenject::__DisposableManager____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0f860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass4_0.__ctor_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__DisposableManager____c__DisplayClass4_0::*)(
    ::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(&::Zenject::__DisposableManager____c__DisplayClass4_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f10e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_0*>::get(), "<.ctor>b__0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass4_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__DisposableManager____c__DisplayClass4_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f10eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass4_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__DisposableManager____c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f10f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_0*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::IDisposable*& Zenject::__DisposableManager____c__DisplayClass4_0::__get_disposable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposable;
}
constexpr ::cordl_internals::to_const_pointer<::System::IDisposable*> const& Zenject::__DisposableManager____c__DisplayClass4_0::__get_disposable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposable;
}
constexpr void Zenject::__DisposableManager____c__DisplayClass4_0::__set_disposable(::System::IDisposable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___disposable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__DisposableManager____c__DisplayClass4_0* Zenject::__DisposableManager____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__DisposableManager____c__DisplayClass4_0*>());
}
inline void Zenject::__DisposableManager____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__DisposableManager____c__DisplayClass4_0::__ctor_b__0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_0*>::get(), "<.ctor>b__0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::__DisposableManager____c__DisplayClass4_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__DisposableManager____c__DisplayClass4_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_0*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__DisposableManager____c__DisplayClass4_0::__DisposableManager____c__DisplayClass4_0() {}
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass4_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DisposableManager____c__DisplayClass4_1::*)()>(
    &::Zenject::__DisposableManager____c__DisplayClass4_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0f874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_1*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass4_1.__ctor_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__DisposableManager____c__DisplayClass4_1::*)(
    ::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(&::Zenject::__DisposableManager____c__DisplayClass4_1::__ctor_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f110c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_1*>::get(), "<.ctor>b__2", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass4_1.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__DisposableManager____c__DisplayClass4_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f11148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_1*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass4_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__DisposableManager____c__DisplayClass4_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f111a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_1*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Zenject::ILateDisposable*& Zenject::__DisposableManager____c__DisplayClass4_1::__get_lateDisposable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lateDisposable;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::ILateDisposable*> const& Zenject::__DisposableManager____c__DisplayClass4_1::__get_lateDisposable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lateDisposable;
}
constexpr void Zenject::__DisposableManager____c__DisplayClass4_1::__set_lateDisposable(::Zenject::ILateDisposable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lateDisposable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__DisposableManager____c__DisplayClass4_1* Zenject::__DisposableManager____c__DisplayClass4_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__DisposableManager____c__DisplayClass4_1*>());
}
inline void Zenject::__DisposableManager____c__DisplayClass4_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_1*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__DisposableManager____c__DisplayClass4_1::__ctor_b__2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_1*>::get(), "<.ctor>b__2", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::__DisposableManager____c__DisplayClass4_1::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_1*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__DisposableManager____c__DisplayClass4_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass4_1*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__DisposableManager____c__DisplayClass4_1::__DisposableManager____c__DisplayClass4_1() {}
//  Writing Method size for method: ::Zenject::__DisposableManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DisposableManager____c::*)()>(&::Zenject::__DisposableManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f113c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c.__ctor_b__4_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Zenject::__DisposableManager____c::*)(
    ::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(&::Zenject::__DisposableManager____c::__ctor_b__4_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f113d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), "<.ctor>b__4_1", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c.__ctor_b__4_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Zenject::__DisposableManager____c::*)(
    ::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(&::Zenject::__DisposableManager____c::__ctor_b__4_3)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f11430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), "<.ctor>b__4_3", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c._LateDispose_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::__DisposableManager____c::*)(::Zenject::__DisposableManager__LateDisposableInfo*)>(
    &::Zenject::__DisposableManager____c::_LateDispose_b__10_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f11490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), "<LateDispose>b__10_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DisposableManager__LateDisposableInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c._Dispose_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::__DisposableManager____c::*)(::Zenject::__DisposableManager__DisposableInfo)>(
    &::Zenject::__DisposableManager____c::_Dispose_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f114a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), "<Dispose>b__11_0", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DisposableManager__DisposableInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__DisposableManager____c::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f114b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__DisposableManager____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f1150c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Zenject::__DisposableManager____c::setStaticF___9(::Zenject::__DisposableManager____c* value) {
  ::cordl_internals::setStaticField<::Zenject::__DisposableManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get>(
      std::forward<::Zenject::__DisposableManager____c*>(value));
}
inline ::Zenject::__DisposableManager____c* Zenject::__DisposableManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__DisposableManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get>();
}
inline void Zenject::__DisposableManager____c::setStaticF___9__4_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>*, "<>9__4_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* Zenject::__DisposableManager____c::getStaticF___9__4_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>*, "<>9__4_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get>();
}
inline void Zenject::__DisposableManager____c::setStaticF___9__4_3(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>*, "<>9__4_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* Zenject::__DisposableManager____c::getStaticF___9__4_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>*, "<>9__4_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get>();
}
inline void Zenject::__DisposableManager____c::setStaticF___9__10_0(::System::Func_2<::Zenject::__DisposableManager__LateDisposableInfo*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::__DisposableManager__LateDisposableInfo*, int32_t>*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get>(
      std::forward<::System::Func_2<::Zenject::__DisposableManager__LateDisposableInfo*, int32_t>*>(value));
}
inline ::System::Func_2<::Zenject::__DisposableManager__LateDisposableInfo*, int32_t>* Zenject::__DisposableManager____c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::__DisposableManager__LateDisposableInfo*, int32_t>*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get>();
}
inline void Zenject::__DisposableManager____c::setStaticF___9__11_0(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo, int32_t>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get>(
      std::forward<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo, int32_t>*>(value));
}
inline ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo, int32_t>* Zenject::__DisposableManager____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::__DisposableManager__DisposableInfo, int32_t>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get>();
}
inline ::Zenject::__DisposableManager____c* Zenject::__DisposableManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__DisposableManager____c*>());
}
inline void Zenject::__DisposableManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Zenject::__DisposableManager____c::__ctor_b__4_1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), "<.ctor>b__4_1", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method, x);
}
inline ::System::Nullable_1<int32_t> Zenject::__DisposableManager____c::__ctor_b__4_3(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), "<.ctor>b__4_3", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method, x);
}
inline int32_t Zenject::__DisposableManager____c::_LateDispose_b__10_0(::Zenject::__DisposableManager__LateDisposableInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), "<LateDispose>b__10_0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DisposableManager__LateDisposableInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline int32_t Zenject::__DisposableManager____c::_Dispose_b__11_0(::Zenject::__DisposableManager__DisposableInfo x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), "<Dispose>b__11_0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DisposableManager__DisposableInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::__DisposableManager____c::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__DisposableManager____c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__DisposableManager____c::__DisposableManager____c() {}
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DisposableManager____c__DisplayClass9_0::*)()>(
    &::Zenject::__DisposableManager____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0fb94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass9_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass9_0._Remove_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__DisposableManager____c__DisplayClass9_0::*)(::Zenject::__DisposableManager__DisposableInfo)>(
    &::Zenject::__DisposableManager____c__DisplayClass9_0::_Remove_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f116cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass9_0*>::get(), "<Remove>b__0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DisposableManager__DisposableInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass9_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__DisposableManager____c__DisplayClass9_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f116dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass9_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DisposableManager____c__DisplayClass9_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__DisposableManager____c__DisplayClass9_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f11738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass9_0*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::IDisposable*& Zenject::__DisposableManager____c__DisplayClass9_0::__get_disposable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposable;
}
constexpr ::cordl_internals::to_const_pointer<::System::IDisposable*> const& Zenject::__DisposableManager____c__DisplayClass9_0::__get_disposable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposable;
}
constexpr void Zenject::__DisposableManager____c__DisplayClass9_0::__set_disposable(::System::IDisposable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___disposable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__DisposableManager____c__DisplayClass9_0* Zenject::__DisposableManager____c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__DisposableManager____c__DisplayClass9_0*>());
}
inline void Zenject::__DisposableManager____c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass9_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__DisposableManager____c__DisplayClass9_0::_Remove_b__0(::Zenject::__DisposableManager__DisposableInfo x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass9_0*>::get(), "<Remove>b__0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DisposableManager__DisposableInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::__DisposableManager____c__DisplayClass9_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass9_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__DisposableManager____c__DisplayClass9_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DisposableManager____c__DisplayClass9_0*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__DisposableManager____c__DisplayClass9_0::__DisposableManager____c__DisplayClass9_0() {}
//  Writing Method size for method: ::Zenject::DisposableManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DisposableManager::*)(
    ::System::Collections::Generic::List_1<::System::IDisposable*>*, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*,
    ::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>*, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*)>(
    &::Zenject::DisposableManager::_ctor)> {
  constexpr static std::size_t size = 0x830;
  constexpr static std::size_t addrs = 0x2f0f030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IDisposable*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposableManager.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DisposableManager::*)(::System::IDisposable*)>(&::Zenject::DisposableManager::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0f8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposableManager.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DisposableManager::*)(::System::IDisposable*, int32_t)>(&::Zenject::DisposableManager::Add)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2f0f8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposableManager.AddLate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DisposableManager::*)(::Zenject::ILateDisposable*)>(&::Zenject::DisposableManager::AddLate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0f970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "AddLate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateDisposable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposableManager.AddLate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DisposableManager::*)(::Zenject::ILateDisposable*, int32_t)>(
    &::Zenject::DisposableManager::AddLate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2f0f978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "AddLate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateDisposable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposableManager.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DisposableManager::*)(::System::IDisposable*)>(&::Zenject::DisposableManager::Remove)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2f0fa68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposableManager.LateDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DisposableManager::*)()>(&::Zenject::DisposableManager::LateDispose)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x2f0fb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "LateDispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposableManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DisposableManager::*)()>(&::Zenject::DisposableManager::Dispose)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2f0fff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposableManager.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::DisposableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2f10430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DisposableManager.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::DisposableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x2f105f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::DisposableManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::DisposableManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>*& Zenject::DisposableManager::__get__disposables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>*> const& Zenject::DisposableManager::__get__disposables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr void Zenject::DisposableManager::__set__disposables(::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disposables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>*& Zenject::DisposableManager::__get__lateDisposables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateDisposables;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>*> const&
Zenject::DisposableManager::__get__lateDisposables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateDisposables;
}
constexpr void Zenject::DisposableManager::__set__lateDisposables(::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lateDisposables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Zenject::DisposableManager::__get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& Zenject::DisposableManager::__get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void Zenject::DisposableManager::__set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr bool& Zenject::DisposableManager::__get__lateDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateDisposed;
}
constexpr bool const& Zenject::DisposableManager::__get__lateDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateDisposed;
}
constexpr void Zenject::DisposableManager::__set__lateDisposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lateDisposed = value;
}
inline ::Zenject::DisposableManager* Zenject::DisposableManager::New_ctor(::System::Collections::Generic::List_1<::System::IDisposable*>* disposables,
                                                                          ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities,
                                                                          ::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>* lateDisposables,
                                                                          ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* latePriorities) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::DisposableManager*>(disposables, priorities, lateDisposables, latePriorities));
}
inline void Zenject::DisposableManager::_ctor(::System::Collections::Generic::List_1<::System::IDisposable*>* disposables,
                                              ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities,
                                              ::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>* lateDisposables,
                                              ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* latePriorities) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IDisposable*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposables, priorities, lateDisposables, latePriorities);
}
inline void Zenject::DisposableManager::Add(::System::IDisposable* disposable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposable);
}
inline void Zenject::DisposableManager::Add(::System::IDisposable* disposable, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposable, priority);
}
inline void Zenject::DisposableManager::AddLate(::Zenject::ILateDisposable* disposable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "AddLate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateDisposable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposable);
}
inline void Zenject::DisposableManager::AddLate(::Zenject::ILateDisposable* disposable, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "AddLate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ILateDisposable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposable, priority);
}
inline void Zenject::DisposableManager::Remove(::System::IDisposable* disposable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposable);
}
inline void Zenject::DisposableManager::LateDispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "LateDispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::DisposableManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::DisposableManager::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::DisposableManager::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DisposableManager*>::get(), "__zenCreateInjectTypeInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::DisposableManager::DisposableManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
