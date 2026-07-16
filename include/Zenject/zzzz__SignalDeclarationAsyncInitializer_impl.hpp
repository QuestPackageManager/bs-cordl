#pragma once
// IWYU pragma private; include "Zenject/SignalDeclarationAsyncInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SignalDeclarationAsyncInitializer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__LazyInject_1_def.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "Zenject/zzzz__TickableManager_def.hpp"
//  Writing Method size for method: ::Zenject::SignalDeclarationAsyncInitializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclarationAsyncInitializer::*)(
    ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*, ::Zenject::LazyInject_1<::Zenject::TickableManager*>*)>(&::Zenject::SignalDeclarationAsyncInitializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e468dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::SignalDeclarationAsyncInitializer*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*>(), ::i2c::type_of<::Zenject::LazyInject_1<::Zenject::TickableManager*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclarationAsyncInitializer.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalDeclarationAsyncInitializer::*)()>(&::Zenject::SignalDeclarationAsyncInitializer::Initialize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6e468e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclarationAsyncInitializer*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclarationAsyncInitializer.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SignalDeclarationAsyncInitializer::__zenCreate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6e469fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclarationAsyncInitializer*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclarationAsyncInitializer.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalDeclarationAsyncInitializer::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6e46b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclarationAsyncInitializer*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::LazyInject_1<::Zenject::TickableManager*>*& Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_get__tickManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickManager;
}
constexpr ::Zenject::LazyInject_1<::Zenject::TickableManager*>* const& Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_get__tickManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickManager;
}
constexpr void Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_set__tickManager(::Zenject::LazyInject_1<::Zenject::TickableManager*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tickManager = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*& Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_get__declarations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declarations;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* const& Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_get__declarations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____declarations;
}
constexpr void Zenject::SignalDeclarationAsyncInitializer::__cordl_internal_set__declarations(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____declarations = value;
}
inline void Zenject::SignalDeclarationAsyncInitializer::_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* declarations,
                                                              ::Zenject::LazyInject_1<::Zenject::TickableManager*>* tickManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::SignalDeclarationAsyncInitializer*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*>(), ::i2c::type_of<::Zenject::LazyInject_1<::Zenject::TickableManager*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, declarations, tickManager);
}
inline void Zenject::SignalDeclarationAsyncInitializer::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclarationAsyncInitializer*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::SignalDeclarationAsyncInitializer::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclarationAsyncInitializer*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalDeclarationAsyncInitializer::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalDeclarationAsyncInitializer*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SignalDeclarationAsyncInitializer* Zenject::SignalDeclarationAsyncInitializer::New_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* declarations,
                                                                                                          ::Zenject::LazyInject_1<::Zenject::TickableManager*>* tickManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalDeclarationAsyncInitializer*>(declarations, tickManager));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr Zenject::SignalDeclarationAsyncInitializer::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* Zenject::SignalDeclarationAsyncInitializer::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SignalDeclarationAsyncInitializer::SignalDeclarationAsyncInitializer() {}
