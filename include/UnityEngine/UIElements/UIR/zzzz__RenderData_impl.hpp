#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ClipMethod_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataFlags_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GraphicEntry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTree_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.AllocatesID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(&::UnityEngine::UIElements::UIR::RenderData::AllocatesID)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x71763ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "AllocatesID", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.InheritsID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(&::UnityEngine::UIElements::UIR::RenderData::InheritsID)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x717641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "InheritsID", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::Init)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x7176488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x7176740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.get_isGroupTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::get_isGroupTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7176768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_isGroupTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.get_isIgnoringDynamicColorHint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::get_isIgnoringDynamicColorHint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7176774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_isIgnoringDynamicColorHint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.get_hasExtraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::get_hasExtraData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7176780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_hasExtraData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.get_hasExtraMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::get_hasExtraMeshes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x717678c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_hasExtraMeshes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.get_isSubTreeQuad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::get_isSubTreeQuad)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7176798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_isSubTreeQuad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.get_isNestedRenderTreeRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::get_isNestedRenderTreeRoot)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x71767a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_isNestedRenderTreeRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.get_isClippingRectDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::get_isClippingRectDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x71767b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_isClippingRectDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.get_clippingRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::get_clippingRect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x71767bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_clippingRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.set_clippingRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderData::*)(::UnityEngine::Rect)>(&::UnityEngine::UIElements::UIR::RenderData::set_clippingRect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7176710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "set_clippingRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.get_clippingRectMinusGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::UIR::RenderData::*)()>(
    &::UnityEngine::UIElements::UIR::RenderData::get_clippingRectMinusGroup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7176e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_clippingRectMinusGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.set_clippingRectMinusGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderData::*)(::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::UIR::RenderData::set_clippingRectMinusGroup)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7176724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "set_clippingRectMinusGroup", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.get_clippingRectIsInfinite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::get_clippingRectIsInfinite)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x7176eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_clippingRectIsInfinite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.set_clippingRectIsInfinite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderData::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderData::set_clippingRectIsInfinite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7176738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "set_clippingRectIsInfinite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.UpdateClippingRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::UpdateClippingRect)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x71767f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "UpdateClippingRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.IntersectClipRects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::UnityEngine::UIElements::UIR::RenderData::IntersectClipRects)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x7177510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                             { "IntersectClipRects", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData.GetLocalClippingRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::Rect>)>(
    &::UnityEngine::UIElements::UIR::RenderData::GetLocalClippingRect)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x7176ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                { "GetLocalClippingRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderData::*)()>(&::UnityEngine::UIElements::UIR::RenderData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x71775e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_owner(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___owner = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_renderTree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTree;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_renderTree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTree;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_renderTree(::UnityEngine::UIElements::UIR::RenderTree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderTree = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_parent(::UnityEngine::UIElements::UIR::RenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parent = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_prevSibling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevSibling;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_prevSibling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevSibling;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_prevSibling(::UnityEngine::UIElements::UIR::RenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prevSibling = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_nextSibling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextSibling;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_nextSibling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextSibling;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_nextSibling(::UnityEngine::UIElements::UIR::RenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextSibling = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_firstChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstChild;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_firstChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstChild;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_firstChild(::UnityEngine::UIElements::UIR::RenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstChild = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_lastChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChild;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_lastChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChild;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_lastChild(::UnityEngine::UIElements::UIR::RenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastChild = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_groupTransformAncestor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupTransformAncestor;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_groupTransformAncestor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupTransformAncestor;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_groupTransformAncestor(::UnityEngine::UIElements::UIR::RenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupTransformAncestor = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_boneTransformAncestor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boneTransformAncestor;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_boneTransformAncestor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boneTransformAncestor;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_boneTransformAncestor(::UnityEngine::UIElements::UIR::RenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boneTransformAncestor = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_prevDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevDirty;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_prevDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevDirty;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_prevDirty(::UnityEngine::UIElements::UIR::RenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prevDirty = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_nextDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextDirty;
}
constexpr ::UnityEngine::UIElements::UIR::RenderData* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_nextDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextDirty;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_nextDirty(::UnityEngine::UIElements::UIR::RenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextDirty = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_flags(::UnityEngine::UIElements::UIR::RenderDataFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_depthInRenderTree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthInRenderTree;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_depthInRenderTree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthInRenderTree;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_depthInRenderTree(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthInRenderTree = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_dirtiedValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtiedValues;
}
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_dirtiedValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtiedValues;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_dirtiedValues(::UnityEngine::UIElements::UIR::RenderDataDirtyTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtiedValues = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_dirtyID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtyID;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_dirtyID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtyID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_dirtyID(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtyID = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_firstHeadCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstHeadCommand;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_firstHeadCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstHeadCommand;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_firstHeadCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstHeadCommand = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_lastHeadCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastHeadCommand;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_lastHeadCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastHeadCommand;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_lastHeadCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastHeadCommand = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_firstTailCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstTailCommand;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_firstTailCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstTailCommand;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_firstTailCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstTailCommand = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_lastTailCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTailCommand;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_lastTailCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTailCommand;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_lastTailCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastTailCommand = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_localFlipsWinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localFlipsWinding;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_localFlipsWinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localFlipsWinding;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_localFlipsWinding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localFlipsWinding = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_worldFlipsWinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldFlipsWinding;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_worldFlipsWinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldFlipsWinding;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_worldFlipsWinding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldFlipsWinding = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_worldTransformScaleZero() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldTransformScaleZero;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_worldTransformScaleZero() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldTransformScaleZero;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_worldTransformScaleZero(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldTransformScaleZero = value;
}
constexpr ::UnityEngine::UIElements::UIR::ClipMethod& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_clipMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clipMethod;
}
constexpr ::UnityEngine::UIElements::UIR::ClipMethod const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_clipMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clipMethod;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_clipMethod(::UnityEngine::UIElements::UIR::ClipMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clipMethod = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_childrenStencilRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childrenStencilRef;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_childrenStencilRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childrenStencilRef;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_childrenStencilRef(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___childrenStencilRef = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_childrenMaskDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childrenMaskDepth;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_childrenMaskDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childrenMaskDepth;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_childrenMaskDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___childrenMaskDepth = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshHandle*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_headMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headMesh;
}
constexpr ::UnityEngine::UIElements::UIR::MeshHandle* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_headMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headMesh;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_headMesh(::UnityEngine::UIElements::UIR::MeshHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headMesh = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshHandle*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_tailMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailMesh;
}
constexpr ::UnityEngine::UIElements::UIR::MeshHandle* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_tailMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailMesh;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_tailMesh(::UnityEngine::UIElements::UIR::MeshHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailMesh = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_verticesSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticesSpace;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_verticesSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticesSpace;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_verticesSpace(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___verticesSpace = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_transformID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_transformID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_transformID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transformID = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_clipRectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clipRectID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_clipRectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clipRectID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_clipRectID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clipRectID = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_opacityID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opacityID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_opacityID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opacityID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_opacityID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opacityID = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_textCoreSettingsID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textCoreSettingsID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_textCoreSettingsID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textCoreSettingsID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_textCoreSettingsID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textCoreSettingsID = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_colorID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_colorID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_colorID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorID = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_backgroundColorID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColorID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_backgroundColorID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColorID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_backgroundColorID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundColorID = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_borderLeftColorID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___borderLeftColorID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_borderLeftColorID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___borderLeftColorID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_borderLeftColorID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___borderLeftColorID = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_borderTopColorID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___borderTopColorID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_borderTopColorID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___borderTopColorID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_borderTopColorID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___borderTopColorID = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_borderRightColorID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___borderRightColorID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_borderRightColorID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___borderRightColorID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_borderRightColorID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___borderRightColorID = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_borderBottomColorID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___borderBottomColorID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_borderBottomColorID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___borderBottomColorID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_borderBottomColorID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___borderBottomColorID = value;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_tintColorID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintColorID;
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_tintColorID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintColorID;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_tintColorID(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tintColorID = value;
}
constexpr float_t& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_compositeOpacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositeOpacity;
}
constexpr float_t const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_compositeOpacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositeOpacity;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_compositeOpacity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositeOpacity = value;
}
constexpr float_t& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_backgroundAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundAlpha;
}
constexpr float_t const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_backgroundAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundAlpha;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_backgroundAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundAlpha = value;
}
constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::GraphicEntry>*& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_graphicEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphicEntries;
}
constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::GraphicEntry>* const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_graphicEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphicEntries;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_graphicEntries(::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::GraphicEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___graphicEntries = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_pendingRepaint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingRepaint;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_pendingRepaint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingRepaint;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_pendingRepaint(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pendingRepaint = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_pendingHierarchicalRepaint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingHierarchicalRepaint;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_pendingHierarchicalRepaint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingHierarchicalRepaint;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_pendingHierarchicalRepaint(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pendingHierarchicalRepaint = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_m_ClippingRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClippingRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_m_ClippingRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClippingRect;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_m_ClippingRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClippingRect = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_m_ClippingRectMinusGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClippingRectMinusGroup;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_m_ClippingRectMinusGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClippingRectMinusGroup;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_m_ClippingRectMinusGroup(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClippingRectMinusGroup = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_m_ClippingRectIsInfinite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClippingRectIsInfinite;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderData::__cordl_internal_get_m_ClippingRectIsInfinite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClippingRectIsInfinite;
}
constexpr void UnityEngine::UIElements::UIR::RenderData::__cordl_internal_set_m_ClippingRectIsInfinite(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClippingRectIsInfinite = value;
}
inline bool UnityEngine::UIElements::UIR::RenderData::AllocatesID(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "AllocatesID", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, alloc);
}
inline bool UnityEngine::UIElements::UIR::RenderData::InheritsID(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "InheritsID", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, alloc);
}
inline void UnityEngine::UIElements::UIR::RenderData::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderData::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderData::get_isGroupTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_isGroupTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderData::get_isIgnoringDynamicColorHint() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_isIgnoringDynamicColorHint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderData::get_hasExtraData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_hasExtraData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderData::get_hasExtraMeshes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_hasExtraMeshes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderData::get_isSubTreeQuad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_isSubTreeQuad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderData::get_isNestedRenderTreeRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_isNestedRenderTreeRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderData::get_isClippingRectDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_isClippingRectDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::RenderData::get_clippingRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_clippingRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderData::set_clippingRect(::UnityEngine::Rect value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "set_clippingRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::RenderData::get_clippingRectMinusGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_clippingRectMinusGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderData::set_clippingRectMinusGroup(::UnityEngine::Rect value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "set_clippingRectMinusGroup", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIR::RenderData::get_clippingRectIsInfinite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "get_clippingRectIsInfinite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderData::set_clippingRectIsInfinite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "set_clippingRectIsInfinite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderData::UpdateClippingRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { "UpdateClippingRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::RenderData::IntersectClipRects(::UnityEngine::Rect rect, ::UnityEngine::Rect parentRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                           { "IntersectClipRects", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, rect, parentRect);
}
inline void UnityEngine::UIElements::UIR::RenderData::GetLocalClippingRect(::UnityEngine::UIElements::VisualElement* owner, ::by_ref<::UnityEngine::Rect> localRect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                              { "GetLocalClippingRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, owner, localRect);
}
inline void UnityEngine::UIElements::UIR::RenderData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderData* UnityEngine::UIElements::UIR::RenderData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderData::RenderData() {}
