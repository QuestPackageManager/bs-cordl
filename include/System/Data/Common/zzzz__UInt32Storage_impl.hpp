#pragma once
// IWYU pragma private; include "System\Data\Common\UInt32Storage.hpp"
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/Data/Common/zzzz__UInt32Storage_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::Common::UInt32Storage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::UInt32Storage::*)(::System::Data::DataColumn*)>(&::System::Data::Common::UInt32Storage::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60d0128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.Aggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::UInt32Storage::*)(::ArrayW<int32_t>, ::System::Data::AggregateType)>(
    &::System::Data::Common::UInt32Storage::Aggregate)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x60d020c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::UInt32Storage::*)(int32_t, int32_t)>(&::System::Data::Common::UInt32Storage::Compare)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60d0a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.CompareValueTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::UInt32Storage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::UInt32Storage::CompareValueTo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x60d0b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.ConvertValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::UInt32Storage::*)(::System::Object*)>(&::System::Data::Common::UInt32Storage::ConvertValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x60d0c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::UInt32Storage::*)(int32_t, int32_t)>(&::System::Data::Common::UInt32Storage::Copy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60d0d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::UInt32Storage::*)(int32_t)>(&::System::Data::Common::UInt32Storage::Get)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60d0db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::UInt32Storage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::UInt32Storage::Set)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x60d0e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::UInt32Storage::*)(int32_t)>(&::System::Data::Common::UInt32Storage::SetCapacity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60d101c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::UInt32Storage::*)(::StringW)>(&::System::Data::Common::UInt32Storage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60d10e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Common::UInt32Storage::*)(::System::Object*)>(&::System::Data::Common::UInt32Storage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60d1170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::UInt32Storage::*)(int32_t)>(&::System::Data::Common::UInt32Storage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60d121c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.CopyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::UInt32Storage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(
    &::System::Data::Common::UInt32Storage::CopyValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x60d1268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::UInt32Storage.SetStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::UInt32Storage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::UInt32Storage::SetStorage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60d136c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 20 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& System::Data::Common::UInt32Storage::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<uint32_t> const& System::Data::Common::UInt32Storage::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::Common::UInt32Storage::__cordl_internal_set__values(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline void System::Data::Common::UInt32Storage::setStaticF_s_defaultValue(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_defaultValue", ::System::Data::Common::UInt32Storage*>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::Common::UInt32Storage::getStaticF_s_defaultValue() {
  return ::cordl_internals::getStaticField<uint32_t, "s_defaultValue", ::System::Data::Common::UInt32Storage*>();
}
inline void System::Data::Common::UInt32Storage::_ctor(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::UInt32Storage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline ::System::Object* System::Data::Common::UInt32Storage::Aggregate(::ArrayW<int32_t> records, ::System::Data::AggregateType kind) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::UInt32Storage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::UInt32Storage::CompareValueTo(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo, value);
}
inline ::System::Object* System::Data::Common::UInt32Storage::ConvertValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value);
}
inline void System::Data::Common::UInt32Storage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::UInt32Storage::Get(int32_t record) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, record);
}
inline void System::Data::Common::UInt32Storage::Set(int32_t record, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, value);
}
inline void System::Data::Common::UInt32Storage::SetCapacity(int32_t capacity) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::UInt32Storage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
inline ::StringW System::Data::Common::UInt32Storage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::System::Object* System::Data::Common::UInt32Storage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::UInt32Storage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::UInt32Storage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::UInt32Storage*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, nullbits);
}
inline ::System::Data::Common::UInt32Storage* System::Data::Common::UInt32Storage::New_ctor(::System::Data::DataColumn* column) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::UInt32Storage*>(column));
}
// Ctor Parameters []
constexpr ::System::Data::Common::UInt32Storage::UInt32Storage() {}
