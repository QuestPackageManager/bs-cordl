#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONObject.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONObject_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONObject_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject___c__DisplayClass21_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject___c__DisplayClass21_0::*)()>(
    &::OVRSimpleJSON::JSONObject___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c7ac08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject___c__DisplayClass21_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject___c__DisplayClass21_0._Remove_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONObject___c__DisplayClass21_0::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONObject___c__DisplayClass21_0::_Remove_b__0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c7b3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject___c__DisplayClass21_0*>::get(), "<Remove>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONObject___c__DisplayClass21_0::__cordl_internal_get_aNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aNode;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONObject___c__DisplayClass21_0::__cordl_internal_get_aNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aNode;
}
constexpr void OVRSimpleJSON::JSONObject___c__DisplayClass21_0::__cordl_internal_set_aNode(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___aNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OVRSimpleJSON::JSONObject___c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject___c__DisplayClass21_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONObject___c__DisplayClass21_0::_Remove_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject___c__DisplayClass21_0*>::get(), "<Remove>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, k);
}
inline ::OVRSimpleJSON::JSONObject___c__DisplayClass21_0* OVRSimpleJSON::JSONObject___c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVRSimpleJSON::JSONObject___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONObject___c__DisplayClass21_0::JSONObject___c__DisplayClass21_0() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject__get_Children_d__27._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject__get_Children_d__27::*)(int32_t)>(
    &::OVRSimpleJSON::JSONObject__get_Children_d__27::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c7b03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject__get_Children_d__27.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject__get_Children_d__27::*)()>(
    &::OVRSimpleJSON::JSONObject__get_Children_d__27::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c7b450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject__get_Children_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONObject__get_Children_d__27::*)()>(
    &::OVRSimpleJSON::JSONObject__get_Children_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5c7b4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject__get_Children_d__27.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject__get_Children_d__27::*)()>(
    &::OVRSimpleJSON::JSONObject__get_Children_d__27::__m__Finally1)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c7b6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject__get_Children_d__27.System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject__get_Children_d__27::*)()>(
    &::OVRSimpleJSON::JSONObject__get_Children_d__27::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7b730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                                               "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject__get_Children_d__27.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject__get_Children_d__27::*)()>(
    &::OVRSimpleJSON::JSONObject__get_Children_d__27::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c7b738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject__get_Children_d__27.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::OVRSimpleJSON::JSONObject__get_Children_d__27::*)()>(
    &::OVRSimpleJSON::JSONObject__get_Children_d__27::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7b770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject__get_Children_d__27.System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* (
    ::OVRSimpleJSON::JSONObject__get_Children_d__27::*)()>(&::OVRSimpleJSON::JSONObject__get_Children_d__27::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c7b778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                                               "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject__get_Children_d__27.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::JSONObject__get_Children_d__27::*)()>(
    &::OVRSimpleJSON::JSONObject__get_Children_d__27::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c7b810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_set___2__current(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::OVRSimpleJSON::JSONObject*& OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::OVRSimpleJSON::JSONObject* const& OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_set___4__this(::OVRSimpleJSON::JSONObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>& OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> const& OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void OVRSimpleJSON::JSONObject__get_Children_d__27::__cordl_internal_set___7__wrap1(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void OVRSimpleJSON::JSONObject__get_Children_d__27::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void OVRSimpleJSON::JSONObject__get_Children_d__27::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONObject__get_Children_d__27::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONObject__get_Children_d__27::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                                             "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject__get_Children_d__27::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                  "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONObject__get_Children_d__27::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(), "System.Collections.IEnumerator.Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::JSONObject__get_Children_d__27::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONObject__get_Children_d__27::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::JSONObject__get_Children_d__27::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject__get_Children_d__27*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONObject__get_Children_d__27* OVRSimpleJSON::JSONObject__get_Children_d__27::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVRSimpleJSON::JSONObject__get_Children_d__27*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::JSONObject__get_Children_d__27::operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONObject__get_Children_d__27::i___System__Collections__Generic__IEnumerable_1___OVRSimpleJSON__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::JSONObject__get_Children_d__27::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* OVRSimpleJSON::JSONObject__get_Children_d__27::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::JSONObject__get_Children_d__27::operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONObject__get_Children_d__27::i___System__Collections__Generic__IEnumerator_1___OVRSimpleJSON__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::JSONObject__get_Children_d__27::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* OVRSimpleJSON::JSONObject__get_Children_d__27::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::JSONObject__get_Children_d__27::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OVRSimpleJSON::JSONObject__get_Children_d__27::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONObject__get_Children_d__27::JSONObject__get_Children_d__27() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::get_Inline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7a088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.set_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)(bool)>(&::OVRSimpleJSON::JSONObject::set_Inline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7a090;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Tag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNodeType (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7a098;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_IsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::get_IsObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7a0a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode_Enumerator (::OVRSimpleJSON::JSONObject::*)()>(
    &::OVRSimpleJSON::JSONObject::GetEnumerator)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c7a0a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(::StringW)>(&::OVRSimpleJSON::JSONObject::get_Item)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c7a16c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONObject::set_Item)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c7a2b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(int32_t)>(&::OVRSimpleJSON::JSONObject::get_Item)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c7a40c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)(int32_t, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONObject::set_Item)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5c7a4c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::get_Count)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c7a628;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONObject::Add)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c7a680;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(::StringW)>(&::OVRSimpleJSON::JSONObject::Remove)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c7a828;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(int32_t)>(&::OVRSimpleJSON::JSONObject::Remove)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c7a90c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONObject::Remove)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5c7aa08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c7ac0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::Clone)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c7ac60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.HasKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONObject::*)(::StringW)>(&::OVRSimpleJSON::JSONObject::HasKey)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c7aec8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.GetValueOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONObject::GetValueOrDefault)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c7af44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* (::OVRSimpleJSON::JSONObject::*)()>(
    &::OVRSimpleJSON::JSONObject::get_Children)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c7afcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVRSimpleJSON::JSONObject::*)(::System::Text::StringBuilder*, int32_t, int32_t, ::OVRSimpleJSON::JSONTextMode)>(&::OVRSimpleJSON::JSONObject::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5c7b05c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c7ae00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>*& OVRSimpleJSON::JSONObject::__cordl_internal_get_m_Dict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>* const& OVRSimpleJSON::JSONObject::__cordl_internal_get_m_Dict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dict;
}
constexpr void OVRSimpleJSON::JSONObject::__cordl_internal_set_m_Dict(::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Dict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& OVRSimpleJSON::JSONObject::__cordl_internal_get__cordl_inline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_inline;
}
constexpr bool const& OVRSimpleJSON::JSONObject::__cordl_internal_get__cordl_inline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_inline;
}
constexpr void OVRSimpleJSON::JSONObject::__cordl_internal_set__cordl_inline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_inline = value;
}
inline bool OVRSimpleJSON::JSONObject::get_Inline() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONObject::set_Inline(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONObject::get_Tag() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNodeType, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONObject::get_IsObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_Enumerator OVRSimpleJSON::JSONObject::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_Enumerator, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::get_Item(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aKey);
}
inline void OVRSimpleJSON::JSONObject::set_Item(::StringW aKey, ::OVRSimpleJSON::JSONNode* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, value);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::get_Item(int32_t aIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline void OVRSimpleJSON::JSONObject::set_Item(int32_t aIndex, ::OVRSimpleJSON::JSONNode* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aIndex, value);
}
inline int32_t OVRSimpleJSON::JSONObject::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONObject::Add(::StringW aKey, ::OVRSimpleJSON::JSONNode* aItem) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, aItem);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::Remove(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aKey);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::Remove(int32_t aIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::Remove(::OVRSimpleJSON::JSONNode* aNode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aNode);
}
inline void OVRSimpleJSON::JSONObject::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::Clone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONObject::HasKey(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, aKey);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::GetValueOrDefault(::StringW aKey, ::OVRSimpleJSON::JSONNode* aDefault) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aKey, aDefault);
}
inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* OVRSimpleJSON::JSONObject::get_Children() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONObject::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline void OVRSimpleJSON::JSONObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONObject* OVRSimpleJSON::JSONObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVRSimpleJSON::JSONObject*>());
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONObject::JSONObject() {}
