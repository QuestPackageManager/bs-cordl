#pragma once
// IWYU pragma private; include "GlobalNamespace/ArgumentBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArgumentBase.get_autocompleteValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::ArgumentBase::*)()>(&::GlobalNamespace::ArgumentBase::get_autocompleteValues)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3577514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { "get_autocompleteValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArgumentBase.set_autocompleteValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArgumentBase::*)(::ArrayW<::StringW>)>(&::GlobalNamespace::ArgumentBase::set_autocompleteValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3577ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { "set_autocompleteValues", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArgumentBase.get_supportsAutocomplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArgumentBase::*)()>(&::GlobalNamespace::ArgumentBase::get_supportsAutocomplete)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x35774cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { "get_supportsAutocomplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArgumentBase.get_isOptional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArgumentBase::*)()>(&::GlobalNamespace::ArgumentBase::get_isOptional)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { ::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArgumentBase.SetAutocompleteValuesProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArgumentBase::*)(::System::Func_1<::ArrayW<::StringW>>*)>(
    &::GlobalNamespace::ArgumentBase::SetAutocompleteValuesProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3577de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { "SetAutocompleteValuesProvider", {}, { ::i2c::type_of<::System::Func_1<::ArrayW<::StringW>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArgumentBase.TryParseWithValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArgumentBase::*)(::StringW, ::by_ref<::StringW>)>(&::GlobalNamespace::ArgumentBase::TryParseWithValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { ::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArgumentBase.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArgumentBase::*)()>(&::GlobalNamespace::ArgumentBase::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { ::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArgumentBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArgumentBase::*)()>(&::GlobalNamespace::ArgumentBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3577dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ArgumentBase::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& GlobalNamespace::ArgumentBase::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void GlobalNamespace::ArgumentBase::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& GlobalNamespace::ArgumentBase::__cordl_internal_get_description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___description;
}
constexpr ::StringW const& GlobalNamespace::ArgumentBase::__cordl_internal_get_description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___description;
}
constexpr void GlobalNamespace::ArgumentBase::__cordl_internal_set_description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___description = value;
}
constexpr ::System::Type*& GlobalNamespace::ArgumentBase::__cordl_internal_get_valueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr ::System::Type* const& GlobalNamespace::ArgumentBase::__cordl_internal_get_valueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr void GlobalNamespace::ArgumentBase::__cordl_internal_set_valueType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueType = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::ArgumentBase::__cordl_internal_get__autocompleteValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocompleteValues;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::ArgumentBase::__cordl_internal_get__autocompleteValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocompleteValues;
}
constexpr void GlobalNamespace::ArgumentBase::__cordl_internal_set__autocompleteValues(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autocompleteValues = value;
}
constexpr ::System::Func_1<::ArrayW<::StringW>>*& GlobalNamespace::ArgumentBase::__cordl_internal_get__autocompleteValuesProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocompleteValuesProvider;
}
constexpr ::System::Func_1<::ArrayW<::StringW>>* const& GlobalNamespace::ArgumentBase::__cordl_internal_get__autocompleteValuesProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocompleteValuesProvider;
}
constexpr void GlobalNamespace::ArgumentBase::__cordl_internal_set__autocompleteValuesProvider(::System::Func_1<::ArrayW<::StringW>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autocompleteValuesProvider = value;
}
inline ::ArrayW<::StringW> GlobalNamespace::ArgumentBase::get_autocompleteValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { "get_autocompleteValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void GlobalNamespace::ArgumentBase::set_autocompleteValues(::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { "set_autocompleteValues", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ArgumentBase::get_supportsAutocomplete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { "get_supportsAutocomplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ArgumentBase::get_isOptional() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ArgumentBase::SetAutocompleteValuesProvider(::System::Func_1<::ArrayW<::StringW>>* autocompleteValuesProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { "SetAutocompleteValuesProvider", {}, { ::i2c::type_of<::System::Func_1<::ArrayW<::StringW>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, autocompleteValuesProvider);
}
inline bool GlobalNamespace::ArgumentBase::TryParseWithValue(::StringW inValue, ::by_ref<::StringW> outError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inValue, outError);
}
inline void GlobalNamespace::ArgumentBase::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArgumentBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArgumentBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArgumentBase* GlobalNamespace::ArgumentBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArgumentBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArgumentBase::ArgumentBase() {}
