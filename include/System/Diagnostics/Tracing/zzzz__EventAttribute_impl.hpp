#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventAttribute.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventAttribute_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(int32_t)>(
    &::System::Diagnostics::Tracing::EventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3db8370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_EventId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(int32_t)>(
    &::System::Diagnostics::Tracing::EventAttribute::set_EventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3db8398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_EventId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::System::Diagnostics::Tracing::EventLevel)>(
    &::System::Diagnostics::Tracing::EventAttribute::set_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3db83a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Level", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Keywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::System::Diagnostics::Tracing::EventKeywords)>(
    &::System::Diagnostics::Tracing::EventAttribute::set_Keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3db83a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Keywords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventKeywords>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::StringW)>(
    &::System::Diagnostics::Tracing::EventAttribute::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3db83b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Message",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__EventId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventId_k__BackingField;
}
constexpr int32_t const& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__EventId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventId_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__cordl_internal_set__EventId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EventId_k__BackingField = value;
}
constexpr ::System::Diagnostics::Tracing::EventLevel& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Level_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Level_k__BackingField;
}
constexpr ::System::Diagnostics::Tracing::EventLevel const& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Level_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Level_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__cordl_internal_set__Level_k__BackingField(::System::Diagnostics::Tracing::EventLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Level_k__BackingField = value;
}
constexpr ::System::Diagnostics::Tracing::EventKeywords& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Keywords_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Keywords_k__BackingField;
}
constexpr ::System::Diagnostics::Tracing::EventKeywords const& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Keywords_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Keywords_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__cordl_internal_set__Keywords_k__BackingField(::System::Diagnostics::Tracing::EventKeywords value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Keywords_k__BackingField = value;
}
constexpr ::StringW& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Message_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Message_k__BackingField;
}
constexpr ::StringW const& System::Diagnostics::Tracing::EventAttribute::__cordl_internal_get__Message_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Message_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__cordl_internal_set__Message_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Message_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Diagnostics::Tracing::EventAttribute::_ctor(int32_t eventId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventId);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_EventId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_EventId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_Level(::System::Diagnostics::Tracing::EventLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Level", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_Keywords(::System::Diagnostics::Tracing::EventKeywords value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Keywords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventKeywords>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_Message(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Message",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Diagnostics::Tracing::EventAttribute* System::Diagnostics::Tracing::EventAttribute::New_ctor(int32_t eventId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::Tracing::EventAttribute*>(eventId));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Tracing::EventAttribute::EventAttribute() {}
