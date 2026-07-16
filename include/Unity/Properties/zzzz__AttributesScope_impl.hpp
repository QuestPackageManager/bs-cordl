#pragma once
// IWYU pragma private; include "Unity/Properties/AttributesScope.hpp"
#include "Unity/Properties/zzzz__AttributesScope_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Properties/Internal/zzzz__IAttributes_def.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
//  Writing Method size for method: ::Unity::Properties::AttributesScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::AttributesScope::*)(::Unity::Properties::IProperty*, ::Unity::Properties::IProperty*)>(
    &::Unity::Properties::AttributesScope::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6b9b13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::AttributesScope>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Properties::IProperty*>(), ::i2c::type_of<::Unity::Properties::IProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::AttributesScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::AttributesScope::*)(
    ::Unity::Properties::Internal::IAttributes*, ::System::Collections::Generic::List_1<::System::Attribute*>*)>(&::Unity::Properties::AttributesScope::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6b9b310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Properties::AttributesScope>(),
                            { ".ctor", {}, { ::i2c::type_of<::Unity::Properties::Internal::IAttributes*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Attribute*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::AttributesScope.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::AttributesScope::*)()>(&::Unity::Properties::AttributesScope::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b9b428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::AttributesScope>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::AttributesScope::_ctor(::Unity::Properties::IProperty* target, ::Unity::Properties::IProperty* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::AttributesScope>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Properties::IProperty*>(), ::i2c::type_of<::Unity::Properties::IProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target, source);
}
inline void Unity::Properties::AttributesScope::_ctor(::Unity::Properties::Internal::IAttributes* target, ::System::Collections::Generic::List_1<::System::Attribute*>* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::AttributesScope>(),
                          { ".ctor", {}, { ::i2c::type_of<::Unity::Properties::Internal::IAttributes*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Attribute*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target, attributes);
}
inline void Unity::Properties::AttributesScope::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::AttributesScope>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Properties::AttributesScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Properties::AttributesScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Target", ty: "::Unity::Properties::Internal::IAttributes*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Previous", ty:
// "::System::Collections::Generic::List_1<::System::Attribute*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::AttributesScope::AttributesScope(::Unity::Properties::Internal::IAttributes* m_Target,
                                                                ::System::Collections::Generic::List_1<::System::Attribute*>* m_Previous) noexcept {
  this->m_Target = m_Target;
  this->m_Previous = m_Previous;
}
// Ctor Parameters []
constexpr ::Unity::Properties::AttributesScope::AttributesScope() {}
