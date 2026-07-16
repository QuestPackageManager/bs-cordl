#pragma once
// IWYU pragma private; include "Zenject/ConventionBindInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ConventionBindInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__ConventionBindInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionBindInfo___c__DisplayClass7_0::*)()>(&::Zenject::ConventionBindInfo___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e48e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass7_0._ShouldIncludeAssembly_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionBindInfo___c__DisplayClass7_0::*)(::System::Func_2<::System::Reflection::Assembly*, bool>*)>(
    &::Zenject::ConventionBindInfo___c__DisplayClass7_0::_ShouldIncludeAssembly_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e49140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>(),
                                                             { "<ShouldIncludeAssembly>b__0", {}, { ::i2c::type_of<::System::Func_2<::System::Reflection::Assembly*, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass7_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionBindInfo___c__DisplayClass7_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e49164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass7_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionBindInfo___c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e491a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Assembly*& Zenject::ConventionBindInfo___c__DisplayClass7_0::__cordl_internal_get_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr ::System::Reflection::Assembly* const& Zenject::ConventionBindInfo___c__DisplayClass7_0::__cordl_internal_get_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr void Zenject::ConventionBindInfo___c__DisplayClass7_0::__cordl_internal_set_assembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assembly = value;
}
inline void Zenject::ConventionBindInfo___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionBindInfo___c__DisplayClass7_0::_ShouldIncludeAssembly_b__0(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>(),
                                                           { "<ShouldIncludeAssembly>b__0", {}, { ::i2c::type_of<::System::Func_2<::System::Reflection::Assembly*, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, predicate);
}
inline ::System::Object* Zenject::ConventionBindInfo___c__DisplayClass7_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionBindInfo___c__DisplayClass7_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionBindInfo___c__DisplayClass7_0* Zenject::ConventionBindInfo___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionBindInfo___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionBindInfo___c__DisplayClass7_0::ConventionBindInfo___c__DisplayClass7_0() {}
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionBindInfo___c__DisplayClass8_0::*)()>(&::Zenject::ConventionBindInfo___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e48f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass8_0._ShouldIncludeType_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionBindInfo___c__DisplayClass8_0::*)(::System::Func_2<::System::Type*, bool>*)>(
    &::Zenject::ConventionBindInfo___c__DisplayClass8_0::_ShouldIncludeType_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e4933c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass8_0*>(),
                                                                                           { "<ShouldIncludeType>b__0", {}, { ::i2c::type_of<::System::Func_2<::System::Type*, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass8_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionBindInfo___c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e49360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass8_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo___c__DisplayClass8_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionBindInfo___c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e493a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass8_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::ConventionBindInfo___c__DisplayClass8_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Zenject::ConventionBindInfo___c__DisplayClass8_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::ConventionBindInfo___c__DisplayClass8_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void Zenject::ConventionBindInfo___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionBindInfo___c__DisplayClass8_0::_ShouldIncludeType_b__0(::System::Func_2<::System::Type*, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass8_0*>(),
                                                                                         { "<ShouldIncludeType>b__0", {}, { ::i2c::type_of<::System::Func_2<::System::Type*, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, predicate);
}
inline ::System::Object* Zenject::ConventionBindInfo___c__DisplayClass8_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass8_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionBindInfo___c__DisplayClass8_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo___c__DisplayClass8_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionBindInfo___c__DisplayClass8_0* Zenject::ConventionBindInfo___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionBindInfo___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionBindInfo___c__DisplayClass8_0::ConventionBindInfo___c__DisplayClass8_0() {}
//  Writing Method size for method: ::Zenject::ConventionBindInfo.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::ConventionBindInfo::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e48c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.AddAssemblyFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionBindInfo::*)(::System::Func_2<::System::Reflection::Assembly*, bool>*)>(
    &::Zenject::ConventionBindInfo::AddAssemblyFilter)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e486c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "AddAssemblyFilter", {}, { ::i2c::type_of<::System::Func_2<::System::Reflection::Assembly*, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.AddTypeFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionBindInfo::*)(::System::Func_2<::System::Type*, bool>*)>(&::Zenject::ConventionBindInfo::AddTypeFilter)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e48cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "AddTypeFilter", {}, { ::i2c::type_of<::System::Func_2<::System::Type*, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.GetAllAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* (::Zenject::ConventionBindInfo::*)()>(
    &::Zenject::ConventionBindInfo::GetAllAssemblies)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e48d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "GetAllAssemblies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.ShouldIncludeAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionBindInfo::*)(::System::Reflection::Assembly*)>(&::Zenject::ConventionBindInfo::ShouldIncludeAssembly)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e48da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "ShouldIncludeAssembly", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.ShouldIncludeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionBindInfo::*)(::System::Type*)>(&::Zenject::ConventionBindInfo::ShouldIncludeType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e48e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "ShouldIncludeType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.GetTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::Zenject::ConventionBindInfo::*)(::System::Reflection::Assembly*)>(&::Zenject::ConventionBindInfo::GetTypes)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e48f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "GetTypes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo.ResolveTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Type*>* (::Zenject::ConventionBindInfo::*)()>(&::Zenject::ConventionBindInfo::ResolveTypes)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6e47794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "ResolveTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionBindInfo::*)()>(&::Zenject::ConventionBindInfo::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e476d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionBindInfo._ResolveTypes_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Zenject::ConventionBindInfo::*)(::System::Reflection::Assembly*)>(
    &::Zenject::ConventionBindInfo::_ResolveTypes_b__10_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e4913c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "<ResolveTypes>b__10_0", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>*& Zenject::ConventionBindInfo::__cordl_internal_get__typeFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeFilters;
}
constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* const& Zenject::ConventionBindInfo::__cordl_internal_get__typeFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeFilters;
}
constexpr void Zenject::ConventionBindInfo::__cordl_internal_set__typeFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeFilters = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>*& Zenject::ConventionBindInfo::__cordl_internal_get__assemblyFilters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assemblyFilters;
}
constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* const& Zenject::ConventionBindInfo::__cordl_internal_get__assemblyFilters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assemblyFilters;
}
constexpr void Zenject::ConventionBindInfo::__cordl_internal_set__assemblyFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assemblyFilters = value;
}
inline void Zenject::ConventionBindInfo::setStaticF__assemblyTypeCache(::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*>>*, "_assemblyTypeCache", ::Zenject::ConventionBindInfo*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*>>* Zenject::ConventionBindInfo::getStaticF__assemblyTypeCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*>>*, "_assemblyTypeCache",
                                           ::Zenject::ConventionBindInfo*>();
}
inline void Zenject::ConventionBindInfo::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Zenject::ConventionBindInfo::AddAssemblyFilter(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(),
                                                                                         { "AddAssemblyFilter", {}, { ::i2c::type_of<::System::Func_2<::System::Reflection::Assembly*, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, predicate);
}
inline void Zenject::ConventionBindInfo::AddTypeFilter(::System::Func_2<::System::Type*, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "AddTypeFilter", {}, { ::i2c::type_of<::System::Func_2<::System::Type*, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, predicate);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* Zenject::ConventionBindInfo::GetAllAssemblies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "GetAllAssemblies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*>(this, ___internal_method);
}
inline bool Zenject::ConventionBindInfo::ShouldIncludeAssembly(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "ShouldIncludeAssembly", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, assembly);
}
inline bool Zenject::ConventionBindInfo::ShouldIncludeType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "ShouldIncludeType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::ArrayW<::System::Type*> Zenject::ConventionBindInfo::GetTypes(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "GetTypes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method, assembly);
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Zenject::ConventionBindInfo::ResolveTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "ResolveTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Type*>*>(this, ___internal_method);
}
inline void Zenject::ConventionBindInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::ConventionBindInfo::_ResolveTypes_b__10_0(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionBindInfo*>(), { "<ResolveTypes>b__10_0", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method, assembly);
}
inline ::Zenject::ConventionBindInfo* Zenject::ConventionBindInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionBindInfo*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionBindInfo::ConventionBindInfo() {}
