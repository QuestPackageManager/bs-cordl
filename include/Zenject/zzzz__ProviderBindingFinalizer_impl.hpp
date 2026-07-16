#pragma once
// IWYU pragma private; include "Zenject/ProviderBindingFinalizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "Zenject/zzzz__ScopeTypes_def.hpp"
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProviderBindingFinalizer___c::*)()>(&::Zenject::ProviderBindingFinalizer___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e63a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer___c._GetScope_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::ProviderBindingFinalizer___c::*)(::System::Type*)>(&::Zenject::ProviderBindingFinalizer___c::_GetScope_b__8_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e63a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { "<GetScope>b__8_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer___c._FinalizeBinding_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::ProviderBindingFinalizer___c::*)(::System::Type*)>(&::Zenject::ProviderBindingFinalizer___c::_FinalizeBinding_b__9_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e63a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { "<FinalizeBinding>b__9_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer___c._FinalizeBinding_b__9_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::ProviderBindingFinalizer___c::*)(::System::Type*)>(&::Zenject::ProviderBindingFinalizer___c::_FinalizeBinding_b__9_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e63ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { "<FinalizeBinding>b__9_1", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ProviderBindingFinalizer___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e63b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ProviderBindingFinalizer___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e63b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::ProviderBindingFinalizer___c::setStaticF___9(::Zenject::ProviderBindingFinalizer___c* value) {
  ::cordl_internals::setStaticField<::Zenject::ProviderBindingFinalizer___c*, "<>9", ::Zenject::ProviderBindingFinalizer___c*>(std::forward<::Zenject::ProviderBindingFinalizer___c*>(value));
}
inline ::Zenject::ProviderBindingFinalizer___c* Zenject::ProviderBindingFinalizer___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::ProviderBindingFinalizer___c*, "<>9", ::Zenject::ProviderBindingFinalizer___c*>();
}
inline void Zenject::ProviderBindingFinalizer___c::setStaticF___9__8_0(::System::Func_2<::System::Type*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__8_0", ::Zenject::ProviderBindingFinalizer___c*>(
      std::forward<::System::Func_2<::System::Type*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Type*, ::StringW>* Zenject::ProviderBindingFinalizer___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__8_0", ::Zenject::ProviderBindingFinalizer___c*>();
}
inline void Zenject::ProviderBindingFinalizer___c::setStaticF___9__9_0(::System::Func_2<::System::Type*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__9_0", ::Zenject::ProviderBindingFinalizer___c*>(
      std::forward<::System::Func_2<::System::Type*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Type*, ::StringW>* Zenject::ProviderBindingFinalizer___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__9_0", ::Zenject::ProviderBindingFinalizer___c*>();
}
inline void Zenject::ProviderBindingFinalizer___c::setStaticF___9__9_1(::System::Func_2<::System::Type*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__9_1", ::Zenject::ProviderBindingFinalizer___c*>(
      std::forward<::System::Func_2<::System::Type*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Type*, ::StringW>* Zenject::ProviderBindingFinalizer___c::getStaticF___9__9_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__9_1", ::Zenject::ProviderBindingFinalizer___c*>();
}
inline void Zenject::ProviderBindingFinalizer___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Zenject::ProviderBindingFinalizer___c::_GetScope_b__8_0(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { "<GetScope>b__8_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW Zenject::ProviderBindingFinalizer___c::_FinalizeBinding_b__9_0(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { "<FinalizeBinding>b__9_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW Zenject::ProviderBindingFinalizer___c::_FinalizeBinding_b__9_1(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { "<FinalizeBinding>b__9_1", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::ProviderBindingFinalizer___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ProviderBindingFinalizer___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ProviderBindingFinalizer___c* Zenject::ProviderBindingFinalizer___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ProviderBindingFinalizer___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::ProviderBindingFinalizer___c::ProviderBindingFinalizer___c() {}
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProviderBindingFinalizer::*)(::Zenject::BindInfo*)>(&::Zenject::ProviderBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5fd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.get_BindingInheritanceMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindingInheritanceMethods (::Zenject::ProviderBindingFinalizer::*)()>(
    &::Zenject::ProviderBindingFinalizer::get_BindingInheritanceMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e627d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "get_BindingInheritanceMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.get_BindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindInfo* (::Zenject::ProviderBindingFinalizer::*)()>(&::Zenject::ProviderBindingFinalizer::get_BindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e627e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "get_BindInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.set_BindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProviderBindingFinalizer::*)(::Zenject::BindInfo*)>(&::Zenject::ProviderBindingFinalizer::set_BindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e627f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "set_BindInfo", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.GetScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeTypes (::Zenject::ProviderBindingFinalizer::*)()>(&::Zenject::ProviderBindingFinalizer::GetScope)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6e60414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "GetScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.FinalizeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProviderBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::ProviderBindingFinalizer::FinalizeBinding)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x6e627f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "FinalizeBinding", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.ShouldSkipDisposableForIfNotBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ProviderBindingFinalizer::*)(::Zenject::DiContainer*)>(
    &::Zenject::ProviderBindingFinalizer::ShouldSkipDisposableForIfNotBound)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6e62da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "ShouldSkipDisposableForIfNotBound", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.OnFinalizeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProviderBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::ProviderBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { ::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.RegisterProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProviderBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*)>(
    &::Zenject::ProviderBindingFinalizer::RegisterProvider)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6e62f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                         { "RegisterProvider", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.RegisterProviderPerContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProviderBindingFinalizer::*)(
    ::Zenject::DiContainer*, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*)>(&::Zenject::ProviderBindingFinalizer::RegisterProviderPerContract)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6e60b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                         { "RegisterProviderPerContract",
                                           {},
                                           { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.RegisterProviderForAllContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProviderBindingFinalizer::*)(::Zenject::DiContainer*, ::Zenject::IProvider*)>(
    &::Zenject::ProviderBindingFinalizer::RegisterProviderForAllContracts)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6e63418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                                             { "RegisterProviderForAllContracts", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::IProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.RegisterProvidersPerContractAndConcreteType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProviderBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*,
                                                                                                     ::System::Func_3<::System::Type*, ::System::Type*, ::Zenject::IProvider*>*)>(
    &::Zenject::ProviderBindingFinalizer::RegisterProvidersPerContractAndConcreteType)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6e635b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                                             { "RegisterProvidersPerContractAndConcreteType",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>(),
                                                                 ::i2c::type_of<::System::Func_3<::System::Type*, ::System::Type*, ::Zenject::IProvider*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.ValidateBindTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ProviderBindingFinalizer::*)(::System::Type*, ::System::Type*)>(&::Zenject::ProviderBindingFinalizer::ValidateBindTypes)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6e637d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                                                                           { "ValidateBindTypes", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProviderBindingFinalizer.RegisterProvidersForAllContractsPerConcreteType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProviderBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*,
                                                                                                     ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*)>(
    &::Zenject::ProviderBindingFinalizer::RegisterProvidersForAllContractsPerConcreteType)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x6e60680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                                             { "RegisterProvidersForAllContractsPerConcreteType",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>(),
                                                                 ::i2c::type_of<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*>() } })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::ProviderBindingFinalizer::__cordl_internal_get__skipDisposableForIfNotBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skipDisposableForIfNotBound;
}
constexpr bool const& Zenject::ProviderBindingFinalizer::__cordl_internal_get__skipDisposableForIfNotBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skipDisposableForIfNotBound;
}
constexpr void Zenject::ProviderBindingFinalizer::__cordl_internal_set__skipDisposableForIfNotBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skipDisposableForIfNotBound = value;
}
constexpr ::Zenject::BindInfo*& Zenject::ProviderBindingFinalizer::__cordl_internal_get__BindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
constexpr ::Zenject::BindInfo* const& Zenject::ProviderBindingFinalizer::__cordl_internal_get__BindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
constexpr void Zenject::ProviderBindingFinalizer::__cordl_internal_set__BindInfo_k__BackingField(::Zenject::BindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BindInfo_k__BackingField = value;
}
inline void Zenject::ProviderBindingFinalizer::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
inline ::Zenject::BindingInheritanceMethods Zenject::ProviderBindingFinalizer::get_BindingInheritanceMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "get_BindingInheritanceMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingInheritanceMethods>(this, ___internal_method);
}
inline ::Zenject::BindInfo* Zenject::ProviderBindingFinalizer::get_BindInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "get_BindInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindInfo*>(this, ___internal_method);
}
inline void Zenject::ProviderBindingFinalizer::set_BindInfo(::Zenject::BindInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "set_BindInfo", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::ScopeTypes Zenject::ProviderBindingFinalizer::GetScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "GetScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeTypes>(this, ___internal_method);
}
inline void Zenject::ProviderBindingFinalizer::FinalizeBinding(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "FinalizeBinding", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline bool Zenject::ProviderBindingFinalizer::ShouldSkipDisposableForIfNotBound(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), { "ShouldSkipDisposableForIfNotBound", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container);
}
inline void Zenject::ProviderBindingFinalizer::OnFinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
template <typename TContract> inline void Zenject::ProviderBindingFinalizer::RegisterProvider(::Zenject::DiContainer* container, ::Zenject::IProvider* provider) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                              { "RegisterProvider", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::IProvider*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, provider);
}
inline void Zenject::ProviderBindingFinalizer::RegisterProvider(::Zenject::DiContainer* container, ::System::Type* contractType, ::Zenject::IProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                              { "RegisterProvider", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, contractType, provider);
}
inline void Zenject::ProviderBindingFinalizer::RegisterProviderPerContract(::Zenject::DiContainer* container,
                                                                           ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFunc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
          { "RegisterProviderPerContract", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, providerFunc);
}
inline void Zenject::ProviderBindingFinalizer::RegisterProviderForAllContracts(::Zenject::DiContainer* container, ::Zenject::IProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                                           { "RegisterProviderForAllContracts", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::IProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, provider);
}
inline void Zenject::ProviderBindingFinalizer::RegisterProvidersPerContractAndConcreteType(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes,
                                                                                           ::System::Func_3<::System::Type*, ::System::Type*, ::Zenject::IProvider*>* providerFunc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                                           { "RegisterProvidersPerContractAndConcreteType",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>(),
                                                               ::i2c::type_of<::System::Func_3<::System::Type*, ::System::Type*, ::Zenject::IProvider*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, concreteTypes, providerFunc);
}
inline bool Zenject::ProviderBindingFinalizer::ValidateBindTypes(::System::Type* concreteType, ::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                                                                         { "ValidateBindTypes", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, concreteType, contractType);
}
inline void Zenject::ProviderBindingFinalizer::RegisterProvidersForAllContractsPerConcreteType(::Zenject::DiContainer* container,
                                                                                               ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes,
                                                                                               ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFunc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProviderBindingFinalizer*>(),
                                                           { "RegisterProvidersForAllContractsPerConcreteType",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>(),
                                                               ::i2c::type_of<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, concreteTypes, providerFunc);
}
inline ::Zenject::ProviderBindingFinalizer* Zenject::ProviderBindingFinalizer::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ProviderBindingFinalizer*>(bindInfo));
}
/// @brief Convert operator to "::Zenject::IBindingFinalizer"
constexpr Zenject::ProviderBindingFinalizer::operator ::Zenject::IBindingFinalizer*() noexcept {
  return static_cast<::Zenject::IBindingFinalizer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IBindingFinalizer"
constexpr ::Zenject::IBindingFinalizer* Zenject::ProviderBindingFinalizer::i___Zenject__IBindingFinalizer() noexcept {
  return static_cast<::Zenject::IBindingFinalizer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::ProviderBindingFinalizer::ProviderBindingFinalizer() {}
