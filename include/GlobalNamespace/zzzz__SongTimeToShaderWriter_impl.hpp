#pragma once
// IWYU pragma private; include "GlobalNamespace/SongTimeToShaderWriter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongTimeToShaderWriter_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongTimeToShaderWriter.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongTimeToShaderWriter::*)()>(&::GlobalNamespace::SongTimeToShaderWriter::Update)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3ad266c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongTimeToShaderWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongTimeToShaderWriter::*)()>(&::GlobalNamespace::SongTimeToShaderWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad28ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::SongTimeToShaderWriter::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::SongTimeToShaderWriter::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::SongTimeToShaderWriter::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SongTimeToShaderWriter::setStaticF__songTimePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_songTimePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SongTimeToShaderWriter::getStaticF__songTimePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_songTimePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter*>::get>();
}
inline void GlobalNamespace::SongTimeToShaderWriter::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongTimeToShaderWriter* GlobalNamespace::SongTimeToShaderWriter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SongTimeToShaderWriter*>());
}
inline void GlobalNamespace::SongTimeToShaderWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongTimeToShaderWriter::SongTimeToShaderWriter() {}
