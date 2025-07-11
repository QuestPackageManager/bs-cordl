#pragma once
// IWYU pragma private; include "Zenject/BindStatement.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4b16258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.get_BindingInheritanceMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingInheritanceMethods (::Zenject::BindStatement::*)()>(
    &::Zenject::BindStatement::get_BindingInheritanceMethod)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4b16418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "get_BindingInheritanceMethod",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.get_HasFinalizer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::get_HasFinalizer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4b16504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "get_HasFinalizer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.SetFinalizer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindStatement::*)(::Zenject::IBindingFinalizer*)>(&::Zenject::BindStatement::SetFinalizer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4b16514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "SetFinalizer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IBindingFinalizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.AssertHasFinalizer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::AssertHasFinalizer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4b164c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "AssertHasFinalizer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.AddDisposable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindStatement::*)(::System::IDisposable*)>(&::Zenject::BindStatement::AddDisposable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4b1651c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "AddDisposable", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.SpawnBindInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindInfo* (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::SpawnBindInfo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4b165c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "SpawnBindInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.FinalizeBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindStatement::*)(::Zenject::DiContainer*)>(&::Zenject::BindStatement::FinalizeBinding)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4b1662c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "FinalizeBinding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::Reset)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x4b162dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindStatement.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindStatement::*)()>(&::Zenject::BindStatement::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4b166e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disposables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bindingFinalizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::BindStatement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::BindingInheritanceMethods Zenject::BindStatement::get_BindingInheritanceMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "get_BindingInheritanceMethod",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingInheritanceMethods, false>(this, ___internal_method);
}
inline bool Zenject::BindStatement::get_HasFinalizer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "get_HasFinalizer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Zenject::BindStatement::SetFinalizer(::Zenject::IBindingFinalizer* bindingFinalizer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "SetFinalizer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IBindingFinalizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingFinalizer);
}
inline void Zenject::BindStatement::AssertHasFinalizer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "AssertHasFinalizer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::BindStatement::AddDisposable(::System::IDisposable* disposable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "AddDisposable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposable);
}
inline ::Zenject::BindInfo* Zenject::BindStatement::SpawnBindInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "SpawnBindInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindInfo*, false>(this, ___internal_method);
}
inline void Zenject::BindStatement::FinalizeBinding(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "FinalizeBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void Zenject::BindStatement::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::BindStatement::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindStatement*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::BindStatement* Zenject::BindStatement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::BindStatement*>());
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
