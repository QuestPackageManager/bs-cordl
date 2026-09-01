#pragma once
// IWYU pragma private; include "System\IO\EnumerationOptions.hpp"
#include "System/IO/zzzz__FileAttributes_impl.hpp"
#include "System/IO/zzzz__MatchCasing_impl.hpp"
#include "System/IO/zzzz__MatchType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/zzzz__MatchCasing_def.hpp"
#include "System/IO/zzzz__MatchType_def.hpp"
#include "System/IO/zzzz__SearchOption_def.hpp"
//  Writing Method size for method: ::System::IO::EnumerationOptions.get_Compatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::EnumerationOptions* (*)()>(&::System::IO::EnumerationOptions::get_Compatible)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c075b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_Compatible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.get_CompatibleRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::EnumerationOptions* (*)()>(&::System::IO::EnumerationOptions::get_CompatibleRecursive)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c07614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_CompatibleRecursive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::EnumerationOptions* (*)()>(&::System::IO::EnumerationOptions::get_Default)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c07670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::EnumerationOptions::*)()>(&::System::IO::EnumerationOptions::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c076cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.FromSearchOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::EnumerationOptions* (*)(::System::IO::SearchOption)>(&::System::IO::EnumerationOptions::FromSearchOption)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5c0702c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "FromSearchOption", {}, { ::i2c::type_of<::System::IO::SearchOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.get_RecurseSubdirectories
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::EnumerationOptions::*)()>(&::System::IO::EnumerationOptions::get_RecurseSubdirectories)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c076e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_RecurseSubdirectories", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.set_RecurseSubdirectories
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::EnumerationOptions::*)(bool)>(&::System::IO::EnumerationOptions::set_RecurseSubdirectories)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c076e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "set_RecurseSubdirectories", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.get_IgnoreInaccessible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::EnumerationOptions::*)()>(&::System::IO::EnumerationOptions::get_IgnoreInaccessible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c076f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_IgnoreInaccessible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.set_IgnoreInaccessible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::EnumerationOptions::*)(bool)>(&::System::IO::EnumerationOptions::set_IgnoreInaccessible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c076f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "set_IgnoreInaccessible", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.get_AttributesToSkip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (::System::IO::EnumerationOptions::*)()>(&::System::IO::EnumerationOptions::get_AttributesToSkip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c07700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_AttributesToSkip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.set_AttributesToSkip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::EnumerationOptions::*)(::System::IO::FileAttributes)>(&::System::IO::EnumerationOptions::set_AttributesToSkip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c07708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "set_AttributesToSkip", {}, { ::i2c::type_of<::System::IO::FileAttributes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.get_MatchType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::MatchType (::System::IO::EnumerationOptions::*)()>(&::System::IO::EnumerationOptions::get_MatchType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c07710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_MatchType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.set_MatchType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::EnumerationOptions::*)(::System::IO::MatchType)>(&::System::IO::EnumerationOptions::set_MatchType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c07718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "set_MatchType", {}, { ::i2c::type_of<::System::IO::MatchType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.get_MatchCasing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::MatchCasing (::System::IO::EnumerationOptions::*)()>(&::System::IO::EnumerationOptions::get_MatchCasing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c07720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_MatchCasing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::EnumerationOptions.get_ReturnSpecialDirectories
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::EnumerationOptions::*)()>(&::System::IO::EnumerationOptions::get_ReturnSpecialDirectories)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c07728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_ReturnSpecialDirectories", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::IO::EnumerationOptions::__cordl_internal_get__RecurseSubdirectories_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RecurseSubdirectories_k__BackingField;
}
constexpr bool const& System::IO::EnumerationOptions::__cordl_internal_get__RecurseSubdirectories_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RecurseSubdirectories_k__BackingField;
}
constexpr void System::IO::EnumerationOptions::__cordl_internal_set__RecurseSubdirectories_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RecurseSubdirectories_k__BackingField = value;
}
constexpr bool& System::IO::EnumerationOptions::__cordl_internal_get__IgnoreInaccessible_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreInaccessible_k__BackingField;
}
constexpr bool const& System::IO::EnumerationOptions::__cordl_internal_get__IgnoreInaccessible_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreInaccessible_k__BackingField;
}
constexpr void System::IO::EnumerationOptions::__cordl_internal_set__IgnoreInaccessible_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IgnoreInaccessible_k__BackingField = value;
}
constexpr ::System::IO::FileAttributes& System::IO::EnumerationOptions::__cordl_internal_get__AttributesToSkip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributesToSkip_k__BackingField;
}
constexpr ::System::IO::FileAttributes const& System::IO::EnumerationOptions::__cordl_internal_get__AttributesToSkip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributesToSkip_k__BackingField;
}
constexpr void System::IO::EnumerationOptions::__cordl_internal_set__AttributesToSkip_k__BackingField(::System::IO::FileAttributes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AttributesToSkip_k__BackingField = value;
}
constexpr ::System::IO::MatchType& System::IO::EnumerationOptions::__cordl_internal_get__MatchType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MatchType_k__BackingField;
}
constexpr ::System::IO::MatchType const& System::IO::EnumerationOptions::__cordl_internal_get__MatchType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MatchType_k__BackingField;
}
constexpr void System::IO::EnumerationOptions::__cordl_internal_set__MatchType_k__BackingField(::System::IO::MatchType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MatchType_k__BackingField = value;
}
constexpr ::System::IO::MatchCasing& System::IO::EnumerationOptions::__cordl_internal_get__MatchCasing_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MatchCasing_k__BackingField;
}
constexpr ::System::IO::MatchCasing const& System::IO::EnumerationOptions::__cordl_internal_get__MatchCasing_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MatchCasing_k__BackingField;
}
constexpr void System::IO::EnumerationOptions::__cordl_internal_set__MatchCasing_k__BackingField(::System::IO::MatchCasing value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MatchCasing_k__BackingField = value;
}
constexpr bool& System::IO::EnumerationOptions::__cordl_internal_get__ReturnSpecialDirectories_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnSpecialDirectories_k__BackingField;
}
constexpr bool const& System::IO::EnumerationOptions::__cordl_internal_get__ReturnSpecialDirectories_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnSpecialDirectories_k__BackingField;
}
constexpr void System::IO::EnumerationOptions::__cordl_internal_set__ReturnSpecialDirectories_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReturnSpecialDirectories_k__BackingField = value;
}
inline void System::IO::EnumerationOptions::setStaticF__Compatible_k__BackingField(::System::IO::EnumerationOptions* value) {
  ::cordl_internals::setStaticField<::System::IO::EnumerationOptions*, "<Compatible>k__BackingField", ::System::IO::EnumerationOptions*>(std::forward<::System::IO::EnumerationOptions*>(value));
}
inline ::System::IO::EnumerationOptions* System::IO::EnumerationOptions::getStaticF__Compatible_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::IO::EnumerationOptions*, "<Compatible>k__BackingField", ::System::IO::EnumerationOptions*>();
}
inline void System::IO::EnumerationOptions::setStaticF__CompatibleRecursive_k__BackingField(::System::IO::EnumerationOptions* value) {
  ::cordl_internals::setStaticField<::System::IO::EnumerationOptions*, "<CompatibleRecursive>k__BackingField", ::System::IO::EnumerationOptions*>(
      std::forward<::System::IO::EnumerationOptions*>(value));
}
inline ::System::IO::EnumerationOptions* System::IO::EnumerationOptions::getStaticF__CompatibleRecursive_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::IO::EnumerationOptions*, "<CompatibleRecursive>k__BackingField", ::System::IO::EnumerationOptions*>();
}
inline void System::IO::EnumerationOptions::setStaticF__Default_k__BackingField(::System::IO::EnumerationOptions* value) {
  ::cordl_internals::setStaticField<::System::IO::EnumerationOptions*, "<Default>k__BackingField", ::System::IO::EnumerationOptions*>(std::forward<::System::IO::EnumerationOptions*>(value));
}
inline ::System::IO::EnumerationOptions* System::IO::EnumerationOptions::getStaticF__Default_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::IO::EnumerationOptions*, "<Default>k__BackingField", ::System::IO::EnumerationOptions*>();
}
inline ::System::IO::EnumerationOptions* System::IO::EnumerationOptions::get_Compatible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_Compatible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::EnumerationOptions*>(nullptr, ___internal_method);
}
inline ::System::IO::EnumerationOptions* System::IO::EnumerationOptions::get_CompatibleRecursive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_CompatibleRecursive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::EnumerationOptions*>(nullptr, ___internal_method);
}
inline ::System::IO::EnumerationOptions* System::IO::EnumerationOptions::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::EnumerationOptions*>(nullptr, ___internal_method);
}
inline void System::IO::EnumerationOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::EnumerationOptions* System::IO::EnumerationOptions::FromSearchOption(::System::IO::SearchOption searchOption) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "FromSearchOption", {}, { ::i2c::type_of<::System::IO::SearchOption>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::EnumerationOptions*>(nullptr, ___internal_method, searchOption);
}
inline bool System::IO::EnumerationOptions::get_RecurseSubdirectories() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_RecurseSubdirectories", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::IO::EnumerationOptions::set_RecurseSubdirectories(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "set_RecurseSubdirectories", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::IO::EnumerationOptions::get_IgnoreInaccessible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_IgnoreInaccessible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::IO::EnumerationOptions::set_IgnoreInaccessible(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "set_IgnoreInaccessible", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::FileAttributes System::IO::EnumerationOptions::get_AttributesToSkip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_AttributesToSkip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(this, ___internal_method);
}
inline void System::IO::EnumerationOptions::set_AttributesToSkip(::System::IO::FileAttributes value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "set_AttributesToSkip", {}, { ::i2c::type_of<::System::IO::FileAttributes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::MatchType System::IO::EnumerationOptions::get_MatchType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_MatchType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MatchType>(this, ___internal_method);
}
inline void System::IO::EnumerationOptions::set_MatchType(::System::IO::MatchType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "set_MatchType", {}, { ::i2c::type_of<::System::IO::MatchType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::MatchCasing System::IO::EnumerationOptions::get_MatchCasing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_MatchCasing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MatchCasing>(this, ___internal_method);
}
inline bool System::IO::EnumerationOptions::get_ReturnSpecialDirectories() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::EnumerationOptions*>(), { "get_ReturnSpecialDirectories", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IO::EnumerationOptions* System::IO::EnumerationOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::EnumerationOptions*>());
}
// Ctor Parameters []
constexpr ::System::IO::EnumerationOptions::EnumerationOptions() {}
