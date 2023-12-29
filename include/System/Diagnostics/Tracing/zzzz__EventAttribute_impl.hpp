#pragma once
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventAttribute_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(int32_t)>(
    &::System::Diagnostics::Tracing::EventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x242044c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_EventId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(int32_t)>(
    &::System::Diagnostics::Tracing::EventAttribute::set_EventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2420474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_EventId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::System::Diagnostics::Tracing::EventLevel)>(
    &::System::Diagnostics::Tracing::EventAttribute::set_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x242047c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Level", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Keywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::System::Diagnostics::Tracing::EventKeywords)>(
    &::System::Diagnostics::Tracing::EventAttribute::set_Keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2420484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Keywords", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventKeywords>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::StringW)>(
    &::System::Diagnostics::Tracing::EventAttribute::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x242048c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Message",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Diagnostics::Tracing::EventAttribute::__get__EventId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventId_k__BackingField;
}
constexpr int32_t const& System::Diagnostics::Tracing::EventAttribute::__get__EventId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventId_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__set__EventId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EventId_k__BackingField = value;
}
constexpr ::System::Diagnostics::Tracing::EventLevel& System::Diagnostics::Tracing::EventAttribute::__get__Level_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Level_k__BackingField;
}
constexpr ::System::Diagnostics::Tracing::EventLevel const& System::Diagnostics::Tracing::EventAttribute::__get__Level_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Level_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__set__Level_k__BackingField(::System::Diagnostics::Tracing::EventLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Level_k__BackingField = value;
}
constexpr ::System::Diagnostics::Tracing::EventKeywords& System::Diagnostics::Tracing::EventAttribute::__get__Keywords_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Keywords_k__BackingField;
}
constexpr ::System::Diagnostics::Tracing::EventKeywords const& System::Diagnostics::Tracing::EventAttribute::__get__Keywords_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Keywords_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__set__Keywords_k__BackingField(::System::Diagnostics::Tracing::EventKeywords value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Keywords_k__BackingField = value;
}
constexpr ::StringW& System::Diagnostics::Tracing::EventAttribute::__get__Message_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Message_k__BackingField;
}
constexpr ::StringW const& System::Diagnostics::Tracing::EventAttribute::__get__Message_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Message_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventAttribute::__set__Message_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Message_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Diagnostics::Tracing::EventAttribute* System::Diagnostics::Tracing::EventAttribute::New_ctor(int32_t eventId) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::Tracing::EventAttribute*>(eventId));
}
inline void System::Diagnostics::Tracing::EventAttribute::_ctor(int32_t eventId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventId);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_EventId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_EventId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_Level(::System::Diagnostics::Tracing::EventLevel value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Level", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_Keywords(::System::Diagnostics::Tracing::EventKeywords value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Keywords", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventKeywords>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventAttribute::set_Message(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute*>::get(), "set_Message",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Tracing::EventAttribute::EventAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
