#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaSequence.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSequence_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSequence.get_Items
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (::System::Xml::Schema::XmlSchemaSequence::*)()>(
    &::System::Xml::Schema::XmlSchemaSequence::get_Items)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6234330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSequence.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaSequence::*)()>(&::System::Xml::Schema::XmlSchemaSequence::get_IsEmpty)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6234338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSequence.SetItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSequence::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(
    &::System::Xml::Schema::XmlSchemaSequence::SetItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6234384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSequence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSequence::*)()>(&::System::Xml::Schema::XmlSchemaSequence::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x623438c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& System::Xml::Schema::XmlSchemaSequence::__cordl_internal_get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& System::Xml::Schema::XmlSchemaSequence::__cordl_internal_get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr void System::Xml::Schema::XmlSchemaSequence::__cordl_internal_set_items(::System::Xml::Schema::XmlSchemaObjectCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___items = value;
}
inline ::System::Xml::Schema::XmlSchemaObjectCollection* System::Xml::Schema::XmlSchemaSequence::get_Items() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectCollection*>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaSequence::get_IsEmpty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSequence::SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* newItems) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newItems);
}
inline void System::Xml::Schema::XmlSchemaSequence::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSequence*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSequence* System::Xml::Schema::XmlSchemaSequence::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaSequence*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSequence::XmlSchemaSequence() {}
