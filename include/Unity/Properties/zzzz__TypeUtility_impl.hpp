#pragma once
// IWYU pragma private; include "Unity/Properties/TypeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__ITypeVisitor_impl.hpp"
#include "Unity/Properties/zzzz__TypeUtility_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_1_def.hpp"
#include "Unity/Properties/zzzz__TypeUtility_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::Unity::Properties::TypeUtility_ITypeConstructor.get_CanBeInstantiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Properties::TypeUtility_ITypeConstructor::*)()>(
    &::Unity::Properties::TypeUtility_ITypeConstructor::get_CanBeInstantiated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_ITypeConstructor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_ITypeConstructor*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility_ITypeConstructor.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Unity::Properties::TypeUtility_ITypeConstructor::*)()>(
    &::Unity::Properties::TypeUtility_ITypeConstructor::Instantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_ITypeConstructor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_ITypeConstructor*>::get(), 1));
    return ___internal_method;
  }
};
inline bool Unity::Properties::TypeUtility_ITypeConstructor::get_CanBeInstantiated() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_ITypeConstructor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* Unity::Properties::TypeUtility_ITypeConstructor::Instantiate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_ITypeConstructor*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Properties::TypeUtility_ITypeConstructor_1<T>::Instantiate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Properties::TypeUtility_ITypeConstructor_1<T>::SetExplicitConstructor(::System::Func_1<T>* constructor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructor);
}
/// @brief Convert operator to "::Unity::Properties::TypeUtility_ITypeConstructor"
template <typename T> constexpr Unity::Properties::TypeUtility_ITypeConstructor_1<T>::operator ::Unity::Properties::TypeUtility_ITypeConstructor*() noexcept {
  return static_cast<::Unity::Properties::TypeUtility_ITypeConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::TypeUtility_ITypeConstructor"
template <typename T>
constexpr ::Unity::Properties::TypeUtility_ITypeConstructor* Unity::Properties::TypeUtility_ITypeConstructor_1<T>::i___Unity__Properties__TypeUtility_ITypeConstructor() noexcept {
  return static_cast<::Unity::Properties::TypeUtility_ITypeConstructor*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Func_1<T>*& Unity::Properties::TypeUtility_TypeConstructor_1<T>::__cordl_internal_get_m_ExplicitConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExplicitConstructor;
}
template <typename T> constexpr ::System::Func_1<T>* const& Unity::Properties::TypeUtility_TypeConstructor_1<T>::__cordl_internal_get_m_ExplicitConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExplicitConstructor;
}
template <typename T> constexpr void Unity::Properties::TypeUtility_TypeConstructor_1<T>::__cordl_internal_set_m_ExplicitConstructor(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_ExplicitConstructor, value);
}
template <typename T> constexpr ::System::Func_1<T>*& Unity::Properties::TypeUtility_TypeConstructor_1<T>::__cordl_internal_get_m_ImplicitConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImplicitConstructor;
}
template <typename T> constexpr ::System::Func_1<T>* const& Unity::Properties::TypeUtility_TypeConstructor_1<T>::__cordl_internal_get_m_ImplicitConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImplicitConstructor;
}
template <typename T> constexpr void Unity::Properties::TypeUtility_TypeConstructor_1<T>::__cordl_internal_set_m_ImplicitConstructor(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_ImplicitConstructor, value);
}
template <typename T> constexpr ::Unity::Properties::IConstructor_1<T>*& Unity::Properties::TypeUtility_TypeConstructor_1<T>::__cordl_internal_get_m_OverrideConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverrideConstructor;
}
template <typename T> constexpr ::Unity::Properties::IConstructor_1<T>* const& Unity::Properties::TypeUtility_TypeConstructor_1<T>::__cordl_internal_get_m_OverrideConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverrideConstructor;
}
template <typename T> constexpr void Unity::Properties::TypeUtility_TypeConstructor_1<T>::__cordl_internal_set_m_OverrideConstructor(::Unity::Properties::IConstructor_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_OverrideConstructor, value);
}
template <typename T> inline bool Unity::Properties::TypeUtility_TypeConstructor_1<T>::Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>::get(),
                                  "Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Properties::TypeUtility_TypeConstructor_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Properties::TypeUtility_TypeConstructor_1<T>::SetImplicitConstructor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>::get(),
                                                                             "SetImplicitConstructor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Properties::TypeUtility_TypeConstructor_1<T>::CreateValueTypeInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>::get(),
                                                                             "CreateValueTypeInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline T Unity::Properties::TypeUtility_TypeConstructor_1<T>::CreateScriptableObjectInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>::get(),
                                                                             "CreateScriptableObjectInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline T Unity::Properties::TypeUtility_TypeConstructor_1<T>::CreateClassInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>::get(),
                                                                             "CreateClassInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline void Unity::Properties::TypeUtility_TypeConstructor_1<T>::SetExplicitConstructor(::System::Func_1<T>* constructor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>::get(), "SetExplicitConstructor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructor);
}
template <typename T> inline T Unity::Properties::TypeUtility_TypeConstructor_1<T>::Unity_Properties_TypeUtility_ITypeConstructor_T__Instantiate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>::get(),
                                               "Unity.Properties.TypeUtility.ITypeConstructor<T>.Instantiate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Properties::TypeUtility_TypeConstructor_1<T>::Unity_Properties_TypeUtility_ITypeConstructor_Instantiate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>::get(),
                                               "Unity.Properties.TypeUtility.ITypeConstructor.Instantiate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Properties::TypeUtility_TypeConstructor_1<T>* Unity::Properties::TypeUtility_TypeConstructor_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>());
}
/// @brief Convert operator to "::Unity::Properties::TypeUtility_ITypeConstructor_1<T>"
template <typename T> constexpr Unity::Properties::TypeUtility_TypeConstructor_1<T>::operator ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*() noexcept {
  return static_cast<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::TypeUtility_ITypeConstructor_1<T>"
template <typename T>
constexpr ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* Unity::Properties::TypeUtility_TypeConstructor_1<T>::i___Unity__Properties__TypeUtility_ITypeConstructor_1_T_() noexcept {
  return static_cast<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::TypeUtility_ITypeConstructor"
template <typename T> constexpr Unity::Properties::TypeUtility_TypeConstructor_1<T>::operator ::Unity::Properties::TypeUtility_ITypeConstructor*() noexcept {
  return static_cast<::Unity::Properties::TypeUtility_ITypeConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::TypeUtility_ITypeConstructor"
template <typename T> constexpr ::Unity::Properties::TypeUtility_ITypeConstructor* Unity::Properties::TypeUtility_TypeConstructor_1<T>::i___Unity__Properties__TypeUtility_ITypeConstructor() noexcept {
  return static_cast<::Unity::Properties::TypeUtility_ITypeConstructor*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Properties::TypeUtility_TypeConstructor_1<T>::TypeUtility_TypeConstructor_1() {}
//  Writing Method size for method: ::Unity::Properties::TypeUtility_NonConstructable.Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Properties::TypeUtility_NonConstructable::*)()>(
    &::Unity::Properties::TypeUtility_NonConstructable::Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4912998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_NonConstructable*>::get(),
                                    "Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility_NonConstructable.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Unity::Properties::TypeUtility_NonConstructable::*)()>(
    &::Unity::Properties::TypeUtility_NonConstructable::Instantiate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x49129a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_NonConstructable*>::get(),
                                                                               "Instantiate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility_NonConstructable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::TypeUtility_NonConstructable::*)()>(
    &::Unity::Properties::TypeUtility_NonConstructable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4912574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_NonConstructable*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Unity::Properties::TypeUtility_NonConstructable::Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_NonConstructable*>::get(),
                                  "Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* Unity::Properties::TypeUtility_NonConstructable::Instantiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_NonConstructable*>::get(),
                                                                             "Instantiate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Unity::Properties::TypeUtility_NonConstructable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_NonConstructable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Properties::TypeUtility_NonConstructable* Unity::Properties::TypeUtility_NonConstructable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::TypeUtility_NonConstructable*>());
}
/// @brief Convert operator to "::Unity::Properties::TypeUtility_ITypeConstructor"
constexpr Unity::Properties::TypeUtility_NonConstructable::operator ::Unity::Properties::TypeUtility_ITypeConstructor*() noexcept {
  return static_cast<::Unity::Properties::TypeUtility_ITypeConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::TypeUtility_ITypeConstructor"
constexpr ::Unity::Properties::TypeUtility_ITypeConstructor* Unity::Properties::TypeUtility_NonConstructable::i___Unity__Properties__TypeUtility_ITypeConstructor() noexcept {
  return static_cast<::Unity::Properties::TypeUtility_ITypeConstructor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeUtility_NonConstructable::TypeUtility_NonConstructable() {}
template <typename T> inline void Unity::Properties::TypeUtility_Cache_1<T>::setStaticF_TypeConstructor(::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*, "TypeConstructor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_Cache_1<T>>::get>(
      std::forward<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>(value));
}
template <typename T> inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* Unity::Properties::TypeUtility_Cache_1<T>::getStaticF_TypeConstructor() {
  return ::cordl_internals::getStaticField<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*, "TypeConstructor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_Cache_1<T>>::get>();
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Properties::TypeUtility_Cache_1<T>::TypeUtility_Cache_1() {}
//  Writing Method size for method: ::Unity::Properties::TypeUtility_TypeConstructorVisitor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::TypeUtility_TypeConstructorVisitor::*)()>(
    &::Unity::Properties::TypeUtility_TypeConstructorVisitor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x491256c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructorVisitor*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Unity::Properties::TypeUtility_ITypeConstructor*& Unity::Properties::TypeUtility_TypeConstructorVisitor::__cordl_internal_get_TypeConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeConstructor;
}
constexpr ::Unity::Properties::TypeUtility_ITypeConstructor* const& Unity::Properties::TypeUtility_TypeConstructorVisitor::__cordl_internal_get_TypeConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeConstructor;
}
constexpr void Unity::Properties::TypeUtility_TypeConstructorVisitor::__cordl_internal_set_TypeConstructor(::Unity::Properties::TypeUtility_ITypeConstructor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TypeConstructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContainer> inline void Unity::Properties::TypeUtility_TypeConstructorVisitor::Visit() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructorVisitor*>::get(), "Visit",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Properties::TypeUtility_TypeConstructorVisitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility_TypeConstructorVisitor*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Properties::TypeUtility_TypeConstructorVisitor* Unity::Properties::TypeUtility_TypeConstructorVisitor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::TypeUtility_TypeConstructorVisitor*>());
}
/// @brief Convert operator to "::Unity::Properties::ITypeVisitor"
constexpr Unity::Properties::TypeUtility_TypeConstructorVisitor::operator ::Unity::Properties::ITypeVisitor*() noexcept {
  return static_cast<::Unity::Properties::ITypeVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ITypeVisitor"
constexpr ::Unity::Properties::ITypeVisitor* Unity::Properties::TypeUtility_TypeConstructorVisitor::i___Unity__Properties__ITypeVisitor() noexcept {
  return static_cast<::Unity::Properties::ITypeVisitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeUtility_TypeConstructorVisitor::TypeUtility_TypeConstructorVisitor() {}
//  Writing Method size for method: ::Unity::Properties::TypeUtility___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::TypeUtility___c::*)()>(&::Unity::Properties::TypeUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4912a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility___c.__cctor_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (::Unity::Properties::TypeUtility___c::*)()>(
    &::Unity::Properties::TypeUtility___c::__cctor_b__11_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4912a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility___c*>::get(), "<.cctor>b__11_0",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility___c.__cctor_b__11_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::TypeUtility___c::*)(::System::Text::StringBuilder*)>(
    &::Unity::Properties::TypeUtility___c::__cctor_b__11_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4912aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility___c*>::get(), "<.cctor>b__11_1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility___c.__cctor_b__11_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Properties::TypeUtility___c::*)()>(&::Unity::Properties::TypeUtility___c::__cctor_b__11_2)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4912abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility___c*>::get(), "<.cctor>b__11_2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Properties::TypeUtility___c::setStaticF___9(::Unity::Properties::TypeUtility___c* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::TypeUtility___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility___c*>::get>(
      std::forward<::Unity::Properties::TypeUtility___c*>(value));
}
inline ::Unity::Properties::TypeUtility___c* Unity::Properties::TypeUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Properties::TypeUtility___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility___c*>::get>();
}
inline void Unity::Properties::TypeUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* Unity::Properties::TypeUtility___c::__cctor_b__11_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility___c*>::get(), "<.cctor>b__11_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(this, ___internal_method);
}
inline void Unity::Properties::TypeUtility___c::__cctor_b__11_1(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility___c*>::get(), "<.cctor>b__11_1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline ::StringW Unity::Properties::TypeUtility___c::__cctor_b__11_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility___c*>::get(), "<.cctor>b__11_2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Properties::TypeUtility___c* Unity::Properties::TypeUtility___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::TypeUtility___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeUtility___c::TypeUtility___c() {}
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetTypeDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::GetTypeDisplayName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4911480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "GetTypeDisplayName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetTypeDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*, ::System::Collections::Generic::IReadOnlyList_1<::System::Type*>*, ::ByRef<int32_t>)>(
    &::Unity::Properties::TypeUtility::GetTypeDisplayName)> {
  constexpr static std::size_t size = 0x9a4;
  constexpr static std::size_t addrs = 0x4911598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "GetTypeDisplayName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Type*>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetRootType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::GetRootType)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x4911f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "GetRootType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CreateTypeConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::TypeUtility_ITypeConstructor* (*)(::System::Type*)>(
    &::Unity::Properties::TypeUtility::CreateTypeConstructor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x4912070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CreateTypeConstructor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetTypeConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::TypeUtility_ITypeConstructor* (*)(::System::Type*)>(
    &::Unity::Properties::TypeUtility::GetTypeConstructor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x491257c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "GetTypeConstructor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CanBeInstantiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::CanBeInstantiated)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4912634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CanBeInstantiated", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CheckIsAssignableFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::System::Type*)>(&::Unity::Properties::TypeUtility::CheckIsAssignableFrom)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x4912700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CheckIsAssignableFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CheckCanBeInstantiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Properties::TypeUtility_ITypeConstructor*, ::System::Type*)>(
    &::Unity::Properties::TypeUtility::CheckCanBeInstantiated)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4912868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CheckCanBeInstantiated", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::TypeUtility_ITypeConstructor*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void
Unity::Properties::TypeUtility::setStaticF_s_TypeConstructors(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>*, "s_TypeConstructors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>* Unity::Properties::TypeUtility::getStaticF_s_TypeConstructors() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>*, "s_TypeConstructors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>();
}
inline void Unity::Properties::TypeUtility::setStaticF_s_CreateTypeConstructor(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "s_CreateTypeConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* Unity::Properties::TypeUtility::getStaticF_s_CreateTypeConstructor() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "s_CreateTypeConstructor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>();
}
inline void Unity::Properties::TypeUtility::setStaticF_s_CachedResolvedName(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>*, "s_CachedResolvedName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>* Unity::Properties::TypeUtility::getStaticF_s_CachedResolvedName() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>*, "s_CachedResolvedName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>();
}
inline void Unity::Properties::TypeUtility::setStaticF_s_Builders(::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*, "s_Builders",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* Unity::Properties::TypeUtility::getStaticF_s_Builders() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*, "s_Builders",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>();
}
inline void Unity::Properties::TypeUtility::setStaticF_syncedPoolObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "syncedPoolObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Unity::Properties::TypeUtility::getStaticF_syncedPoolObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "syncedPoolObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get>();
}
inline ::StringW Unity::Properties::TypeUtility::GetTypeDisplayName(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "GetTypeDisplayName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
inline ::StringW Unity::Properties::TypeUtility::GetTypeDisplayName(::System::Type* type, ::System::Collections::Generic::IReadOnlyList_1<::System::Type*>* args, ::ByRef<int32_t> argIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "GetTypeDisplayName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Type*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type, args, argIndex);
}
inline ::System::Type* Unity::Properties::TypeUtility::GetRootType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "GetRootType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::Unity::Properties::TypeUtility_ITypeConstructor* Unity::Properties::TypeUtility::CreateTypeConstructor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CreateTypeConstructor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::TypeUtility_ITypeConstructor*, false>(nullptr, ___internal_method, type);
}
template <typename T> inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* Unity::Properties::TypeUtility::CreateTypeConstructor() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CreateTypeConstructor",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*, false>(nullptr, ___internal_method);
}
inline ::Unity::Properties::TypeUtility_ITypeConstructor* Unity::Properties::TypeUtility::GetTypeConstructor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "GetTypeConstructor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::TypeUtility_ITypeConstructor*, false>(nullptr, ___internal_method, type);
}
template <typename T> inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* Unity::Properties::TypeUtility::GetTypeConstructor() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "GetTypeConstructor",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*, false>(nullptr, ___internal_method);
}
inline bool Unity::Properties::TypeUtility::CanBeInstantiated(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CanBeInstantiated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
template <typename T> inline bool Unity::Properties::TypeUtility::CanBeInstantiated() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CanBeInstantiated",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
template <typename T> inline void Unity::Properties::TypeUtility::SetExplicitInstantiationMethod(::System::Func_1<T>* constructor) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "SetExplicitInstantiationMethod",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, constructor);
}
template <typename T> inline T Unity::Properties::TypeUtility::Instantiate() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "Instantiate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline bool Unity::Properties::TypeUtility::TryInstantiate(::ByRef<T> instance) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "TryInstantiate",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, instance);
}
template <typename T> inline T Unity::Properties::TypeUtility::Instantiate(::System::Type* derivedType) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "Instantiate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, derivedType);
}
template <typename T> inline bool Unity::Properties::TypeUtility::TryInstantiate(::System::Type* derivedType, ::ByRef<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "TryInstantiate",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, derivedType, value);
}
template <typename TArray> inline TArray Unity::Properties::TypeUtility::InstantiateArray(int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "InstantiateArray",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get() }));
  return ::cordl_internals::RunMethodRethrow<TArray, false>(nullptr, ___internal_method, count);
}
template <typename TArray> inline bool Unity::Properties::TypeUtility::TryInstantiateArray(int32_t count, ::ByRef<TArray> instance) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "TryInstantiateArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TArray>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, count, instance);
}
template <typename TArray> inline TArray Unity::Properties::TypeUtility::InstantiateArray(::System::Type* derivedType, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "InstantiateArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArray>::get() }));
  return ::cordl_internals::RunMethodRethrow<TArray, false>(nullptr, ___internal_method, derivedType, count);
}
inline void Unity::Properties::TypeUtility::CheckIsAssignableFrom(::System::Type* type, ::System::Type* derivedType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CheckIsAssignableFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, derivedType);
}
template <typename T> inline void Unity::Properties::TypeUtility::CheckCanBeInstantiated(::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* constructor) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CheckCanBeInstantiated",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, constructor);
}
inline void Unity::Properties::TypeUtility::CheckCanBeInstantiated(::Unity::Properties::TypeUtility_ITypeConstructor* constructor, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeUtility*>::get(), "CheckCanBeInstantiated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::TypeUtility_ITypeConstructor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, constructor, type);
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeUtility::TypeUtility() {}
