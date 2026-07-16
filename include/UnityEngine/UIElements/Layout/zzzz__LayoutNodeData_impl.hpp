#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNodeData.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer2_1_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutList_1_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutValue_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNodeData_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNodeData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus::LayoutNodeData_FlexStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus::LayoutNodeData_FlexStatus() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus::IsDirty{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus::HasNewLayout{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus::DependsOnParentSize{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus::Fixed{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus::MinViolation{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus::MaxViolation{ static_cast<int32_t>(0x20) };
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutNodeData.get_HasNewLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Layout::LayoutNodeData::*)()>(&::UnityEngine::UIElements::Layout::LayoutNodeData::get_HasNewLayout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cfe41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNodeData>(), { "get_HasNewLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutNodeData.set_HasNewLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutNodeData::*)(bool)>(&::UnityEngine::UIElements::Layout::LayoutNodeData::set_HasNewLayout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6cfe4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNodeData>(), { "set_HasNewLayout", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutNodeData.get_IsDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Layout::LayoutNodeData::*)()>(&::UnityEngine::UIElements::Layout::LayoutNodeData::get_IsDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cfe320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNodeData>(), { "get_IsDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutNodeData.set_IsDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutNodeData::*)(bool)>(&::UnityEngine::UIElements::Layout::LayoutNodeData::set_IsDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cfe3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNodeData>(), { "set_IsDirty", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::Layout::LayoutNodeData::get_HasNewLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNodeData>(), { "get_HasNewLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutNodeData::set_HasNewLayout(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNodeData>(), { "set_HasNewLayout", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Layout::LayoutNodeData::get_IsDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNodeData>(), { "get_IsDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutNodeData::set_IsDirty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNodeData>(), { "set_IsDirty", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "ResolvedDimensions", ty: "::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "TargetSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ManagedMeasureFunctionIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ManagedBaselineFunctionIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ManagedOwnerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "LineIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Config", ty: "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Parent", ty: "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "NextChild", ty:
// "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "Children", ty:
// "::UnityEngine::UIElements::Layout::LayoutList_1<::UnityEngine::UIElements::Layout::LayoutHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Status", ty:
// "::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeData::LayoutNodeData(::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> ResolvedDimensions,
                                                                            float_t TargetSize, int32_t ManagedMeasureFunctionIndex, int32_t ManagedBaselineFunctionIndex, int32_t ManagedOwnerIndex,
                                                                            int32_t LineIndex, ::UnityEngine::UIElements::Layout::LayoutHandle Config,
                                                                            ::UnityEngine::UIElements::Layout::LayoutHandle Parent, ::UnityEngine::UIElements::Layout::LayoutHandle NextChild,
                                                                            ::UnityEngine::UIElements::Layout::LayoutList_1<::UnityEngine::UIElements::Layout::LayoutHandle> Children,
                                                                            ::UnityEngine::UIElements::Layout::LayoutNodeData_FlexStatus Status) noexcept {
  this->ResolvedDimensions = ResolvedDimensions;
  this->TargetSize = TargetSize;
  this->ManagedMeasureFunctionIndex = ManagedMeasureFunctionIndex;
  this->ManagedBaselineFunctionIndex = ManagedBaselineFunctionIndex;
  this->ManagedOwnerIndex = ManagedOwnerIndex;
  this->LineIndex = LineIndex;
  this->Config = Config;
  this->Parent = Parent;
  this->NextChild = NextChild;
  this->Children = Children;
  this->Status = Status;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeData::LayoutNodeData() {}
