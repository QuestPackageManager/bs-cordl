#pragma once
#include "OVRSimpleJSON/zzzz__JSONNode_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONString_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVRSimpleJSON::JSONString.get_Tag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNodeType (::OVRSimpleJSON::JSONString::*)()>(&::OVRSimpleJSON::JSONString::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bf410;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONString.get_IsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONString::*)()>(&::OVRSimpleJSON::JSONString::get_IsString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bf418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONString.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::__JSONNode__Enumerator (::OVRSimpleJSON::JSONString::*)()>(
    &::OVRSimpleJSON::JSONString::GetEnumerator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28bf420;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONString.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVRSimpleJSON::JSONString::*)()>(&::OVRSimpleJSON::JSONString::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bf434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONString.set_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONString::*)(::StringW)>(&::OVRSimpleJSON::JSONString::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28bf43c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONString::*)(::StringW)>(&::OVRSimpleJSON::JSONString::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28b9cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONString.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVRSimpleJSON::JSONString::*)(::System::Text::StringBuilder*, int32_t, int32_t, ::OVRSimpleJSON::JSONTextMode)>(&::OVRSimpleJSON::JSONString::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x28bf444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONString.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONString::*)(::System::Object*)>(&::OVRSimpleJSON::JSONString::Equals)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x28bf4a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONString.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVRSimpleJSON::JSONString::*)()>(&::OVRSimpleJSON::JSONString::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28bf58c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::StringW& OVRSimpleJSON::JSONString::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr ::StringW const& OVRSimpleJSON::JSONString::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr void OVRSimpleJSON::JSONString::__cordl_internal_set_m_Data(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONString::get_Tag() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNodeType, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONString::get_IsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::__JSONNode__Enumerator OVRSimpleJSON::JSONString::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::__JSONNode__Enumerator, false>(this, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONString::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONString::set_Value(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::OVRSimpleJSON::JSONString* OVRSimpleJSON::JSONString::New_ctor(::StringW aData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVRSimpleJSON::JSONString*>(aData));
}
inline void OVRSimpleJSON::JSONString::_ctor(::StringW aData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aData);
}
inline void OVRSimpleJSON::JSONString::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline bool OVRSimpleJSON::JSONString::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t OVRSimpleJSON::JSONString::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONString*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONString::JSONString() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
