#pragma once
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
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::*)()>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ec7500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0._WhenInjectedIntoInstance_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::*)(::Zenject::InjectContext*)>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::_WhenInjectedIntoInstance_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ec75d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0*>::get(), "<WhenInjectedIntoInstance>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ec75f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ec7654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::__get_instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::__get_instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
constexpr void Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::__set_instance(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___instance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0* Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0*>());
}
inline void Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::_WhenInjectedIntoInstance_b__0(::Zenject::InjectContext* r) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0*>::get(), "<WhenInjectedIntoInstance>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r);
}
inline ::System::Object* Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass2_0::__ConditionCopyNonLazyBinder____c__DisplayClass2_0() {}
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::*)()>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ec75cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0._WhenInjectedInto_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::*)(::Zenject::InjectContext*)>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::_WhenInjectedInto_b__0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ec7814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0*>::get(), "<WhenInjectedInto>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ec7910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ec796c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::__get_targets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targets;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::__get_targets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targets;
}
constexpr void Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::__set_targets(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0* Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0*>());
}
inline void Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::_WhenInjectedInto_b__0(::Zenject::InjectContext* r) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0*>::get(), "<WhenInjectedInto>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r);
}
inline ::System::Object* Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_0::__ConditionCopyNonLazyBinder____c__DisplayClass3_0() {}
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::*)()>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ec7908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1._WhenInjectedInto_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::*)(::System::Type*)>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::_WhenInjectedInto_b__1)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2ec7b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1*>::get(), "<WhenInjectedInto>b__1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ec7bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ec7c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Zenject::InjectContext*& Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::__get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::__get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::__set_r(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___r)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1* Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1*>());
}
inline void Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::_WhenInjectedInto_b__1(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1*>::get(), "<WhenInjectedInto>b__1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ConditionCopyNonLazyBinder____c__DisplayClass3_1::__ConditionCopyNonLazyBinder____c__DisplayClass3_1() {}
template <typename T> inline void Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>::setStaticF___9(::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>* value) {
  ::cordl_internals::setStaticField<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*>::get>(
      std::forward<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*>(value));
}
template <typename T> inline ::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>* Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*>::get>();
}
template <typename T> inline void Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>::setStaticF___9__4_0(::Zenject::BindingCondition* value) {
  ::cordl_internals::setStaticField<::Zenject::BindingCondition*, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*>::get>(
      std::forward<::Zenject::BindingCondition*>(value));
}
template <typename T> inline ::Zenject::BindingCondition* Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::Zenject::BindingCondition*, "<>9__4_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*>::get>();
}
template <typename T> inline ::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>* Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*>());
}
template <typename T> inline void Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>::_WhenInjectedInto_b__4_0(::Zenject::InjectContext* r) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*>::get(), "<WhenInjectedInto>b__4_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r);
}
template <typename T> inline ::System::Object* Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::__ConditionCopyNonLazyBinder____c__4_1<T>::__ConditionCopyNonLazyBinder____c__4_1() {}
template <typename T> inline void Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>::setStaticF___9(::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>* value) {
  ::cordl_internals::setStaticField<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*>::get>(
      std::forward<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*>(value));
}
template <typename T> inline ::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>* Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*>::get>();
}
template <typename T> inline void Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>::setStaticF___9__5_0(::Zenject::BindingCondition* value) {
  ::cordl_internals::setStaticField<::Zenject::BindingCondition*, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*>::get>(
      std::forward<::Zenject::BindingCondition*>(value));
}
template <typename T> inline ::Zenject::BindingCondition* Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::Zenject::BindingCondition*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*>::get>();
}
template <typename T> inline ::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>* Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*>());
}
template <typename T> inline void Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>::_WhenNotInjectedInto_b__5_0(::Zenject::InjectContext* r) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*>::get(), "<WhenNotInjectedInto>b__5_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r);
}
template <typename T> inline ::System::Object* Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::__ConditionCopyNonLazyBinder____c__5_1<T>::__ConditionCopyNonLazyBinder____c__5_1() {}
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConditionCopyNonLazyBinder::*)(::Zenject::BindInfo*)>(
    &::Zenject::ConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ec7410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder.When
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::ConditionCopyNonLazyBinder::*)(::Zenject::BindingCondition*)>(
    &::Zenject::ConditionCopyNonLazyBinder::When)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ec7420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "When", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingCondition*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder.WhenInjectedIntoInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::ConditionCopyNonLazyBinder::*)(::System::Object*)>(
    &::Zenject::ConditionCopyNonLazyBinder::WhenInjectedIntoInstance)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2ec743c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenInjectedIntoInstance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConditionCopyNonLazyBinder.WhenInjectedInto
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (
    ::Zenject::ConditionCopyNonLazyBinder::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2ec7508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenInjectedInto", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ConditionCopyNonLazyBinder*>(bindInfo));
}
inline void Zenject::ConditionCopyNonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::When(::Zenject::BindingCondition* condition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "When", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingCondition*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, condition);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::WhenInjectedIntoInstance(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenInjectedIntoInstance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, instance);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto(::ArrayW<::System::Type*, ::Array<::System::Type*>*> targets) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenInjectedInto", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, targets);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenInjectedInto",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::ConditionCopyNonLazyBinder::WhenNotInjectedInto() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConditionCopyNonLazyBinder*>::get(), "WhenNotInjectedInto",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::ConditionCopyNonLazyBinder::ConditionCopyNonLazyBinder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
