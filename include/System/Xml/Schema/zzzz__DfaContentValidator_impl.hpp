#pragma once
// IWYU pragma private; include "System\Xml\Schema\DfaContentValidator.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__DfaContentValidator_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationState_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::DfaContentValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DfaContentValidator::*)(
    ::ArrayW<::ArrayW<int32_t>>, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::XmlSchemaContentType, bool, bool)>(&::System::Xml::Schema::DfaContentValidator::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6321a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::ArrayW<int32_t>>>(), ::i2c::type_of<::System::Xml::Schema::SymbolsDictionary*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DfaContentValidator.InitValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::DfaContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::DfaContentValidator::InitValidation)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6321cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DfaContentValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Schema::DfaContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::by_ref<int32_t>)>(
        &::System::Xml::Schema::DfaContentValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6321d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DfaContentValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::DfaContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::DfaContentValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6321e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DfaContentValidator.ExpectedElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::DfaContentValidator::*)(::System::Xml::Schema::ValidationState*, bool)>(
    &::System::Xml::Schema::DfaContentValidator::ExpectedElements)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6321e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DfaContentValidator.ExpectedParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::DfaContentValidator::*)(::System::Xml::Schema::ValidationState*, bool, ::System::Xml::Schema::XmlSchemaSet*)>(
        &::System::Xml::Schema::DfaContentValidator::ExpectedParticles)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x632201c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::ArrayW<int32_t>>& System::Xml::Schema::DfaContentValidator::__cordl_internal_get_transitionTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTable;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& System::Xml::Schema::DfaContentValidator::__cordl_internal_get_transitionTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTable;
}
constexpr void System::Xml::Schema::DfaContentValidator::__cordl_internal_set_transitionTable(::ArrayW<::ArrayW<int32_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transitionTable = value;
}
constexpr ::System::Xml::Schema::SymbolsDictionary*& System::Xml::Schema::DfaContentValidator::__cordl_internal_get_symbols() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbols;
}
constexpr ::System::Xml::Schema::SymbolsDictionary* const& System::Xml::Schema::DfaContentValidator::__cordl_internal_get_symbols() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbols;
}
constexpr void System::Xml::Schema::DfaContentValidator::__cordl_internal_set_symbols(::System::Xml::Schema::SymbolsDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___symbols = value;
}
inline void System::Xml::Schema::DfaContentValidator::_ctor(::ArrayW<::ArrayW<int32_t>> transitionTable, ::System::Xml::Schema::SymbolsDictionary* symbols,
                                                            ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::ArrayW<int32_t>>>(), ::i2c::type_of<::System::Xml::Schema::SymbolsDictionary*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionTable, symbols, contentType, isOpen, isEmptiable);
}
inline void System::Xml::Schema::DfaContentValidator::InitValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Object* System::Xml::Schema::DfaContentValidator::ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context,
                                                                                   ::by_ref<int32_t> errorCode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, context, errorCode);
}
inline bool System::Xml::Schema::DfaContentValidator::CompleteValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::DfaContentValidator::ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, context, isRequiredOnly);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::DfaContentValidator::ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly,
                                                                                                     ::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::DfaContentValidator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, context, isRequiredOnly, schemaSet);
}
inline ::System::Xml::Schema::DfaContentValidator* System::Xml::Schema::DfaContentValidator::New_ctor(::ArrayW<::ArrayW<int32_t>> transitionTable, ::System::Xml::Schema::SymbolsDictionary* symbols,
                                                                                                      ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::DfaContentValidator*>(transitionTable, symbols, contentType, isOpen, isEmptiable));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::DfaContentValidator::DfaContentValidator() {}
