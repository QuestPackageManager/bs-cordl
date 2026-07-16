#pragma once
// IWYU pragma private; include "Zenject/TypeAnalyzer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ReflectionBakingCoverageModes_impl.hpp"
#include "Zenject/zzzz__TypeAnalyzer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__ReflectionBakingCoverageModes_def.hpp"
#include "Zenject/zzzz__TypeAnalyzer_def.hpp"
//  Writing Method size for method: ::Zenject::TypeAnalyzer___c__DisplayClass24_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TypeAnalyzer___c__DisplayClass24_0::*)()>(&::Zenject::TypeAnalyzer___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e9a444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer___c__DisplayClass24_0._CreateTypeInfoFromReflection_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo_InjectMemberInfo* (
    ::Zenject::TypeAnalyzer___c__DisplayClass24_0::*)(::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*)>(&::Zenject::TypeAnalyzer___c__DisplayClass24_0::_CreateTypeInfoFromReflection_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9a8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>(),
                                                             { "<CreateTypeInfoFromReflection>b__0", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer___c__DisplayClass24_0._CreateTypeInfoFromReflection_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Zenject::InjectTypeInfo_InjectMemberInfo* (::Zenject::TypeAnalyzer___c__DisplayClass24_0::*)(::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*)>(
        &::Zenject::TypeAnalyzer___c__DisplayClass24_0::_CreateTypeInfoFromReflection_b__1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9a934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>(),
                                                             { "<CreateTypeInfoFromReflection>b__1", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer___c__DisplayClass24_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::TypeAnalyzer___c__DisplayClass24_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e9a9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer___c__DisplayClass24_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::TypeAnalyzer___c__DisplayClass24_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e9a9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::TypeAnalyzer___c__DisplayClass24_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Zenject::TypeAnalyzer___c__DisplayClass24_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::TypeAnalyzer___c__DisplayClass24_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void Zenject::TypeAnalyzer___c__DisplayClass24_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo_InjectMemberInfo* Zenject::TypeAnalyzer___c__DisplayClass24_0::_CreateTypeInfoFromReflection_b__0(::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>(),
                                                           { "<CreateTypeInfoFromReflection>b__0", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo_InjectMemberInfo*>(this, ___internal_method, x);
}
inline ::Zenject::InjectTypeInfo_InjectMemberInfo* Zenject::TypeAnalyzer___c__DisplayClass24_0::_CreateTypeInfoFromReflection_b__1(::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>(),
                                                           { "<CreateTypeInfoFromReflection>b__1", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo_InjectMemberInfo*>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::TypeAnalyzer___c__DisplayClass24_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::TypeAnalyzer___c__DisplayClass24_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::TypeAnalyzer___c__DisplayClass24_0* Zenject::TypeAnalyzer___c__DisplayClass24_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TypeAnalyzer___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::TypeAnalyzer___c__DisplayClass24_0::TypeAnalyzer___c__DisplayClass24_0() {}
//  Writing Method size for method: ::Zenject::TypeAnalyzer.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::TypeAnalyzer::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6e99888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.get_ReflectionBakingCoverageMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ReflectionBakingCoverageModes (*)()>(&::Zenject::TypeAnalyzer::get_ReflectionBakingCoverageMode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e99a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "get_ReflectionBakingCoverageMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.set_ReflectionBakingCoverageMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::ReflectionBakingCoverageModes)>(&::Zenject::TypeAnalyzer::set_ReflectionBakingCoverageMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e99aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "set_ReflectionBakingCoverageMode", {}, { ::i2c::type_of<::Zenject::ReflectionBakingCoverageModes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.ShouldAllowDuringValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Zenject::TypeAnalyzer::ShouldAllowDuringValidation)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6e81e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "ShouldAllowDuringValidation", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.ShouldAllowDuringValidationInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Zenject::TypeAnalyzer::ShouldAllowDuringValidationInternal)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e99b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "ShouldAllowDuringValidationInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.HasInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Zenject::TypeAnalyzer::HasInfo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e99c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "HasInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.GetInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)(::System::Type*)>(&::Zenject::TypeAnalyzer::GetInfo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e88c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "GetInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.TryGetInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)(::System::Type*)>(&::Zenject::TypeAnalyzer::TryGetInfo)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6e80298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "TryGetInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.GetInfoInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)(::System::Type*)>(&::Zenject::TypeAnalyzer::GetInfoInternal)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6e99cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "GetInfoInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.ShouldSkipTypeAnalysis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Zenject::TypeAnalyzer::ShouldSkipTypeAnalysis)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6e99f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "ShouldSkipTypeAnalysis", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.IsStaticType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Zenject::TypeAnalyzer::IsStaticType)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e9a3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "IsStaticType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TypeAnalyzer.CreateTypeInfoFromReflection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)(::System::Type*)>(&::Zenject::TypeAnalyzer::CreateTypeInfoFromReflection)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6e9a0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "CreateTypeInfoFromReflection", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::TypeAnalyzer::setStaticF__typeInfo(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::InjectTypeInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::InjectTypeInfo*>*, "_typeInfo", ::Zenject::TypeAnalyzer*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::InjectTypeInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::InjectTypeInfo*>* Zenject::TypeAnalyzer::getStaticF__typeInfo() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::InjectTypeInfo*>*, "_typeInfo", ::Zenject::TypeAnalyzer*>();
}
inline void Zenject::TypeAnalyzer::setStaticF__allowDuringValidation(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, bool>*, "_allowDuringValidation", ::Zenject::TypeAnalyzer*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, bool>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* Zenject::TypeAnalyzer::getStaticF__allowDuringValidation() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, bool>*, "_allowDuringValidation", ::Zenject::TypeAnalyzer*>();
}
inline void Zenject::TypeAnalyzer::setStaticF__ReflectionBakingCoverageMode_k__BackingField(::Zenject::ReflectionBakingCoverageModes value) {
  ::cordl_internals::setStaticField<::Zenject::ReflectionBakingCoverageModes, "<ReflectionBakingCoverageMode>k__BackingField", ::Zenject::TypeAnalyzer*>(
      std::forward<::Zenject::ReflectionBakingCoverageModes>(value));
}
inline ::Zenject::ReflectionBakingCoverageModes Zenject::TypeAnalyzer::getStaticF__ReflectionBakingCoverageMode_k__BackingField() {
  return ::cordl_internals::getStaticField<::Zenject::ReflectionBakingCoverageModes, "<ReflectionBakingCoverageMode>k__BackingField", ::Zenject::TypeAnalyzer*>();
}
inline void Zenject::TypeAnalyzer::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Zenject::ReflectionBakingCoverageModes Zenject::TypeAnalyzer::get_ReflectionBakingCoverageMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "get_ReflectionBakingCoverageMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ReflectionBakingCoverageModes>(nullptr, ___internal_method);
}
inline void Zenject::TypeAnalyzer::set_ReflectionBakingCoverageMode(::Zenject::ReflectionBakingCoverageModes value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "set_ReflectionBakingCoverageMode", {}, { ::i2c::type_of<::Zenject::ReflectionBakingCoverageModes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename T> inline bool Zenject::TypeAnalyzer::ShouldAllowDuringValidation() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "ShouldAllowDuringValidation", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Zenject::TypeAnalyzer::ShouldAllowDuringValidation(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "ShouldAllowDuringValidation", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Zenject::TypeAnalyzer::ShouldAllowDuringValidationInternal(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "ShouldAllowDuringValidationInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
template <typename T> inline bool Zenject::TypeAnalyzer::HasInfo() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "HasInfo", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Zenject::TypeAnalyzer::HasInfo(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "HasInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::TypeAnalyzer::GetInfo() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "GetInfo", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::TypeAnalyzer::GetInfo(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "GetInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method, type);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::TypeAnalyzer::TryGetInfo() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "TryGetInfo", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::TypeAnalyzer::TryGetInfo(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "TryGetInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method, type);
}
inline ::Zenject::InjectTypeInfo* Zenject::TypeAnalyzer::GetInfoInternal(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "GetInfoInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method, type);
}
inline bool Zenject::TypeAnalyzer::ShouldSkipTypeAnalysis(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "ShouldSkipTypeAnalysis", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Zenject::TypeAnalyzer::IsStaticType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "IsStaticType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::Zenject::InjectTypeInfo* Zenject::TypeAnalyzer::CreateTypeInfoFromReflection(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeAnalyzer*>(), { "CreateTypeInfoFromReflection", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Zenject::TypeAnalyzer::TypeAnalyzer() {}
