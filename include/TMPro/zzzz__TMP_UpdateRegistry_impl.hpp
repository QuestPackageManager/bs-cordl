#pragma once
// IWYU pragma private; include "TMPro\TMP_UpdateRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_UpdateRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_UpdateRegistry* (*)()>(&::TMPro::TMP_UpdateRegistry::get_instance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69ab414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_UpdateRegistry::*)()>(&::TMPro::TMP_UpdateRegistry::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x69ab48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry.RegisterCanvasElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::ICanvasElement*)>(&::TMPro::TMP_UpdateRegistry::RegisterCanvasElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69ab5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "RegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry.InternalRegisterCanvasElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_UpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x69ab5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "InternalRegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry.RegisterCanvasElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::ICanvasElement*)>(&::TMPro::TMP_UpdateRegistry::RegisterCanvasElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69ab778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "RegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry.InternalRegisterCanvasElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_UpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x69ab798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "InternalRegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry.PerformUpdateForCanvasRendererObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_UpdateRegistry::*)()>(&::TMPro::TMP_UpdateRegistry::PerformUpdateForCanvasRendererObjects)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x69ab914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "PerformUpdateForCanvasRendererObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry.PerformUpdateForMeshRendererObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_UpdateRegistry::*)()>(&::TMPro::TMP_UpdateRegistry::PerformUpdateForMeshRendererObjects)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69abb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "PerformUpdateForMeshRendererObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry.UnRegisterCanvasElementForRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::ICanvasElement*)>(&::TMPro::TMP_UpdateRegistry::UnRegisterCanvasElementForRebuild)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x69abbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "UnRegisterCanvasElementForRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry.InternalUnRegisterCanvasElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_UpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69abc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "InternalUnRegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateRegistry.InternalUnRegisterCanvasElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_UpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(
    &::TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69abd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "InternalUnRegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>*& TMPro::TMP_UpdateRegistry::__cordl_internal_get_m_LayoutRebuildQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutRebuildQueue;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* const& TMPro::TMP_UpdateRegistry::__cordl_internal_get_m_LayoutRebuildQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutRebuildQueue;
}
constexpr void TMPro::TMP_UpdateRegistry::__cordl_internal_set_m_LayoutRebuildQueue(::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LayoutRebuildQueue = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& TMPro::TMP_UpdateRegistry::__cordl_internal_get_m_LayoutQueueLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutQueueLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& TMPro::TMP_UpdateRegistry::__cordl_internal_get_m_LayoutQueueLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutQueueLookup;
}
constexpr void TMPro::TMP_UpdateRegistry::__cordl_internal_set_m_LayoutQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LayoutQueueLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>*& TMPro::TMP_UpdateRegistry::__cordl_internal_get_m_GraphicRebuildQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicRebuildQueue;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* const& TMPro::TMP_UpdateRegistry::__cordl_internal_get_m_GraphicRebuildQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicRebuildQueue;
}
constexpr void TMPro::TMP_UpdateRegistry::__cordl_internal_set_m_GraphicRebuildQueue(::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GraphicRebuildQueue = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& TMPro::TMP_UpdateRegistry::__cordl_internal_get_m_GraphicQueueLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicQueueLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& TMPro::TMP_UpdateRegistry::__cordl_internal_get_m_GraphicQueueLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicQueueLookup;
}
constexpr void TMPro::TMP_UpdateRegistry::__cordl_internal_set_m_GraphicQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GraphicQueueLookup = value;
}
inline void TMPro::TMP_UpdateRegistry::setStaticF_s_Instance(::TMPro::TMP_UpdateRegistry* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_UpdateRegistry*, "s_Instance", ::TMPro::TMP_UpdateRegistry*>(std::forward<::TMPro::TMP_UpdateRegistry*>(value));
}
inline ::TMPro::TMP_UpdateRegistry* TMPro::TMP_UpdateRegistry::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_UpdateRegistry*, "s_Instance", ::TMPro::TMP_UpdateRegistry*>();
}
inline ::TMPro::TMP_UpdateRegistry* TMPro::TMP_UpdateRegistry::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_UpdateRegistry*>(nullptr, ___internal_method);
}
inline void TMPro::TMP_UpdateRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_UpdateRegistry::RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "RegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, element);
}
inline bool TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "InternalRegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline void TMPro::TMP_UpdateRegistry::RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "RegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, element);
}
inline bool TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "InternalRegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline void TMPro::TMP_UpdateRegistry::PerformUpdateForCanvasRendererObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "PerformUpdateForCanvasRendererObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_UpdateRegistry::PerformUpdateForMeshRendererObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "PerformUpdateForMeshRendererObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_UpdateRegistry::UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "UnRegisterCanvasElementForRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, element);
}
inline void TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "InternalUnRegisterCanvasElementForLayoutRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_UpdateRegistry*>(), { "InternalUnRegisterCanvasElementForGraphicRebuild", {}, { ::i2c::type_of<::UnityEngine::UI::ICanvasElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline ::TMPro::TMP_UpdateRegistry* TMPro::TMP_UpdateRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_UpdateRegistry*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_UpdateRegistry::TMP_UpdateRegistry() {}
