#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpectrogramRow_def.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpectrogramRow.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectrogramRow::*)()>(&::GlobalNamespace::SpectrogramRow::Awake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23b70b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramRow*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramRow.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectrogramRow::*)()>(&::GlobalNamespace::SpectrogramRow::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x23b7160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramRow*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramRow._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpectrogramRow::*)()>(&::GlobalNamespace::SpectrogramRow::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b7280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramRow*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*>& GlobalNamespace::SpectrogramRow::__get__meshRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderers;
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> const& GlobalNamespace::SpectrogramRow::__get__meshRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderers;
}
constexpr void GlobalNamespace::SpectrogramRow::__set__meshRenderers(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::SpectrogramRow::__get__dataIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataIndex;
}
constexpr int32_t const& GlobalNamespace::SpectrogramRow::__get__dataIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataIndex;
}
constexpr void GlobalNamespace::SpectrogramRow::__set__dataIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataIndex = value;
}
constexpr ::GlobalNamespace::BasicSpectrogramData*& GlobalNamespace::SpectrogramRow::__get__spectrogramData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogramData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicSpectrogramData*> const& GlobalNamespace::SpectrogramRow::__get__spectrogramData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogramData;
}
constexpr void GlobalNamespace::SpectrogramRow::__set__spectrogramData(::GlobalNamespace::BasicSpectrogramData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spectrogramData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SpectrogramRow::setStaticF__spectrogramDataID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_spectrogramDataID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramRow*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SpectrogramRow::getStaticF__spectrogramDataID() {
  return ::cordl_internals::getStaticField<int32_t, "_spectrogramDataID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramRow*>::get>();
}
inline void GlobalNamespace::SpectrogramRow::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramRow*>::get>(
      std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::SpectrogramRow::getStaticF__materialPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramRow*>::get>();
}
inline void GlobalNamespace::SpectrogramRow::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramRow*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpectrogramRow::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramRow*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpectrogramRow* GlobalNamespace::SpectrogramRow::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SpectrogramRow*>());
}
inline void GlobalNamespace::SpectrogramRow::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpectrogramRow*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpectrogramRow::SpectrogramRow() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
