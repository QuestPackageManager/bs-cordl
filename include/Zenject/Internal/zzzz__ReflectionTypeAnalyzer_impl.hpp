#pragma once
// IWYU pragma private; include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeAnalyzer_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeAnalyzer_def.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4b264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._GetPropertyInfos_b__5_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::PropertyInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::_GetPropertyInfos_b__5_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6d4b268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<GetPropertyInfos>b__5_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._GetFieldInfos_b__6_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::FieldInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::_GetFieldInfos_b__6_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6d4b36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<GetFieldInfos>b__6_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._GetMethodInfos_b__7_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::MethodInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::_GetMethodInfos_b__7_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6d4b470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<GetMethodInfos>b__7_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._TryGetInjectConstructor_b__11_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::ConstructorInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__11_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6d4b574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<TryGetInjectConstructor>b__11_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._TryGetInjectConstructor_b__11_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::ConstructorInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__11_1)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d4b678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<TryGetInjectConstructor>b__11_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._TryGetInjectConstructor_b__11_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::ConstructorInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__11_2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d4b6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<TryGetInjectConstructor>b__11_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d4b714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6d4b758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9(::Zenject::Internal::ReflectionTypeAnalyzer___c*  value)  {
::cordl_internals::setStaticField<::Zenject::Internal::ReflectionTypeAnalyzer___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>(std::forward<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(value));
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Zenject::Internal::ReflectionTypeAnalyzer___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__5_0(::System::Func_2<::System::Reflection::PropertyInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::PropertyInfo*,bool>*, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>(std::forward<::System::Func_2<::System::Reflection::PropertyInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::PropertyInfo*,bool>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__5_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::PropertyInfo*,bool>*, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__6_0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*,bool>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>(std::forward<::System::Func_2<::System::Reflection::FieldInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*,bool>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__7_0(::System::Func_2<::System::Reflection::MethodInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::MethodInfo*,bool>*, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>(std::forward<::System::Func_2<::System::Reflection::MethodInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::MethodInfo*,bool>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::MethodInfo*,bool>*, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__11_0(::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>(std::forward<::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::ConstructorInfo*,bool>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__11_1(::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*, "<>9__11_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>(std::forward<::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::ConstructorInfo*,bool>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__11_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*, "<>9__11_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__11_2(::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*, "<>9__11_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>(std::forward<::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*>(value));
}
inline ::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__11_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*, "<>9__11_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c::_GetPropertyInfos_b__5_0(::System::Reflection::PropertyInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<GetPropertyInfos>b__5_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c::_GetFieldInfos_b__6_0(::System::Reflection::FieldInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<GetFieldInfos>b__6_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c::_GetMethodInfos_b__7_0(::System::Reflection::MethodInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<GetMethodInfos>b__7_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__11_0(::System::Reflection::ConstructorInfo*  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<TryGetInjectConstructor>b__11_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__11_1(::System::Reflection::ConstructorInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<TryGetInjectConstructor>b__11_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline int32_t Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__11_2(::System::Reflection::ConstructorInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "<TryGetInjectConstructor>b__11_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c* Zenject::Internal::ReflectionTypeAnalyzer___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeAnalyzer___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c::ReflectionTypeAnalyzer___c()   {
}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4b674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0._TryGetInjectConstructor_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::_TryGetInjectConstructor_b__3)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6d4b8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0*>::get(),
                        "<TryGetInjectConstructor>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d4b9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6d4ba04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ConstructorInfo*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::__cordl_internal_get_c()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c;
}
constexpr ::System::Reflection::ConstructorInfo* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::__cordl_internal_get_c() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::__cordl_internal_set_c(::System::Reflection::ConstructorInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___c)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::_TryGetInjectConstructor_b__3(::System::Type*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0*>::get(),
                        "<TryGetInjectConstructor>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0::ReflectionTypeAnalyzer___c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4bb98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0._GetPropertyInfos_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::*)(::System::Reflection::PropertyInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::_GetPropertyInfos_b__1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6d4bb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0*>::get(),
                        "<GetPropertyInfos>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d4bc3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6d4bc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::_GetPropertyInfos_b__1(::System::Reflection::PropertyInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0*>::get(),
                        "<GetPropertyInfos>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0::ReflectionTypeAnalyzer___c__DisplayClass5_0()   {
}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4b368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1._GetPropertyInfos_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::_GetPropertyInfos_b__2)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6d4be14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1*>::get(),
                        "<GetPropertyInfos>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d4bee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6d4bf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::PropertyInfo*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr ::System::Reflection::PropertyInfo* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::__cordl_internal_set_x(::System::Reflection::PropertyInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::_GetPropertyInfos_b__2(::System::Type*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1*>::get(),
                        "<GetPropertyInfos>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1::ReflectionTypeAnalyzer___c__DisplayClass5_1()   {
}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4c0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0._GetFieldInfos_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::*)(::System::Reflection::FieldInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::_GetFieldInfos_b__1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6d4c0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>::get(),
                        "<GetFieldInfos>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d4c164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6d4c1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::_GetFieldInfos_b__1(::System::Reflection::FieldInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>::get(),
                        "<GetFieldInfos>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::ReflectionTypeAnalyzer___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4b46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1._GetFieldInfos_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::_GetFieldInfos_b__2)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6d4c33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>::get(),
                        "<GetFieldInfos>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d4c410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6d4c454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr ::System::Reflection::FieldInfo* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__cordl_internal_set_x(::System::Reflection::FieldInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::_GetFieldInfos_b__2(::System::Type*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>::get(),
                        "<GetFieldInfos>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::ReflectionTypeAnalyzer___c__DisplayClass6_1()   {
}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4c5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0._GetMethodInfos_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::*)(::System::Reflection::ParameterInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::_GetMethodInfos_b__2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6d4c5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>::get(),
                        "<GetMethodInfos>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d4c65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6d4c6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<::System::Reflection::ParameterInfo*,::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__cordl_internal_get___9__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr ::System::Func_2<::System::Reflection::ParameterInfo*,::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__cordl_internal_get___9__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__cordl_internal_set___9__2(::System::Func_2<::System::Reflection::ParameterInfo*,::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::_GetMethodInfos_b__2(::System::Reflection::ParameterInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>::get(),
                        "<GetMethodInfos>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::ReflectionTypeAnalyzer___c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4b570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1._GetMethodInfos_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::_GetMethodInfos_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d4c834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>::get(),
                        "<GetMethodInfos>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d4c8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6d4c8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr ::System::Reflection::MethodInfo* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__cordl_internal_set_x(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::_GetMethodInfos_b__1(::System::Type*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>::get(),
                        "<GetMethodInfos>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::ReflectionTypeAnalyzer___c__DisplayClass7_1()   {
}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4ca84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0._GetConstructorInfo_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::*)(::System::Reflection::ParameterInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::_GetConstructorInfo_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6d4ca88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>::get(),
                        "<GetConstructorInfo>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d4caf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6d4cb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::_GetConstructorInfo_b__0(::System::Reflection::ParameterInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>::get(),
                        "<GetConstructorInfo>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::ReflectionTypeAnalyzer___c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.AddCustomInjectAttribute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d49d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "AddCustomInjectAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetReflectionInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::ReflectionTypeInfo* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::GetReflectionInfo)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6d45440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetReflectionInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetPropertyInfos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::GetPropertyInfos)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6d4a724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetPropertyInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetFieldInfos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::GetFieldInfos)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6d4a508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetFieldInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetMethodInfos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::GetMethodInfos)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x6d4a094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetMethodInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetConstructorInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::GetConstructorInfo)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6d49e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetConstructorInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.CreateInjectableInfoForParam
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* (*)(::System::Type*, ::System::Reflection::ParameterInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::CreateInjectableInfoForParam)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6d4ad8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "CreateInjectableInfoForParam",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetInjectableInfoForMember
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectableInfo* (*)(::System::Type*, ::System::Reflection::MemberInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::GetInjectableInfoForMember)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6d4afb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetInjectableInfoForMember",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.TryGetInjectConstructor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::TryGetInjectConstructor)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x6d4a940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "TryGetInjectConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Zenject::Internal::ReflectionTypeAnalyzer::setStaticF__injectAttributeTypes(::System::Collections::Generic::HashSet_1<::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Type*>*, "_injectAttributeTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get>(std::forward<::System::Collections::Generic::HashSet_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::System::Type*>* Zenject::Internal::ReflectionTypeAnalyzer::getStaticF__injectAttributeTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Type*>*, "_injectAttributeTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get>();
}
template<typename T>
inline void Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                    "AddCustomInjectAttribute",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "AddCustomInjectAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline ::Zenject::Internal::ReflectionTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer::GetReflectionInfo(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetReflectionInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo*, false>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* Zenject::Internal::ReflectionTypeAnalyzer::GetPropertyInfos(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetPropertyInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>*, false>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* Zenject::Internal::ReflectionTypeAnalyzer::GetFieldInfos(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetFieldInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>*, false>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* Zenject::Internal::ReflectionTypeAnalyzer::GetMethodInfos(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetMethodInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>*, false>(nullptr, ___internal_method, type);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* Zenject::Internal::ReflectionTypeAnalyzer::GetConstructorInfo(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetConstructorInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*, false>(nullptr, ___internal_method, type);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* Zenject::Internal::ReflectionTypeAnalyzer::CreateInjectableInfoForParam(::System::Type*  parentType, ::System::Reflection::ParameterInfo*  paramInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "CreateInjectableInfoForParam",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, false>(nullptr, ___internal_method, parentType, paramInfo);
}
inline ::Zenject::InjectableInfo* Zenject::Internal::ReflectionTypeAnalyzer::GetInjectableInfoForMember(::System::Type*  parentType, ::System::Reflection::MemberInfo*  memInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "GetInjectableInfoForMember",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectableInfo*, false>(nullptr, ___internal_method, parentType, memInfo);
}
inline ::System::Reflection::ConstructorInfo* Zenject::Internal::ReflectionTypeAnalyzer::TryGetInjectConstructor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(),
                        "TryGetInjectConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer::ReflectionTypeAnalyzer()   {
}
