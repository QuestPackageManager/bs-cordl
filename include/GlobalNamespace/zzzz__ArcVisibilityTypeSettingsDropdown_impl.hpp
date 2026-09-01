#pragma once
// IWYU pragma private; include "GlobalNamespace\ArcVisibilityTypeSettingsDropdown.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_impl.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_impl.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityTypeSettingsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown.GetNamedValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::ArcVisibilityType, ::StringW>*>* (
    ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown::*)()>(&::GlobalNamespace::ArcVisibilityTypeSettingsDropdown::GetNamedValues)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5a13bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcVisibilityTypeSettingsDropdown::*)()>(&::GlobalNamespace::ArcVisibilityTypeSettingsDropdown::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a13d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::ArcVisibilityType, ::StringW>*>* GlobalNamespace::ArcVisibilityTypeSettingsDropdown::GetNamedValues() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::ArcVisibilityType, ::StringW>*>*>(this, ___internal_method);
}
inline void GlobalNamespace::ArcVisibilityTypeSettingsDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown* GlobalNamespace::ArcVisibilityTypeSettingsDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown::ArcVisibilityTypeSettingsDropdown() {}
