#pragma once
// IWYU pragma private; include "System/Data/Common/ObjectStorage.hpp"
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/Common/zzzz__ObjectStorage_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/Common/zzzz__ObjectStorage_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializerFactory_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializer_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::Common::ObjectStorage_Families::ObjectStorage_Families(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::Common::ObjectStorage_Families::ObjectStorage_Families() {}
constexpr ::System::Data::Common::ObjectStorage_Families System::Data::Common::ObjectStorage_Families::DATETIME{ static_cast<int32_t>(0x0) };
constexpr ::System::Data::Common::ObjectStorage_Families System::Data::Common::ObjectStorage_Families::NUMBER{ static_cast<int32_t>(0x1) };
constexpr ::System::Data::Common::ObjectStorage_Families System::Data::Common::ObjectStorage_Families::STRING{ static_cast<int32_t>(0x2) };
constexpr ::System::Data::Common::ObjectStorage_Families System::Data::Common::ObjectStorage_Families::BOOLEAN{ static_cast<int32_t>(0x3) };
constexpr ::System::Data::Common::ObjectStorage_Families System::Data::Common::ObjectStorage_Families::ARRAY{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::System::Data::Common::ObjectStorage_TempAssemblyComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::ObjectStorage_TempAssemblyComparer::*)()>(&::System::Data::Common::ObjectStorage_TempAssemblyComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x609ab38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage_TempAssemblyComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage_TempAssemblyComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Common::ObjectStorage_TempAssemblyComparer::*)(
    ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
    ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>)>(&::System::Data::Common::ObjectStorage_TempAssemblyComparer::Equals)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x609ab3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage_TempAssemblyComparer*>(),
                                                { "Equals",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>(),
                                                    ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage_TempAssemblyComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::ObjectStorage_TempAssemblyComparer::*)(
    ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>)>(&::System::Data::Common::ObjectStorage_TempAssemblyComparer::GetHashCode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x609ac80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage_TempAssemblyComparer*>(),
                            { "GetHashCode", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>() } })));
    return ___internal_method;
  }
};
inline void System::Data::Common::ObjectStorage_TempAssemblyComparer::setStaticF_s_default(
    ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*, "s_default",
      ::System::Data::Common::ObjectStorage_TempAssemblyComparer*>(
      std::forward<::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*
System::Data::Common::ObjectStorage_TempAssemblyComparer::getStaticF_s_default() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*, "s_default",
      ::System::Data::Common::ObjectStorage_TempAssemblyComparer*>();
}
inline void System::Data::Common::ObjectStorage_TempAssemblyComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage_TempAssemblyComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::Common::ObjectStorage_TempAssemblyComparer::Equals(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> x,
                                                                             ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage_TempAssemblyComparer*>(),
                                              { "Equals",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>(),
                                                  ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t
System::Data::Common::ObjectStorage_TempAssemblyComparer::GetHashCode(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage_TempAssemblyComparer*>(),
                                       { "GetHashCode", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline ::System::Data::Common::ObjectStorage_TempAssemblyComparer* System::Data::Common::ObjectStorage_TempAssemblyComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::ObjectStorage_TempAssemblyComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>"
constexpr System::Data::Common::ObjectStorage_TempAssemblyComparer::operator ::System::Collections::Generic::IEqualityComparer_1<
    ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*
System::Data::Common::ObjectStorage_TempAssemblyComparer::
    i___System__Collections__Generic__IEqualityComparer_1___System__Collections__Generic__KeyValuePair_2___System__Type____System__Xml__Serialization__XmlRootAttribute___() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*>(
      static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::Common::ObjectStorage_TempAssemblyComparer::ObjectStorage_TempAssemblyComparer() {}
//  Writing Method size for method: ::System::Data::Common::ObjectStorage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::ObjectStorage::*)(::System::Data::DataColumn*, ::System::Type*)>(&::System::Data::Common::ObjectStorage::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x609787c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.Aggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::ObjectStorage::*)(::ArrayW<int32_t>, ::System::Data::AggregateType)>(
    &::System::Data::Common::ObjectStorage::Aggregate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6097a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::ObjectStorage::*)(int32_t, int32_t)>(&::System::Data::Common::ObjectStorage::Compare)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6097a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.CompareValueTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::ObjectStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::ObjectStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x60980a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::ObjectStorage::*)(::System::Object*, ::System::Object*)>(&::System::Data::Common::ObjectStorage::CompareTo)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x609826c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.CompareWithFamilies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::ObjectStorage::*)(::System::Object*, ::System::Object*)>(
    &::System::Data::Common::ObjectStorage::CompareWithFamilies)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x6097c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { "CompareWithFamilies", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::ObjectStorage::*)(int32_t, int32_t)>(&::System::Data::Common::ObjectStorage::Copy)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6098534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::ObjectStorage::*)(int32_t)>(&::System::Data::Common::ObjectStorage::Get)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60985a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.GetFamily
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Common::ObjectStorage_Families (::System::Data::Common::ObjectStorage::*)(::System::Type*)>(
    &::System::Data::Common::ObjectStorage::GetFamily)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x609844c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { "GetFamily", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Common::ObjectStorage::*)(int32_t)>(&::System::Data::Common::ObjectStorage::IsNull)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60985e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::ObjectStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::ObjectStorage::Set)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x609861c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::ObjectStorage::*)(int32_t)>(&::System::Data::Common::ObjectStorage::SetCapacity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6098c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::ObjectStorage::*)(::StringW)>(&::System::Data::Common::ObjectStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x6098d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::ObjectStorage::*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*)>(
    &::System::Data::Common::ObjectStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x6099294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Common::ObjectStorage::*)(::System::Object*)>(&::System::Data::Common::ObjectStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x6099f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::ObjectStorage::*)(::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*)>(
    &::System::Data::Common::ObjectStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x609a404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::ObjectStorage::*)(int32_t)>(&::System::Data::Common::ObjectStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x609a570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.CopyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::ObjectStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(
    &::System::Data::Common::ObjectStorage::CopyValue)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x609a5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.SetStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::ObjectStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::ObjectStorage::SetStorage)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x609a7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.VerifyIDynamicMetaObjectProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::Data::Common::ObjectStorage::VerifyIDynamicMetaObjectProvider)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x609a974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { "VerifyIDynamicMetaObjectProvider", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.GetXmlSerializer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlSerializer* (*)(::System::Type*)>(&::System::Data::Common::ObjectStorage::GetXmlSerializer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6099210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { "GetXmlSerializer", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.GetXmlSerializer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlSerializer* (*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*)>(
    &::System::Data::Common::ObjectStorage::GetXmlSerializer)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x6099910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(),
                                                             { "GetXmlSerializer", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*>& System::Data::Common::ObjectStorage::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<::System::Object*> const& System::Data::Common::ObjectStorage::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::Common::ObjectStorage::__cordl_internal_set__values(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
constexpr bool& System::Data::Common::ObjectStorage::__cordl_internal_get__implementsIXmlSerializable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIXmlSerializable;
}
constexpr bool const& System::Data::Common::ObjectStorage::__cordl_internal_get__implementsIXmlSerializable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIXmlSerializable;
}
constexpr void System::Data::Common::ObjectStorage::__cordl_internal_set__implementsIXmlSerializable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementsIXmlSerializable = value;
}
inline void System::Data::Common::ObjectStorage::setStaticF_s_defaultValue(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_defaultValue", ::System::Data::Common::ObjectStorage*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Data::Common::ObjectStorage::getStaticF_s_defaultValue() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_defaultValue", ::System::Data::Common::ObjectStorage*>();
}
inline void System::Data::Common::ObjectStorage::setStaticF_s_tempAssemblyCacheLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_tempAssemblyCacheLock", ::System::Data::Common::ObjectStorage*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Data::Common::ObjectStorage::getStaticF_s_tempAssemblyCacheLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_tempAssemblyCacheLock", ::System::Data::Common::ObjectStorage*>();
}
inline void System::Data::Common::ObjectStorage::setStaticF_s_tempAssemblyCache(
    ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                 ::System::Xml::Serialization::XmlSerializer*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                                                 ::System::Xml::Serialization::XmlSerializer*>*,
                                    "s_tempAssemblyCache", ::System::Data::Common::ObjectStorage*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                                ::System::Xml::Serialization::XmlSerializer*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                    ::System::Xml::Serialization::XmlSerializer*>*
System::Data::Common::ObjectStorage::getStaticF_s_tempAssemblyCache() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                   ::System::Xml::Serialization::XmlSerializer*>*,
      "s_tempAssemblyCache", ::System::Data::Common::ObjectStorage*>();
}
inline void System::Data::Common::ObjectStorage::setStaticF_s_serializerFactory(::System::Xml::Serialization::XmlSerializerFactory* value) {
  ::cordl_internals::setStaticField<::System::Xml::Serialization::XmlSerializerFactory*, "s_serializerFactory", ::System::Data::Common::ObjectStorage*>(
      std::forward<::System::Xml::Serialization::XmlSerializerFactory*>(value));
}
inline ::System::Xml::Serialization::XmlSerializerFactory* System::Data::Common::ObjectStorage::getStaticF_s_serializerFactory() {
  return ::cordl_internals::getStaticField<::System::Xml::Serialization::XmlSerializerFactory*, "s_serializerFactory", ::System::Data::Common::ObjectStorage*>();
}
inline void System::Data::Common::ObjectStorage::_ctor(::System::Data::DataColumn* column, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, type);
}
inline ::System::Object* System::Data::Common::ObjectStorage::Aggregate(::ArrayW<int32_t> records, ::System::Data::AggregateType kind) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::ObjectStorage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::ObjectStorage::CompareValueTo(int32_t recordNo1, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo1, value);
}
inline int32_t System::Data::Common::ObjectStorage::CompareTo(::System::Object* valueNo1, ::System::Object* valueNo2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, valueNo1, valueNo2);
}
inline int32_t System::Data::Common::ObjectStorage::CompareWithFamilies(::System::Object* valueNo1, ::System::Object* valueNo2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(),
                                                                                         { "CompareWithFamilies", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, valueNo1, valueNo2);
}
inline void System::Data::Common::ObjectStorage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::ObjectStorage::Get(int32_t recordNo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordNo);
}
inline ::System::Data::Common::ObjectStorage_Families System::Data::Common::ObjectStorage::GetFamily(::System::Type* dataType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { "GetFamily", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Common::ObjectStorage_Families>(this, ___internal_method, dataType);
}
inline bool System::Data::Common::ObjectStorage::IsNull(int32_t record) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline void System::Data::Common::ObjectStorage::Set(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordNo, value);
}
inline void System::Data::Common::ObjectStorage::SetCapacity(int32_t capacity) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::ObjectStorage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
inline ::System::Object* System::Data::Common::ObjectStorage::ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, xmlAttrib);
}
inline ::StringW System::Data::Common::ObjectStorage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void System::Data::Common::ObjectStorage::ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, xmlWriter, xmlAttrib);
}
inline ::System::Object* System::Data::Common::ObjectStorage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::ObjectStorage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::ObjectStorage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::ObjectStorage*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, nullbits);
}
inline void System::Data::Common::ObjectStorage::VerifyIDynamicMetaObjectProvider(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { "VerifyIDynamicMetaObjectProvider", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlSerializer* System::Data::Common::ObjectStorage::GetXmlSerializer(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(), { "GetXmlSerializer", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializer*>(nullptr, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlSerializer* System::Data::Common::ObjectStorage::GetXmlSerializer(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::ObjectStorage*>(),
                                                           { "GetXmlSerializer", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializer*>(nullptr, ___internal_method, type, attribute);
}
inline ::System::Data::Common::ObjectStorage* System::Data::Common::ObjectStorage::New_ctor(::System::Data::DataColumn* column, ::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::ObjectStorage*>(column, type));
}
// Ctor Parameters []
constexpr ::System::Data::Common::ObjectStorage::ObjectStorage() {}
