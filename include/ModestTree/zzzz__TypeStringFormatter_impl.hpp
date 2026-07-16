#pragma once
// IWYU pragma private; include "ModestTree/TypeStringFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/zzzz__TypeStringFormatter_def.hpp"
#include "ModestTree/zzzz__TypeStringFormatter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ModestTree::TypeStringFormatter___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::TypeStringFormatter___c::*)()>(&::ModestTree::TypeStringFormatter___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3edfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::TypeStringFormatter___c._PrettyNameInternal_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ModestTree::TypeStringFormatter___c::*)(::System::Type*)>(&::ModestTree::TypeStringFormatter___c::_PrettyNameInternal_b__3_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e3ee00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter___c*>(), { "<PrettyNameInternal>b__3_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void ModestTree::TypeStringFormatter___c::setStaticF___9(::ModestTree::TypeStringFormatter___c* value) {
  ::cordl_internals::setStaticField<::ModestTree::TypeStringFormatter___c*, "<>9", ::ModestTree::TypeStringFormatter___c*>(std::forward<::ModestTree::TypeStringFormatter___c*>(value));
}
inline ::ModestTree::TypeStringFormatter___c* ModestTree::TypeStringFormatter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::ModestTree::TypeStringFormatter___c*, "<>9", ::ModestTree::TypeStringFormatter___c*>();
}
inline void ModestTree::TypeStringFormatter___c::setStaticF___9__3_0(::System::Func_2<::System::Type*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__3_0", ::ModestTree::TypeStringFormatter___c*>(
      std::forward<::System::Func_2<::System::Type*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Type*, ::StringW>* ModestTree::TypeStringFormatter___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::StringW>*, "<>9__3_0", ::ModestTree::TypeStringFormatter___c*>();
}
inline void ModestTree::TypeStringFormatter___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW ModestTree::TypeStringFormatter___c::_PrettyNameInternal_b__3_0(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter___c*>(), { "<PrettyNameInternal>b__3_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, t);
}
inline ::ModestTree::TypeStringFormatter___c* ModestTree::TypeStringFormatter___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::TypeStringFormatter___c*>());
}
// Ctor Parameters []
constexpr ::ModestTree::TypeStringFormatter___c::TypeStringFormatter___c() {}
//  Writing Method size for method: ::ModestTree::TypeStringFormatter.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::ModestTree::TypeStringFormatter::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e3e408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::TypeStringFormatter.PrettyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::ModestTree::TypeStringFormatter::PrettyName)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6e3c898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter*>(), { "PrettyName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::TypeStringFormatter.PrettyNameInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::ModestTree::TypeStringFormatter::PrettyNameInternal)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x6e3e4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter*>(), { "PrettyNameInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::TypeStringFormatter.GetCSharpTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::ModestTree::TypeStringFormatter::GetCSharpTypeName)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x6e3e968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter*>(), { "GetCSharpTypeName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void ModestTree::TypeStringFormatter::setStaticF__prettyNameCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>*, "_prettyNameCache", ::ModestTree::TypeStringFormatter*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* ModestTree::TypeStringFormatter::getStaticF__prettyNameCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>*, "_prettyNameCache", ::ModestTree::TypeStringFormatter*>();
}
inline void ModestTree::TypeStringFormatter::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW ModestTree::TypeStringFormatter::PrettyName(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter*>(), { "PrettyName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW ModestTree::TypeStringFormatter::PrettyNameInternal(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter*>(), { "PrettyNameInternal", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW ModestTree::TypeStringFormatter::GetCSharpTypeName(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::TypeStringFormatter*>(), { "GetCSharpTypeName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, typeName);
}
// Ctor Parameters []
constexpr ::ModestTree::TypeStringFormatter::TypeStringFormatter() {}
