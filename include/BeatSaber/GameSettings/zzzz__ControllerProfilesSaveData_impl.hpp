#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfilesSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesSaveData_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSaveData::*)(
    ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>*)>(&::BeatSaber::GameSettings::ControllerProfilesSaveData::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x31c2744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesSaveData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::ArrayW<::BeatSaber::GameSettings::ControllerProfileSaveData*, ::Array<::BeatSaber::GameSettings::ControllerProfileSaveData*>*>&
BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_get_profiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profiles;
}
constexpr ::ArrayW<::BeatSaber::GameSettings::ControllerProfileSaveData*, ::Array<::BeatSaber::GameSettings::ControllerProfileSaveData*>*> const&
BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_get_profiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profiles;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSaveData::__cordl_internal_set_profiles(
    ::ArrayW<::BeatSaber::GameSettings::ControllerProfileSaveData*, ::Array<::BeatSaber::GameSettings::ControllerProfileSaveData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___profiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::GameSettings::ControllerProfilesSaveData::_ctor(::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>* profiles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesSaveData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profiles);
}
inline ::BeatSaber::GameSettings::ControllerProfilesSaveData*
BeatSaber::GameSettings::ControllerProfilesSaveData::New_ctor(::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>* profiles) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GameSettings::ControllerProfilesSaveData*>(profiles));
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesSaveData::ControllerProfilesSaveData() {}
