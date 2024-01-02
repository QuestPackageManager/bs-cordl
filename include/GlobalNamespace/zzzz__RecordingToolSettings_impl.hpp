#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettings_def.hpp"
#include "GlobalNamespace/zzzz__RecordingSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettings::*)(
    ::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*>)>(&::GlobalNamespace::RecordingToolSettings::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23079e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettings*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*>& GlobalNamespace::RecordingToolSettings::__get_recordingSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingSettings;
}
constexpr ::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*> const& GlobalNamespace::RecordingToolSettings::__get_recordingSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingSettings;
}
constexpr void GlobalNamespace::RecordingToolSettings::__set_recordingSettings(::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recordingSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::RecordingToolSettings*
GlobalNamespace::RecordingToolSettings::New_ctor(::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*> recordingSettings) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingToolSettings*>(recordingSettings));
}
inline void GlobalNamespace::RecordingToolSettings::_ctor(::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*> recordingSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettings*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::RecordingSettings*, ::Array<::GlobalNamespace::RecordingSettings*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordingSettings);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolSettings::RecordingToolSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
