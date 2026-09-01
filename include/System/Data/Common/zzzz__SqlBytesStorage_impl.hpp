#pragma once
// IWYU pragma private; include "System\Data\Common\SqlBytesStorage.hpp"
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBytes_impl.hpp"
#include "System/Data/Common/zzzz__SqlBytesStorage_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlBytesStorage::*)(::System::Data::DataColumn*)>(&::System::Data::Common::SqlBytesStorage::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x60a6c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.Aggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlBytesStorage::*)(::ArrayW<int32_t>, ::System::Data::AggregateType)>(
    &::System::Data::Common::SqlBytesStorage::Aggregate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x60b9828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::SqlBytesStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlBytesStorage::Compare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60b9a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.CompareValueTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::SqlBytesStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::SqlBytesStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60b9a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlBytesStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlBytesStorage::Copy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60b9a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlBytesStorage::*)(int32_t)>(&::System::Data::Common::SqlBytesStorage::Get)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60b9a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Common::SqlBytesStorage::*)(int32_t)>(&::System::Data::Common::SqlBytesStorage::IsNull)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x60b9a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlBytesStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::SqlBytesStorage::Set)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x60b9ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlBytesStorage::*)(int32_t)>(&::System::Data::Common::SqlBytesStorage::SetCapacity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60b9bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlBytesStorage::*)(::StringW)>(&::System::Data::Common::SqlBytesStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x60b9c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Common::SqlBytesStorage::*)(::System::Object*)>(&::System::Data::Common::SqlBytesStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x60b9f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlBytesStorage::*)(int32_t)>(&::System::Data::Common::SqlBytesStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60ba198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.CopyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlBytesStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(
    &::System::Data::Common::SqlBytesStorage::CopyValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x60ba1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlBytesStorage.SetStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlBytesStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::SqlBytesStorage::SetStorage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60ba2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 20 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Data::SqlTypes::SqlBytes*>& System::Data::Common::SqlBytesStorage::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<::System::Data::SqlTypes::SqlBytes*> const& System::Data::Common::SqlBytesStorage::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::Common::SqlBytesStorage::__cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlBytes*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline void System::Data::Common::SqlBytesStorage::_ctor(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline ::System::Object* System::Data::Common::SqlBytesStorage::Aggregate(::ArrayW<int32_t> records, ::System::Data::AggregateType kind) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::SqlBytesStorage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::SqlBytesStorage::CompareValueTo(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo, value);
}
inline void System::Data::Common::SqlBytesStorage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::SqlBytesStorage::Get(int32_t record) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, record);
}
inline bool System::Data::Common::SqlBytesStorage::IsNull(int32_t record) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline void System::Data::Common::SqlBytesStorage::Set(int32_t record, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, value);
}
inline void System::Data::Common::SqlBytesStorage::SetCapacity(int32_t capacity) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::SqlBytesStorage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
inline ::StringW System::Data::Common::SqlBytesStorage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::System::Object* System::Data::Common::SqlBytesStorage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::SqlBytesStorage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::SqlBytesStorage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlBytesStorage*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, nullbits);
}
inline ::System::Data::Common::SqlBytesStorage* System::Data::Common::SqlBytesStorage::New_ctor(::System::Data::DataColumn* column) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::SqlBytesStorage*>(column));
}
// Ctor Parameters []
constexpr ::System::Data::Common::SqlBytesStorage::SqlBytesStorage() {}
