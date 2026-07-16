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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::ModestTree::ReflectionUtil::CreateArray)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6e3ee58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(),
                                                { "CreateArray", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::ReflectionUtil.CreateGenericList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::ModestTree::ReflectionUtil::CreateGenericList)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x6e3f0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(),
                                                { "CreateGenericList", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::ReflectionUtil.ToDebugString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::MethodInfo*)>(&::ModestTree::ReflectionUtil::ToDebugString)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e3f44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::ReflectionUtil.ToDebugString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Action*)>(&::ModestTree::ReflectionUtil::ToDebugString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e3f588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
inline ::System::Array* ModestTree::ReflectionUtil::CreateArray(::System::Type* elementType, ::System::Collections::Generic::List_1<::System::Object*>* instances) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(),
                                              { "CreateArray", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, elementType, instances);
}
inline ::System::Collections::IList* ModestTree::ReflectionUtil::CreateGenericList(::System::Type* elementType, ::System::Collections::Generic::List_1<::System::Object*>* instances) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(),
                                              { "CreateGenericList", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, elementType, instances);
}
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, method);
}
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, action);
}
template <typename TParam1> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_1<TParam1>* action) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString", { ::i2c::class_of<TParam1>() }, { ::i2c::type_of<::System::Action_1<TParam1>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, action);
}
template <typename TParam1, typename TParam2> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_2<TParam1, TParam2>* action) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(),
                                              { "ToDebugString", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() }, { ::i2c::type_of<::System::Action_2<TParam1, TParam2>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, action);
}
template <typename TParam1, typename TParam2, typename TParam3> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_3<TParam1, TParam2, TParam3>* action) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString",
                                                                                                               { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() },
                                                                                                               { ::i2c::type_of<::System::Action_3<TParam1, TParam2, TParam3>*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, action);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_4<TParam1, TParam2, TParam3, TParam4>* action) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString",
                                                                              { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() },
                                                                              { ::i2c::type_of<::System::Action_4<TParam1, TParam2, TParam3, TParam4>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, action);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_5<TParam1, TParam2, TParam3, TParam4, TParam5>* action) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(),
                                              { "ToDebugString",
                                                { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>() },
                                                { ::i2c::type_of<::System::Action_5<TParam1, TParam2, TParam3, TParam4, TParam5>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                                                     ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, action);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Action_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* action) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString",
                                                                                                  { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                                    ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>() },
                                                                                                  { ::i2c::type_of<::System::Action_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, action);
}
template <typename TParam1> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Func_1<TParam1>* func) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString", { ::i2c::class_of<TParam1>() }, { ::i2c::type_of<::System::Func_1<TParam1>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, func);
}
template <typename TParam1, typename TParam2> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Func_2<TParam1, TParam2>* func) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(),
                                              { "ToDebugString", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() }, { ::i2c::type_of<::System::Func_2<TParam1, TParam2>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, func);
}
template <typename TParam1, typename TParam2, typename TParam3> inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Func_3<TParam1, TParam2, TParam3>* func) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString",
                                                                                                               { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() },
                                                                                                               { ::i2c::type_of<::System::Func_3<TParam1, TParam2, TParam3>*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, func);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::StringW ModestTree::ReflectionUtil::ToDebugString(::System::Func_4<TParam1, TParam2, TParam3, TParam4>* func) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ModestTree::ReflectionUtil*>(), { "ToDebugString",
                                                                              { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() },
                                                                              { ::i2c::type_of<::System::Func_4<TParam1, TParam2, TParam3, TParam4>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, func);
}
// Ctor Parameters []
constexpr ::ModestTree::ReflectionUtil::ReflectionUtil() {}
