#pragma once
#include "OVRSimpleJSON/zzzz__JSONContainerType_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RectOffset_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONObject_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONArray_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONContainerType_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__JSONNode__Enumerator__Type::__JSONNode__Enumerator__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__JSONNode__Enumerator__Type::__JSONNode__Enumerator__Type() {}
constexpr ::GlobalNamespace::__JSONNode__Enumerator__Type GlobalNamespace::__JSONNode__Enumerator__Type::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__JSONNode__Enumerator__Type GlobalNamespace::__JSONNode__Enumerator__Type::Array{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__JSONNode__Enumerator__Type GlobalNamespace::__JSONNode__Enumerator__Type::Object{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Tag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNodeType (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Tag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fa08;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(int32_t, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x264fa10;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::StringW)>(&::OVRSimpleJSON::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fa14;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x264fa1c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Value)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x264fa20;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::StringW)>(&::OVRSimpleJSON::JSONNode::set_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x264fa60;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fa64;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fa6c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fa74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsBoolean)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fa7c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fa84;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fa8c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fa94;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Inline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fa9c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(bool)>(&::OVRSimpleJSON::JSONNode::set_Inline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x264faa4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x264faa8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x264faac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::StringW)>(&::OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fb10;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264fb18;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x264fb20;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* (::OVRSimpleJSON::JSONNode::*)()>(
    &::OVRSimpleJSON::JSONNode::get_Children)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x264fb28;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_DeepChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* (::OVRSimpleJSON::JSONNode::*)()>(
    &::OVRSimpleJSON::JSONNode::get_DeepChildren)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x264fb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_DeepChildren",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x264fbf0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x264fc7c;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::__JSONNode__Enumerator (::OVRSimpleJSON::JSONNode::*)()>(
    &::OVRSimpleJSON::JSONNode::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x264fd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Linq",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::__JSONNode__KeyEnumerator (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Keys)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x264fd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Keys",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::__JSONNode__ValueEnumerator (::OVRSimpleJSON::JSONNode::*)()>(
    &::OVRSimpleJSON::JSONNode::get_Values)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x264fdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Values",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsDouble)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x264fdf0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(double_t)>(&::OVRSimpleJSON::JSONNode::set_AsDouble)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x264fe94;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x264ff1c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::set_AsInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x264ff50;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x264ff68;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(float_t)>(&::OVRSimpleJSON::JSONNode::set_AsFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264ff88;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsBool)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x264ff9c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(bool)>(&::OVRSimpleJSON::JSONNode::set_AsBool)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2650054;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsLong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26500cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(int64_t)>(&::OVRSimpleJSON::JSONNode::set_AsLong)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2650100;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONArray* (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x265013c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONObject* (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26501b4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x265022c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___StringW
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2650290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(double_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26502cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_double_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_double_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2650338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(float_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2650378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_float_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26503e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(int32_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2650424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_int32_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2650488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(int64_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x26504c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_int64_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_int64_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26505a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(bool)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26505e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_bool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2650648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::OVRSimpleJSON::JSONNode* (*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2650688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::OVRSimpleJSON::JSONNode*, ::System::Object*)>(&::OVRSimpleJSON::JSONNode::op_Equality)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x264dacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::OVRSimpleJSON::JSONNode*, ::System::Object*)>(&::OVRSimpleJSON::JSONNode::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x264dc4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)(::System::Object*)>(&::OVRSimpleJSON::JSONNode::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26506c4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26506d0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_EscapeBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)()>(&::OVRSimpleJSON::JSONNode::get_EscapeBuilder)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26506d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_EscapeBuilder",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Escape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::OVRSimpleJSON::JSONNode::Escape)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2650774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Escape", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ParseElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW, bool)>(&::OVRSimpleJSON::JSONNode::ParseElement)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2650a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ParseElement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW)>(&::OVRSimpleJSON::JSONNode::Parse)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x264d4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.GetContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::OVRSimpleJSON::JSONContainerType)>(&::OVRSimpleJSON::JSONNode::GetContainer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2650bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "GetContainer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONContainerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Vector2)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2650c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Vector3)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2650e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Vector4)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2651070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Quaternion)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2651344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Rect)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2651618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::RectOffset*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2651948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Vector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2651c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Vector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2651cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Vector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2651d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Quaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2651d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Rect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Rect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2651dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__RectOffset_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectOffset* (*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__RectOffset_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2651e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector2)>(
    &::OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2651ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::OVRSimpleJSON::JSONNode::*)(::StringW, ::StringW)>(
    &::OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2651fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2651c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector2, ::StringW, ::StringW)>(
    &::OVRSimpleJSON::JSONNode::WriteVector2)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2650cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector3)>(
    &::OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x26520bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::OVRSimpleJSON::JSONNode::*)(::StringW, ::StringW, ::StringW)>(
    &::OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2652278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2651ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector3, ::StringW, ::StringW, ::StringW)>(
    &::OVRSimpleJSON::JSONNode::WriteVector3)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2650ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector3", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector4)>(
    &::OVRSimpleJSON::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2652390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector4", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2651d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector4",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteVector4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector4)>(
    &::OVRSimpleJSON::JSONNode::WriteVector4)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x26510f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector4", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Quaternion)>(
    &::OVRSimpleJSON::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x26525c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadQuaternion", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2651da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadQuaternion",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Quaternion)>(
    &::OVRSimpleJSON::JSONNode::WriteQuaternion)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x26513c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteQuaternion", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Rect)>(&::OVRSimpleJSON::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x26527f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRect", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2651e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRect",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Rect)>(
    &::OVRSimpleJSON::JSONNode::WriteRect)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x265169c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteRect", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRectOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectOffset* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::RectOffset*)>(
    &::OVRSimpleJSON::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2652a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRectOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRectOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectOffset* (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2651e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRectOffset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteRectOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::RectOffset*)>(
    &::OVRSimpleJSON::JSONNode::WriteRectOffset)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x26519a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteRectOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadMatrix)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2652ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadMatrix",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Matrix4x4)>(
    &::OVRSimpleJSON::JSONNode::WriteMatrix)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2652dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteMatrix", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::_ctor)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x2652e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Tag",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNodeType, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::get_Item(int32_t aIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline void OVRSimpleJSON::JSONNode::set_Item(int32_t aIndex, ::OVRSimpleJSON::JSONNode* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "set_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aIndex, value);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::get_Item(::StringW aKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aKey);
}
inline void OVRSimpleJSON::JSONNode::set_Item(::StringW aKey, ::OVRSimpleJSON::JSONNode* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "set_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, value);
}
inline ::StringW OVRSimpleJSON::JSONNode::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_Value(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "set_Value", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t OVRSimpleJSON::JSONNode::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_IsNumber",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_IsString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsBoolean() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_IsBoolean",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_IsNull",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_IsArray",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_IsObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_Inline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Inline",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_Inline(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "set_Inline", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void OVRSimpleJSON::JSONNode::Add(::StringW aKey, ::OVRSimpleJSON::JSONNode* aItem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, aItem);
}
inline void OVRSimpleJSON::JSONNode::Add(::OVRSimpleJSON::JSONNode* aItem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aItem);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Remove(::StringW aKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aKey);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Remove(int32_t aIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Remove(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aNode);
}
inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* OVRSimpleJSON::JSONNode::get_Children() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Children",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* OVRSimpleJSON::JSONNode::get_DeepChildren() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_DeepChildren",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONNode::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONNode::ToString(int32_t aIndent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ToString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, aIndent);
}
inline void OVRSimpleJSON::JSONNode::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteToStringBuilder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONTextMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline ::OVRSimpleJSON::__JSONNode__Enumerator OVRSimpleJSON::JSONNode::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::__JSONNode__Enumerator, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>* OVRSimpleJSON::JSONNode::get_Linq() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Linq",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*, false>(
      this, ___internal_method);
}
inline ::OVRSimpleJSON::__JSONNode__KeyEnumerator OVRSimpleJSON::JSONNode::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Keys",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::__JSONNode__KeyEnumerator, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::__JSONNode__ValueEnumerator OVRSimpleJSON::JSONNode::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_Values",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::__JSONNode__ValueEnumerator, false>(this, ___internal_method);
}
inline double_t OVRSimpleJSON::JSONNode::get_AsDouble() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_AsDouble",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsDouble(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "set_AsDouble", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t OVRSimpleJSON::JSONNode::get_AsInt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_AsInt",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsInt(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "set_AsInt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t OVRSimpleJSON::JSONNode::get_AsFloat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_AsFloat",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "set_AsFloat", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool OVRSimpleJSON::JSONNode::get_AsBool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_AsBool",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsBool(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "set_AsBool", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t OVRSimpleJSON::JSONNode::get_AsLong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_AsLong",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsLong(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "set_AsLong", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::OVRSimpleJSON::JSONArray* OVRSimpleJSON::JSONNode::get_AsArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_AsArray",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONArray*, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONObject* OVRSimpleJSON::JSONNode::get_AsObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_AsObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONObject*, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, s);
}
inline ::StringW OVRSimpleJSON::JSONNode::op_Implicit___StringW(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(double_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline double_t OVRSimpleJSON::JSONNode::op_Implicit_double_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(float_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline float_t OVRSimpleJSON::JSONNode::op_Implicit_float_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline int32_t OVRSimpleJSON::JSONNode::op_Implicit_int32_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(int64_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, n);
}
inline int64_t OVRSimpleJSON::JSONNode::op_Implicit_int64_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(bool b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, b);
}
inline bool OVRSimpleJSON::JSONNode::op_Implicit_bool(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> aKeyValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aKeyValue);
}
inline bool OVRSimpleJSON::JSONNode::op_Equality(::OVRSimpleJSON::JSONNode* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool OVRSimpleJSON::JSONNode::op_Inequality(::OVRSimpleJSON::JSONNode* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool OVRSimpleJSON::JSONNode::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t OVRSimpleJSON::JSONNode::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* OVRSimpleJSON::JSONNode::get_EscapeBuilder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "get_EscapeBuilder",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONNode::Escape(::StringW aText) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Escape", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, aText);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::ParseElement(::StringW token, bool quoted) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ParseElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, token, quoted);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Parse(::StringW aJSON) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aJSON);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::GetContainer(::OVRSimpleJSON::JSONContainerType aType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "GetContainer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONContainerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aType);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector2 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aVec);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector3 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aVec);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector4 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aVec);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Quaternion aRot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aRot);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Rect aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aRect);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::RectOffset* aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aRect);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector2(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector3(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector4 OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector4(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Quaternion OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Quaternion(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Rect OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Rect(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::RectOffset* OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__RectOffset_(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*, false>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2(::UnityEngine::Vector2 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2(::StringW aXName, ::StringW aYName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, aXName, aYName);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector2",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
/// @param aXName: ::StringW (default: u"x")
/// @param aYName: ::StringW (default: u"y")
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteVector2(::UnityEngine::Vector2 aVec, ::StringW aXName, ::StringW aYName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aVec, aXName, aYName);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3(::UnityEngine::Vector3 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3(::StringW aXName, ::StringW aYName, ::StringW aZName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, aXName, aYName, aZName);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector3",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
/// @param aXName: ::StringW (default: u"x")
/// @param aYName: ::StringW (default: u"y")
/// @param aZName: ::StringW (default: u"z")
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteVector3(::UnityEngine::Vector3 aVec, ::StringW aXName, ::StringW aYName, ::StringW aZName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector3", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aVec, aXName, aYName, aZName);
}
inline ::UnityEngine::Vector4 OVRSimpleJSON::JSONNode::ReadVector4(::UnityEngine::Vector4 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector4", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector4 OVRSimpleJSON::JSONNode::ReadVector4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadVector4",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteVector4(::UnityEngine::Vector4 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteVector4", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aVec);
}
inline ::UnityEngine::Quaternion OVRSimpleJSON::JSONNode::ReadQuaternion(::UnityEngine::Quaternion aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadQuaternion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Quaternion OVRSimpleJSON::JSONNode::ReadQuaternion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadQuaternion",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteQuaternion(::UnityEngine::Quaternion aRot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteQuaternion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aRot);
}
inline ::UnityEngine::Rect OVRSimpleJSON::JSONNode::ReadRect(::UnityEngine::Rect aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Rect OVRSimpleJSON::JSONNode::ReadRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRect",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteRect(::UnityEngine::Rect aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteRect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aRect);
}
inline ::UnityEngine::RectOffset* OVRSimpleJSON::JSONNode::ReadRectOffset(::UnityEngine::RectOffset* aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRectOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*, false>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::RectOffset* OVRSimpleJSON::JSONNode::ReadRectOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadRectOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteRectOffset(::UnityEngine::RectOffset* aRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteRectOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aRect);
}
inline ::UnityEngine::Matrix4x4 OVRSimpleJSON::JSONNode::ReadMatrix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "ReadMatrix",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteMatrix(::UnityEngine::Matrix4x4 aMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), "WriteMatrix", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aMatrix);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::OVRSimpleJSON::JSONNode*>());
}
inline void OVRSimpleJSON::JSONNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONNode*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode::JSONNode() {}
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__Enumerator.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::__JSONNode__Enumerator::*)()>(&::OVRSimpleJSON::__JSONNode__Enumerator::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2653e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__Enumerator>::get(), "get_IsValid",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVRSimpleJSON::__JSONNode__Enumerator::*)(::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::__JSONNode__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2653e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__Enumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode__Enumerator::*)(
    ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::__JSONNode__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2653eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__Enumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> (
    ::OVRSimpleJSON::__JSONNode__Enumerator::*)()>(&::OVRSimpleJSON::__JSONNode__Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2653edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__Enumerator>::get(), "get_Current",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::__JSONNode__Enumerator::*)()>(&::OVRSimpleJSON::__JSONNode__Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2653fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__Enumerator>::get(), "MoveNext",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool OVRSimpleJSON::__JSONNode__Enumerator::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__Enumerator>::get(), "get_IsValid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::__JSONNode__Enumerator::_ctor(::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*> aArrayEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__Enumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aArrayEnum);
}
inline void OVRSimpleJSON::__JSONNode__Enumerator::_ctor(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> aDictEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__Enumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aDictEnum);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> OVRSimpleJSON::__JSONNode__Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__Enumerator>::get(), "get_Current",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::__JSONNode__Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__Enumerator>::get(), "MoveNext",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::__JSONNode__Enumerator__Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Object", ty:
// "::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Array", ty:
// "::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::__JSONNode__Enumerator::__JSONNode__Enumerator(::GlobalNamespace::__JSONNode__Enumerator__Type type,
                                                                          ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> m_Object,
                                                                          ::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*> m_Array) noexcept {
  this->type = type;
  this->m_Object = m_Object;
  this->m_Array = m_Array;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::__JSONNode__Enumerator::__JSONNode__Enumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode__ValueEnumerator::*)(
    ::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x265403c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode__ValueEnumerator::*)(
    ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x265407c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode__ValueEnumerator::*)(::OVRSimpleJSON::__JSONNode__Enumerator)>(
    &::OVRSimpleJSON::__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26540ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::__JSONNode__Enumerator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__ValueEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::__JSONNode__ValueEnumerator::*)()>(
    &::OVRSimpleJSON::__JSONNode__ValueEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2654100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(),
                                                                               "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__ValueEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::__JSONNode__ValueEnumerator::*)()>(&::OVRSimpleJSON::__JSONNode__ValueEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2654144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(), "MoveNext",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__ValueEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::__JSONNode__ValueEnumerator (::OVRSimpleJSON::__JSONNode__ValueEnumerator::*)()>(
    &::OVRSimpleJSON::__JSONNode__ValueEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2654148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(),
                                                                               "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void OVRSimpleJSON::__JSONNode__ValueEnumerator::_ctor(::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*> aArrayEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aArrayEnum);
}
inline void OVRSimpleJSON::__JSONNode__ValueEnumerator::_ctor(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> aDictEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aDictEnum);
}
inline void OVRSimpleJSON::__JSONNode__ValueEnumerator::_ctor(::OVRSimpleJSON::__JSONNode__Enumerator aEnumerator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::__JSONNode__Enumerator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aEnumerator);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::__JSONNode__ValueEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(), "get_Current",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::__JSONNode__ValueEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(), "MoveNext",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::__JSONNode__ValueEnumerator OVRSimpleJSON::__JSONNode__ValueEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__ValueEnumerator>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::__JSONNode__ValueEnumerator, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::OVRSimpleJSON::__JSONNode__Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::__JSONNode__ValueEnumerator::__JSONNode__ValueEnumerator(::OVRSimpleJSON::__JSONNode__Enumerator m_Enumerator) noexcept {
  this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::__JSONNode__ValueEnumerator::__JSONNode__ValueEnumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode__KeyEnumerator::*)(
    ::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2654158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode__KeyEnumerator::*)(
    ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2654198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode__KeyEnumerator::*)(::OVRSimpleJSON::__JSONNode__Enumerator)>(
    &::OVRSimpleJSON::__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2654208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::__JSONNode__Enumerator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__KeyEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVRSimpleJSON::__JSONNode__KeyEnumerator::*)()>(
    &::OVRSimpleJSON::__JSONNode__KeyEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x265421c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), "get_Current",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__KeyEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::__JSONNode__KeyEnumerator::*)()>(&::OVRSimpleJSON::__JSONNode__KeyEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2654258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), "MoveNext",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__KeyEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::__JSONNode__KeyEnumerator (::OVRSimpleJSON::__JSONNode__KeyEnumerator::*)()>(
    &::OVRSimpleJSON::__JSONNode__KeyEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x265425c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(),
                                                                               "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void OVRSimpleJSON::__JSONNode__KeyEnumerator::_ctor(::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*> aArrayEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__List_1__Enumerator<::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aArrayEnum);
}
inline void OVRSimpleJSON::__JSONNode__KeyEnumerator::_ctor(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> aDictEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aDictEnum);
}
inline void OVRSimpleJSON::__JSONNode__KeyEnumerator::_ctor(::OVRSimpleJSON::__JSONNode__Enumerator aEnumerator) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::__JSONNode__Enumerator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aEnumerator);
}
inline ::StringW OVRSimpleJSON::__JSONNode__KeyEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), "get_Current",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::__JSONNode__KeyEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), "MoveNext",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::__JSONNode__KeyEnumerator OVRSimpleJSON::__JSONNode__KeyEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__KeyEnumerator>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::__JSONNode__KeyEnumerator, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::OVRSimpleJSON::__JSONNode__Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::__JSONNode__KeyEnumerator::__JSONNode__KeyEnumerator(::OVRSimpleJSON::__JSONNode__Enumerator m_Enumerator) noexcept {
  this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::__JSONNode__KeyEnumerator::__JSONNode__KeyEnumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__LinqEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode__LinqEnumerator::*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::__JSONNode__LinqEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x265426c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__LinqEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> (
    ::OVRSimpleJSON::__JSONNode__LinqEnumerator::*)()>(&::OVRSimpleJSON::__JSONNode__LinqEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26542f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(),
                                                                               "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__LinqEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::OVRSimpleJSON::__JSONNode__LinqEnumerator::*)()>(
    &::OVRSimpleJSON::__JSONNode__LinqEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26542f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(),
                                                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__LinqEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::__JSONNode__LinqEnumerator::*)()>(&::OVRSimpleJSON::__JSONNode__LinqEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x265435c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(), "MoveNext",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__LinqEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode__LinqEnumerator::*)()>(&::OVRSimpleJSON::__JSONNode__LinqEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2654364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__LinqEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>* (::OVRSimpleJSON::__JSONNode__LinqEnumerator::*)()>(
    &::OVRSimpleJSON::__JSONNode__LinqEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2654378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(),
                                                                               "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__LinqEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode__LinqEnumerator::*)()>(&::OVRSimpleJSON::__JSONNode__LinqEnumerator::Reset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26543dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode__LinqEnumerator.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::__JSONNode__LinqEnumerator::*)()>(
    &::OVRSimpleJSON::__JSONNode__LinqEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2654448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr OVRSimpleJSON::__JSONNode__LinqEnumerator::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::__JSONNode__LinqEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::__JSONNode__LinqEnumerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr OVRSimpleJSON::__JSONNode__LinqEnumerator::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::__JSONNode__LinqEnumerator::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::__JSONNode__LinqEnumerator::__get_m_Node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Node;
}
constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& OVRSimpleJSON::__JSONNode__LinqEnumerator::__get_m_Node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Node;
}
constexpr void OVRSimpleJSON::__JSONNode__LinqEnumerator::__set_m_Node(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Node)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OVRSimpleJSON::__JSONNode__Enumerator& OVRSimpleJSON::__JSONNode__LinqEnumerator::__get_m_Enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enumerator;
}
constexpr ::OVRSimpleJSON::__JSONNode__Enumerator const& OVRSimpleJSON::__JSONNode__LinqEnumerator::__get_m_Enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enumerator;
}
constexpr void OVRSimpleJSON::__JSONNode__LinqEnumerator::__set_m_Enumerator(::OVRSimpleJSON::__JSONNode__Enumerator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Enumerator = value;
}
inline ::OVRSimpleJSON::__JSONNode__LinqEnumerator* OVRSimpleJSON::__JSONNode__LinqEnumerator::New_ctor(::OVRSimpleJSON::JSONNode* aNode) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>(aNode));
}
inline void OVRSimpleJSON::__JSONNode__LinqEnumerator::_ctor(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aNode);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> OVRSimpleJSON::__JSONNode__LinqEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(), "get_Current",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>, false>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::__JSONNode__LinqEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::__JSONNode__LinqEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(), "MoveNext",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::__JSONNode__LinqEnumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*
OVRSimpleJSON::__JSONNode__LinqEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*, false>(
      this, ___internal_method);
}
inline void OVRSimpleJSON::__JSONNode__LinqEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::__JSONNode__LinqEnumerator::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode__LinqEnumerator*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::__JSONNode__LinqEnumerator::__JSONNode__LinqEnumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_Children_d__40._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode___get_Children_d__40::*)(int32_t)>(
    &::OVRSimpleJSON::__JSONNode___get_Children_d__40::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26544ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_Children_d__40.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode___get_Children_d__40::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_Children_d__40::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26544e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_Children_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::__JSONNode___get_Children_d__40::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_Children_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26544e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_Children_d__40.System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::__JSONNode___get_Children_d__40::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26544fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                 "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_Children_d__40.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode___get_Children_d__40::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_Children_d__40::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2654504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_Children_d__40.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::OVRSimpleJSON::__JSONNode___get_Children_d__40::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_Children_d__40::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2654544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_Children_d__40.System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* (
    ::OVRSimpleJSON::__JSONNode___get_Children_d__40::*)()>(&::OVRSimpleJSON::__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x265454c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                 "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_Children_d__40.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::__JSONNode___get_Children_d__40::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_Children_d__40::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26545e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::__JSONNode___get_Children_d__40::operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::__JSONNode___get_Children_d__40::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::__JSONNode___get_Children_d__40::operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::__JSONNode___get_Children_d__40::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::__JSONNode___get_Children_d__40::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& OVRSimpleJSON::__JSONNode___get_Children_d__40::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& OVRSimpleJSON::__JSONNode___get_Children_d__40::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void OVRSimpleJSON::__JSONNode___get_Children_d__40::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::__JSONNode___get_Children_d__40::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& OVRSimpleJSON::__JSONNode___get_Children_d__40::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void OVRSimpleJSON::__JSONNode___get_Children_d__40::__set___2__current(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& OVRSimpleJSON::__JSONNode___get_Children_d__40::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& OVRSimpleJSON::__JSONNode___get_Children_d__40::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void OVRSimpleJSON::__JSONNode___get_Children_d__40::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
inline ::OVRSimpleJSON::__JSONNode___get_Children_d__40* OVRSimpleJSON::__JSONNode___get_Children_d__40::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>(__1__state));
}
inline void OVRSimpleJSON::__JSONNode___get_Children_d__40::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void OVRSimpleJSON::__JSONNode___get_Children_d__40::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::__JSONNode___get_Children_d__40::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                               "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::__JSONNode___get_Children_d__40::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::__JSONNode___get_Children_d__40::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                               "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::__JSONNode___get_Children_d__40::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_Children_d__40*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::__JSONNode___get_Children_d__40::__JSONNode___get_Children_d__40() {}
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::*)(int32_t)>(
    &::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26545e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x265461c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x26546d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2654bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                               "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42.__m__Finally2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2654b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                               "<>m__Finally2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42.System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2654c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                 "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2654c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2654cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42.System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* (
    ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::*)()>(&::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2654cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                 "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::*)()>(
    &::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2654d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__set___2__current(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__set___4__this(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*& OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*> const&
OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*& OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*> const&
OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42* OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>(__1__state));
}
inline void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__m__Finally2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "<>m__Finally2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                               "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                               "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::__JSONNode___get_DeepChildren_d__42::__JSONNode___get_DeepChildren_d__42() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
