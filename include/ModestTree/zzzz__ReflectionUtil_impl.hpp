#pragma once
// IWYU pragma private; include "ModestTree/ReflectionUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/zzzz__ReflectionUtil_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ModestTree::ReflectionUtil.CreateArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::ModestTree::ReflectionUtil::CreateArray)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x4af19c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "CreateArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::ReflectionUtil.CreateGenericList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::ModestTree::ReflectionUtil::CreateGenericList)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x4af1c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "CreateGenericList", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::ReflectionUtil.ToDebugString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::MethodInfo*)>(&::ModestTree::ReflectionUtil::ToDebugString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4af1fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::ReflectionUtil.ToDebugString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Action*)>(&::ModestTree::ReflectionUtil::ToDebugString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4af20f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Array* ModestTree::ReflectionUtil::CreateArray(::System::Type* elementType, ::System::Collections::Generic::List_1<::System::Object*>* instances) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "CreateArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(nullptr, ___internal_method, elementType, instances);
}
inline ::System::Collections::IList* ModestTree::ReflectionUtil::CreateGenericList(::System::Type* elementType, ::System::Collections::Generic::List_1<::System::Object*>* instances) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "CreateGenericList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(nullptr, ___internal_method, elementType, instances);
}
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, method);
}
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template <typename TParam1> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_1<TParam1>* action) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TParam1>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template <typename TParam1, typename TParam2> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_2<TParam1, TParam2>* action) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TParam1, TParam2>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template <typename TParam1, typename TParam2, typename TParam3> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_3<TParam1, TParam2, TParam3>* action) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<TParam1, TParam2, TParam3>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_4<TParam1, TParam2, TParam3, TParam4>* action) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<TParam1, TParam2, TParam3, TParam4>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TParam5>* action) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString",
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<TParam1, TParam2, TParam3, TParam4, TParam5>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* action) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString",
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, action);
}
template <typename TParam1> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Func_1<TParam1>* func) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TParam1>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, func);
}
template <typename TParam1, typename TParam2> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Func_2<TParam1, TParam2>* func) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TParam1, TParam2>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, func);
}
template <typename TParam1, typename TParam2, typename TParam3> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Func_3<TParam1, TParam2, TParam3>* func) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<TParam1, TParam2, TParam3>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, func);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Func_4<TParam1, TParam2, TParam3, TParam4>* func) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::ReflectionUtil*>::get(), "ToDebugString",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<TParam1, TParam2, TParam3, TParam4>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, func);
}
// Ctor Parameters []
constexpr ::ModestTree::ReflectionUtil::ReflectionUtil() {}
