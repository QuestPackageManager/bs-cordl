#pragma once
// IWYU pragma private; include "System/TypeSpec.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TypeSpec_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/zzzz__TypeIdentifier_def.hpp"
#include "System/zzzz__TypeSpec_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TypeSpec_DisplayNameFormat::TypeSpec_DisplayNameFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::TypeSpec_DisplayNameFormat::TypeSpec_DisplayNameFormat() {}
constexpr ::System::TypeSpec_DisplayNameFormat System::TypeSpec_DisplayNameFormat::Default{ static_cast<int32_t>(0x0) };
constexpr ::System::TypeSpec_DisplayNameFormat System::TypeSpec_DisplayNameFormat::WANT_ASSEMBLY{ static_cast<int32_t>(0x1) };
constexpr ::System::TypeSpec_DisplayNameFormat System::TypeSpec_DisplayNameFormat::NO_MODIFIERS{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::TypeSpec.get_HasModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TypeSpec::*)()>(&::System::TypeSpec::get_HasModifiers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c9c8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "get_HasModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.GetDisplayFullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TypeSpec::*)(::System::TypeSpec_DisplayNameFormat)>(&::System::TypeSpec::GetDisplayFullName)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x5c9c8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "GetDisplayFullName", {}, { ::i2c::type_of<::System::TypeSpec_DisplayNameFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.GetModifierString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::TypeSpec::*)(::System::Text::StringBuilder*)>(&::System::TypeSpec::GetModifierString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c9cd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "GetModifierString", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.get_DisplayFullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TypeSpec::*)()>(&::System::TypeSpec::get_DisplayFullName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c9cd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "get_DisplayFullName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeSpec* (*)(::StringW)>(&::System::TypeSpec::Parse)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c9cee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.UnescapeInternalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::TypeSpec::UnescapeInternalName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c9c54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "UnescapeInternalName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.Resolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::TypeSpec::*)(::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*,
                                                                                               ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*, bool, bool,
                                                                                               ::by_ref<::System::Threading::StackCrawlMark>)>(&::System::TypeSpec::Resolve)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0x5c9da7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "Resolve",
                                                                      {},
                                                                      { ::i2c::type_of<::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*>(),
                                                                        ::i2c::type_of<::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*>(), ::i2c::type_of<bool>(),
                                                                        ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.AddName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeSpec::*)(::StringW)>(&::System::TypeSpec::AddName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5c9e304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "AddName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.AddModifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeSpec::*)(::System::ModifierSpec*)>(&::System::TypeSpec::AddModifier)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c9e438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "AddModifier", {}, { ::i2c::type_of<::System::ModifierSpec*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.SkipSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<int32_t>)>(&::System::TypeSpec::SkipSpace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c9e53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "SkipSpace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.BoundCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::System::TypeSpec::BoundCheck)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c9e5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "BoundCheck", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.ParsedTypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeIdentifier* (*)(::StringW)>(&::System::TypeSpec::ParsedTypeIdentifier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9e434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "ParsedTypeIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeSpec* (*)(::StringW, ::by_ref<int32_t>, bool, bool)>(&::System::TypeSpec::Parse)> {
  constexpr static std::size_t size = 0xac4;
  constexpr static std::size_t addrs = 0x5c9cfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(),
                                                             { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeSpec::*)()>(&::System::TypeSpec::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9e65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::TypeIdentifier*& System::TypeSpec::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::System::TypeIdentifier* const& System::TypeSpec::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::TypeSpec::__cordl_internal_set_name(::System::TypeIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& System::TypeSpec::__cordl_internal_get_assembly_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly_name;
}
constexpr ::StringW const& System::TypeSpec::__cordl_internal_get_assembly_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly_name;
}
constexpr void System::TypeSpec::__cordl_internal_set_assembly_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assembly_name = value;
}
constexpr ::System::Collections::Generic::List_1<::System::TypeIdentifier*>*& System::TypeSpec::__cordl_internal_get_nested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nested;
}
constexpr ::System::Collections::Generic::List_1<::System::TypeIdentifier*>* const& System::TypeSpec::__cordl_internal_get_nested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nested;
}
constexpr void System::TypeSpec::__cordl_internal_set_nested(::System::Collections::Generic::List_1<::System::TypeIdentifier*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nested = value;
}
constexpr ::System::Collections::Generic::List_1<::System::TypeSpec*>*& System::TypeSpec::__cordl_internal_get_generic_params() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generic_params;
}
constexpr ::System::Collections::Generic::List_1<::System::TypeSpec*>* const& System::TypeSpec::__cordl_internal_get_generic_params() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generic_params;
}
constexpr void System::TypeSpec::__cordl_internal_set_generic_params(::System::Collections::Generic::List_1<::System::TypeSpec*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generic_params = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ModifierSpec*>*& System::TypeSpec::__cordl_internal_get_modifier_spec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier_spec;
}
constexpr ::System::Collections::Generic::List_1<::System::ModifierSpec*>* const& System::TypeSpec::__cordl_internal_get_modifier_spec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier_spec;
}
constexpr void System::TypeSpec::__cordl_internal_set_modifier_spec(::System::Collections::Generic::List_1<::System::ModifierSpec*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifier_spec = value;
}
constexpr bool& System::TypeSpec::__cordl_internal_get_is_byref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_byref;
}
constexpr bool const& System::TypeSpec::__cordl_internal_get_is_byref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_byref;
}
constexpr void System::TypeSpec::__cordl_internal_set_is_byref(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_byref = value;
}
constexpr ::StringW& System::TypeSpec::__cordl_internal_get_display_fullname() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___display_fullname;
}
constexpr ::StringW const& System::TypeSpec::__cordl_internal_get_display_fullname() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___display_fullname;
}
constexpr void System::TypeSpec::__cordl_internal_set_display_fullname(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___display_fullname = value;
}
inline bool System::TypeSpec::get_HasModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "get_HasModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::TypeSpec::GetDisplayFullName(::System::TypeSpec_DisplayNameFormat flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "GetDisplayFullName", {}, { ::i2c::type_of<::System::TypeSpec_DisplayNameFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, flags);
}
inline ::System::Text::StringBuilder* System::TypeSpec::GetModifierString(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "GetModifierString", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, sb);
}
inline ::StringW System::TypeSpec::get_DisplayFullName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "get_DisplayFullName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TypeSpec* System::TypeSpec::Parse(::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeSpec*>(nullptr, ___internal_method, typeName);
}
inline ::StringW System::TypeSpec::UnescapeInternalName(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "UnescapeInternalName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, displayName);
}
inline ::System::Type* System::TypeSpec::Resolve(::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                                 ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError, bool ignoreCase,
                                                 ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "Resolve",
                                                                    {},
                                                                    { ::i2c::type_of<::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*>(),
                                                                      ::i2c::type_of<::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*>(), ::i2c::type_of<bool>(),
                                                                      ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, assemblyResolver, typeResolver, throwOnError, ignoreCase, stackMark);
}
inline void System::TypeSpec::AddName(::StringW type_name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "AddName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type_name);
}
inline void System::TypeSpec::AddModifier(::System::ModifierSpec* md) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "AddModifier", {}, { ::i2c::type_of<::System::ModifierSpec*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, md);
}
inline void System::TypeSpec::SkipSpace(::StringW name, ::by_ref<int32_t> pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "SkipSpace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, pos);
}
inline void System::TypeSpec::BoundCheck(int32_t idx, ::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "BoundCheck", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx, s);
}
inline ::System::TypeIdentifier* System::TypeSpec::ParsedTypeIdentifier(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { "ParsedTypeIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeIdentifier*>(nullptr, ___internal_method, displayName);
}
inline ::System::TypeSpec* System::TypeSpec::Parse(::StringW name, ::by_ref<int32_t> p, bool is_recurse, bool allow_aqn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(),
                                                           { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeSpec*>(nullptr, ___internal_method, name, p, is_recurse, allow_aqn);
}
inline void System::TypeSpec::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeSpec*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TypeSpec* System::TypeSpec::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeSpec*>());
}
// Ctor Parameters []
constexpr ::System::TypeSpec::TypeSpec() {}
