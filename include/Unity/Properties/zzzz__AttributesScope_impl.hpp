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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::AttributesScope::*)(::Unity::Properties::IProperty*, ::Unity::Properties::IProperty*)>(
    &::Unity::Properties::AttributesScope::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x69d31e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::AttributesScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IProperty*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::AttributesScope._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::AttributesScope::*)(
    ::Unity::Properties::Internal::IAttributes*, ::System::Collections::Generic::List_1<::System::Attribute*>*)>(&::Unity::Properties::AttributesScope::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x69d33b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::AttributesScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::Internal::IAttributes*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Attribute*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::AttributesScope.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::AttributesScope::*)()>(&::Unity::Properties::AttributesScope::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69d34cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::AttributesScope>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Properties::AttributesScope::_ctor(::Unity::Properties::IProperty* target, ::Unity::Properties::IProperty* source) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::AttributesScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IProperty*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, source);
}
inline void Unity::Properties::AttributesScope::_ctor(::Unity::Properties::Internal::IAttributes* target, ::System::Collections::Generic::List_1<::System::Attribute*>* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::AttributesScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::Internal::IAttributes*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Attribute*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, attributes);
}
inline void Unity::Properties::AttributesScope::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::AttributesScope>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Properties::AttributesScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Properties::AttributesScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
