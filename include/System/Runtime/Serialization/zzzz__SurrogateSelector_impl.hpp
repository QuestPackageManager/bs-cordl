#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SurrogateHashtable_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateSelector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SurrogateSelector::*)()>(
    &::System::Runtime::Serialization::SurrogateSelector::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x273c104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateSelector*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateSelector.AddSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SurrogateSelector::*)(
    ::System::Type*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISerializationSurrogate*)>(
    &::System::Runtime::Serialization::SurrogateSelector::AddSurrogate)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x273c17c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateSelector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateSelector*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateSelector.GetSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (
    ::System::Runtime::Serialization::SurrogateSelector::*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext, ByRef<::System::Runtime::Serialization::ISurrogateSelector*>)>(
    &::System::Runtime::Serialization::SurrogateSelector::GetSurrogate)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x273c304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateSelector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateSelector*>::get(), 6));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISurrogateSelector"
constexpr System::Runtime::Serialization::SurrogateSelector::operator ::System::Runtime::Serialization::ISurrogateSelector*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISurrogateSelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISurrogateSelector"
constexpr ::System::Runtime::Serialization::ISurrogateSelector* System::Runtime::Serialization::SurrogateSelector::i___System__Runtime__Serialization__ISurrogateSelector() noexcept {
  return static_cast<::System::Runtime::Serialization::ISurrogateSelector*>(static_cast<void*>(this));
}
constexpr ::System::Runtime::Serialization::SurrogateHashtable*& System::Runtime::Serialization::SurrogateSelector::__cordl_internal_get_m_surrogates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_surrogates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SurrogateHashtable*> const&
System::Runtime::Serialization::SurrogateSelector::__cordl_internal_get_m_surrogates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_surrogates;
}
constexpr void System::Runtime::Serialization::SurrogateSelector::__cordl_internal_set_m_surrogates(::System::Runtime::Serialization::SurrogateHashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_surrogates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector*& System::Runtime::Serialization::SurrogateSelector::__cordl_internal_get_m_nextSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nextSelector;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> const&
System::Runtime::Serialization::SurrogateSelector::__cordl_internal_get_m_nextSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nextSelector;
}
constexpr void System::Runtime::Serialization::SurrogateSelector::__cordl_internal_set_m_nextSelector(::System::Runtime::Serialization::ISurrogateSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_nextSelector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::SurrogateSelector* System::Runtime::Serialization::SurrogateSelector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::SurrogateSelector*>());
}
inline void System::Runtime::Serialization::SurrogateSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateSelector*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SurrogateSelector::AddSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                            ::System::Runtime::Serialization::ISerializationSurrogate* surrogate) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateSelector*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, context, surrogate);
}
inline ::System::Runtime::Serialization::ISerializationSurrogate*
System::Runtime::Serialization::SurrogateSelector::GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                ByRef<::System::Runtime::Serialization::ISurrogateSelector*> selector) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateSelector*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*, false>(this, ___internal_method, type, context, selector);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SurrogateSelector::SurrogateSelector() {}
