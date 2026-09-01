#pragma once
// IWYU pragma private; include "System\Data\Common\TimeSpanStorage.hpp"
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Data/Common/zzzz__TimeSpanStorage_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::TimeSpanStorage::*)(::System::Data::DataColumn*)>(&::System::Data::Common::TimeSpanStorage::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x60cd66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.Aggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::TimeSpanStorage::*)(::ArrayW<int32_t>, ::System::Data::AggregateType)>(
    &::System::Data::Common::TimeSpanStorage::Aggregate)> {
  constexpr static std::size_t size = 0xb30;
  constexpr static std::size_t addrs = 0x60cd78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::TimeSpanStorage::*)(int32_t, int32_t)>(&::System::Data::Common::TimeSpanStorage::Compare)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x60ce2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.CompareValueTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::TimeSpanStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::TimeSpanStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60ce410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.ConvertToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::Object*)>(&::System::Data::Common::TimeSpanStorage::ConvertToTimeSpan)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x60ce574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { "ConvertToTimeSpan", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.ConvertValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::TimeSpanStorage::*)(::System::Object*)>(&::System::Data::Common::TimeSpanStorage::ConvertValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60ce6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::TimeSpanStorage::*)(int32_t, int32_t)>(&::System::Data::Common::TimeSpanStorage::Copy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60ce7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::TimeSpanStorage::*)(int32_t)>(&::System::Data::Common::TimeSpanStorage::Get)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x60ce800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::TimeSpanStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::TimeSpanStorage::Set)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60ce8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::TimeSpanStorage::*)(int32_t)>(&::System::Data::Common::TimeSpanStorage::SetCapacity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60ce9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::TimeSpanStorage::*)(::StringW)>(&::System::Data::Common::TimeSpanStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60ceaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Common::TimeSpanStorage::*)(::System::Object*)>(&::System::Data::Common::TimeSpanStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60ceb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::TimeSpanStorage::*)(int32_t)>(&::System::Data::Common::TimeSpanStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60cebfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.CopyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::TimeSpanStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(
    &::System::Data::Common::TimeSpanStorage::CopyValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x60cec48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::TimeSpanStorage.SetStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::TimeSpanStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::TimeSpanStorage::SetStorage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60ced4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 20 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::TimeSpan>& System::Data::Common::TimeSpanStorage::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<::System::TimeSpan> const& System::Data::Common::TimeSpanStorage::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::Common::TimeSpanStorage::__cordl_internal_set__values(::ArrayW<::System::TimeSpan> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline void System::Data::Common::TimeSpanStorage::setStaticF_s_defaultValue(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "s_defaultValue", ::System::Data::Common::TimeSpanStorage*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Data::Common::TimeSpanStorage::getStaticF_s_defaultValue() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "s_defaultValue", ::System::Data::Common::TimeSpanStorage*>();
}
inline void System::Data::Common::TimeSpanStorage::_ctor(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline ::System::Object* System::Data::Common::TimeSpanStorage::Aggregate(::ArrayW<int32_t> records, ::System::Data::AggregateType kind) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::TimeSpanStorage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::TimeSpanStorage::CompareValueTo(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo, value);
}
inline ::System::TimeSpan System::Data::Common::TimeSpanStorage::ConvertToTimeSpan(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), { "ConvertToTimeSpan", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::Object* System::Data::Common::TimeSpanStorage::ConvertValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value);
}
inline void System::Data::Common::TimeSpanStorage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::TimeSpanStorage::Get(int32_t record) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, record);
}
inline void System::Data::Common::TimeSpanStorage::Set(int32_t record, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, value);
}
inline void System::Data::Common::TimeSpanStorage::SetCapacity(int32_t capacity) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::TimeSpanStorage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
inline ::StringW System::Data::Common::TimeSpanStorage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::System::Object* System::Data::Common::TimeSpanStorage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::TimeSpanStorage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::TimeSpanStorage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Common::TimeSpanStorage*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, nullbits);
}
inline ::System::Data::Common::TimeSpanStorage* System::Data::Common::TimeSpanStorage::New_ctor(::System::Data::DataColumn* column) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::TimeSpanStorage*>(column));
}
// Ctor Parameters []
constexpr ::System::Data::Common::TimeSpanStorage::TimeSpanStorage() {}
