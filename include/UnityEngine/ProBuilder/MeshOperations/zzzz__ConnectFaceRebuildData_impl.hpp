#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\MeshOperations\ConnectFaceRebuildData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectFaceRebuildData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::*)(
    ::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x671e36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::FaceRebuildData*& UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__cordl_internal_get_faceRebuildData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___faceRebuildData;
}
constexpr ::UnityEngine::ProBuilder::FaceRebuildData* const& UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__cordl_internal_get_faceRebuildData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___faceRebuildData;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__cordl_internal_set_faceRebuildData(::UnityEngine::ProBuilder::FaceRebuildData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___faceRebuildData = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__cordl_internal_get_newVertexIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newVertexIndexes;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__cordl_internal_get_newVertexIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newVertexIndexes;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__cordl_internal_set_newVertexIndexes(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newVertexIndexes = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::_ctor(::UnityEngine::ProBuilder::FaceRebuildData* faceRebuildData,
                                                                                   ::System::Collections::Generic::List_1<int32_t>* newVertexIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, faceRebuildData, newVertexIndexes);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*
UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::New_ctor(::UnityEngine::ProBuilder::FaceRebuildData* faceRebuildData,
                                                                          ::System::Collections::Generic::List_1<int32_t>* newVertexIndexes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>(faceRebuildData, newVertexIndexes));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::ConnectFaceRebuildData() {}
