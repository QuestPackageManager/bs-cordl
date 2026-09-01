#pragma once
// IWYU pragma private; include "System\Data\Common\SqlDateTimeStorage.hpp"
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDateTime_impl.hpp"
#include "System/Data/Common/zzzz__SqlDateTimeStorage_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlDateTimeStorage::*)(::System::Data::DataColumn*)>(&::System::Data::Common::SqlDateTimeStorage::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x60a6df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.Aggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlDateTimeStorage::*)(::ArrayW<int32_t>, ::System::Data::AggregateType)>(
    &::System::Data::Common::SqlDateTimeStorage::Aggregate)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x60baed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::SqlDateTimeStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlDateTimeStorage::Compare)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60bb484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.CompareValueTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::SqlDateTimeStorage::*)(int32_t, ::System::Object*)>(
    &::System::Data::Common::SqlDateTimeStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x60bb538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.ConvertValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlDateTimeStorage::*)(::System::Object*)>(
    &::System::Data::Common::SqlDateTimeStorage::ConvertValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60bb5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlDateTimeStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlDateTimeStorage::Copy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x60bb678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlDateTimeStorage::*)(int32_t)>(&::System::Data::Common::SqlDateTimeStorage::Get)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60bb6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Common::SqlDateTimeStorage::*)(int32_t)>(&::System::Data::Common::SqlDateTimeStorage::IsNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60bb760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlDateTimeStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::SqlDateTimeStorage::Set)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60bb7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlDateTimeStorage::*)(int32_t)>(&::System::Data::Common::SqlDateTimeStorage::SetCapacity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60bb840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlDateTimeStorage::*)(::StringW)>(&::System::Data::Common::SqlDateTimeStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x60bb8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Common::SqlDateTimeStorage::*)(::System::Object*)>(&::System::Data::Common::SqlDateTimeStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x60bbbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlDateTimeStorage::*)(int32_t)>(&::System::Data::Common::SqlDateTimeStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60bbe14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.CopyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlDateTimeStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(
    &::System::Data::Common::SqlDateTimeStorage::CopyValue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x60bbe60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlDateTimeStorage.SetStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlDateTimeStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::SqlDateTimeStorage::SetStorage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60bbf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 20 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Data::SqlTypes::SqlDateTime>& System::Data::Common::SqlDateTimeStorage::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<::System::Data::SqlTypes::SqlDateTime> const& System::Data::Common::SqlDateTimeStorage::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::Common::SqlDateTimeStorage::__cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlDateTime> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline void System::Data::Common::SqlDateTimeStorage::_ctor(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline ::System::Object* System::Data::Common::SqlDateTimeStorage::Aggregate(::ArrayW<int32_t> records, ::System::Data::AggregateType kind) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::SqlDateTimeStorage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::SqlDateTimeStorage::CompareValueTo(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo, value);
}
inline ::System::Object* System::Data::Common::SqlDateTimeStorage::ConvertValue(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value);
}
inline void System::Data::Common::SqlDateTimeStorage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::SqlDateTimeStorage::Get(int32_t record) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, record);
}
inline bool System::Data::Common::SqlDateTimeStorage::IsNull(int32_t record) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline void System::Data::Common::SqlDateTimeStorage::Set(int32_t record, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, value);
}
inline void System::Data::Common::SqlDateTimeStorage::SetCapacity(int32_t capacity) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::SqlDateTimeStorage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
inline ::StringW System::Data::Common::SqlDateTimeStorage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::System::Object* System::Data::Common::SqlDateTimeStorage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::SqlDateTimeStorage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::SqlDateTimeStorage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::SqlDateTimeStorage*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, nullbits);
}
inline ::System::Data::Common::SqlDateTimeStorage* System::Data::Common::SqlDateTimeStorage::New_ctor(::System::Data::DataColumn* column) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::SqlDateTimeStorage*>(column));
}
// Ctor Parameters []
constexpr ::System::Data::Common::SqlDateTimeStorage::SqlDateTimeStorage() {}
