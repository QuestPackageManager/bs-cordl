#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/JSONNode.hpp"
#include "HoudiniEngineUnity/zzzz__JSONContainerType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONArray_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONContainerType_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNodeType_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONTextMode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RectOffset_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__JSONNode__Enumerator__Type::__JSONNode__Enumerator__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__JSONNode__Enumerator__Type::__JSONNode__Enumerator__Type() {}
constexpr ::GlobalNamespace::__JSONNode__Enumerator__Type GlobalNamespace::__JSONNode__Enumerator__Type::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__JSONNode__Enumerator__Type GlobalNamespace::__JSONNode__Enumerator__Type::Array{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__JSONNode__Enumerator__Type GlobalNamespace::__JSONNode__Enumerator__Type::Object{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__Enumerator.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__JSONNode__Enumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__Enumerator::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a3653c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__Enumerator>::get(),
                                                                               "get_IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__Enumerator::*)(
    ::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>)>(&::HoudiniEngineUnity::__JSONNode__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3a3654c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__Enumerator::*)(
    ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>)>(&::HoudiniEngineUnity::__JSONNode__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3a36578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> (
    ::HoudiniEngineUnity::__JSONNode__Enumerator::*)()>(&::HoudiniEngineUnity::__JSONNode__Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3a3659c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__Enumerator>::get(),
                                                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__JSONNode__Enumerator::*)()>(&::HoudiniEngineUnity::__JSONNode__Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a3666c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__Enumerator>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool HoudiniEngineUnity::__JSONNode__Enumerator::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__Enumerator>::get(), "get_IsValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__JSONNode__Enumerator::_ctor(::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*> aArrayEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aArrayEnum);
}
inline void HoudiniEngineUnity::__JSONNode__Enumerator::_ctor(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> aDictEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aDictEnum);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> HoudiniEngineUnity::__JSONNode__Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__Enumerator>::get(), "get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__JSONNode__Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__Enumerator>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::__JSONNode__Enumerator__Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Object", ty:
// "::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW,::HoudiniEngineUnity::JSONNode*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Array", ty:
// "::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__JSONNode__Enumerator::__JSONNode__Enumerator(::GlobalNamespace::__JSONNode__Enumerator__Type type,
                                                                               ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> m_Object,
                                                                               ::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*> m_Array) noexcept {
  this->type = type;
  this->m_Object = m_Object;
  this->m_Array = m_Array;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__JSONNode__Enumerator::__JSONNode__Enumerator() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__ValueEnumerator::*)(
    ::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>)>(&::HoudiniEngineUnity::__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a36700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__ValueEnumerator::*)(
    ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>)>(&::HoudiniEngineUnity::__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3a36740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__ValueEnumerator::*)(::HoudiniEngineUnity::__JSONNode__Enumerator)>(
    &::HoudiniEngineUnity::__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a367b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__JSONNode__Enumerator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__ValueEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::__JSONNode__ValueEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__ValueEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3a367c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(),
                                                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__ValueEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__JSONNode__ValueEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__ValueEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a36808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__ValueEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__JSONNode__ValueEnumerator (::HoudiniEngineUnity::__JSONNode__ValueEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__ValueEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a3680c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::__JSONNode__ValueEnumerator::_ctor(::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*> aArrayEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aArrayEnum);
}
inline void HoudiniEngineUnity::__JSONNode__ValueEnumerator::_ctor(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> aDictEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aDictEnum);
}
inline void HoudiniEngineUnity::__JSONNode__ValueEnumerator::_ctor(::HoudiniEngineUnity::__JSONNode__Enumerator aEnumerator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__JSONNode__Enumerator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aEnumerator);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::__JSONNode__ValueEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__JSONNode__ValueEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::__JSONNode__ValueEnumerator HoudiniEngineUnity::__JSONNode__ValueEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__ValueEnumerator>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__JSONNode__ValueEnumerator, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::HoudiniEngineUnity::__JSONNode__Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__JSONNode__ValueEnumerator::__JSONNode__ValueEnumerator(::HoudiniEngineUnity::__JSONNode__Enumerator m_Enumerator) noexcept {
  this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__JSONNode__ValueEnumerator::__JSONNode__ValueEnumerator() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__KeyEnumerator::*)(
    ::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>)>(&::HoudiniEngineUnity::__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a3681c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__KeyEnumerator::*)(
    ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>)>(&::HoudiniEngineUnity::__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3a3685c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__KeyEnumerator::*)(::HoudiniEngineUnity::__JSONNode__Enumerator)>(
    &::HoudiniEngineUnity::__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a368cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__JSONNode__Enumerator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__KeyEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::__JSONNode__KeyEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__KeyEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3a368e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(),
                                                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__KeyEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__JSONNode__KeyEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__KeyEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a3691c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__KeyEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__JSONNode__KeyEnumerator (::HoudiniEngineUnity::__JSONNode__KeyEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__KeyEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a36920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::__JSONNode__KeyEnumerator::_ctor(::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*> aArrayEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::HoudiniEngineUnity::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aArrayEnum);
}
inline void HoudiniEngineUnity::__JSONNode__KeyEnumerator::_ctor(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> aDictEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aDictEnum);
}
inline void HoudiniEngineUnity::__JSONNode__KeyEnumerator::_ctor(::HoudiniEngineUnity::__JSONNode__Enumerator aEnumerator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__JSONNode__Enumerator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aEnumerator);
}
inline ::StringW HoudiniEngineUnity::__JSONNode__KeyEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__JSONNode__KeyEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::__JSONNode__KeyEnumerator HoudiniEngineUnity::__JSONNode__KeyEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__KeyEnumerator>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__JSONNode__KeyEnumerator, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::HoudiniEngineUnity::__JSONNode__Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__JSONNode__KeyEnumerator::__JSONNode__KeyEnumerator(::HoudiniEngineUnity::__JSONNode__Enumerator m_Enumerator) noexcept {
  this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__JSONNode__KeyEnumerator::__JSONNode__KeyEnumerator() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__LinqEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__LinqEnumerator::*)(::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::__JSONNode__LinqEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3a32b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__LinqEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> (
    ::HoudiniEngineUnity::__JSONNode__LinqEnumerator::*)()>(&::HoudiniEngineUnity::__JSONNode__LinqEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a36930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__LinqEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HoudiniEngineUnity::__JSONNode__LinqEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__LinqEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3a36938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__LinqEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__JSONNode__LinqEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__LinqEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3699c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__LinqEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__LinqEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__LinqEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a369a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__LinqEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>* (::HoudiniEngineUnity::__JSONNode__LinqEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__LinqEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a369b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__LinqEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode__LinqEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__LinqEnumerator::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3a36a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode__LinqEnumerator.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::HoudiniEngineUnity::__JSONNode__LinqEnumerator::*)()>(
    &::HoudiniEngineUnity::__JSONNode__LinqEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a36a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::HoudiniEngineUnity::JSONNode*>>"
constexpr HoudiniEngineUnity::__JSONNode__LinqEnumerator::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::HoudiniEngineUnity::JSONNode*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*
HoudiniEngineUnity::__JSONNode__LinqEnumerator::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___HoudiniEngineUnity__JSONNode___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HoudiniEngineUnity::__JSONNode__LinqEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HoudiniEngineUnity::__JSONNode__LinqEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HoudiniEngineUnity::__JSONNode__LinqEnumerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HoudiniEngineUnity::__JSONNode__LinqEnumerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::HoudiniEngineUnity::JSONNode*>>"
constexpr HoudiniEngineUnity::__JSONNode__LinqEnumerator::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::HoudiniEngineUnity::JSONNode*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*
HoudiniEngineUnity::__JSONNode__LinqEnumerator::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___HoudiniEngineUnity__JSONNode___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr HoudiniEngineUnity::__JSONNode__LinqEnumerator::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* HoudiniEngineUnity::__JSONNode__LinqEnumerator::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::HoudiniEngineUnity::JSONNode*& HoudiniEngineUnity::__JSONNode__LinqEnumerator::__cordl_internal_get_m_Node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Node;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& HoudiniEngineUnity::__JSONNode__LinqEnumerator::__cordl_internal_get_m_Node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Node;
}
constexpr void HoudiniEngineUnity::__JSONNode__LinqEnumerator::__cordl_internal_set_m_Node(::HoudiniEngineUnity::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Node)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::__JSONNode__Enumerator& HoudiniEngineUnity::__JSONNode__LinqEnumerator::__cordl_internal_get_m_Enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enumerator;
}
constexpr ::HoudiniEngineUnity::__JSONNode__Enumerator const& HoudiniEngineUnity::__JSONNode__LinqEnumerator::__cordl_internal_get_m_Enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enumerator;
}
constexpr void HoudiniEngineUnity::__JSONNode__LinqEnumerator::__cordl_internal_set_m_Enumerator(::HoudiniEngineUnity::__JSONNode__Enumerator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Enumerator = value;
}
inline ::HoudiniEngineUnity::__JSONNode__LinqEnumerator* HoudiniEngineUnity::__JSONNode__LinqEnumerator::New_ctor(::HoudiniEngineUnity::JSONNode* aNode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>(aNode));
}
inline void HoudiniEngineUnity::__JSONNode__LinqEnumerator::_ctor(::HoudiniEngineUnity::JSONNode* aNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aNode);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> HoudiniEngineUnity::__JSONNode__LinqEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>, false>(this, ___internal_method);
}
inline ::System::Object* HoudiniEngineUnity::__JSONNode__LinqEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__JSONNode__LinqEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__JSONNode__LinqEnumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*
HoudiniEngineUnity::__JSONNode__LinqEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*, false>(
      this, ___internal_method);
}
inline void HoudiniEngineUnity::__JSONNode__LinqEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* HoudiniEngineUnity::__JSONNode__LinqEnumerator::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode__LinqEnumerator*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__JSONNode__LinqEnumerator::__JSONNode__LinqEnumerator() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_Children_d__40._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode___get_Children_d__40::*)(int32_t)>(
    &::HoudiniEngineUnity::__JSONNode___get_Children_d__40::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3a328e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_Children_d__40.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode___get_Children_d__40::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a36ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_Children_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__JSONNode___get_Children_d__40::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_Children_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a36adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_Children_d__40.System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::__JSONNode___get_Children_d__40::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a36af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                                               "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_Children_d__40.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode___get_Children_d__40::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a36afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_Children_d__40.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HoudiniEngineUnity::__JSONNode___get_Children_d__40::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a36b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_Children_d__40.System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* (::HoudiniEngineUnity::__JSONNode___get_Children_d__40::*)()>(
        &::HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3a36b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                                               "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_Children_d__40.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::HoudiniEngineUnity::__JSONNode___get_Children_d__40::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a36bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>"
constexpr HoudiniEngineUnity::__JSONNode___get_Children_d__40::operator ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*
HoudiniEngineUnity::__JSONNode___get_Children_d__40::i___System__Collections__Generic__IEnumerable_1___HoudiniEngineUnity__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr HoudiniEngineUnity::__JSONNode___get_Children_d__40::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* HoudiniEngineUnity::__JSONNode___get_Children_d__40::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>"
constexpr HoudiniEngineUnity::__JSONNode___get_Children_d__40::operator ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*
HoudiniEngineUnity::__JSONNode___get_Children_d__40::i___System__Collections__Generic__IEnumerator_1___HoudiniEngineUnity__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HoudiniEngineUnity::__JSONNode___get_Children_d__40::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HoudiniEngineUnity::__JSONNode___get_Children_d__40::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HoudiniEngineUnity::__JSONNode___get_Children_d__40::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HoudiniEngineUnity::__JSONNode___get_Children_d__40::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& HoudiniEngineUnity::__JSONNode___get_Children_d__40::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HoudiniEngineUnity::__JSONNode___get_Children_d__40::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HoudiniEngineUnity::__JSONNode___get_Children_d__40::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::HoudiniEngineUnity::JSONNode*& HoudiniEngineUnity::__JSONNode___get_Children_d__40::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& HoudiniEngineUnity::__JSONNode___get_Children_d__40::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HoudiniEngineUnity::__JSONNode___get_Children_d__40::__cordl_internal_set___2__current(::HoudiniEngineUnity::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::__JSONNode___get_Children_d__40::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& HoudiniEngineUnity::__JSONNode___get_Children_d__40::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void HoudiniEngineUnity::__JSONNode___get_Children_d__40::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
inline ::HoudiniEngineUnity::__JSONNode___get_Children_d__40* HoudiniEngineUnity::__JSONNode___get_Children_d__40::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>(__1__state));
}
inline void HoudiniEngineUnity::__JSONNode___get_Children_d__40::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__JSONNode___get_Children_d__40::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                                             "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*
HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* HoudiniEngineUnity::__JSONNode___get_Children_d__40::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_Children_d__40*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__JSONNode___get_Children_d__40::__JSONNode___get_Children_d__40() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::*)(int32_t)>(
    &::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3a32984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3a36bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x3a36c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3a37160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(), "<>m__Finally1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42.__m__Finally2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3a370b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(), "<>m__Finally2",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42.System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a37210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
        "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a37218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a37250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42.System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* (::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::*)()>(
        &::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a37258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
        "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a372f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>"
constexpr HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::operator ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*
HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::i___System__Collections__Generic__IEnumerable_1___HoudiniEngineUnity__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>"
constexpr HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::operator ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*
HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::i___System__Collections__Generic__IEnumerator_1___HoudiniEngineUnity__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::HoudiniEngineUnity::JSONNode*& HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_set___2__current(::HoudiniEngineUnity::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::HoudiniEngineUnity::JSONNode*& HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_set___4__this(::HoudiniEngineUnity::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*& HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*> const&
HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*& HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*> const&
HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42* HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>(__1__state));
}
inline void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__m__Finally2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "<>m__Finally2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*
HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__JSONNode___get_DeepChildren_d__42::__JSONNode___get_DeepChildren_d__42() {}
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_Tag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNodeType (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_Tag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(int32_t)>(
    &::HoudiniEngineUnity::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a32758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(int32_t, ::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a32760;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(::StringW)>(
    &::HoudiniEngineUnity::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a32764;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(::StringW, ::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a3276c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_Value)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a32770;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.set_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(::StringW)>(&::HoudiniEngineUnity::JSONNode::set_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a327b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a327b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_IsNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_IsNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a327bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_IsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_IsString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a327c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_IsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_IsBoolean)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a327cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_IsNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a327d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_IsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_IsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a327dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_IsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_IsObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a327e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_Inline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a327ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.set_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(bool)>(&::HoudiniEngineUnity::JSONNode::set_Inline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a327f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(::StringW, ::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONNode::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a327f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(::HoudiniEngineUnity::JSONNode*)>(&::HoudiniEngineUnity::JSONNode::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3a327fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(::StringW)>(
    &::HoudiniEngineUnity::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a32860;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(int32_t)>(
    &::HoudiniEngineUnity::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a32868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a32870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_Children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_Children)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3a32878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_DeepChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_DeepChildren)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3a32914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "get_DeepChildren",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3a329b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::JSONNode::*)(int32_t)>(&::HoudiniEngineUnity::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3a32a44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(
    ::System::Text::StringBuilder*, int32_t, int32_t, ::HoudiniEngineUnity::JSONTextMode)>(&::HoudiniEngineUnity::JSONNode::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__JSONNode__Enumerator (::HoudiniEngineUnity::JSONNode::*)()>(
    &::HoudiniEngineUnity::JSONNode::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_Linq
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>* (::HoudiniEngineUnity::JSONNode::*)()>(
        &::HoudiniEngineUnity::JSONNode::get_Linq)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a32adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "get_Linq",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__JSONNode__KeyEnumerator (::HoudiniEngineUnity::JSONNode::*)()>(
    &::HoudiniEngineUnity::JSONNode::get_Keys)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3a32bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "get_Keys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__JSONNode__ValueEnumerator (::HoudiniEngineUnity::JSONNode::*)()>(
    &::HoudiniEngineUnity::JSONNode::get_Values)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3a32bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "get_Values",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_AsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_AsDouble)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3a32c2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.set_AsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(double_t)>(&::HoudiniEngineUnity::JSONNode::set_AsDouble)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3a32cd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_AsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_AsInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3a32d58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.set_AsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(int32_t)>(&::HoudiniEngineUnity::JSONNode::set_AsInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a32d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_AsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_AsFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a32da4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.set_AsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(float_t)>(&::HoudiniEngineUnity::JSONNode::set_AsFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a32dc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_AsBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_AsBool)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3a32dd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.set_AsBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(bool)>(&::HoudiniEngineUnity::JSONNode::set_AsBool)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3a32e90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_AsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::get_AsLong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3a32f08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.set_AsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)(int64_t)>(&::HoudiniEngineUnity::JSONNode::set_AsLong)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3a32f3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_AsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONArray* (::HoudiniEngineUnity::JSONNode::*)()>(
    &::HoudiniEngineUnity::JSONNode::get_AsArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3a32f78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_AsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONObject* (::HoudiniEngineUnity::JSONNode::*)()>(
    &::HoudiniEngineUnity::JSONNode::get_AsObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3a32ff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::StringW)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a33068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___StringW
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::HoudiniEngineUnity::JSONNode*)>(&::HoudiniEngineUnity::JSONNode::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3a30dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(double_t)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3a3325c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit_double_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::HoudiniEngineUnity::JSONNode*)>(&::HoudiniEngineUnity::JSONNode::op_Implicit_double_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a332e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(float_t)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3a33328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit_float_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::HoudiniEngineUnity::JSONNode*)>(&::HoudiniEngineUnity::JSONNode::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a33390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(int32_t)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3a333d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit_int32_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::HoudiniEngineUnity::JSONNode*)>(&::HoudiniEngineUnity::JSONNode::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a33438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(int64_t)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3a33478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit_int64_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::HoudiniEngineUnity::JSONNode*)>(&::HoudiniEngineUnity::JSONNode::op_Implicit_int64_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a3354c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(bool)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a3358c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit_bool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::JSONNode*)>(&::HoudiniEngineUnity::JSONNode::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a33614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::JSONNode* (*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>)>(
        &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3a33654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::JSONNode*, ::System::Object*)>(&::HoudiniEngineUnity::JSONNode::op_Equality)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3a330ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::JSONNode*, ::System::Object*)>(&::HoudiniEngineUnity::JSONNode::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a30dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONNode::*)(::System::Object*)>(&::HoudiniEngineUnity::JSONNode::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a33690;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3369c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.get_EscapeBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)()>(&::HoudiniEngineUnity::JSONNode::get_EscapeBuilder)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a336a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "get_EscapeBuilder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.Escape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::HoudiniEngineUnity::JSONNode::Escape)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x3a33738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "Escape", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ParseElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::StringW, bool)>(&::HoudiniEngineUnity::JSONNode::ParseElement)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3a339fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ParseElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::StringW)>(&::HoudiniEngineUnity::JSONNode::Parse)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x3a33c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.GetContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::HoudiniEngineUnity::JSONContainerType)>(
    &::HoudiniEngineUnity::JSONNode::GetContainer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3a34324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "GetContainer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONContainerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::UnityEngine::Vector2)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a343a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::UnityEngine::Vector3)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3a34570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::UnityEngine::Vector4)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3a347d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::UnityEngine::Quaternion)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3a34aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::UnityEngine::Rect)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3a34d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___HoudiniEngineUnity__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (*)(::UnityEngine::RectOffset*)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a35050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___UnityEngine__Vector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a35370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___UnityEngine__Vector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a353d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___UnityEngine__Vector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a35434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___UnityEngine__Quaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a35498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___UnityEngine__Rect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__Rect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a354fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.op_Implicit___UnityEngine__RectOffset_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectOffset* (*)(::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__RectOffset_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a35530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Vector2)>(
    &::HoudiniEngineUnity::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3a3559c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::HoudiniEngineUnity::JSONNode::*)(::StringW, ::StringW)>(
    &::HoudiniEngineUnity::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3a356dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3a35380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.WriteVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Vector2, ::StringW, ::StringW)>(
    &::HoudiniEngineUnity::JSONNode::WriteVector2)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3a34440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteVector2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Vector3)>(
    &::HoudiniEngineUnity::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3a357b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector3", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::JSONNode::*)(::StringW, ::StringW, ::StringW)>(
    &::HoudiniEngineUnity::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3a35970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3a353e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector3",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.WriteVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Vector3, ::StringW, ::StringW, ::StringW)>(&::HoudiniEngineUnity::JSONNode::WriteVector3)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3a34634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteVector3", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Vector4)>(
    &::HoudiniEngineUnity::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x3a35a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3a35444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector4",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.WriteVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Vector4)>(
    &::HoudiniEngineUnity::JSONNode::WriteVector4)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x3a34858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteVector4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Quaternion)>(
    &::HoudiniEngineUnity::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x3a35cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadQuaternion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3a354a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadQuaternion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.WriteQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Quaternion)>(
    &::HoudiniEngineUnity::JSONNode::WriteQuaternion)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x3a34b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteQuaternion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Rect)>(
    &::HoudiniEngineUnity::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x3a35ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadRect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a3551c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadRect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.WriteRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Rect)>(
    &::HoudiniEngineUnity::JSONNode::WriteRect)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x3a34e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteRect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadRectOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectOffset* (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::RectOffset*)>(
    &::HoudiniEngineUnity::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x3a36118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadRectOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadRectOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectOffset* (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a35540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadRectOffset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.WriteRectOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::RectOffset*)>(
    &::HoudiniEngineUnity::JSONNode::WriteRectOffset)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x3a350ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteRectOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.ReadMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::ReadMatrix)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3a363b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadMatrix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode.WriteMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONNode::*)(::UnityEngine::Matrix4x4)>(
    &::HoudiniEngineUnity::JSONNode::WriteMatrix)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3a36488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteMatrix", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONNode::*)()>(&::HoudiniEngineUnity::JSONNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a36534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::JSONNode::setStaticF_forceASCII(bool value) {
  ::cordl_internals::setStaticField<bool, "forceASCII", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>(std::forward<bool>(value));
}
inline bool HoudiniEngineUnity::JSONNode::getStaticF_forceASCII() {
  return ::cordl_internals::getStaticField<bool, "forceASCII", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>();
}
inline void HoudiniEngineUnity::JSONNode::setStaticF_longAsString(bool value) {
  ::cordl_internals::setStaticField<bool, "longAsString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>(std::forward<bool>(value));
}
inline bool HoudiniEngineUnity::JSONNode::getStaticF_longAsString() {
  return ::cordl_internals::getStaticField<bool, "longAsString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>();
}
inline void HoudiniEngineUnity::JSONNode::setStaticF_m_EscapeBuilder(::System::Text::StringBuilder* value) {
  ::cordl_internals::setStaticField<::System::Text::StringBuilder*, "m_EscapeBuilder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>(
      std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* HoudiniEngineUnity::JSONNode::getStaticF_m_EscapeBuilder() {
  return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "m_EscapeBuilder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>();
}
inline void HoudiniEngineUnity::JSONNode::setStaticF_VectorContainerType(::HoudiniEngineUnity::JSONContainerType value) {
  ::cordl_internals::setStaticField<::HoudiniEngineUnity::JSONContainerType, "VectorContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>(
      std::forward<::HoudiniEngineUnity::JSONContainerType>(value));
}
inline ::HoudiniEngineUnity::JSONContainerType HoudiniEngineUnity::JSONNode::getStaticF_VectorContainerType() {
  return ::cordl_internals::getStaticField<::HoudiniEngineUnity::JSONContainerType, "VectorContainerType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>();
}
inline void HoudiniEngineUnity::JSONNode::setStaticF_QuaternionContainerType(::HoudiniEngineUnity::JSONContainerType value) {
  ::cordl_internals::setStaticField<::HoudiniEngineUnity::JSONContainerType, "QuaternionContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>(
      std::forward<::HoudiniEngineUnity::JSONContainerType>(value));
}
inline ::HoudiniEngineUnity::JSONContainerType HoudiniEngineUnity::JSONNode::getStaticF_QuaternionContainerType() {
  return ::cordl_internals::getStaticField<::HoudiniEngineUnity::JSONContainerType, "QuaternionContainerType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>();
}
inline void HoudiniEngineUnity::JSONNode::setStaticF_RectContainerType(::HoudiniEngineUnity::JSONContainerType value) {
  ::cordl_internals::setStaticField<::HoudiniEngineUnity::JSONContainerType, "RectContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>(
      std::forward<::HoudiniEngineUnity::JSONContainerType>(value));
}
inline ::HoudiniEngineUnity::JSONContainerType HoudiniEngineUnity::JSONNode::getStaticF_RectContainerType() {
  return ::cordl_internals::getStaticField<::HoudiniEngineUnity::JSONContainerType, "RectContainerType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get>();
}
inline ::HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONNode::get_Tag() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNodeType, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::get_Item(int32_t aIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline void HoudiniEngineUnity::JSONNode::set_Item(int32_t aIndex, ::HoudiniEngineUnity::JSONNode* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aIndex, value);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::get_Item(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aKey);
}
inline void HoudiniEngineUnity::JSONNode::set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, value);
}
inline ::StringW HoudiniEngineUnity::JSONNode::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::JSONNode::set_Value(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t HoudiniEngineUnity::JSONNode::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::JSONNode::get_IsNumber() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::JSONNode::get_IsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::JSONNode::get_IsBoolean() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::JSONNode::get_IsNull() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::JSONNode::get_IsArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::JSONNode::get_IsObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::JSONNode::get_Inline() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::JSONNode::set_Inline(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HoudiniEngineUnity::JSONNode::Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, aItem);
}
inline void HoudiniEngineUnity::JSONNode::Add(::HoudiniEngineUnity::JSONNode* aItem) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aItem);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::Remove(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aKey);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::Remove(int32_t aIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::Remove(::HoudiniEngineUnity::JSONNode* aNode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aNode);
}
inline ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* HoudiniEngineUnity::JSONNode::get_Children() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* HoudiniEngineUnity::JSONNode::get_DeepChildren() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "get_DeepChildren",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::JSONNode::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::JSONNode::ToString(int32_t aIndent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, aIndent);
}
inline void HoudiniEngineUnity::JSONNode::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline ::HoudiniEngineUnity::__JSONNode__Enumerator HoudiniEngineUnity::JSONNode::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__JSONNode__Enumerator, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>* HoudiniEngineUnity::JSONNode::get_Linq() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "get_Linq",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>*, false>(
      this, ___internal_method);
}
inline ::HoudiniEngineUnity::__JSONNode__KeyEnumerator HoudiniEngineUnity::JSONNode::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "get_Keys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__JSONNode__KeyEnumerator, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::__JSONNode__ValueEnumerator HoudiniEngineUnity::JSONNode::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "get_Values",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__JSONNode__ValueEnumerator, false>(this, ___internal_method);
}
inline double_t HoudiniEngineUnity::JSONNode::get_AsDouble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::JSONNode::set_AsDouble(double_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t HoudiniEngineUnity::JSONNode::get_AsInt() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::JSONNode::set_AsInt(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t HoudiniEngineUnity::JSONNode::get_AsFloat() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::JSONNode::set_AsFloat(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::JSONNode::get_AsBool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::JSONNode::set_AsBool(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t HoudiniEngineUnity::JSONNode::get_AsLong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::JSONNode::set_AsLong(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::JSONArray* HoudiniEngineUnity::JSONNode::get_AsArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONArray*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONObject* HoudiniEngineUnity::JSONNode::get_AsObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONObject*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, s);
}
inline ::StringW HoudiniEngineUnity::JSONNode::op_Implicit___StringW(::HoudiniEngineUnity::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, d);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(double_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline double_t HoudiniEngineUnity::JSONNode::op_Implicit_double_t(::HoudiniEngineUnity::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, d);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(float_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline float_t HoudiniEngineUnity::JSONNode::op_Implicit_float_t(::HoudiniEngineUnity::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline int32_t HoudiniEngineUnity::JSONNode::op_Implicit_int32_t(::HoudiniEngineUnity::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(int64_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline int64_t HoudiniEngineUnity::JSONNode::op_Implicit_int64_t(::HoudiniEngineUnity::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, d);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(bool b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, b);
}
inline bool HoudiniEngineUnity::JSONNode::op_Implicit_bool(::HoudiniEngineUnity::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d);
}
inline ::HoudiniEngineUnity::JSONNode*
HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> aKeyValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, aKeyValue);
}
inline bool HoudiniEngineUnity::JSONNode::op_Equality(::HoudiniEngineUnity::JSONNode* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool HoudiniEngineUnity::JSONNode::op_Inequality(::HoudiniEngineUnity::JSONNode* a, ::System::Object* b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool HoudiniEngineUnity::JSONNode::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t HoudiniEngineUnity::JSONNode::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* HoudiniEngineUnity::JSONNode::get_EscapeBuilder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "get_EscapeBuilder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::JSONNode::Escape(::StringW aText) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "Escape", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, aText);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::ParseElement(::StringW token, bool quoted) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ParseElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, token, quoted);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::Parse(::StringW aJSON) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, aJSON);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::GetContainer(::HoudiniEngineUnity::JSONContainerType aType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "GetContainer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONContainerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, aType);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Vector2 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, aVec);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Vector3 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, aVec);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Vector4 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, aVec);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Quaternion aRot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, aRot);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::Rect aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, aRect);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::op_Implicit___HoudiniEngineUnity__JSONNode_(::UnityEngine::RectOffset* aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(nullptr, ___internal_method, aRect);
}
inline ::UnityEngine::Vector2 HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__Vector2(::HoudiniEngineUnity::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__Vector3(::HoudiniEngineUnity::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector4 HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__Vector4(::HoudiniEngineUnity::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Quaternion HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__Quaternion(::HoudiniEngineUnity::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Rect HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__Rect(::HoudiniEngineUnity::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::RectOffset* HoudiniEngineUnity::JSONNode::op_Implicit___UnityEngine__RectOffset_(::HoudiniEngineUnity::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector2 HoudiniEngineUnity::JSONNode::ReadVector2(::UnityEngine::Vector2 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector2 HoudiniEngineUnity::JSONNode::ReadVector2(::StringW aXName, ::StringW aYName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, aXName, aYName);
}
inline ::UnityEngine::Vector2 HoudiniEngineUnity::JSONNode::ReadVector2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
/// @param aXName: ::StringW (default: u"x")
/// @param aYName: ::StringW (default: u"y")
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::WriteVector2(::UnityEngine::Vector2 aVec, ::StringW aXName, ::StringW aYName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteVector2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aVec, aXName, aYName);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::JSONNode::ReadVector3(::UnityEngine::Vector3 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector3", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::JSONNode::ReadVector3(::StringW aXName, ::StringW aYName, ::StringW aZName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, aXName, aYName, aZName);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::JSONNode::ReadVector3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector3",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
/// @param aXName: ::StringW (default: u"x")
/// @param aYName: ::StringW (default: u"y")
/// @param aZName: ::StringW (default: u"z")
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::WriteVector3(::UnityEngine::Vector3 aVec, ::StringW aXName, ::StringW aYName, ::StringW aZName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteVector3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aVec, aXName, aYName, aZName);
}
inline ::UnityEngine::Vector4 HoudiniEngineUnity::JSONNode::ReadVector4(::UnityEngine::Vector4 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector4 HoudiniEngineUnity::JSONNode::ReadVector4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadVector4",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::WriteVector4(::UnityEngine::Vector4 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteVector4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aVec);
}
inline ::UnityEngine::Quaternion HoudiniEngineUnity::JSONNode::ReadQuaternion(::UnityEngine::Quaternion aDefault) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadQuaternion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Quaternion HoudiniEngineUnity::JSONNode::ReadQuaternion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadQuaternion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::WriteQuaternion(::UnityEngine::Quaternion aRot) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteQuaternion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aRot);
}
inline ::UnityEngine::Rect HoudiniEngineUnity::JSONNode::ReadRect(::UnityEngine::Rect aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadRect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Rect HoudiniEngineUnity::JSONNode::ReadRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadRect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::WriteRect(::UnityEngine::Rect aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteRect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aRect);
}
inline ::UnityEngine::RectOffset* HoudiniEngineUnity::JSONNode::ReadRectOffset(::UnityEngine::RectOffset* aDefault) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadRectOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::RectOffset* HoudiniEngineUnity::JSONNode::ReadRectOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadRectOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::WriteRectOffset(::UnityEngine::RectOffset* aRect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteRectOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aRect);
}
inline ::UnityEngine::Matrix4x4 HoudiniEngineUnity::JSONNode::ReadMatrix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "ReadMatrix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::WriteMatrix(::UnityEngine::Matrix4x4 aMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), "WriteMatrix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aMatrix);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::JSONNode*>());
}
inline void HoudiniEngineUnity::JSONNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONNode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::JSONNode::JSONNode() {}
