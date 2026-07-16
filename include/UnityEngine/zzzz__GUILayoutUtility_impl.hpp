#pragma once
// IWYU pragma private; include "UnityEngine/GUILayoutUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUILayoutGroup_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__GUILayoutUtility_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngineInternal/zzzz__GenericStack_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility_LayoutCache.set_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutUtility_LayoutCache::*)(int32_t)>(&::UnityEngine::GUILayoutUtility_LayoutCache::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility_LayoutCache*>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility_LayoutCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutUtility_LayoutCache::*)(int32_t)>(&::UnityEngine::GUILayoutUtility_LayoutCache::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b42854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility_LayoutCache*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility_LayoutCache.ResetCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutUtility_LayoutCache::*)()>(&::UnityEngine::GUILayoutUtility_LayoutCache::ResetCursor)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x6b44418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility_LayoutCache*>(), { "ResetCursor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr int32_t const& UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_set__id_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id_k__BackingField = value;
}
constexpr ::UnityEngine::GUILayoutGroup*& UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_get_topLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLevel;
}
constexpr ::UnityEngine::GUILayoutGroup* const& UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_get_topLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLevel;
}
constexpr void UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_set_topLevel(::UnityEngine::GUILayoutGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topLevel = value;
}
constexpr ::UnityEngineInternal::GenericStack*& UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_get_layoutGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutGroups;
}
constexpr ::UnityEngineInternal::GenericStack* const& UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_get_layoutGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutGroups;
}
constexpr void UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_set_layoutGroups(::UnityEngineInternal::GenericStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layoutGroups = value;
}
constexpr ::UnityEngine::GUILayoutGroup*& UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_get_windows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windows;
}
constexpr ::UnityEngine::GUILayoutGroup* const& UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_get_windows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windows;
}
constexpr void UnityEngine::GUILayoutUtility_LayoutCache::__cordl_internal_set_windows(::UnityEngine::GUILayoutGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windows = value;
}
inline void UnityEngine::GUILayoutUtility_LayoutCache::set_id(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility_LayoutCache*>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::GUILayoutUtility_LayoutCache::_ctor(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility_LayoutCache*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceID);
}
inline void UnityEngine::GUILayoutUtility_LayoutCache::ResetCursor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility_LayoutCache*>(), { "ResetCursor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::GUILayoutUtility_LayoutCache* UnityEngine::GUILayoutUtility_LayoutCache::New_ctor(int32_t instanceID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUILayoutUtility_LayoutCache*>(instanceID));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayoutUtility_LayoutCache::GUILayoutUtility_LayoutCache() {}
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Internal_GetWindowRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(int32_t)>(&::UnityEngine::GUILayoutUtility::Internal_GetWindowRect)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b4252c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "Internal_GetWindowRect", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Internal_MoveWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Rect)>(&::UnityEngine::GUILayoutUtility::Internal_MoveWindow)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b42604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "Internal_MoveWindow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.get_unbalancedgroupscount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::GUILayoutUtility::get_unbalancedgroupscount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b426d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "get_unbalancedgroupscount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.set_unbalancedgroupscount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUILayoutUtility::set_unbalancedgroupscount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b42734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "set_unbalancedgroupscount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.GetLayoutCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutUtility_LayoutCache* (*)(int32_t, bool)>(&::UnityEngine::GUILayoutUtility::GetLayoutCache)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b42794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "GetLayoutCache", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.SelectIDList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutUtility_LayoutCache* (*)(int32_t, bool)>(&::UnityEngine::GUILayoutUtility::SelectIDList)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6b3fc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "SelectIDList", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.RemoveSelectedIdList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::GUILayoutUtility::RemoveSelectedIdList)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6b4291c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "RemoveSelectedIdList", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUILayoutUtility::Begin)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6b42a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "Begin", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.BeginContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUILayoutUtility_LayoutCache*)>(&::UnityEngine::GUILayoutUtility::BeginContainer)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6b42cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "BeginContainer", {}, { ::i2c::type_of<::UnityEngine::GUILayoutUtility_LayoutCache*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.BeginWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayoutUtility::BeginWindow)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6b3fe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
                            { "BeginWindow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Layout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayoutUtility::Layout)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6b400b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "Layout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.LayoutFromEditorWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayoutUtility::LayoutFromEditorWindow)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6b43154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "LayoutFromEditorWindow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.LayoutFromContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t)>(&::UnityEngine::GUILayoutUtility::LayoutFromContainer)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6b433a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "LayoutFromContainer", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.LayoutFreeGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUILayoutGroup*)>(&::UnityEngine::GUILayoutUtility::LayoutFreeGroup)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6b42e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "LayoutFreeGroup", {}, { ::i2c::type_of<::UnityEngine::GUILayoutGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.LayoutSingleGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUILayoutGroup*)>(&::UnityEngine::GUILayoutUtility::LayoutSingleGroup)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6b42fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "LayoutSingleGroup", {}, { ::i2c::type_of<::UnityEngine::GUILayoutGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.CreateGUILayoutGroupInstanceOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutGroup* (*)(::System::Type*)>(&::UnityEngine::GUILayoutUtility::CreateGUILayoutGroupInstanceOfType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6b43548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "CreateGUILayoutGroupInstanceOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.BeginLayoutGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutGroup* (*)(::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>, ::System::Type*)>(
    &::UnityEngine::GUILayoutUtility::BeginLayoutGroup)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x6b41458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
                         { "BeginLayoutGroup", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.EndLayoutGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayoutUtility::EndLayoutGroup)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6b41a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "EndLayoutGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.BeginLayoutArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutGroup* (*)(::UnityEngine::GUIStyle*, ::System::Type*)>(&::UnityEngine::GUILayoutUtility::BeginLayoutArea)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x6b41f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "BeginLayoutArea", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.EndLayoutArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayoutUtility::EndLayoutArea)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6b42374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "EndLayoutArea", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.GetRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(
    &::UnityEngine::GUILayoutUtility::GetRect)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b40e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
            { "GetRect", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.DoGetRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(
    &::UnityEngine::GUILayoutUtility::DoGetRect)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6b43ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
            { "DoGetRect", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.GetRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(float_t, float_t, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(
    &::UnityEngine::GUILayoutUtility::GetRect)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b41190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
            { "GetRect", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.DoGetRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(float_t, float_t, float_t, float_t, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(
    &::UnityEngine::GUILayoutUtility::DoGetRect)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6b4400c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "DoGetRect",
                                                                                   {},
                                                                                   { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                     ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.get_spaceStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (*)()>(&::UnityEngine::GUILayoutUtility::get_spaceStyle)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b410b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "get_spaceStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Internal_GetWindowRect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::GUILayoutUtility::Internal_GetWindowRect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b425c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
                                                             { "Internal_GetWindowRect_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayoutUtility.Internal_MoveWindow_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::GUILayoutUtility::Internal_MoveWindow_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b42694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
                                                             { "Internal_MoveWindow_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::GUILayoutUtility::setStaticF_s_StoredLayouts(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>*, "s_StoredLayouts", ::UnityEngine::GUILayoutUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>* UnityEngine::GUILayoutUtility::getStaticF_s_StoredLayouts() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>*, "s_StoredLayouts", ::UnityEngine::GUILayoutUtility*>();
}
inline void UnityEngine::GUILayoutUtility::setStaticF_s_StoredWindows(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>*, "s_StoredWindows", ::UnityEngine::GUILayoutUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>* UnityEngine::GUILayoutUtility::getStaticF_s_StoredWindows() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>*, "s_StoredWindows", ::UnityEngine::GUILayoutUtility*>();
}
inline void UnityEngine::GUILayoutUtility::setStaticF_current(::UnityEngine::GUILayoutUtility_LayoutCache* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUILayoutUtility_LayoutCache*, "current", ::UnityEngine::GUILayoutUtility*>(std::forward<::UnityEngine::GUILayoutUtility_LayoutCache*>(value));
}
inline ::UnityEngine::GUILayoutUtility_LayoutCache* UnityEngine::GUILayoutUtility::getStaticF_current() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUILayoutUtility_LayoutCache*, "current", ::UnityEngine::GUILayoutUtility*>();
}
inline void UnityEngine::GUILayoutUtility::setStaticF_kDummyRect(::UnityEngine::Rect value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rect, "kDummyRect", ::UnityEngine::GUILayoutUtility*>(std::forward<::UnityEngine::Rect>(value));
}
inline ::UnityEngine::Rect UnityEngine::GUILayoutUtility::getStaticF_kDummyRect() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rect, "kDummyRect", ::UnityEngine::GUILayoutUtility*>();
}
inline void UnityEngine::GUILayoutUtility::setStaticF__unbalancedgroupscount_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<unbalancedgroupscount>k__BackingField", ::UnityEngine::GUILayoutUtility*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUILayoutUtility::getStaticF__unbalancedgroupscount_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<unbalancedgroupscount>k__BackingField", ::UnityEngine::GUILayoutUtility*>();
}
inline void UnityEngine::GUILayoutUtility::setStaticF_s_SpaceStyle(::UnityEngine::GUIStyle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIStyle*, "s_SpaceStyle", ::UnityEngine::GUILayoutUtility*>(std::forward<::UnityEngine::GUIStyle*>(value));
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUILayoutUtility::getStaticF_s_SpaceStyle() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIStyle*, "s_SpaceStyle", ::UnityEngine::GUILayoutUtility*>();
}
inline ::UnityEngine::Rect UnityEngine::GUILayoutUtility::Internal_GetWindowRect(int32_t windowID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "Internal_GetWindowRect", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, windowID);
}
inline void UnityEngine::GUILayoutUtility::Internal_MoveWindow(int32_t windowID, ::UnityEngine::Rect r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "Internal_MoveWindow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, windowID, r);
}
inline int32_t UnityEngine::GUILayoutUtility::get_unbalancedgroupscount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "get_unbalancedgroupscount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayoutUtility::set_unbalancedgroupscount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "set_unbalancedgroupscount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::GUILayoutUtility_LayoutCache* UnityEngine::GUILayoutUtility::GetLayoutCache(int32_t instanceID, bool isWindow) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "GetLayoutCache", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutUtility_LayoutCache*>(nullptr, ___internal_method, instanceID, isWindow);
}
inline ::UnityEngine::GUILayoutUtility_LayoutCache* UnityEngine::GUILayoutUtility::SelectIDList(int32_t instanceID, bool isWindow) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "SelectIDList", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutUtility_LayoutCache*>(nullptr, ___internal_method, instanceID, isWindow);
}
inline void UnityEngine::GUILayoutUtility::RemoveSelectedIdList(int32_t instanceID, bool isWindow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "RemoveSelectedIdList", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceID, isWindow);
}
inline void UnityEngine::GUILayoutUtility::Begin(int32_t instanceID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "Begin", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceID);
}
inline void UnityEngine::GUILayoutUtility::BeginContainer(::UnityEngine::GUILayoutUtility_LayoutCache* cache) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "BeginContainer", {}, { ::i2c::type_of<::UnityEngine::GUILayoutUtility_LayoutCache*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cache);
}
inline void UnityEngine::GUILayoutUtility::BeginWindow(int32_t windowID, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
                                       { "BeginWindow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, windowID, style, options);
}
inline void UnityEngine::GUILayoutUtility::Layout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "Layout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayoutUtility::LayoutFromEditorWindow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "LayoutFromEditorWindow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayoutUtility::LayoutFromContainer(float_t w, float_t h) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "LayoutFromContainer", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, w, h);
}
inline void UnityEngine::GUILayoutUtility::LayoutFreeGroup(::UnityEngine::GUILayoutGroup* toplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "LayoutFreeGroup", {}, { ::i2c::type_of<::UnityEngine::GUILayoutGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toplevel);
}
inline void UnityEngine::GUILayoutUtility::LayoutSingleGroup(::UnityEngine::GUILayoutGroup* i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "LayoutSingleGroup", {}, { ::i2c::type_of<::UnityEngine::GUILayoutGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i);
}
inline ::UnityEngine::GUILayoutGroup* UnityEngine::GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(::System::Type* LayoutType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "CreateGUILayoutGroupInstanceOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutGroup*>(nullptr, ___internal_method, LayoutType);
}
inline ::UnityEngine::GUILayoutGroup* UnityEngine::GUILayoutUtility::BeginLayoutGroup(::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options, ::System::Type* layoutType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
                          { "BeginLayoutGroup", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutGroup*>(nullptr, ___internal_method, style, options, layoutType);
}
inline void UnityEngine::GUILayoutUtility::EndLayoutGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "EndLayoutGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::GUILayoutGroup* UnityEngine::GUILayoutUtility::BeginLayoutArea(::UnityEngine::GUIStyle* style, ::System::Type* layoutType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "BeginLayoutArea", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutGroup*>(nullptr, ___internal_method, style, layoutType);
}
inline void UnityEngine::GUILayoutUtility::EndLayoutArea() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "EndLayoutArea", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::GUILayoutUtility::GetRect(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
                       { "GetRect", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, content, style, options);
}
inline ::UnityEngine::Rect UnityEngine::GUILayoutUtility::DoGetRect(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
          { "DoGetRect", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, content, style, options);
}
inline ::UnityEngine::Rect UnityEngine::GUILayoutUtility::GetRect(float_t width, float_t height, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
          { "GetRect", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, width, height, style, options);
}
inline ::UnityEngine::Rect UnityEngine::GUILayoutUtility::DoGetRect(float_t minWidth, float_t maxWidth, float_t minHeight, float_t maxHeight, ::UnityEngine::GUIStyle* style,
                                                                    ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "DoGetRect",
                                                                                 {},
                                                                                 { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                   ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, minWidth, maxWidth, minHeight, maxHeight, style, options);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUILayoutUtility::get_spaceStyle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(), { "get_spaceStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayoutUtility::Internal_GetWindowRect_Injected(int32_t windowID, ::by_ref<::UnityEngine::Rect> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
                                                           { "Internal_GetWindowRect_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, windowID, ret);
}
inline void UnityEngine::GUILayoutUtility::Internal_MoveWindow_Injected(int32_t windowID, ::by_ref<::UnityEngine::Rect> r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayoutUtility*>(),
                                                           { "Internal_MoveWindow_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, windowID, r);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayoutUtility::GUILayoutUtility() {}
