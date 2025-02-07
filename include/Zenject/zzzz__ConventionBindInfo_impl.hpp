#pragma once
// IWYU pragma private; include "Zenject/ConventionBindInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ConventionBindInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__ConventionBindInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConventionBindInfo___c__DisplayClass6_0::*)()>(
    &::Zenject::ConventionBindInfo___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4b04df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass6_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass6_0._ShouldIncludeAssembly_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ConventionBindInfo___c__DisplayClass6_0::*)(
    ::System::Func_2<::System::Reflection::Assembly*, bool>*)>(&::Zenject::ConventionBindInfo___c__DisplayClass6_0::_ShouldIncludeAssembly_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4b05068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass6_0*>::get(), "<ShouldIncludeAssembly>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Reflection::Assembly*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass6_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::ConventionBindInfo___c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4b05090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass6_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass6_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionBindInfo___c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4b050e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass6_0*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Assembly*& Zenject::ConventionBindInfo___c__DisplayClass6_0::__cordl_internal_get_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr ::System::Reflection::Assembly* const& Zenject::ConventionBindInfo___c__DisplayClass6_0::__cordl_internal_get_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr void Zenject::ConventionBindInfo___c__DisplayClass6_0::__cordl_internal_set_assembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::ConventionBindInfo___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass6_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::ConventionBindInfo___c__DisplayClass6_0::_ShouldIncludeAssembly_b__0(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass6_0*>::get(), "<ShouldIncludeAssembly>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Reflection::Assembly*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, predicate);
}
inline ::System::Object* Zenject::ConventionBindInfo___c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass6_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionBindInfo___c__DisplayClass6_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass6_0*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionBindInfo___c__DisplayClass6_0* Zenject::ConventionBindInfo___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConventionBindInfo___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionBindInfo___c__DisplayClass6_0::ConventionBindInfo___c__DisplayClass6_0() {}
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConventionBindInfo___c__DisplayClass7_0::*)()>(
    &::Zenject::ConventionBindInfo___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4b04ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass7_0._ShouldIncludeType_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ConventionBindInfo___c__DisplayClass7_0::*)(::System::Func_2<::System::Type*, bool>*)>(
    &::Zenject::ConventionBindInfo___c__DisplayClass7_0::_ShouldIncludeType_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4b0529c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>::get(), "<ShouldIncludeType>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Type*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass7_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::ConventionBindInfo___c__DisplayClass7_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4b052c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass7_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionBindInfo___c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4b05318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::ConventionBindInfo___c__DisplayClass7_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Zenject::ConventionBindInfo___c__DisplayClass7_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::ConventionBindInfo___c__DisplayClass7_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::ConventionBindInfo___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::ConventionBindInfo___c__DisplayClass7_0::_ShouldIncludeType_b__0(::System::Func_2<::System::Type*, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>::get(), "<ShouldIncludeType>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Type*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, predicate);
}
inline ::System::Object* Zenject::ConventionBindInfo___c__DisplayClass7_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionBindInfo___c__DisplayClass7_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionBindInfo___c__DisplayClass7_0* Zenject::ConventionBindInfo___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionBindInfo___c__DisplayClass7_0::ConventionBindInfo___c__DisplayClass7_0() {}
//  Writing Method size for method: ::Zenject::ConventionBindInfo.AddAssemblyFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConventionBindInfo::*)(::System::Func_2<::System::Reflection::Assembly*, bool>*)>(
    &::Zenject::ConventionBindInfo::AddAssemblyFilter)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4b046a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "AddAssemblyFilter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Reflection::Assembly*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.AddTypeFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConventionBindInfo::*)(::System::Func_2<::System::Type*, bool>*)>(
    &::Zenject::ConventionBindInfo::AddTypeFilter)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4b04c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "AddTypeFilter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Type*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.GetAllAssemblies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* (::Zenject::ConventionBindInfo::*)()>(
    &::Zenject::ConventionBindInfo::GetAllAssemblies)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4b04d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "GetAllAssemblies",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.ShouldIncludeAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ConventionBindInfo::*)(::System::Reflection::Assembly*)>(
    &::Zenject::ConventionBindInfo::ShouldIncludeAssembly)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4b04d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "ShouldIncludeAssembly", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.ShouldIncludeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ConventionBindInfo::*)(::System::Type*)>(&::Zenject::ConventionBindInfo::ShouldIncludeType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4b04dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "ShouldIncludeType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.GetTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::Zenject::ConventionBindInfo::*)(::System::Reflection::Assembly*)>(&::Zenject::ConventionBindInfo::GetTypes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4b04ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "GetTypes", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.ResolveTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Type*>* (::Zenject::ConventionBindInfo::*)()>(
    &::Zenject::ConventionBindInfo::ResolveTypes)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4b036a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "ResolveTypes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ConventionBindInfo::*)()>(&::Zenject::ConventionBindInfo::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4b035b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo._ResolveTypes_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (
    ::Zenject::ConventionBindInfo::*)(::System::Reflection::Assembly*)>(&::Zenject::ConventionBindInfo::_ResolveTypes_b__9_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4b05064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "<ResolveTypes>b__9_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>*& Zenject::ConventionBindInfo::__cordl_internal_get__typeFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeFilters;
}
constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* const& Zenject::ConventionBindInfo::__cordl_internal_get__typeFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeFilters;
}
constexpr void Zenject::ConventionBindInfo::__cordl_internal_set__typeFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeFilters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>*& Zenject::ConventionBindInfo::__cordl_internal_get__assemblyFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assemblyFilters;
}
constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* const& Zenject::ConventionBindInfo::__cordl_internal_get__assemblyFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assemblyFilters;
}
constexpr void Zenject::ConventionBindInfo::__cordl_internal_set__assemblyFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assemblyFilters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
Zenject::ConventionBindInfo::setStaticF__assemblyTypeCache(::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*, "_assemblyTypeCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*
Zenject::ConventionBindInfo::getStaticF__assemblyTypeCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*, "_assemblyTypeCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get>();
}
inline void Zenject::ConventionBindInfo::AddAssemblyFilter(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "AddAssemblyFilter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Reflection::Assembly*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, predicate);
}
inline void Zenject::ConventionBindInfo::AddTypeFilter(::System::Func_2<::System::Type*, bool>* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "AddTypeFilter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Type*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, predicate);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* Zenject::ConventionBindInfo::GetAllAssemblies() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "GetAllAssemblies",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*, false>(this, ___internal_method);
}
inline bool Zenject::ConventionBindInfo::ShouldIncludeAssembly(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "ShouldIncludeAssembly", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, assembly);
}
inline bool Zenject::ConventionBindInfo::ShouldIncludeType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "ShouldIncludeType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> Zenject::ConventionBindInfo::GetTypes(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "GetTypes", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method, assembly);
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Zenject::ConventionBindInfo::ResolveTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "ResolveTypes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Type*>*, false>(this, ___internal_method);
}
inline void Zenject::ConventionBindInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::ConventionBindInfo::_ResolveTypes_b__9_0(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConventionBindInfo*>::get(), "<ResolveTypes>b__9_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method, assembly);
}
inline ::Zenject::ConventionBindInfo* Zenject::ConventionBindInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConventionBindInfo*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionBindInfo::ConventionBindInfo() {}
