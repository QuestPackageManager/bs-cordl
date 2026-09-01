#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerSensitivityDropdown.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityDropdown_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSensitivityDropdown.GetNamedValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::PlayerSensitivityFlag, ::StringW>*>* (
    ::GlobalNamespace::PlayerSensitivityDropdown::*)()>(&::GlobalNamespace::PlayerSensitivityDropdown::GetNamedValues)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5a10688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivityDropdown*>(), { ::i2c::class_of<::GlobalNamespace::PlayerSensitivityDropdown*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSensitivityDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSensitivityDropdown::*)()>(&::GlobalNamespace::PlayerSensitivityDropdown::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a107b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivityDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::PlayerSensitivityFlag, ::StringW>*>* GlobalNamespace::PlayerSensitivityDropdown::GetNamedValues() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerSensitivityDropdown*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::PlayerSensitivityFlag, ::StringW>*>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSensitivityDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivityDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSensitivityDropdown* GlobalNamespace::PlayerSensitivityDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSensitivityDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSensitivityDropdown::PlayerSensitivityDropdown() {}
