#pragma once
// IWYU pragma private; include "Unity\Profiling\Memory\MemorySnapshotMetadata.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/Memory/zzzz__MemorySnapshotMetadata_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::Memory::MemorySnapshotMetadata.get_Description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Profiling::Memory::MemorySnapshotMetadata::*)()>(&::Unity::Profiling::Memory::MemorySnapshotMetadata::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5e75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemorySnapshotMetadata*>(), { "get_Description", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemorySnapshotMetadata.set_Description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::Memory::MemorySnapshotMetadata::*)(::StringW)>(&::Unity::Profiling::Memory::MemorySnapshotMetadata::set_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5e764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemorySnapshotMetadata*>(), { "set_Description", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemorySnapshotMetadata.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Unity::Profiling::Memory::MemorySnapshotMetadata::*)()>(&::Unity::Profiling::Memory::MemorySnapshotMetadata::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5e76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemorySnapshotMetadata*>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemorySnapshotMetadata._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::Memory::MemorySnapshotMetadata::*)()>(&::Unity::Profiling::Memory::MemorySnapshotMetadata::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a5e774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemorySnapshotMetadata*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Profiling::Memory::MemorySnapshotMetadata::__cordl_internal_get__Description_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Description_k__BackingField;
}
constexpr ::StringW const& Unity::Profiling::Memory::MemorySnapshotMetadata::__cordl_internal_get__Description_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Description_k__BackingField;
}
constexpr void Unity::Profiling::Memory::MemorySnapshotMetadata::__cordl_internal_set__Description_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Description_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& Unity::Profiling::Memory::MemorySnapshotMetadata::__cordl_internal_get__Data_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
constexpr ::ArrayW<uint8_t> const& Unity::Profiling::Memory::MemorySnapshotMetadata::__cordl_internal_get__Data_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
constexpr void Unity::Profiling::Memory::MemorySnapshotMetadata::__cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Data_k__BackingField = value;
}
inline ::StringW Unity::Profiling::Memory::MemorySnapshotMetadata::get_Description() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemorySnapshotMetadata*>(), { "get_Description", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Unity::Profiling::Memory::MemorySnapshotMetadata::set_Description(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemorySnapshotMetadata*>(), { "set_Description", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Unity::Profiling::Memory::MemorySnapshotMetadata::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemorySnapshotMetadata*>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Unity::Profiling::Memory::MemorySnapshotMetadata::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::Memory::MemorySnapshotMetadata*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Profiling::Memory::MemorySnapshotMetadata* Unity::Profiling::Memory::MemorySnapshotMetadata::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Profiling::Memory::MemorySnapshotMetadata*>());
}
// Ctor Parameters []
constexpr ::Unity::Profiling::Memory::MemorySnapshotMetadata::MemorySnapshotMetadata() {}
