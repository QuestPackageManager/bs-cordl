#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNode.hpp"
#include "OVRSimpleJSON/zzzz__JSONContainerType_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONArray_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONContainerType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONObject_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RectOffset_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::Enumerator_JSONNode_Type::Enumerator_JSONNode_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::Enumerator_JSONNode_Type::Enumerator_JSONNode_Type() {}
constexpr ::OVRSimpleJSON::Enumerator_JSONNode_Type OVRSimpleJSON::Enumerator_JSONNode_Type::None{ static_cast<int32_t>(0x0) };
constexpr ::OVRSimpleJSON::Enumerator_JSONNode_Type OVRSimpleJSON::Enumerator_JSONNode_Type::Array{ static_cast<int32_t>(0x1) };
constexpr ::OVRSimpleJSON::Enumerator_JSONNode_Type OVRSimpleJSON::Enumerator_JSONNode_Type::Object{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_Enumerator.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode_Enumerator::*)()>(&::OVRSimpleJSON::JSONNode_Enumerator::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x404bea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_Enumerator>::get(), "get_IsValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVRSimpleJSON::JSONNode_Enumerator::*)(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONNode_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x404beb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode_Enumerator::*)(
    ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONNode_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x404bedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> (
    ::OVRSimpleJSON::JSONNode_Enumerator::*)()>(&::OVRSimpleJSON::JSONNode_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x404bf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_Enumerator>::get(), "get_Current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode_Enumerator::*)()>(&::OVRSimpleJSON::JSONNode_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x404bfd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_Enumerator>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool OVRSimpleJSON::JSONNode_Enumerator::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_Enumerator>::get(), "get_IsValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode_Enumerator::_ctor(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*> aArrayEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aArrayEnum);
}
inline void OVRSimpleJSON::JSONNode_Enumerator::_ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> aDictEnum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aDictEnum);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> OVRSimpleJSON::JSONNode_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_Enumerator>::get(), "get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_Enumerator>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::OVRSimpleJSON::Enumerator_JSONNode_Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Object", ty:
// "::System::Collections::Generic::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Array", ty:
// "::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONNode_Enumerator::JSONNode_Enumerator(::OVRSimpleJSON::Enumerator_JSONNode_Type type,
                                                                    ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> m_Object,
                                                                    ::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*> m_Array) noexcept {
  this->type = type;
  this->m_Object = m_Object;
  this->m_Array = m_Array;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode_Enumerator::JSONNode_Enumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)(
    ::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x404c064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)(
    ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x404c0a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)(::OVRSimpleJSON::JSONNode_Enumerator)>(
    &::OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x404c114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode_Enumerator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_ValueEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x404c128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), "get_Current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_ValueEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x404c16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode_ValueEnumerator (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_ValueEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x404c170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*> aArrayEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aArrayEnum);
}
inline void OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> aDictEnum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aDictEnum);
}
inline void OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor(::OVRSimpleJSON::JSONNode_Enumerator aEnumerator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode_Enumerator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aEnumerator);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode_ValueEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), "get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode_ValueEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_ValueEnumerator OVRSimpleJSON::JSONNode_ValueEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_ValueEnumerator>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_ValueEnumerator, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::OVRSimpleJSON::JSONNode_Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONNode_ValueEnumerator::JSONNode_ValueEnumerator(::OVRSimpleJSON::JSONNode_Enumerator m_Enumerator) noexcept {
  this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode_ValueEnumerator::JSONNode_ValueEnumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x404c180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)(
    ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x404c1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)(::OVRSimpleJSON::JSONNode_Enumerator)>(
    &::OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x404c230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode_Enumerator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_KeyEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x404c244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), "get_Current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_KeyEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x404c280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode_KeyEnumerator (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_KeyEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x404c284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*> aArrayEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aArrayEnum);
}
inline void OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> aDictEnum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aDictEnum);
}
inline void OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor(::OVRSimpleJSON::JSONNode_Enumerator aEnumerator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode_Enumerator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aEnumerator);
}
inline ::StringW OVRSimpleJSON::JSONNode_KeyEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), "get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode_KeyEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_KeyEnumerator OVRSimpleJSON::JSONNode_KeyEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_KeyEnumerator>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_KeyEnumerator, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::OVRSimpleJSON::JSONNode_Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONNode_KeyEnumerator::JSONNode_KeyEnumerator(::OVRSimpleJSON::JSONNode_Enumerator m_Enumerator) noexcept {
  this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode_KeyEnumerator::JSONNode_KeyEnumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode_LinqEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4048c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> (
    ::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_LinqEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404c294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "get_Current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_LinqEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x404c29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "System.Collections.IEnumerator.get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_LinqEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404c300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_LinqEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x404c308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>* (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(
        &::OVRSimpleJSON::JSONNode_LinqEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x404c31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_LinqEnumerator::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x404c378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_LinqEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x404c3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_get_m_Node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Node;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_get_m_Node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Node;
}
constexpr void OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_set_m_Node(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Node)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OVRSimpleJSON::JSONNode_Enumerator& OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_get_m_Enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enumerator;
}
constexpr ::OVRSimpleJSON::JSONNode_Enumerator const& OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_get_m_Enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enumerator;
}
constexpr void OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_set_m_Enumerator(::OVRSimpleJSON::JSONNode_Enumerator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Enumerator = value;
}
inline void OVRSimpleJSON::JSONNode_LinqEnumerator::_ctor(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aNode);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> OVRSimpleJSON::JSONNode_LinqEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>, false>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::JSONNode_LinqEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "System.Collections.IEnumerator.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode_LinqEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode_LinqEnumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>* OVRSimpleJSON::JSONNode_LinqEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*, false>(
      this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode_LinqEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode_LinqEnumerator::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode_LinqEnumerator*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_LinqEnumerator* OVRSimpleJSON::JSONNode_LinqEnumerator::New_ctor(::OVRSimpleJSON::JSONNode* aNode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(aNode));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr OVRSimpleJSON::JSONNode_LinqEnumerator::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*
OVRSimpleJSON::JSONNode_LinqEnumerator::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___OVRSimpleJSON__JSONNode___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::JSONNode_LinqEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode_LinqEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::JSONNode_LinqEnumerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OVRSimpleJSON::JSONNode_LinqEnumerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr OVRSimpleJSON::JSONNode_LinqEnumerator::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*
OVRSimpleJSON::JSONNode_LinqEnumerator::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___OVRSimpleJSON__JSONNode___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::JSONNode_LinqEnumerator::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* OVRSimpleJSON::JSONNode_LinqEnumerator::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode_LinqEnumerator::JSONNode_LinqEnumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__40._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode__get_Children_d__40::*)(int32_t)>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__40::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4048a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__40.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode__get_Children_d__40::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__40::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x404c43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode__get_Children_d__40::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x404c440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__40.System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode__get_Children_d__40::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__40::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404c458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                                                               "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__40.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode__get_Children_d__40::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__40::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x404c460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(), "System.Collections.IEnumerator.Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__40.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::OVRSimpleJSON::JSONNode__get_Children_d__40::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__40::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404c498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__40.System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* (
    ::OVRSimpleJSON::JSONNode__get_Children_d__40::*)()>(&::OVRSimpleJSON::JSONNode__get_Children_d__40::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x404c4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                                                               "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__40.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::JSONNode__get_Children_d__40::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__40::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x404c530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& OVRSimpleJSON::JSONNode__get_Children_d__40::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& OVRSimpleJSON::JSONNode__get_Children_d__40::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void OVRSimpleJSON::JSONNode__get_Children_d__40::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONNode__get_Children_d__40::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONNode__get_Children_d__40::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void OVRSimpleJSON::JSONNode__get_Children_d__40::__cordl_internal_set___2__current(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& OVRSimpleJSON::JSONNode__get_Children_d__40::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& OVRSimpleJSON::JSONNode__get_Children_d__40::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void OVRSimpleJSON::JSONNode__get_Children_d__40::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
inline void OVRSimpleJSON::JSONNode__get_Children_d__40::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void OVRSimpleJSON::JSONNode__get_Children_d__40::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode__get_Children_d__40::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode__get_Children_d__40::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                  "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode__get_Children_d__40::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(), "System.Collections.IEnumerator.Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::JSONNode__get_Children_d__40::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_Children_d__40::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode__get_Children_d__40::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_Children_d__40*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode__get_Children_d__40* OVRSimpleJSON::JSONNode__get_Children_d__40::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVRSimpleJSON::JSONNode__get_Children_d__40*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::JSONNode__get_Children_d__40::operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_Children_d__40::i___System__Collections__Generic__IEnumerable_1___OVRSimpleJSON__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::JSONNode__get_Children_d__40::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* OVRSimpleJSON::JSONNode__get_Children_d__40::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::JSONNode__get_Children_d__40::operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_Children_d__40::i___System__Collections__Generic__IEnumerator_1___OVRSimpleJSON__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::JSONNode__get_Children_d__40::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode__get_Children_d__40::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::JSONNode__get_Children_d__40::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OVRSimpleJSON::JSONNode__get_Children_d__40::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode__get_Children_d__40::JSONNode__get_Children_d__40() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::*)(int32_t)>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4048aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x404c534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x404c5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x404cac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42.__m__Finally2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x404ca14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                               "<>m__Finally2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42.System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404cb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                               "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x404cb7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404cbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42.System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* (
    ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::*)()>(&::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x404cbbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                               "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x404cc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_set___2__current(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_set___4__this(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                             "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::__m__Finally2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                             "<>m__Finally2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                  "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42* OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::i___System__Collections__Generic__IEnumerable_1___OVRSimpleJSON__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::i___System__Collections__Generic__IEnumerator_1___OVRSimpleJSON__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__42::JSONNode__get_DeepChildren_d__42() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Tag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNodeType (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Tag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40488c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(int32_t, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x40488c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::StringW)>(&::OVRSimpleJSON::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40488cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x40488d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Value)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x40488d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::StringW)>(&::OVRSimpleJSON::JSONNode::set_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4048918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404891c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4048924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404892c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsBoolean)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4048934;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404893c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4048944;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404894c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Inline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4048954;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(bool)>(&::OVRSimpleJSON::JSONNode::set_Inline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x404895c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4048960;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4048964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::StringW)>(&::OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40489c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40489d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40489d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* (::OVRSimpleJSON::JSONNode::*)()>(
    &::OVRSimpleJSON::JSONNode::get_Children)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x40489e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_DeepChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* (::OVRSimpleJSON::JSONNode::*)()>(
    &::OVRSimpleJSON::JSONNode::get_DeepChildren)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4048a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_DeepChildren",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4048b20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4048bac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::System::Text::StringBuilder*, int32_t, int32_t, ::OVRSimpleJSON::JSONTextMode)>(
    &::OVRSimpleJSON::JSONNode::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode_Enumerator (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Linq
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>* (::OVRSimpleJSON::JSONNode::*)()>(
        &::OVRSimpleJSON::JSONNode::get_Linq)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4048c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Linq",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode_KeyEnumerator (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Keys)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4048d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Keys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode_ValueEnumerator (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Values)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4048d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Values",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsDouble)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4048d94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(double_t)>(&::OVRSimpleJSON::JSONNode::set_AsDouble)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4048e38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4048ec0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::set_AsInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4048ef4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4048f0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(float_t)>(&::OVRSimpleJSON::JSONNode::set_AsFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4048f2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsBool)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4048f40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(bool)>(&::OVRSimpleJSON::JSONNode::set_AsBool)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4048ff8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsLong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4049070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(int64_t)>(&::OVRSimpleJSON::JSONNode::set_AsLong)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x40490a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONArray* (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x40490e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONObject* (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4049158;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x40491d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___StringW
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4049254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(double_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4049290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_double_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_double_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x40492f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(float_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4049334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_float_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x404939c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(int32_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x40493dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_int32_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4049444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(int64_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4049484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_int64_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_int64_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4049558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(bool)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4049598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_bool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4049620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::OVRSimpleJSON::JSONNode* (*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4049660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::OVRSimpleJSON::JSONNode*, ::System::Object*)>(&::OVRSimpleJSON::JSONNode::op_Equality)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x4044b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::OVRSimpleJSON::JSONNode*, ::System::Object*)>(&::OVRSimpleJSON::JSONNode::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4044cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)(::System::Object*)>(&::OVRSimpleJSON::JSONNode::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x404969c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40496a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_EscapeBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)()>(&::OVRSimpleJSON::JSONNode::get_EscapeBuilder)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x40496b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_EscapeBuilder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Escape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::OVRSimpleJSON::JSONNode::Escape)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x4049744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Escape", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ParseElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW, bool)>(&::OVRSimpleJSON::JSONNode::ParseElement)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x4049a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ParseElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW)>(&::OVRSimpleJSON::JSONNode::Parse)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x4044550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.GetContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::OVRSimpleJSON::JSONContainerType)>(&::OVRSimpleJSON::JSONNode::GetContainer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4049c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "GetContainer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONContainerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Vector2)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4049d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Vector3)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4049ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Vector4)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x404a138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Quaternion)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x404a40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Rect)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x404a6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::RectOffset*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x404a9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Vector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x404acd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Vector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x404ad34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Vector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x404ad98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Quaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x404adfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Rect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Rect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x404ae60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__RectOffset_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectOffset* (*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__RectOffset_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x404ae94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector2)>(
    &::OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x404af00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::OVRSimpleJSON::JSONNode::*)(::StringW, ::StringW)>(
    &::OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x404b040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x404ace4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector2, ::StringW, ::StringW)>(
    &::OVRSimpleJSON::JSONNode::WriteVector2)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4049da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector3)>(
    &::OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x404b118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::OVRSimpleJSON::JSONNode::*)(::StringW, ::StringW, ::StringW)>(
    &::OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x404b2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x404ad44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector3, ::StringW, ::StringW, ::StringW)>(
    &::OVRSimpleJSON::JSONNode::WriteVector3)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x4049f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector3", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector4)>(
    &::OVRSimpleJSON::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x404b3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector4", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x404ada8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector4",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector4)>(
    &::OVRSimpleJSON::JSONNode::WriteVector4)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x404a1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector4", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Quaternion)>(
    &::OVRSimpleJSON::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x404b61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadQuaternion", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x404ae0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadQuaternion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Quaternion)>(
    &::OVRSimpleJSON::JSONNode::WriteQuaternion)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x404a490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteQuaternion", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Rect)>(&::OVRSimpleJSON::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x404b84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x404ae80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Rect)>(
    &::OVRSimpleJSON::JSONNode::WriteRect)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x404a764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteRect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRectOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectOffset* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::RectOffset*)>(
    &::OVRSimpleJSON::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x404ba7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRectOffset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRectOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectOffset* (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x404aea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRectOffset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteRectOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::RectOffset*)>(
    &::OVRSimpleJSON::JSONNode::WriteRectOffset)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x404aa10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteRectOffset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadMatrix)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x404bd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadMatrix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Matrix4x4)>(
    &::OVRSimpleJSON::JSONNode::WriteMatrix)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x404bdec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteMatrix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404be98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void OVRSimpleJSON::JSONNode::setStaticF_forceASCII(bool value) {
  ::cordl_internals::setStaticField<bool, "forceASCII", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>(std::forward<bool>(value));
}
inline bool OVRSimpleJSON::JSONNode::getStaticF_forceASCII() {
  return ::cordl_internals::getStaticField<bool, "forceASCII", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_longAsString(bool value) {
  ::cordl_internals::setStaticField<bool, "longAsString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>(std::forward<bool>(value));
}
inline bool OVRSimpleJSON::JSONNode::getStaticF_longAsString() {
  return ::cordl_internals::getStaticField<bool, "longAsString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_m_EscapeBuilder(::System::Text::StringBuilder* value) {
  ::cordl_internals::setStaticField<::System::Text::StringBuilder*, "m_EscapeBuilder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>(
      std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* OVRSimpleJSON::JSONNode::getStaticF_m_EscapeBuilder() {
  return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "m_EscapeBuilder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_VectorContainerType(::OVRSimpleJSON::JSONContainerType value) {
  ::cordl_internals::setStaticField<::OVRSimpleJSON::JSONContainerType, "VectorContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>(
      std::forward<::OVRSimpleJSON::JSONContainerType>(value));
}
inline ::OVRSimpleJSON::JSONContainerType OVRSimpleJSON::JSONNode::getStaticF_VectorContainerType() {
  return ::cordl_internals::getStaticField<::OVRSimpleJSON::JSONContainerType, "VectorContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_QuaternionContainerType(::OVRSimpleJSON::JSONContainerType value) {
  ::cordl_internals::setStaticField<::OVRSimpleJSON::JSONContainerType, "QuaternionContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>(
      std::forward<::OVRSimpleJSON::JSONContainerType>(value));
}
inline ::OVRSimpleJSON::JSONContainerType OVRSimpleJSON::JSONNode::getStaticF_QuaternionContainerType() {
  return ::cordl_internals::getStaticField<::OVRSimpleJSON::JSONContainerType, "QuaternionContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_RectContainerType(::OVRSimpleJSON::JSONContainerType value) {
  ::cordl_internals::setStaticField<::OVRSimpleJSON::JSONContainerType, "RectContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>(
      std::forward<::OVRSimpleJSON::JSONContainerType>(value));
}
inline ::OVRSimpleJSON::JSONContainerType OVRSimpleJSON::JSONNode::getStaticF_RectContainerType() {
  return ::cordl_internals::getStaticField<::OVRSimpleJSON::JSONContainerType, "RectContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get>();
}
inline ::OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONNode::get_Tag() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNodeType, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::get_Item(int32_t aIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline void OVRSimpleJSON::JSONNode::set_Item(int32_t aIndex, ::OVRSimpleJSON::JSONNode* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aIndex, value);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::get_Item(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aKey);
}
inline void OVRSimpleJSON::JSONNode::set_Item(::StringW aKey, ::OVRSimpleJSON::JSONNode* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, value);
}
inline ::StringW OVRSimpleJSON::JSONNode::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_Value(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t OVRSimpleJSON::JSONNode::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsNumber() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsBoolean() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsNull() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_Inline() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_Inline(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void OVRSimpleJSON::JSONNode::Add(::StringW aKey, ::OVRSimpleJSON::JSONNode* aItem) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, aItem);
}
inline void OVRSimpleJSON::JSONNode::Add(::OVRSimpleJSON::JSONNode* aItem) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aItem);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Remove(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aKey);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Remove(int32_t aIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Remove(::OVRSimpleJSON::JSONNode* aNode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aNode);
}
inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* OVRSimpleJSON::JSONNode::get_Children() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* OVRSimpleJSON::JSONNode::get_DeepChildren() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_DeepChildren",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONNode::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONNode::ToString(int32_t aIndent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, aIndent);
}
inline void OVRSimpleJSON::JSONNode::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline ::OVRSimpleJSON::JSONNode_Enumerator OVRSimpleJSON::JSONNode::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_Enumerator, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>* OVRSimpleJSON::JSONNode::get_Linq() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Linq",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*, false>(
      this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_KeyEnumerator OVRSimpleJSON::JSONNode::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Keys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_KeyEnumerator, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_ValueEnumerator OVRSimpleJSON::JSONNode::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Values",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_ValueEnumerator, false>(this, ___internal_method);
}
inline double_t OVRSimpleJSON::JSONNode::get_AsDouble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsDouble(double_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t OVRSimpleJSON::JSONNode::get_AsInt() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsInt(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t OVRSimpleJSON::JSONNode::get_AsFloat() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsFloat(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool OVRSimpleJSON::JSONNode::get_AsBool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsBool(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t OVRSimpleJSON::JSONNode::get_AsLong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsLong(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::OVRSimpleJSON::JSONArray* OVRSimpleJSON::JSONNode::get_AsArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONArray*, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONObject* OVRSimpleJSON::JSONNode::get_AsObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONObject*, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, s);
}
inline ::StringW OVRSimpleJSON::JSONNode::op_Implicit___StringW(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(double_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline double_t OVRSimpleJSON::JSONNode::op_Implicit_double_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(float_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline float_t OVRSimpleJSON::JSONNode::op_Implicit_float_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline int32_t OVRSimpleJSON::JSONNode::op_Implicit_int32_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(int64_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline int64_t OVRSimpleJSON::JSONNode::op_Implicit_int64_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(bool b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, b);
}
inline bool OVRSimpleJSON::JSONNode::op_Implicit_bool(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> aKeyValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aKeyValue);
}
inline bool OVRSimpleJSON::JSONNode::op_Equality(::OVRSimpleJSON::JSONNode* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool OVRSimpleJSON::JSONNode::op_Inequality(::OVRSimpleJSON::JSONNode* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool OVRSimpleJSON::JSONNode::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t OVRSimpleJSON::JSONNode::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* OVRSimpleJSON::JSONNode::get_EscapeBuilder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_EscapeBuilder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONNode::Escape(::StringW aText) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Escape", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, aText);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::ParseElement(::StringW token, bool quoted) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ParseElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, token, quoted);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Parse(::StringW aJSON) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aJSON);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::GetContainer(::OVRSimpleJSON::JSONContainerType aType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "GetContainer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONContainerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aType);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector2 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aVec);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector3 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aVec);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector4 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aVec);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Quaternion aRot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aRot);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Rect aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aRect);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::RectOffset* aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aRect);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector2(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector3(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector4 OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector4(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Quaternion OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Quaternion(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Rect OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Rect(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::RectOffset* OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__RectOffset_(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2(::UnityEngine::Vector2 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2(::StringW aXName, ::StringW aYName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, aXName, aYName);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteVector2(::UnityEngine::Vector2 aVec, ::StringW aXName, ::StringW aYName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aVec, aXName, aYName);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3(::UnityEngine::Vector3 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3(::StringW aXName, ::StringW aYName, ::StringW aZName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, aXName, aYName, aZName);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteVector3(::UnityEngine::Vector3 aVec, ::StringW aXName, ::StringW aYName, ::StringW aZName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aVec, aXName, aYName, aZName);
}
inline ::UnityEngine::Vector4 OVRSimpleJSON::JSONNode::ReadVector4(::UnityEngine::Vector4 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector4 OVRSimpleJSON::JSONNode::ReadVector4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector4",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteVector4(::UnityEngine::Vector4 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aVec);
}
inline ::UnityEngine::Quaternion OVRSimpleJSON::JSONNode::ReadQuaternion(::UnityEngine::Quaternion aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadQuaternion", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Quaternion OVRSimpleJSON::JSONNode::ReadQuaternion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadQuaternion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteQuaternion(::UnityEngine::Quaternion aRot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteQuaternion", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aRot);
}
inline ::UnityEngine::Rect OVRSimpleJSON::JSONNode::ReadRect(::UnityEngine::Rect aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Rect OVRSimpleJSON::JSONNode::ReadRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteRect(::UnityEngine::Rect aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteRect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aRect);
}
inline ::UnityEngine::RectOffset* OVRSimpleJSON::JSONNode::ReadRectOffset(::UnityEngine::RectOffset* aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRectOffset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::RectOffset* OVRSimpleJSON::JSONNode::ReadRectOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRectOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteRectOffset(::UnityEngine::RectOffset* aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteRectOffset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aRect);
}
inline ::UnityEngine::Matrix4x4 OVRSimpleJSON::JSONNode::ReadMatrix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadMatrix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteMatrix(::UnityEngine::Matrix4x4 aMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteMatrix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aMatrix);
}
inline void OVRSimpleJSON::JSONNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVRSimpleJSON::JSONNode*>());
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode::JSONNode() {}
