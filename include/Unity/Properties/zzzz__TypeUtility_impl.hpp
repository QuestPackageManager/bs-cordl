#pragma once
// IWYU pragma private; include "Unity/Properties/TypeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__TypeUtility_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_1_def.hpp"
#include "Unity/Properties/zzzz__ITypeVisitor_def.hpp"
#include "Unity/Properties/zzzz__TypeUtility_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::Unity::Properties::TypeUtility_ITypeConstructor.get_CanBeInstantiated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::TypeUtility_ITypeConstructor::*)()>(&::Unity::Properties::TypeUtility_ITypeConstructor::get_CanBeInstantiated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_ITypeConstructor*>(), { ::i2c::class_of<::Unity::Properties::TypeUtility_ITypeConstructor*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility_ITypeConstructor.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Properties::TypeUtility_ITypeConstructor::*)()>(&::Unity::Properties::TypeUtility_ITypeConstructor::Instantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_ITypeConstructor*>(), { ::i2c::class_of<::Unity::Properties::TypeUtility_ITypeConstructor*>(), 1 }));
    return ___internal_method;
  }
};
inline bool Unity::Properties::TypeUtility_ITypeConstructor::get_CanBeInstantiated() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::TypeUtility_ITypeConstructor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Unity::Properties::TypeUtility_ITypeConstructor::Instantiate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::TypeUtility_ITypeConstructor*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline T Unity::Properties::TypeUtility_ITypeConstructor_1<T>::Instantiate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void Unity::Properties::TypeUtility_ITypeConstructor_1<T>::SetExplicitConstructor(::System::Func_1<T>* constructor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constructor);
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
  this->___m_ExplicitConstructor = value;
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
  this->___m_ImplicitConstructor = value;
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
  this->___m_OverrideConstructor = value;
}
template <typename T> inline bool Unity::Properties::TypeUtility_TypeConstructor_1<T>::Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>(), { "Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void Unity::Properties::TypeUtility_TypeConstructor_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void Unity::Properties::TypeUtility_TypeConstructor_1<T>::SetImplicitConstructor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>(), { "SetImplicitConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T Unity::Properties::TypeUtility_TypeConstructor_1<T>::CreateValueTypeInstance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>(), { "CreateValueTypeInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline T Unity::Properties::TypeUtility_TypeConstructor_1<T>::CreateScriptableObjectInstance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>(), { "CreateScriptableObjectInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline T Unity::Properties::TypeUtility_TypeConstructor_1<T>::CreateClassInstance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>(), { "CreateClassInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline void Unity::Properties::TypeUtility_TypeConstructor_1<T>::SetExplicitConstructor(::System::Func_1<T>* constructor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>(), { "SetExplicitConstructor", {}, { ::i2c::type_of<::System::Func_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constructor);
}
template <typename T> inline T Unity::Properties::TypeUtility_TypeConstructor_1<T>::Unity_Properties_TypeUtility_ITypeConstructor_T__Instantiate() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>(), { "Unity.Properties.TypeUtility.ITypeConstructor<T>.Instantiate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Properties::TypeUtility_TypeConstructor_1<T>::Unity_Properties_TypeUtility_ITypeConstructor_Instantiate() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>(), { "Unity.Properties.TypeUtility.ITypeConstructor.Instantiate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline ::Unity::Properties::TypeUtility_TypeConstructor_1<T>* Unity::Properties::TypeUtility_TypeConstructor_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::TypeUtility_TypeConstructor_1<T>*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::TypeUtility_NonConstructable::*)()>(
    &::Unity::Properties::TypeUtility_NonConstructable::Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bae6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_NonConstructable*>(), { "Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility_NonConstructable.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Properties::TypeUtility_NonConstructable::*)()>(&::Unity::Properties::TypeUtility_NonConstructable::Instantiate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6bae6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_NonConstructable*>(), { "Instantiate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility_NonConstructable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::TypeUtility_NonConstructable::*)()>(&::Unity::Properties::TypeUtility_NonConstructable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bae2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_NonConstructable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Unity::Properties::TypeUtility_NonConstructable::Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_NonConstructable*>(), { "Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Unity::Properties::TypeUtility_NonConstructable::Instantiate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_NonConstructable*>(), { "Instantiate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Unity::Properties::TypeUtility_NonConstructable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_NonConstructable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::TypeUtility_NonConstructable* Unity::Properties::TypeUtility_NonConstructable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::TypeUtility_NonConstructable*>());
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
  ::cordl_internals::setStaticField<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*, "TypeConstructor", ::Unity::Properties::TypeUtility_Cache_1<T>>(
      std::forward<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>(value));
}
template <typename T> inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* Unity::Properties::TypeUtility_Cache_1<T>::getStaticF_TypeConstructor() {
  return ::cordl_internals::getStaticField<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*, "TypeConstructor", ::Unity::Properties::TypeUtility_Cache_1<T>>();
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Properties::TypeUtility_Cache_1<T>::TypeUtility_Cache_1() {}
//  Writing Method size for method: ::Unity::Properties::TypeUtility_TypeConstructorVisitor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::TypeUtility_TypeConstructorVisitor::*)()>(&::Unity::Properties::TypeUtility_TypeConstructorVisitor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bae2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructorVisitor*>(), { ".ctor", {}, {} })));
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
  this->___TypeConstructor = value;
}
template <typename TContainer> inline void Unity::Properties::TypeUtility_TypeConstructorVisitor::Visit() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructorVisitor*>(), { "Visit", { ::i2c::class_of<TContainer>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Properties::TypeUtility_TypeConstructorVisitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility_TypeConstructorVisitor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::TypeUtility_TypeConstructorVisitor* Unity::Properties::TypeUtility_TypeConstructorVisitor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::TypeUtility_TypeConstructorVisitor*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::TypeUtility___c::*)()>(&::Unity::Properties::TypeUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bae77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility___c.__cctor_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::Unity::Properties::TypeUtility___c::*)()>(&::Unity::Properties::TypeUtility___c::__cctor_b__11_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6bae780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility___c*>(), { "<.cctor>b__11_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility___c.__cctor_b__11_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::TypeUtility___c::*)(::System::Text::StringBuilder*)>(&::Unity::Properties::TypeUtility___c::__cctor_b__11_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6bae7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility___c*>(), { "<.cctor>b__11_1", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility___c.__cctor_b__11_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::TypeUtility___c::*)()>(&::Unity::Properties::TypeUtility___c::__cctor_b__11_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bae7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility___c*>(), { "<.cctor>b__11_2", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::TypeUtility___c::setStaticF___9(::Unity::Properties::TypeUtility___c* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::TypeUtility___c*, "<>9", ::Unity::Properties::TypeUtility___c*>(std::forward<::Unity::Properties::TypeUtility___c*>(value));
}
inline ::Unity::Properties::TypeUtility___c* Unity::Properties::TypeUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Properties::TypeUtility___c*, "<>9", ::Unity::Properties::TypeUtility___c*>();
}
inline void Unity::Properties::TypeUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* Unity::Properties::TypeUtility___c::__cctor_b__11_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility___c*>(), { "<.cctor>b__11_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method);
}
inline void Unity::Properties::TypeUtility___c::__cctor_b__11_1(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility___c*>(), { "<.cctor>b__11_1", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline ::StringW Unity::Properties::TypeUtility___c::__cctor_b__11_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility___c*>(), { "<.cctor>b__11_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Unity::Properties::TypeUtility___c* Unity::Properties::TypeUtility___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::TypeUtility___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeUtility___c::TypeUtility___c() {}
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetTypeDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::GetTypeDisplayName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6bad5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "GetTypeDisplayName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetTypeDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*, ::System::Collections::Generic::IReadOnlyList_1<::System::Type*>*, ::by_ref<int32_t>)>(
    &::Unity::Properties::TypeUtility::GetTypeDisplayName)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x6bad71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(),
                            { "GetTypeDisplayName",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Type*>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetRootType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::GetRootType)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6badf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "GetRootType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CreateTypeConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::TypeUtility_ITypeConstructor* (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::CreateTypeConstructor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x6bae020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "CreateTypeConstructor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.GetTypeConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::TypeUtility_ITypeConstructor* (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::GetTypeConstructor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6bae2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "GetTypeConstructor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CanBeInstantiated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Unity::Properties::TypeUtility::CanBeInstantiated)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6bae38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "CanBeInstantiated", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CheckIsAssignableFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*)>(&::Unity::Properties::TypeUtility::CheckIsAssignableFrom)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6bae460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(),
                                                                                           { "CheckIsAssignableFrom", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::TypeUtility.CheckCanBeInstantiated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Properties::TypeUtility_ITypeConstructor*, ::System::Type*)>(&::Unity::Properties::TypeUtility::CheckCanBeInstantiated)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6bae598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(),
                                                { "CheckCanBeInstantiated", {}, { ::i2c::type_of<::Unity::Properties::TypeUtility_ITypeConstructor*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void
Unity::Properties::TypeUtility::setStaticF_s_TypeConstructors(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>*, "s_TypeConstructors",
                                    ::Unity::Properties::TypeUtility*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>* Unity::Properties::TypeUtility::getStaticF_s_TypeConstructors() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>*, "s_TypeConstructors",
                                           ::Unity::Properties::TypeUtility*>();
}
inline void Unity::Properties::TypeUtility::setStaticF_s_CreateTypeConstructor(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "s_CreateTypeConstructor", ::Unity::Properties::TypeUtility*>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* Unity::Properties::TypeUtility::getStaticF_s_CreateTypeConstructor() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "s_CreateTypeConstructor", ::Unity::Properties::TypeUtility*>();
}
inline void Unity::Properties::TypeUtility::setStaticF_s_CachedResolvedName(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>*, "s_CachedResolvedName", ::Unity::Properties::TypeUtility*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>* Unity::Properties::TypeUtility::getStaticF_s_CachedResolvedName() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>*, "s_CachedResolvedName", ::Unity::Properties::TypeUtility*>();
}
inline void Unity::Properties::TypeUtility::setStaticF_s_Builders(::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*, "s_Builders", ::Unity::Properties::TypeUtility*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* Unity::Properties::TypeUtility::getStaticF_s_Builders() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*, "s_Builders", ::Unity::Properties::TypeUtility*>();
}
inline void Unity::Properties::TypeUtility::setStaticF_syncedPoolObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "syncedPoolObject", ::Unity::Properties::TypeUtility*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Unity::Properties::TypeUtility::getStaticF_syncedPoolObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "syncedPoolObject", ::Unity::Properties::TypeUtility*>();
}
inline ::StringW Unity::Properties::TypeUtility::GetTypeDisplayName(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "GetTypeDisplayName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW Unity::Properties::TypeUtility::GetTypeDisplayName(::System::Type* type, ::System::Collections::Generic::IReadOnlyList_1<::System::Type*>* args, ::by_ref<int32_t> argIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(),
                          { "GetTypeDisplayName",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Type*>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type, args, argIndex);
}
inline ::System::Type* Unity::Properties::TypeUtility::GetRootType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "GetRootType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::Unity::Properties::TypeUtility_ITypeConstructor* Unity::Properties::TypeUtility::CreateTypeConstructor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "CreateTypeConstructor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::TypeUtility_ITypeConstructor*>(nullptr, ___internal_method, type);
}
template <typename T> inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* Unity::Properties::TypeUtility::CreateTypeConstructor() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "CreateTypeConstructor", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>(nullptr, ___internal_method);
}
inline ::Unity::Properties::TypeUtility_ITypeConstructor* Unity::Properties::TypeUtility::GetTypeConstructor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "GetTypeConstructor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::TypeUtility_ITypeConstructor*>(nullptr, ___internal_method, type);
}
template <typename T> inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* Unity::Properties::TypeUtility::GetTypeConstructor() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "GetTypeConstructor", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>(nullptr, ___internal_method);
}
inline bool Unity::Properties::TypeUtility::CanBeInstantiated(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "CanBeInstantiated", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
template <typename T> inline bool Unity::Properties::TypeUtility::CanBeInstantiated() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "CanBeInstantiated", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template <typename T> inline void Unity::Properties::TypeUtility::SetExplicitInstantiationMethod(::System::Func_1<T>* constructor) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "SetExplicitInstantiationMethod", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Func_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, constructor);
}
template <typename T> inline T Unity::Properties::TypeUtility::Instantiate() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "Instantiate", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline bool Unity::Properties::TypeUtility::TryInstantiate(::by_ref<T> instance) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "TryInstantiate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, instance);
}
template <typename T> inline T Unity::Properties::TypeUtility::Instantiate(::System::Type* derivedType) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "Instantiate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, derivedType);
}
template <typename T> inline bool Unity::Properties::TypeUtility::TryInstantiate(::System::Type* derivedType, ::by_ref<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "TryInstantiate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, derivedType, value);
}
template <typename TArray> inline TArray Unity::Properties::TypeUtility::InstantiateArray(int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(), { "InstantiateArray", { ::i2c::class_of<TArray>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TArray>() })));
  return ::cordl_internals::RunMethodRethrow<TArray>(nullptr, ___internal_method, count);
}
template <typename TArray> inline bool Unity::Properties::TypeUtility::TryInstantiateArray(int32_t count, ::by_ref<TArray> instance) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(),
                                                           { "TryInstantiateArray", { ::i2c::class_of<TArray>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<TArray>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TArray>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, count, instance);
}
template <typename TArray> inline TArray Unity::Properties::TypeUtility::InstantiateArray(::System::Type* derivedType, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(),
                                                           { "InstantiateArray", { ::i2c::class_of<TArray>() }, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TArray>() })));
  return ::cordl_internals::RunMethodRethrow<TArray>(nullptr, ___internal_method, derivedType, count);
}
inline void Unity::Properties::TypeUtility::CheckIsAssignableFrom(::System::Type* type, ::System::Type* derivedType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(),
                                                                                         { "CheckIsAssignableFrom", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, derivedType);
}
template <typename T> inline void Unity::Properties::TypeUtility::CheckCanBeInstantiated(::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* constructor) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(),
                                                           { "CheckCanBeInstantiated", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, constructor);
}
inline void Unity::Properties::TypeUtility::CheckCanBeInstantiated(::Unity::Properties::TypeUtility_ITypeConstructor* constructor, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeUtility*>(),
                                              { "CheckCanBeInstantiated", {}, { ::i2c::type_of<::Unity::Properties::TypeUtility_ITypeConstructor*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, constructor, type);
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeUtility::TypeUtility() {}
