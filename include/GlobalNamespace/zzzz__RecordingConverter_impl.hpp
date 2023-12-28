#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingConverter_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingConverter::*)(::GlobalNamespace::IBeatSaberLogger*)>(
    &::GlobalNamespace::RecordingConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2302328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingConverter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingConverter.SaveToOldFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingConverter::*)(::StringW, ::GlobalNamespace::PosesRecordingData*)>(
    &::GlobalNamespace::RecordingConverter::SaveToOldFormat)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x230351c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingConverter*>::get(), "SaveToOldFormat", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberLogger*& GlobalNamespace::RecordingConverter::__get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& GlobalNamespace::RecordingConverter::__get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void GlobalNamespace::RecordingConverter::__set__logger(::GlobalNamespace::IBeatSaberLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::RecordingConverter* GlobalNamespace::RecordingConverter::New_ctor(::GlobalNamespace::IBeatSaberLogger* logger) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingConverter*>(logger));
}
inline void GlobalNamespace::RecordingConverter::_ctor(::GlobalNamespace::IBeatSaberLogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingConverter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logger);
}
inline void GlobalNamespace::RecordingConverter::SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingConverter*>::get(), "SaveToOldFormat", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingConverter::RecordingConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
