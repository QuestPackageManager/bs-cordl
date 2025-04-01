#pragma once
// IWYU pragma private; include "System/Data/DataViewManager.hpp"
#include "System/ComponentModel/zzzz__MarshalByValueComponent_impl.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Data/zzzz__DataViewSettingCollection_def.hpp"
#include "System/zzzz__NotSupportedException_def.hpp"
//  Writing Method size for method: ::System::Data::DataViewManager.get_DataViewSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataViewSettingCollection* (::System::Data::DataViewManager::*)()>(
    &::System::Data::DataViewManager::get_DataViewSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4169a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataViewManager*>::get(), "get_DataViewSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewSettingCollection*& System::Data::DataViewManager::__cordl_internal_get__dataViewSettingsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewSettingsCollection;
}
constexpr ::System::Data::DataViewSettingCollection* const& System::Data::DataViewManager::__cordl_internal_get__dataViewSettingsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewSettingsCollection;
}
constexpr void System::Data::DataViewManager::__cordl_internal_set__dataViewSettingsCollection(::System::Data::DataViewSettingCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataViewSettingsCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::DataViewManager::__cordl_internal_get__nViews() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nViews;
}
constexpr int32_t const& System::Data::DataViewManager::__cordl_internal_get__nViews() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nViews;
}
constexpr void System::Data::DataViewManager::__cordl_internal_set__nViews(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nViews = value;
}
inline void System::Data::DataViewManager::setStaticF_s_notSupported(::System::NotSupportedException* value) {
  ::cordl_internals::setStaticField<::System::NotSupportedException*, "s_notSupported", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataViewManager*>::get>(
      std::forward<::System::NotSupportedException*>(value));
}
inline ::System::NotSupportedException* System::Data::DataViewManager::getStaticF_s_notSupported() {
  return ::cordl_internals::getStaticField<::System::NotSupportedException*, "s_notSupported", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataViewManager*>::get>();
}
inline ::System::Data::DataViewSettingCollection* System::Data::DataViewManager::get_DataViewSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataViewManager*>::get(), "get_DataViewSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewSettingCollection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Data::DataViewManager::DataViewManager() {}
