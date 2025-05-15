#pragma once
// IWYU pragma private; include "Unity/Profiling/Memory/MemorySnapshotMetadata.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/Memory/zzzz__MemorySnapshotMetadata_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::Memory::MemorySnapshotMetadata.get_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Profiling::Memory::MemorySnapshotMetadata::*)()>(
    &::Unity::Profiling::Memory::MemorySnapshotMetadata::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x486167c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemorySnapshotMetadata*>::get(),
                                                                               "get_Description", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemorySnapshotMetadata.set_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::Memory::MemorySnapshotMetadata::*)(::StringW)>(
    &::Unity::Profiling::Memory::MemorySnapshotMetadata::set_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4861684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemorySnapshotMetadata*>::get(), "set_Description",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemorySnapshotMetadata.get_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Unity::Profiling::Memory::MemorySnapshotMetadata::*)()>(
    &::Unity::Profiling::Memory::MemorySnapshotMetadata::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x486168c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemorySnapshotMetadata*>::get(),
                                                                               "get_Data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::Memory::MemorySnapshotMetadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::Memory::MemorySnapshotMetadata::*)()>(
    &::Unity::Profiling::Memory::MemorySnapshotMetadata::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4861694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemorySnapshotMetadata*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Description_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Unity::Profiling::Memory::MemorySnapshotMetadata::__cordl_internal_get__Data_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Unity::Profiling::Memory::MemorySnapshotMetadata::__cordl_internal_get__Data_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
constexpr void Unity::Profiling::Memory::MemorySnapshotMetadata::__cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Data_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Unity::Profiling::Memory::MemorySnapshotMetadata::get_Description() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemorySnapshotMetadata*>::get(),
                                                                             "get_Description", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Profiling::Memory::MemorySnapshotMetadata::set_Description(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemorySnapshotMetadata*>::get(), "set_Description",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unity::Profiling::Memory::MemorySnapshotMetadata::get_Data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemorySnapshotMetadata*>::get(),
                                                                             "get_Data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Unity::Profiling::Memory::MemorySnapshotMetadata::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::Memory::MemorySnapshotMetadata*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Profiling::Memory::MemorySnapshotMetadata* Unity::Profiling::Memory::MemorySnapshotMetadata::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Profiling::Memory::MemorySnapshotMetadata*>());
}
// Ctor Parameters []
constexpr ::Unity::Profiling::Memory::MemorySnapshotMetadata::MemorySnapshotMetadata() {}
