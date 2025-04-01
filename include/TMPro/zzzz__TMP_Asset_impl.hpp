#pragma once
// IWYU pragma private; include "TMPro/TMP_Asset.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "TMPro/zzzz__TMP_Asset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Asset.get_instanceID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Asset::*)()>(&::TMPro::TMP_Asset::get_instanceID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x47c106c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Asset*>::get(), "get_instanceID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Asset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Asset::*)()>(&::TMPro::TMP_Asset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47c1094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Asset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& TMPro::TMP_Asset::__cordl_internal_get_m_InstanceID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceID;
}
constexpr int32_t const& TMPro::TMP_Asset::__cordl_internal_get_m_InstanceID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceID;
}
constexpr void TMPro::TMP_Asset::__cordl_internal_set_m_InstanceID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceID = value;
}
constexpr int32_t& TMPro::TMP_Asset::__cordl_internal_get_hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr int32_t const& TMPro::TMP_Asset::__cordl_internal_get_hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr void TMPro::TMP_Asset::__cordl_internal_set_hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCode = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_Asset::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_Asset::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void TMPro::TMP_Asset::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TMPro::TMP_Asset::__cordl_internal_get_materialHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialHashCode;
}
constexpr int32_t const& TMPro::TMP_Asset::__cordl_internal_get_materialHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialHashCode;
}
constexpr void TMPro::TMP_Asset::__cordl_internal_set_materialHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materialHashCode = value;
}
inline int32_t TMPro::TMP_Asset::get_instanceID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Asset*>::get(), "get_instanceID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_Asset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Asset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_Asset* TMPro::TMP_Asset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_Asset*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Asset::TMP_Asset() {}
