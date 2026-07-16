#pragma once
// IWYU pragma private; include "Zenject/PoolCleanupChecker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolCleanupChecker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__ILateDisposable_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PoolCleanupChecker_def.hpp"
//  Writing Method size for method: ::Zenject::PoolCleanupChecker___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolCleanupChecker___c::*)()>(&::Zenject::PoolCleanupChecker___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e66e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolCleanupChecker___c.__ctor_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::PoolCleanupChecker___c::*)(::System::Type*)>(&::Zenject::PoolCleanupChecker___c::__ctor_b__2_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e66e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker___c*>(), { "<.ctor>b__2_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolCleanupChecker___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PoolCleanupChecker___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e66ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolCleanupChecker___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PoolCleanupChecker___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e66f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::PoolCleanupChecker___c::setStaticF___9(::Zenject::PoolCleanupChecker___c* value) {
  ::cordl_internals::setStaticField<::Zenject::PoolCleanupChecker___c*, "<>9", ::Zenject::PoolCleanupChecker___c*>(std::forward<::Zenject::PoolCleanupChecker___c*>(value));
}
inline ::Zenject::PoolCleanupChecker___c* Zenject::PoolCleanupChecker___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::PoolCleanupChecker___c*, "<>9", ::Zenject::PoolCleanupChecker___c*>();
}
inline void Zenject::PoolCleanupChecker___c::setStaticF___9__2_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__2_0", ::Zenject::PoolCleanupChecker___c*>(std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* Zenject::PoolCleanupChecker___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__2_0", ::Zenject::PoolCleanupChecker___c*>();
}
inline void Zenject::PoolCleanupChecker___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::PoolCleanupChecker___c::__ctor_b__2_0(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker___c*>(), { "<.ctor>b__2_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::PoolCleanupChecker___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PoolCleanupChecker___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PoolCleanupChecker___c* Zenject::PoolCleanupChecker___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolCleanupChecker___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::PoolCleanupChecker___c::PoolCleanupChecker___c() {}
//  Writing Method size for method: ::Zenject::PoolCleanupChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolCleanupChecker::*)(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>*,
                                                                                               ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Zenject::PoolCleanupChecker::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6e66528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::PoolCleanupChecker*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolCleanupChecker.LateDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PoolCleanupChecker::*)()>(&::Zenject::PoolCleanupChecker::LateDispose)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x6e66640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker*>(), { "LateDispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolCleanupChecker.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PoolCleanupChecker::__zenCreate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e669f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolCleanupChecker.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PoolCleanupChecker::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6e66b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>*& Zenject::PoolCleanupChecker::__cordl_internal_get__poolFactories() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolFactories;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* const& Zenject::PoolCleanupChecker::__cordl_internal_get__poolFactories() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolFactories;
}
constexpr void Zenject::PoolCleanupChecker::__cordl_internal_set__poolFactories(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____poolFactories = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::PoolCleanupChecker::__cordl_internal_get__ignoredPools() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoredPools;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& Zenject::PoolCleanupChecker::__cordl_internal_get__ignoredPools() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoredPools;
}
constexpr void Zenject::PoolCleanupChecker::__cordl_internal_set__ignoredPools(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoredPools = value;
}
inline void Zenject::PoolCleanupChecker::_ctor(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* poolFactories, ::System::Collections::Generic::List_1<::System::Type*>* ignoredPools) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::PoolCleanupChecker*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poolFactories, ignoredPools);
}
inline void Zenject::PoolCleanupChecker::LateDispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker*>(), { "LateDispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::PoolCleanupChecker::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PoolCleanupChecker::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolCleanupChecker*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PoolCleanupChecker* Zenject::PoolCleanupChecker::New_ctor(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* poolFactories,
                                                                            ::System::Collections::Generic::List_1<::System::Type*>* ignoredPools) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolCleanupChecker*>(poolFactories, ignoredPools));
}
/// @brief Convert operator to "::Zenject::ILateDisposable"
constexpr Zenject::PoolCleanupChecker::operator ::Zenject::ILateDisposable*() noexcept {
  return static_cast<::Zenject::ILateDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ILateDisposable"
constexpr ::Zenject::ILateDisposable* Zenject::PoolCleanupChecker::i___Zenject__ILateDisposable() noexcept {
  return static_cast<::Zenject::ILateDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::PoolCleanupChecker::PoolCleanupChecker() {}
