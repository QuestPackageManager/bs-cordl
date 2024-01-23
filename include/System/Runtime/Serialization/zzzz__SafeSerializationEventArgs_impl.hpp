#pragma once
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationEventArgs_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationEventArgs::*)(
    ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationEventArgs::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x24bcd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationEventArgs.get_SerializedStates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Object*>* (
    ::System::Runtime::Serialization::SafeSerializationEventArgs::*)()>(&::System::Runtime::Serialization::SafeSerializationEventArgs::get_SerializedStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bce4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationEventArgs*>::get(), "get_SerializedStates",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::SafeSerializationEventArgs::__cordl_internal_get_m_streamingContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_streamingContext;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::SafeSerializationEventArgs::__cordl_internal_get_m_streamingContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_streamingContext;
}
constexpr void System::Runtime::Serialization::SafeSerializationEventArgs::__cordl_internal_set_m_streamingContext(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_streamingContext = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& System::Runtime::Serialization::SafeSerializationEventArgs::__cordl_internal_get_m_serializedStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serializedStates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const&
System::Runtime::Serialization::SafeSerializationEventArgs::__cordl_internal_get_m_serializedStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serializedStates;
}
constexpr void System::Runtime::Serialization::SafeSerializationEventArgs::__cordl_internal_set_m_serializedStates(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_serializedStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::SafeSerializationEventArgs*
System::Runtime::Serialization::SafeSerializationEventArgs::New_ctor(::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::SafeSerializationEventArgs*>(streamingContext));
}
inline void System::Runtime::Serialization::SafeSerializationEventArgs::_ctor(::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, streamingContext);
}
inline ::System::Collections::Generic::IList_1<::System::Object*>* System::Runtime::Serialization::SafeSerializationEventArgs::get_SerializedStates() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationEventArgs*>::get(), "get_SerializedStates",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Object*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SafeSerializationEventArgs::SafeSerializationEventArgs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
