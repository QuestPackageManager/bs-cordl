#pragma once
// IWYU pragma private; include "Zenject\BindStatement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
//  Writing Method size for method: ::Zenject::BindStatement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e6004c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.get_BindingInheritanceMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindingInheritanceMethods (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::get_BindingInheritanceMethod)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e60218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "get_BindingInheritanceMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.get_HasFinalizer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::get_HasFinalizer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e60304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "get_HasFinalizer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.SetFinalizer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::BindStatement::*)(::Zenject::IBindingFinalizer*)>(&::Zenject::BindStatement::SetFinalizer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e60314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "SetFinalizer", {}, { ::i2c::type_of<::Zenject::IBindingFinalizer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.AssertHasFinalizer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::AssertHasFinalizer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e602c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "AssertHasFinalizer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.AddDisposable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::BindStatement::*)(::System::IDisposable*)>(&::Zenject::BindStatement::AddDisposable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e6031c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "AddDisposable", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.SpawnBindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindInfo* (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::SpawnBindInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e603d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "SpawnBindInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.FinalizeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::BindStatement::*)(::Zenject::DiContainer*)>(&::Zenject::BindStatement::FinalizeBinding)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e60440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "FinalizeBinding", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::Reset)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6e600c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e60500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& Zenject::BindStatement::__cordl_internal_get__disposables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& Zenject::BindStatement::__cordl_internal_get__disposables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr void Zenject::BindStatement::__cordl_internal_set__disposables(::System::Collections::Generic::List_1<::System::IDisposable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposables = value;
}
constexpr ::Zenject::IBindingFinalizer*& Zenject::BindStatement::__cordl_internal_get__bindingFinalizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingFinalizer;
}
constexpr ::Zenject::IBindingFinalizer* const& Zenject::BindStatement::__cordl_internal_get__bindingFinalizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingFinalizer;
}
constexpr void Zenject::BindStatement::__cordl_internal_set__bindingFinalizer(::Zenject::IBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindingFinalizer = value;
}
inline void Zenject::BindStatement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::BindingInheritanceMethods Zenject::BindStatement::get_BindingInheritanceMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "get_BindingInheritanceMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingInheritanceMethods>(this, ___internal_method);
}
inline bool Zenject::BindStatement::get_HasFinalizer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "get_HasFinalizer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::BindStatement::SetFinalizer(::Zenject::IBindingFinalizer* bindingFinalizer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "SetFinalizer", {}, { ::i2c::type_of<::Zenject::IBindingFinalizer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingFinalizer);
}
inline void Zenject::BindStatement::AssertHasFinalizer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "AssertHasFinalizer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::BindStatement::AddDisposable(::System::IDisposable* disposable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "AddDisposable", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposable);
}
inline ::Zenject::BindInfo* Zenject::BindStatement::SpawnBindInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "SpawnBindInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindInfo*>(this, ___internal_method);
}
inline void Zenject::BindStatement::FinalizeBinding(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "FinalizeBinding", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Zenject::BindStatement::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::BindStatement::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::BindStatement*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::BindStatement* Zenject::BindStatement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::BindStatement*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::BindStatement::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::BindStatement::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::BindStatement::BindStatement() {}
