#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GeoGroup.hpp"
#include "System/zzzz__IComparable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoGroup_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VertexEntry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoGroup.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_GeoGroup::*)(::HoudiniEngineUnity::HEU_GeoGroup*)>(
    &::HoudiniEngineUnity::HEU_GeoGroup::CompareTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3a7a068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoGroup*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoGroup.SetupNormalIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoGroup::*)(int32_t)>(&::HoudiniEngineUnity::HEU_GeoGroup::SetupNormalIndices)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3a77f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoGroup*>::get(), "SetupNormalIndices", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoGroup::*)()>(&::HoudiniEngineUnity::HEU_GeoGroup::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3a77e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_GeoGroup::__cordl_internal_get__groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_GeoGroup::__cordl_internal_get__groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupName;
}
constexpr void HoudiniEngineUnity::HEU_GeoGroup::__cordl_internal_set__groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>*& HoudiniEngineUnity::HEU_GeoGroup::__cordl_internal_get__subMeshesMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subMeshesMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* const& HoudiniEngineUnity::HEU_GeoGroup::__cordl_internal_get__subMeshesMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subMeshesMap;
}
constexpr void HoudiniEngineUnity::HEU_GeoGroup::__cordl_internal_set__subMeshesMap(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subMeshesMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*, ::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*>&
HoudiniEngineUnity::HEU_GeoGroup::__cordl_internal_get__sharedNormalIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedNormalIndices;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*, ::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*> const&
HoudiniEngineUnity::HEU_GeoGroup::__cordl_internal_get__sharedNormalIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedNormalIndices;
}
constexpr void HoudiniEngineUnity::HEU_GeoGroup::__cordl_internal_set__sharedNormalIndices(
    ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*, ::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sharedNormalIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t HoudiniEngineUnity::HEU_GeoGroup::CompareTo(::HoudiniEngineUnity::HEU_GeoGroup* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoGroup*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline void HoudiniEngineUnity::HEU_GeoGroup::SetupNormalIndices(int32_t indicesCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoGroup*>::get(), "SetupNormalIndices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indicesCount);
}
inline void HoudiniEngineUnity::HEU_GeoGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_GeoGroup* HoudiniEngineUnity::HEU_GeoGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_GeoGroup*>());
}
/// @brief Convert operator to "::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>"
constexpr HoudiniEngineUnity::HEU_GeoGroup::operator ::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>*() noexcept {
  return static_cast<::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>"
constexpr ::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>* HoudiniEngineUnity::HEU_GeoGroup::i___System__IComparable_1___HoudiniEngineUnity__HEU_GeoGroup__() noexcept {
  return static_cast<::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_GeoGroup::HEU_GeoGroup() {}
