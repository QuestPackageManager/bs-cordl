#pragma once
// IWYU pragma private; include "System\Data\Common\SqlUdtStorage.hpp"
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/Common/zzzz__SqlUdtStorage_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/Common/zzzz__SqlUdtStorage_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::*)()>(&::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60cb90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0._GetStaticNullForUdtType_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::*)(::System::Type*)>(
    &::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::_GetStaticNullForUdtType_b__0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x60ccca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0*>(),
                                                                                           { "<GetStaticNullForUdtType>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::_GetStaticNullForUdtType_b__0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0*>(),
                                                                                         { "<GetStaticNullForUdtType>b__0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, t);
}
inline ::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0* System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0::SqlUdtStorage___c__DisplayClass6_0() {}
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(::System::Data::DataColumn*, ::System::Type*)>(&::System::Data::Common::SqlUdtStorage::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60cb5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(::System::Data::DataColumn*, ::System::Type*, ::System::Object*)>(
    &::System::Data::Common::SqlUdtStorage::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x60cb784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.GetStaticNullForUdtType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::Data::Common::SqlUdtStorage::GetStaticNullForUdtType)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x60cb670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { "GetStaticNullForUdtType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Common::SqlUdtStorage::*)(int32_t)>(&::System::Data::Common::SqlUdtStorage::IsNull)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x60cb910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.Aggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlUdtStorage::*)(::ArrayW<int32_t>, ::System::Data::AggregateType)>(
    &::System::Data::Common::SqlUdtStorage::Aggregate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60cba20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::SqlUdtStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlUdtStorage::Compare)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60cba50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.CompareValueTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::SqlUdtStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::SqlUdtStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x60cba88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlUdtStorage::Copy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60cbd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlUdtStorage::*)(int32_t)>(&::System::Data::Common::SqlUdtStorage::Get)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60cbda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::SqlUdtStorage::Set)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x60cbdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(int32_t)>(&::System::Data::Common::SqlUdtStorage::SetCapacity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60cbf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlUdtStorage::*)(::StringW)>(&::System::Data::Common::SqlUdtStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x60cbff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlUdtStorage::*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*)>(
    &::System::Data::Common::SqlUdtStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x60cc308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Common::SqlUdtStorage::*)(::System::Object*)>(&::System::Data::Common::SqlUdtStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x60cc5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*)>(
    &::System::Data::Common::SqlUdtStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x60cc894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlUdtStorage::*)(int32_t)>(&::System::Data::Common::SqlUdtStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60cca00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.CopyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(
    &::System::Data::Common::SqlUdtStorage::CopyValue)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x60cca4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.SetStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::SqlUdtStorage::SetStorage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60ccb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 20 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*>& System::Data::Common::SqlUdtStorage::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<::System::Object*> const& System::Data::Common::SqlUdtStorage::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::Common::SqlUdtStorage::__cordl_internal_set__values(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
constexpr bool& System::Data::Common::SqlUdtStorage::__cordl_internal_get__implementsIXmlSerializable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIXmlSerializable;
}
constexpr bool const& System::Data::Common::SqlUdtStorage::__cordl_internal_get__implementsIXmlSerializable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIXmlSerializable;
}
constexpr void System::Data::Common::SqlUdtStorage::__cordl_internal_set__implementsIXmlSerializable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementsIXmlSerializable = value;
}
constexpr bool& System::Data::Common::SqlUdtStorage::__cordl_internal_get__implementsIComparable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIComparable;
}
constexpr bool const& System::Data::Common::SqlUdtStorage::__cordl_internal_get__implementsIComparable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIComparable;
}
constexpr void System::Data::Common::SqlUdtStorage::__cordl_internal_set__implementsIComparable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementsIComparable = value;
}
inline void System::Data::Common::SqlUdtStorage::setStaticF_s_typeToNull(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>*, "s_typeToNull", ::System::Data::Common::SqlUdtStorage*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>* System::Data::Common::SqlUdtStorage::getStaticF_s_typeToNull() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>*, "s_typeToNull", ::System::Data::Common::SqlUdtStorage*>();
}
inline void System::Data::Common::SqlUdtStorage::_ctor(::System::Data::DataColumn* column, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, type);
}
inline void System::Data::Common::SqlUdtStorage::_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* nullValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, type, nullValue);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::GetStaticNullForUdtType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), { "GetStaticNullForUdtType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline bool System::Data::Common::SqlUdtStorage::IsNull(int32_t record) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::Aggregate(::ArrayW<int32_t> records, ::System::Data::AggregateType kind) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::SqlUdtStorage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::SqlUdtStorage::CompareValueTo(int32_t recordNo1, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo1, value);
}
inline void System::Data::Common::SqlUdtStorage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::Get(int32_t recordNo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordNo);
}
inline void System::Data::Common::SqlUdtStorage::Set(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordNo, value);
}
inline void System::Data::Common::SqlUdtStorage::SetCapacity(int32_t capacity) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, xmlAttrib);
}
inline ::StringW System::Data::Common::SqlUdtStorage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void System::Data::Common::SqlUdtStorage::ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, xmlWriter, xmlAttrib);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::SqlUdtStorage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::SqlUdtStorage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlUdtStorage*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, nullbits);
}
inline ::System::Data::Common::SqlUdtStorage* System::Data::Common::SqlUdtStorage::New_ctor(::System::Data::DataColumn* column, ::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::SqlUdtStorage*>(column, type));
}
inline ::System::Data::Common::SqlUdtStorage* System::Data::Common::SqlUdtStorage::New_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* nullValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::SqlUdtStorage*>(column, type, nullValue));
}
// Ctor Parameters []
constexpr ::System::Data::Common::SqlUdtStorage::SqlUdtStorage() {}
