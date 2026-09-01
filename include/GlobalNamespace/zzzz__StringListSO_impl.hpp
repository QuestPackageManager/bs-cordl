#pragma once
// IWYU pragma private; include "GlobalNamespace\StringListSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__StringListSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StringListSO.get_strings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::StringListSO::*)()>(
    &::GlobalNamespace::StringListSO::get_strings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3327ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringListSO*>(), { "get_strings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringListSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringListSO::*)()>(&::GlobalNamespace::StringListSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3327ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringListSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::StringListSO::__cordl_internal_get__strings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strings;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::StringListSO::__cordl_internal_get__strings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strings;
}
constexpr void GlobalNamespace::StringListSO::__cordl_internal_set__strings(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strings = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::StringListSO::get_strings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringListSO*>(), { "get_strings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::StringListSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringListSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StringListSO* GlobalNamespace::StringListSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StringListSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringListSO::StringListSO() {}
