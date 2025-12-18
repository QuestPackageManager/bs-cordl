#pragma once
// IWYU pragma private; include "GlobalNamespace/PoseObjectIdSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PoseObjectIdSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PoseObjectIdSO.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PoseObjectIdSO::*)()>(&::GlobalNamespace::PoseObjectIdSO::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5756a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObjectIdSO*>::get(), "get_id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseObjectIdSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PoseObjectIdSO::*)()>(&::GlobalNamespace::PoseObjectIdSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5756a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObjectIdSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PoseObjectIdSO::__cordl_internal_get__serializedId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedId;
}
constexpr ::StringW const& GlobalNamespace::PoseObjectIdSO::__cordl_internal_get__serializedId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedId;
}
constexpr void GlobalNamespace::PoseObjectIdSO::__cordl_internal_set__serializedId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializedId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PoseObjectIdSO::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObjectIdSO*>::get(), "get_id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PoseObjectIdSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PoseObjectIdSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PoseObjectIdSO* GlobalNamespace::PoseObjectIdSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PoseObjectIdSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PoseObjectIdSO::PoseObjectIdSO() {}
