#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatWriterGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatWriterGenerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatClassWriterDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatCollectionWriterDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatWriterGenerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::*)()>(
    &::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x615f438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0._GenerateClassWriter_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*,
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::_GenerateClassWriter_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x615f440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0*>(),
                            { "<GenerateClassWriter>b__0",
                              {},
                              { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                                ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::ClassDataContract*& System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::__cordl_internal_get_classContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___classContract;
}
constexpr ::System::Runtime::Serialization::ClassDataContract* const&
System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::__cordl_internal_get_classContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___classContract;
}
constexpr void
System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::__cordl_internal_set_classContract(::System::Runtime::Serialization::ClassDataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___classContract = value;
}
inline void System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::_GenerateClassWriter_b__0(::System::Runtime::Serialization::XmlWriterDelegator* xw, ::System::Object* obj,
                                                                                                                        ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* ctx,
                                                                                                                        ::System::Runtime::Serialization::ClassDataContract* ctr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0*>(),
                          { "<GenerateClassWriter>b__0",
                            {},
                            { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xw, obj, ctx, ctr);
}
inline ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0*
System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0() {}
//  Writing Method size for method: ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::*)()>(
    &::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x615f43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0._GenerateCollectionWriter_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*,
    ::System::Runtime::Serialization::CollectionDataContract*)>(&::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::_GenerateCollectionWriter_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x615f4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0*>(),
                                                             { "<GenerateCollectionWriter>b__0",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::CollectionDataContract*&
System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::__cordl_internal_get_collectionContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionContract;
}
constexpr ::System::Runtime::Serialization::CollectionDataContract* const&
System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::__cordl_internal_get_collectionContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionContract;
}
constexpr void
System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::__cordl_internal_set_collectionContract(::System::Runtime::Serialization::CollectionDataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collectionContract = value;
}
inline void System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::_GenerateCollectionWriter_b__0(
    ::System::Runtime::Serialization::XmlWriterDelegator* xw, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* ctx,
    ::System::Runtime::Serialization::CollectionDataContract* ctr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0*>(),
                          { "<GenerateCollectionWriter>b__0",
                            {},
                            { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xw, obj, ctx, ctr);
}
inline ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0*
System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper.GenerateClassWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::XmlFormatClassWriterDelegate* (
    ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::*)(::System::Runtime::Serialization::ClassDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::GenerateClassWriter)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x615f150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper*>(),
                                                                                           { "GenerateClassWriter", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper.GenerateCollectionWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* (
    ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::*)(::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::GenerateCollectionWriter)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x615f390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper*>(),
                                                             { "GenerateCollectionWriter", {}, { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::*)()>(
    &::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x615efb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate*
System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::GenerateClassWriter(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper*>(),
                                                                                         { "GenerateClassWriter", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(this, ___internal_method, classContract);
}
inline ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*
System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::GenerateCollectionWriter(::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper*>(),
                                                           { "GenerateCollectionWriter", {}, { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*>(this, ___internal_method, collectionContract);
}
inline void System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper* System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper::XmlFormatWriterGenerator_CriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatWriterGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatWriterGenerator::*)()>(&::System::Runtime::Serialization::XmlFormatWriterGenerator::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x615ef64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatWriterGenerator.GenerateClassWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::XmlFormatClassWriterDelegate* (::System::Runtime::Serialization::XmlFormatWriterGenerator::*)(::System::Runtime::Serialization::ClassDataContract*)>(
        &::System::Runtime::Serialization::XmlFormatWriterGenerator::GenerateClassWriter)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x615efb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator*>(),
                                                                                           { "GenerateClassWriter", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatWriterGenerator.GenerateCollectionWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* (
    ::System::Runtime::Serialization::XmlFormatWriterGenerator::*)(::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatWriterGenerator::GenerateCollectionWriter)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x615f1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator*>(),
                                                             { "GenerateCollectionWriter", {}, { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper*& System::Runtime::Serialization::XmlFormatWriterGenerator::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper* const& System::Runtime::Serialization::XmlFormatWriterGenerator::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Runtime::Serialization::XmlFormatWriterGenerator::__cordl_internal_set_helper(::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Runtime::Serialization::XmlFormatWriterGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate*
System::Runtime::Serialization::XmlFormatWriterGenerator::GenerateClassWriter(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator*>(),
                                                                                         { "GenerateClassWriter", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(this, ___internal_method, classContract);
}
inline ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*
System::Runtime::Serialization::XmlFormatWriterGenerator::GenerateCollectionWriter(::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatWriterGenerator*>(),
                                                           { "GenerateCollectionWriter", {}, { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*>(this, ___internal_method, collectionContract);
}
inline ::System::Runtime::Serialization::XmlFormatWriterGenerator* System::Runtime::Serialization::XmlFormatWriterGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlFormatWriterGenerator*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatWriterGenerator::XmlFormatWriterGenerator() {}
