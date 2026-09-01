#pragma once
// IWYU pragma private; include "Zenject\ConventionAssemblySelectionBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ConventionAssemblySelectionBinder_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__ConventionAssemblySelectionBinder_def.hpp"
#include "Zenject/zzzz__ConventionBindInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder___c::*)()>(&::Zenject::ConventionAssemblySelectionBinder___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e4bd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder___c._FromAssembliesContaining_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::Zenject::ConventionAssemblySelectionBinder___c::*)(::System::Type*)>(
    &::Zenject::ConventionAssemblySelectionBinder___c::_FromAssembliesContaining_b__8_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e4bd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c*>(), { "<FromAssembliesContaining>b__8_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionAssemblySelectionBinder___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4bd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionAssemblySelectionBinder___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4bdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::ConventionAssemblySelectionBinder___c::setStaticF___9(::Zenject::ConventionAssemblySelectionBinder___c* value) {
  ::cordl_internals::setStaticField<::Zenject::ConventionAssemblySelectionBinder___c*, "<>9", ::Zenject::ConventionAssemblySelectionBinder___c*>(
      std::forward<::Zenject::ConventionAssemblySelectionBinder___c*>(value));
}
inline ::Zenject::ConventionAssemblySelectionBinder___c* Zenject::ConventionAssemblySelectionBinder___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::ConventionAssemblySelectionBinder___c*, "<>9", ::Zenject::ConventionAssemblySelectionBinder___c*>();
}
inline void Zenject::ConventionAssemblySelectionBinder___c::setStaticF___9__8_0(::System::Func_2<::System::Type*, ::System::Reflection::Assembly*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::System::Reflection::Assembly*>*, "<>9__8_0", ::Zenject::ConventionAssemblySelectionBinder___c*>(
      std::forward<::System::Func_2<::System::Type*, ::System::Reflection::Assembly*>*>(value));
}
inline ::System::Func_2<::System::Type*, ::System::Reflection::Assembly*>* Zenject::ConventionAssemblySelectionBinder___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::System::Reflection::Assembly*>*, "<>9__8_0", ::Zenject::ConventionAssemblySelectionBinder___c*>();
}
inline void Zenject::ConventionAssemblySelectionBinder___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* Zenject::ConventionAssemblySelectionBinder___c::_FromAssembliesContaining_b__8_0(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c*>(), { "<FromAssembliesContaining>b__8_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::ConventionAssemblySelectionBinder___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionAssemblySelectionBinder___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionAssemblySelectionBinder___c* Zenject::ConventionAssemblySelectionBinder___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionAssemblySelectionBinder___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionAssemblySelectionBinder___c::ConventionAssemblySelectionBinder___c() {}
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::*)()>(
    &::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e4bc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0._FromAssemblies_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::*)(::System::Reflection::Assembly*)>(
    &::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::_FromAssemblies_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e4bf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0*>(),
                                                                                           { "<FromAssemblies>b__0", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4bfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4c004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*& Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::__cordl_internal_get_assemblies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblies;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* const&
Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::__cordl_internal_get_assemblies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblies;
}
constexpr void
Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::__cordl_internal_set_assemblies(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemblies = value;
}
inline void Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::_FromAssemblies_b__0(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0*>(),
                                                                                         { "<FromAssemblies>b__0", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, assembly);
}
inline ::System::Object* Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0* Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0::ConventionAssemblySelectionBinder___c__DisplayClass12_0() {}
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder::*)(::Zenject::ConventionBindInfo*)>(&::Zenject::ConventionAssemblySelectionBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4b8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::ConventionBindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder.get_BindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionBindInfo* (::Zenject::ConventionAssemblySelectionBinder::*)()>(
    &::Zenject::ConventionAssemblySelectionBinder::get_BindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4b8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "get_BindInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder.set_BindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder::*)(::Zenject::ConventionBindInfo*)>(
    &::Zenject::ConventionAssemblySelectionBinder::set_BindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4b8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "set_BindInfo", {}, { ::i2c::type_of<::Zenject::ConventionBindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder.FromAllAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder::*)()>(&::Zenject::ConventionAssemblySelectionBinder::FromAllAssemblies)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e4b8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromAllAssemblies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder.FromAssembliesContaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder::*)(::ArrayW<::System::Type*>)>(
    &::Zenject::ConventionAssemblySelectionBinder::FromAssembliesContaining)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e4b8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromAssembliesContaining", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder.FromAssembliesContaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder::*)(::System::Collections::Generic::IEnumerable_1<::System::Type*>*)>(
    &::Zenject::ConventionAssemblySelectionBinder::FromAssembliesContaining)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6e4b8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(),
                                                             { "FromAssembliesContaining", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder.FromThisAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder::*)()>(&::Zenject::ConventionAssemblySelectionBinder::FromThisAssembly)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e4baf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromThisAssembly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder.FromAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder::*)(::System::Reflection::Assembly*)>(
    &::Zenject::ConventionAssemblySelectionBinder::FromAssembly)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e4bba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromAssembly", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder.FromAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder::*)(::ArrayW<::System::Reflection::Assembly*>)>(
    &::Zenject::ConventionAssemblySelectionBinder::FromAssemblies)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e4bb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromAssemblies", {}, { ::i2c::type_of<::ArrayW<::System::Reflection::Assembly*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder.FromAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder::*)(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*)>(
    &::Zenject::ConventionAssemblySelectionBinder::FromAssemblies)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e4ba30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(),
                                                             { "FromAssemblies", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionAssemblySelectionBinder.FromAssembliesWhere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionAssemblySelectionBinder::*)(::System::Func_2<::System::Reflection::Assembly*, bool>*)>(
    &::Zenject::ConventionAssemblySelectionBinder::FromAssembliesWhere)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e4bcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(),
                                                             { "FromAssembliesWhere", {}, { ::i2c::type_of<::System::Func_2<::System::Reflection::Assembly*, bool>*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ConventionBindInfo*& Zenject::ConventionAssemblySelectionBinder::__cordl_internal_get__BindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
constexpr ::Zenject::ConventionBindInfo* const& Zenject::ConventionAssemblySelectionBinder::__cordl_internal_get__BindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
constexpr void Zenject::ConventionAssemblySelectionBinder::__cordl_internal_set__BindInfo_k__BackingField(::Zenject::ConventionBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BindInfo_k__BackingField = value;
}
inline void Zenject::ConventionAssemblySelectionBinder::_ctor(::Zenject::ConventionBindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::ConventionBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
inline ::Zenject::ConventionBindInfo* Zenject::ConventionAssemblySelectionBinder::get_BindInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "get_BindInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionBindInfo*>(this, ___internal_method);
}
inline void Zenject::ConventionAssemblySelectionBinder::set_BindInfo(::Zenject::ConventionBindInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "set_BindInfo", {}, { ::i2c::type_of<::Zenject::ConventionBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::ConventionAssemblySelectionBinder::FromAllAssemblies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromAllAssemblies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void Zenject::ConventionAssemblySelectionBinder::FromAssemblyContaining() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromAssemblyContaining", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::ConventionAssemblySelectionBinder::FromAssembliesContaining(::ArrayW<::System::Type*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromAssembliesContaining", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, types);
}
inline void Zenject::ConventionAssemblySelectionBinder::FromAssembliesContaining(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(),
                                                           { "FromAssembliesContaining", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, types);
}
inline void Zenject::ConventionAssemblySelectionBinder::FromThisAssembly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromThisAssembly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::ConventionAssemblySelectionBinder::FromAssembly(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromAssembly", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assembly);
}
inline void Zenject::ConventionAssemblySelectionBinder::FromAssemblies(::ArrayW<::System::Reflection::Assembly*> assemblies) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(), { "FromAssemblies", {}, { ::i2c::type_of<::ArrayW<::System::Reflection::Assembly*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assemblies);
}
inline void Zenject::ConventionAssemblySelectionBinder::FromAssemblies(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* assemblies) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(),
                                                           { "FromAssemblies", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assemblies);
}
inline void Zenject::ConventionAssemblySelectionBinder::FromAssembliesWhere(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionAssemblySelectionBinder*>(),
                                                           { "FromAssembliesWhere", {}, { ::i2c::type_of<::System::Func_2<::System::Reflection::Assembly*, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, predicate);
}
inline ::Zenject::ConventionAssemblySelectionBinder* Zenject::ConventionAssemblySelectionBinder::New_ctor(::Zenject::ConventionBindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionAssemblySelectionBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::ConventionAssemblySelectionBinder::ConventionAssemblySelectionBinder() {}
