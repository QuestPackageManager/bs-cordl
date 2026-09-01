#pragma once
// IWYU pragma private; include "UnityEngine\UI\CanvasUpdateRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdateRegistry_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/UI/Collections/zzzz__IndexedSet_1_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasUpdateRegistry::*)()>(&::UnityEngine::UI::CanvasUpdateRegistry::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6c190a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::CanvasUpdateRegistry* (*)()>(&::UnityEngine::UI::CanvasUpdateRegistry::get_instance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c19288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.ObjectValidForUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::CanvasUpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::UnityEngine::UI::CanvasUpdateRegistry::ObjectValidForUpdate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c1932c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "ObjectValidForUpdate", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.CleanInvalidItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasUpdateRegistry::*)()>(&::UnityEngine::UI::CanvasUpdateRegistry::CleanInvalidItems)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x6c19400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "CleanInvalidItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.PerformUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasUpdateRegistry::*)()>(&::UnityEngine::UI::CanvasUpdateRegistry::PerformUpdate)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x6c196e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "PerformUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.ParentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*)>(&::UnityEngine::UI::CanvasUpdateRegistry::ParentCount)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6c19ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "ParentCount", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.SortLayoutList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::UI::ICanvasElement*, ::UnityEngine::UI::ICanvasElement*)>(&::UnityEngine::UI::CanvasUpdateRegistry::SortLayoutList)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6c19f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                { "SortLayoutList", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>(), ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.RegisterCanvasElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::ICanvasElement*)>(&::UnityEngine::UI::CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c1a0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                                                           { "RegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.TryRegisterCanvasElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UI::ICanvasElement*)>(&::UnityEngine::UI::CanvasUpdateRegistry::TryRegisterCanvasElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c1a1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                             { "TryRegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.InternalRegisterCanvasElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::CanvasUpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::UnityEngine::UI::CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c1a14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                             { "InternalRegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.RegisterCanvasElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::ICanvasElement*)>(&::UnityEngine::UI::CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c1a25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "RegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.TryRegisterCanvasElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UI::ICanvasElement*)>(&::UnityEngine::UI::CanvasUpdateRegistry::TryRegisterCanvasElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c1a3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                             { "TryRegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.InternalRegisterCanvasElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::CanvasUpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::UnityEngine::UI::CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6c1a2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                             { "InternalRegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.UnRegisterCanvasElementForRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::ICanvasElement*)>(&::UnityEngine::UI::CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6c1a43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                                                           { "UnRegisterCanvasElementForRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.DisableCanvasElementForRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::ICanvasElement*)>(&::UnityEngine::UI::CanvasUpdateRegistry::DisableCanvasElementForRebuild)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6c1a818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                                                           { "DisableCanvasElementForRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.InternalUnRegisterCanvasElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasUpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::UnityEngine::UI::CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6c1a4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                             { "InternalUnRegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.InternalUnRegisterCanvasElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasUpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::UnityEngine::UI::CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6c1a664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                             { "InternalUnRegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.InternalDisableCanvasElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasUpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::UnityEngine::UI::CanvasUpdateRegistry::InternalDisableCanvasElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6c1a88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                             { "InternalDisableCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.InternalDisableCanvasElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasUpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::UnityEngine::UI::CanvasUpdateRegistry::InternalDisableCanvasElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6c1aa40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                             { "InternalDisableCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.IsRebuildingLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::UI::CanvasUpdateRegistry::IsRebuildingLayout)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c1abf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "IsRebuildingLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasUpdateRegistry.IsRebuildingGraphics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::UI::CanvasUpdateRegistry::IsRebuildingGraphics)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c1ac54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "IsRebuildingGraphics", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_get_m_PerformingLayoutUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PerformingLayoutUpdate;
}
constexpr bool const& UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_get_m_PerformingLayoutUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PerformingLayoutUpdate;
}
constexpr void UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_set_m_PerformingLayoutUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PerformingLayoutUpdate = value;
}
constexpr bool& UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_get_m_PerformingGraphicUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PerformingGraphicUpdate;
}
constexpr bool const& UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_get_m_PerformingGraphicUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PerformingGraphicUpdate;
}
constexpr void UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_set_m_PerformingGraphicUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PerformingGraphicUpdate = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_get_m_CanvasUpdateProfilerStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasUpdateProfilerStrings;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_get_m_CanvasUpdateProfilerStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CanvasUpdateProfilerStrings;
}
constexpr void UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_set_m_CanvasUpdateProfilerStrings(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CanvasUpdateProfilerStrings = value;
}
constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*& UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_get_m_LayoutRebuildQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutRebuildQueue;
}
constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* const& UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_get_m_LayoutRebuildQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutRebuildQueue;
}
constexpr void UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_set_m_LayoutRebuildQueue(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LayoutRebuildQueue = value;
}
constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*& UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_get_m_GraphicRebuildQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicRebuildQueue;
}
constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* const& UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_get_m_GraphicRebuildQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicRebuildQueue;
}
constexpr void UnityEngine::UI::CanvasUpdateRegistry::__cordl_internal_set_m_GraphicRebuildQueue(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GraphicRebuildQueue = value;
}
inline void UnityEngine::UI::CanvasUpdateRegistry::setStaticF_s_Instance(::UnityEngine::UI::CanvasUpdateRegistry* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::CanvasUpdateRegistry*, "s_Instance", ::UnityEngine::UI::CanvasUpdateRegistry*>(std::forward<::UnityEngine::UI::CanvasUpdateRegistry*>(value));
}
inline ::UnityEngine::UI::CanvasUpdateRegistry* UnityEngine::UI::CanvasUpdateRegistry::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::CanvasUpdateRegistry*, "s_Instance", ::UnityEngine::UI::CanvasUpdateRegistry*>();
}
inline void UnityEngine::UI::CanvasUpdateRegistry::setStaticF_s_SortLayoutFunction(::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>*, "s_SortLayoutFunction", ::UnityEngine::UI::CanvasUpdateRegistry*>(
      std::forward<::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>* UnityEngine::UI::CanvasUpdateRegistry::getStaticF_s_SortLayoutFunction() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>*, "s_SortLayoutFunction", ::UnityEngine::UI::CanvasUpdateRegistry*>();
}
inline void UnityEngine::UI::CanvasUpdateRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::CanvasUpdateRegistry* UnityEngine::UI::CanvasUpdateRegistry::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::CanvasUpdateRegistry*>(nullptr, ___internal_method);
}
inline bool UnityEngine::UI::CanvasUpdateRegistry::ObjectValidForUpdate(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "ObjectValidForUpdate", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline void UnityEngine::UI::CanvasUpdateRegistry::CleanInvalidItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "CleanInvalidItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasUpdateRegistry::PerformUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "PerformUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::CanvasUpdateRegistry::ParentCount(::UnityEngine::Transform* child) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "ParentCount", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, child);
}
inline int32_t UnityEngine::UI::CanvasUpdateRegistry::SortLayoutList(::UnityEngine::UI::ICanvasElement* x, ::UnityEngine::UI::ICanvasElement* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                           { "SortLayoutList", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>(), ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline void UnityEngine::UI::CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                                                         { "RegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, element);
}
inline bool UnityEngine::UI::CanvasUpdateRegistry::TryRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "TryRegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element);
}
inline bool UnityEngine::UI::CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                           { "InternalRegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline void UnityEngine::UI::CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                                                         { "RegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, element);
}
inline bool UnityEngine::UI::CanvasUpdateRegistry::TryRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "TryRegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element);
}
inline bool UnityEngine::UI::CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                           { "InternalRegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline void UnityEngine::UI::CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                                                         { "UnRegisterCanvasElementForRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, element);
}
inline void UnityEngine::UI::CanvasUpdateRegistry::DisableCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                                                         { "DisableCanvasElementForRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, element);
}
inline void UnityEngine::UI::CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                           { "InternalUnRegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UI::CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                           { "InternalUnRegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UI::CanvasUpdateRegistry::InternalDisableCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                           { "InternalDisableCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UI::CanvasUpdateRegistry::InternalDisableCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(),
                                                           { "InternalDisableCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline bool UnityEngine::UI::CanvasUpdateRegistry::IsRebuildingLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "IsRebuildingLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::UI::CanvasUpdateRegistry::IsRebuildingGraphics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasUpdateRegistry*>(), { "IsRebuildingGraphics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::UI::CanvasUpdateRegistry* UnityEngine::UI::CanvasUpdateRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::CanvasUpdateRegistry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CanvasUpdateRegistry::CanvasUpdateRegistry() {}
