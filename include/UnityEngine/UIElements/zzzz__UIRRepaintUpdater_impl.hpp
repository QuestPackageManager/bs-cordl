#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRRepaintUpdater.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIRRepaintUpdater_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanelRenderer_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6dd38b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.get_profilerMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(
    &::UnityEngine::UIElements::UIRRepaintUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6dd3934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.get_forceGammaRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::get_forceGammaRendering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd3990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "get_forceGammaRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.set_forceGammaRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)(bool)>(&::UnityEngine::UIElements::UIRRepaintUpdater::set_forceGammaRendering)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6dd3998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "set_forceGammaRendering", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.get_vertexBudget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::get_vertexBudget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd3a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "get_vertexBudget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.set_vertexBudget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)(uint32_t)>(&::UnityEngine::UIElements::UIRRepaintUpdater::set_vertexBudget)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6dd3a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "set_vertexBudget", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.get_drawStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::get_drawStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd3a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "get_drawStats", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.get_breakBatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::get_breakBatches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd3a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "get_breakBatches", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(
    &::UnityEngine::UIElements::UIRRepaintUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6dd3a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6dd3b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::Render)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6dd3c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "Render", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.CreateRenderChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChain* (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(
    &::UnityEngine::UIElements::UIRRepaintUpdater::CreateRenderChain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6dd3cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.OnGraphicsResourcesRecreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::UIRRepaintUpdater::OnGraphicsResourcesRecreate)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6dd3e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "OnGraphicsResourcesRecreate", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.OnPanelChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::UIRRepaintUpdater::OnPanelChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6dd4078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(),
                                                                                           { "OnPanelChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.AttachToPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::AttachToPanel)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6dd435c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "AttachToPanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.DetachFromPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::DetachFromPanel)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6dd4090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "DetachFromPanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.InitRenderChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::InitRenderChain)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6dd3bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "InitRenderChain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dd4654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.DestroyRenderChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::DestroyRenderChain)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dd39b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "DestroyRenderChain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.OnPanelIsFlatChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::OnPanelIsFlatChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dd46e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "OnPanelIsFlatChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.OnPanelAtlasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::OnPanelAtlasChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dd46e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "OnPanelAtlasChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.OnPanelDrawsInCamerasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::OnPanelDrawsInCamerasChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dd46e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "OnPanelDrawsInCamerasChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.OnPanelHierarchyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::UIRRepaintUpdater::OnPanelHierarchyChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6dd46ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(),
                                                             { "OnPanelHierarchyChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::HierarchyChangeType>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.ResetAllElementsDataRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIRRepaintUpdater::ResetAllElementsDataRecursive)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6dd4658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(),
                                                                                           { "ResetAllElementsDataRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIRRepaintUpdater::*)()>(&::UnityEngine::UIElements::UIRRepaintUpdater::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd4724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)(bool)>(&::UnityEngine::UIElements::UIRRepaintUpdater::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd472c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRRepaintUpdater.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRRepaintUpdater::*)(bool)>(&::UnityEngine::UIElements::UIRRepaintUpdater::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6dd4734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get_attachedPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachedPanel;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get_attachedPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachedPanel;
}
constexpr void UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_set_attachedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attachedPanel = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain*& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get_renderChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderChain;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain* const& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get_renderChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderChain;
}
constexpr void UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_set_renderChain(::UnityEngine::UIElements::UIR::RenderChain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderChain = value;
}
constexpr bool& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get_m_ForceGammaRendering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceGammaRendering;
}
constexpr bool const& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get_m_ForceGammaRendering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceGammaRendering;
}
constexpr void UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_set_m_ForceGammaRendering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForceGammaRendering = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get_m_VertexBudget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexBudget;
}
constexpr uint32_t const& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get_m_VertexBudget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexBudget;
}
constexpr void UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_set_m_VertexBudget(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertexBudget = value;
}
constexpr bool& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get__drawStats_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawStats_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get__drawStats_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawStats_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_set__drawStats_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____drawStats_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get__breakBatches_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____breakBatches_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get__breakBatches_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____breakBatches_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_set__breakBatches_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____breakBatches_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIRRepaintUpdater::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::setStaticF_s_Description(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::UIRRepaintUpdater*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIRRepaintUpdater::getStaticF_s_Description() {
  return ::cordl_internals::getStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::UIRRepaintUpdater*>();
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::UIRRepaintUpdater*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIRRepaintUpdater::getStaticF_s_ProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::UIRRepaintUpdater*>();
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIRRepaintUpdater::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIRRepaintUpdater::get_forceGammaRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "get_forceGammaRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::set_forceGammaRendering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "set_forceGammaRendering", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::UIElements::UIRRepaintUpdater::get_vertexBudget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "get_vertexBudget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::set_vertexBudget(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "set_vertexBudget", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIRRepaintUpdater::get_drawStats() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "get_drawStats", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIRRepaintUpdater::get_breakBatches() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "get_breakBatches", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::Render() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "Render", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderChain* UnityEngine::UIElements::UIRRepaintUpdater::CreateRenderChain() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChain*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::OnGraphicsResourcesRecreate(bool recreate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "OnGraphicsResourcesRecreate", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, recreate);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(),
                                                                                         { "OnPanelChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::AttachToPanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "AttachToPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::DetachFromPanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "DetachFromPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::InitRenderChain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "InitRenderChain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::DestroyRenderChain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "DestroyRenderChain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::OnPanelIsFlatChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "OnPanelIsFlatChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::OnPanelAtlasChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "OnPanelAtlasChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::OnPanelDrawsInCamerasChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "OnPanelDrawsInCamerasChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::OnPanelHierarchyChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType,
                                                                                ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(),
                                                           { "OnPanelHierarchyChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::HierarchyChangeType>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, changeType, additionalContext);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::ResetAllElementsDataRecursive(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(),
                                                                                         { "ResetAllElementsDataRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::UIRRepaintUpdater::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIRRepaintUpdater::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIRRepaintUpdater*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::UIRRepaintUpdater* UnityEngine::UIElements::UIRRepaintUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIRRepaintUpdater*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IPanelRenderer"
constexpr UnityEngine::UIElements::UIRRepaintUpdater::operator ::UnityEngine::UIElements::IPanelRenderer*() noexcept {
  return static_cast<::UnityEngine::UIElements::IPanelRenderer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IPanelRenderer"
constexpr ::UnityEngine::UIElements::IPanelRenderer* UnityEngine::UIElements::UIRRepaintUpdater::i___UnityEngine__UIElements__IPanelRenderer() noexcept {
  return static_cast<::UnityEngine::UIElements::IPanelRenderer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIRRepaintUpdater::UIRRepaintUpdater() {}
