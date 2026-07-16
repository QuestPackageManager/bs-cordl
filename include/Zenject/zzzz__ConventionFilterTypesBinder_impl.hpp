#pragma once
// IWYU pragma private; include "Zenject/ConventionFilterTypesBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ConventionAssemblySelectionBinder_impl.hpp"
#include "Zenject/zzzz__ConventionFilterTypesBinder_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__ConventionBindInfo_def.hpp"
#include "Zenject/zzzz__ConventionFilterTypesBinder_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::*)()>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e49a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0._InNamespaces_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::_InNamespaces_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e49e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0*>(), { "<InNamespaces>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e49f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e49f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::__cordl_internal_set_namespaces(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaces = value;
}
inline void Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::_InNamespaces_b__0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0*>(), { "<InNamespaces>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0* Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_0::ConventionFilterTypesBinder___c__DisplayClass13_0() {}
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::*)()>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e49f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1._InNamespaces_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::*)(::StringW)>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::_InNamespaces_b__1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4a130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1*>(), { "<InNamespaces>b__1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4a138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4a17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::System::Type* const& Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::__cordl_internal_set_t(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
inline void Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::_InNamespaces_b__1(::StringW n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1*>(), { "<InNamespaces>b__1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline ::System::Object* Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1* Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder___c__DisplayClass13_1::ConventionFilterTypesBinder___c__DisplayClass13_1() {}
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::*)()>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e49b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0._WithSuffix_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::_WithSuffix_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e4a310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0*>(), { "<WithSuffix>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4a348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4a38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::__cordl_internal_get_suffix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___suffix;
}
constexpr ::StringW const& Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::__cordl_internal_get_suffix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___suffix;
}
constexpr void Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::__cordl_internal_set_suffix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___suffix = value;
}
inline void Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::_WithSuffix_b__0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0*>(), { "<WithSuffix>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0* Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder___c__DisplayClass14_0::ConventionFilterTypesBinder___c__DisplayClass14_0() {}
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::*)()>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e49c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0._WithPrefix_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::_WithPrefix_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e4a520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0*>(), { "<WithPrefix>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4a558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4a59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefix = value;
}
inline void Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::_WithPrefix_b__0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0*>(), { "<WithPrefix>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0* Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder___c__DisplayClass15_0::ConventionFilterTypesBinder___c__DisplayClass15_0() {}
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::*)()>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e49d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0._MatchingRegex_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::_MatchingRegex_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e4a730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0*>(), { "<MatchingRegex>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4a76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4a7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::Regex*& Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::__cordl_internal_get_regex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___regex;
}
constexpr ::System::Text::RegularExpressions::Regex* const& Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::__cordl_internal_get_regex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___regex;
}
constexpr void Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::__cordl_internal_set_regex(::System::Text::RegularExpressions::Regex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___regex = value;
}
inline void Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::_MatchingRegex_b__0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0*>(), { "<MatchingRegex>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0* Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder___c__DisplayClass18_0::ConventionFilterTypesBinder___c__DisplayClass18_0() {}
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e4960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0._DerivingFromOrEqual_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::_DerivingFromOrEqual_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e4a944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0*>(), { "<DerivingFromOrEqual>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4a9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4a9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::__cordl_internal_get_parentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentType;
}
constexpr ::System::Type* const& Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::__cordl_internal_get_parentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentType;
}
constexpr void Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::__cordl_internal_set_parentType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parentType = value;
}
inline void Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::_DerivingFromOrEqual_b__0(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0*>(), { "<DerivingFromOrEqual>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::System::Object* Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0* Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder___c__DisplayClass2_0::ConventionFilterTypesBinder___c__DisplayClass2_0() {}
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e496dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0._DerivingFrom_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::_DerivingFrom_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e4ab88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0*>(), { "<DerivingFrom>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4abf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4ac38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::__cordl_internal_get_parentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentType;
}
constexpr ::System::Type* const& Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::__cordl_internal_get_parentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentType;
}
constexpr void Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::__cordl_internal_set_parentType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parentType = value;
}
inline void Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::_DerivingFrom_b__0(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0*>(), { "<DerivingFrom>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::System::Object* Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0* Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder___c__DisplayClass4_0::ConventionFilterTypesBinder___c__DisplayClass4_0() {}
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e49800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0._WithAttribute_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::_WithAttribute_b__0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6e4adcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0*>(), { "<WithAttribute>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4ae9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4aee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::__cordl_internal_get_attribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr ::System::Type* const& Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::__cordl_internal_get_attribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr void Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::__cordl_internal_set_attribute(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attribute = value;
}
inline void Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::_WithAttribute_b__0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0*>(), { "<WithAttribute>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0* Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder___c__DisplayClass6_0::ConventionFilterTypesBinder___c__DisplayClass6_0() {}
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e49924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0._WithoutAttribute_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::_WithoutAttribute_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e4b074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0*>(), { "<WithoutAttribute>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e4b150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e4b194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::__cordl_internal_get_attribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr ::System::Type* const& Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::__cordl_internal_get_attribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr void Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::__cordl_internal_set_attribute(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attribute = value;
}
inline void Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::_WithoutAttribute_b__0(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0*>(), { "<WithoutAttribute>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::System::Object* Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0* Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder___c__DisplayClass8_0::ConventionFilterTypesBinder___c__DisplayClass8_0() {}
template <typename T> constexpr ::System::Func_2<T, bool>*& Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename T> constexpr ::System::Func_2<T, bool>* const& Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename T> constexpr void Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>::__cordl_internal_set_predicate(::System::Func_2<T, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___predicate = value;
}
template <typename T> inline void Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>::_WithAttributeWhere_b__0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>*>(),
                                                                                         { "<WithAttributeWhere>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
template <typename T> inline ::System::Object* Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename T> inline ::Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>* Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::ConventionFilterTypesBinder___c__DisplayClass9_0_1<T>::ConventionFilterTypesBinder___c__DisplayClass9_0_1() {}
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConventionFilterTypesBinder::*)(::Zenject::ConventionBindInfo*)>(&::Zenject::ConventionFilterTypesBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e49538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::ConventionBindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.DerivingFromOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e49540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "DerivingFromOrEqual", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.DerivingFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder::DerivingFrom)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e49610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "DerivingFrom", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.WithAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder::WithAttribute)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e496e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "WithAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.WithoutAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Type*)>(
    &::Zenject::ConventionFilterTypesBinder::WithoutAttribute)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e49804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "WithoutAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.Where
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Func_2<::System::Type*, bool>*)>(
    &::Zenject::ConventionFilterTypesBinder::Where)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e49928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "Where", {}, { ::i2c::type_of<::System::Func_2<::System::Type*, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.InNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::StringW)>(
    &::Zenject::ConventionFilterTypesBinder::InNamespace)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e4994c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "InNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.InNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::ArrayW<::StringW>)>(
    &::Zenject::ConventionFilterTypesBinder::InNamespaces)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e499c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "InNamespaces", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.InNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::Zenject::ConventionFilterTypesBinder::InNamespaces)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e499cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(),
                                                                                           { "InNamespaces", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.WithSuffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::StringW)>(
    &::Zenject::ConventionFilterTypesBinder::WithSuffix)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e49a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "WithSuffix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.WithPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::StringW)>(
    &::Zenject::ConventionFilterTypesBinder::WithPrefix)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e49b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "WithPrefix", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.MatchingRegex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::StringW)>(
    &::Zenject::ConventionFilterTypesBinder::MatchingRegex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e49c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "MatchingRegex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.MatchingRegex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (
    ::Zenject::ConventionFilterTypesBinder::*)(::StringW, ::System::Text::RegularExpressions::RegexOptions)>(&::Zenject::ConventionFilterTypesBinder::MatchingRegex)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e49c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(),
                                                             { "MatchingRegex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.MatchingRegex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConventionFilterTypesBinder* (::Zenject::ConventionFilterTypesBinder::*)(::System::Text::RegularExpressions::Regex*)>(
    &::Zenject::ConventionFilterTypesBinder::MatchingRegex)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e49cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "MatchingRegex", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Regex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConventionFilterTypesBinder.IsInNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::StringW)>(&::Zenject::ConventionFilterTypesBinder::IsInNamespace)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6e49d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "IsInNamespace", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Zenject::ConventionFilterTypesBinder::_ctor(::Zenject::ConventionBindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::ConventionBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
template <typename T> inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "DerivingFromOrEqual", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual(::System::Type* parentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "DerivingFromOrEqual", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, parentType);
}
template <typename T> inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::DerivingFrom() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "DerivingFrom", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::DerivingFrom(::System::Type* parentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "DerivingFrom", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, parentType);
}
template <typename T> inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithAttribute() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "WithAttribute", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithAttribute(::System::Type* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "WithAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, attribute);
}
template <typename T> inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithoutAttribute() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "WithoutAttribute", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithoutAttribute(::System::Type* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "WithoutAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, attribute);
}
template <typename T> inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithAttributeWhere(::System::Func_2<T, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(),
                                                                                              { "WithAttributeWhere", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Func_2<T, bool>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, predicate);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::Where(::System::Func_2<::System::Type*, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "Where", {}, { ::i2c::type_of<::System::Func_2<::System::Type*, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, predicate);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::InNamespace(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "InNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, ns);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::InNamespaces(::ArrayW<::StringW> namespaces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "InNamespaces", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, namespaces);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::InNamespaces(::System::Collections::Generic::IEnumerable_1<::StringW>* namespaces) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(),
                                                                                         { "InNamespaces", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, namespaces);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithSuffix(::StringW suffix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "WithSuffix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, suffix);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::WithPrefix(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "WithPrefix", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, prefix);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::MatchingRegex(::StringW pattern) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "MatchingRegex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, pattern);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::MatchingRegex(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(),
                                                           { "MatchingRegex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, pattern, options);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::MatchingRegex(::System::Text::RegularExpressions::Regex* regex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "MatchingRegex", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Regex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConventionFilterTypesBinder*>(this, ___internal_method, regex);
}
inline bool Zenject::ConventionFilterTypesBinder::IsInNamespace(::System::Type* type, ::StringW requiredNs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConventionFilterTypesBinder*>(), { "IsInNamespace", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, requiredNs);
}
inline ::Zenject::ConventionFilterTypesBinder* Zenject::ConventionFilterTypesBinder::New_ctor(::Zenject::ConventionBindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConventionFilterTypesBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::ConventionFilterTypesBinder::ConventionFilterTypesBinder() {}
