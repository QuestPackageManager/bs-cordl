#pragma once
// IWYU pragma private; include "BGLib/SaveDataCore/VersionableSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/SaveDataCore/zzzz__VersionableSaveData_def.hpp"
#include "BGLib/SaveDataCore/zzzz__ISerializableSaveData_def.hpp"
//  Writing Method size for method: ::BGLib::SaveDataCore::VersionableSaveData.get_isDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::SaveDataCore::VersionableSaveData::*)()>(&::BGLib::SaveDataCore::VersionableSaveData::get_isDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1082c58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::VersionableSaveData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::VersionableSaveData*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::VersionableSaveData.set_isDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::SaveDataCore::VersionableSaveData::*)(bool)>(
    &::BGLib::SaveDataCore::VersionableSaveData::set_isDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1082c64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::VersionableSaveData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::VersionableSaveData*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::VersionableSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::SaveDataCore::VersionableSaveData::*)()>(&::BGLib::SaveDataCore::VersionableSaveData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1082c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::VersionableSaveData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGLib::SaveDataCore::ISerializableSaveData"
constexpr BGLib::SaveDataCore::VersionableSaveData::operator ::BGLib::SaveDataCore::ISerializableSaveData*() noexcept {
  return static_cast<::BGLib::SaveDataCore::ISerializableSaveData*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::SaveDataCore::ISerializableSaveData"
constexpr ::BGLib::SaveDataCore::ISerializableSaveData* BGLib::SaveDataCore::VersionableSaveData::i___BGLib__SaveDataCore__ISerializableSaveData() noexcept {
  return static_cast<::BGLib::SaveDataCore::ISerializableSaveData*>(static_cast<void*>(this));
}
constexpr ::StringW& BGLib::SaveDataCore::VersionableSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& BGLib::SaveDataCore::VersionableSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void BGLib::SaveDataCore::VersionableSaveData::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BGLib::SaveDataCore::VersionableSaveData::__cordl_internal_get__isDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDirty;
}
constexpr bool const& BGLib::SaveDataCore::VersionableSaveData::__cordl_internal_get__isDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDirty;
}
constexpr void BGLib::SaveDataCore::VersionableSaveData::__cordl_internal_set__isDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDirty = value;
}
inline bool BGLib::SaveDataCore::VersionableSaveData::get_isDirty() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::VersionableSaveData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void BGLib::SaveDataCore::VersionableSaveData::set_isDirty(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::VersionableSaveData*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BGLib::SaveDataCore::VersionableSaveData* BGLib::SaveDataCore::VersionableSaveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::SaveDataCore::VersionableSaveData*>());
}
inline void BGLib::SaveDataCore::VersionableSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::VersionableSaveData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::SaveDataCore::VersionableSaveData::VersionableSaveData() {}
