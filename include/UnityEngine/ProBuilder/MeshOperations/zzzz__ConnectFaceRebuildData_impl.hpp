#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectFaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::*)(
    ::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ba43e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::FaceRebuildData*& UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__get_faceRebuildData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___faceRebuildData;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::FaceRebuildData*> const& UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__get_faceRebuildData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___faceRebuildData;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__set_faceRebuildData(::UnityEngine::ProBuilder::FaceRebuildData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___faceRebuildData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__get_newVertexIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newVertexIndexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__get_newVertexIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newVertexIndexes;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__set_newVertexIndexes(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newVertexIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*
UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::New_ctor(::UnityEngine::ProBuilder::FaceRebuildData* faceRebuildData,
                                                                          ::System::Collections::Generic::List_1<int32_t>* newVertexIndexes) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>(faceRebuildData, newVertexIndexes));
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::_ctor(::UnityEngine::ProBuilder::FaceRebuildData* faceRebuildData,
                                                                                   ::System::Collections::Generic::List_1<int32_t>* newVertexIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, faceRebuildData, newVertexIndexes);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::ConnectFaceRebuildData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
