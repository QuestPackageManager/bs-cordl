#pragma once
// IWYU pragma private; include "System\Data\Common\SqlByteStorage.hpp"
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlByte_impl.hpp"
#include "System/Data/Common/zzzz__SqlByteStorage_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlByteStorage::*)(::System::Data::DataColumn*)>(&::System::Data::Common::SqlByteStorage::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x60a6b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.Aggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlByteStorage::*)(::ArrayW<int32_t>, ::System::Data::AggregateType)>(
    &::System::Data::Common::SqlByteStorage::Aggregate)> {
  constexpr static std::size_t size = 0xd38;
  constexpr static std::size_t addrs = 0x60b7fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::SqlByteStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlByteStorage::Compare)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60b8d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.CompareValueTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::SqlByteStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::SqlByteStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60b8dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.ConvertValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlByteStorage::*)(::System::Object*)>(&::System::Data::Common::SqlByteStorage::ConvertValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60b8e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlByteStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlByteStorage::Copy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60b8ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlByteStorage::*)(int32_t)>(&::System::Data::Common::SqlByteStorage::Get)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60b8f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Common::SqlByteStorage::*)(int32_t)>(&::System::Data::Common::SqlByteStorage::IsNull)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60b8fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlByteStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::SqlByteStorage::Set)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60b903c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlByteStorage::*)(int32_t)>(&::System::Data::Common::SqlByteStorage::SetCapacity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60b9080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlByteStorage::*)(::StringW)>(&::System::Data::Common::SqlByteStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x60b9138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Common::SqlByteStorage::*)(::System::Object*)>(&::System::Data::Common::SqlByteStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x60b93e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlByteStorage::*)(int32_t)>(&::System::Data::Common::SqlByteStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60b9648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.CopyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlByteStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(
    &::System::Data::Common::SqlByteStorage::CopyValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x60b9694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlByteStorage.SetStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlByteStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::SqlByteStorage::SetStorage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60b9798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 20 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Data::SqlTypes::SqlByte>& System::Data::Common::SqlByteStorage::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<::System::Data::SqlTypes::SqlByte> const& System::Data::Common::SqlByteStorage::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::Common::SqlByteStorage::__cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlByte> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline void System::Data::Common::SqlByteStorage::_ctor(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline ::System::Object* System::Data::Common::SqlByteStorage::Aggregate(::ArrayW<int32_t> records, ::System::Data::AggregateType kind) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::SqlByteStorage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::SqlByteStorage::CompareValueTo(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo, value);
}
inline ::System::Object* System::Data::Common::SqlByteStorage::ConvertValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value);
}
inline void System::Data::Common::SqlByteStorage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::SqlByteStorage::Get(int32_t record) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, record);
}
inline bool System::Data::Common::SqlByteStorage::IsNull(int32_t record) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline void System::Data::Common::SqlByteStorage::Set(int32_t record, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, value);
}
inline void System::Data::Common::SqlByteStorage::SetCapacity(int32_t capacity) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::SqlByteStorage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
inline ::StringW System::Data::Common::SqlByteStorage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::System::Object* System::Data::Common::SqlByteStorage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::SqlByteStorage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::SqlByteStorage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlByteStorage*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, nullbits);
}
inline ::System::Data::Common::SqlByteStorage* System::Data::Common::SqlByteStorage::New_ctor(::System::Data::DataColumn* column) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::SqlByteStorage*>(column));
}
// Ctor Parameters []
constexpr ::System::Data::Common::SqlByteStorage::SqlByteStorage() {}
