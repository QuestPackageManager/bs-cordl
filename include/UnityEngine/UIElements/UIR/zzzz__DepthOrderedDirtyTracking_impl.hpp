#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/DepthOrderedDirtyTracking.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DepthOrderedDirtyTracking_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypeClasses_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTree_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking.EnsureFits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::EnsureFits)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x7179410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking>(), { "EnsureFits", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking.RegisterDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::*)(
    ::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses)>(
    &::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::RegisterDirty)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x717bba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking>(),
                                                             { "RegisterDirty",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking.ClearDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::*)(
    ::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes)>(&::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::ClearDirty)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x717bd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking>(),
                            { "ClearDirty", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::*)()>(&::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::Reset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x717bf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::EnsureFits(int32_t maxDepth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking>(), { "EnsureFits", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxDepth);
}
inline void UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::RegisterDirty(::UnityEngine::UIElements::UIR::RenderData* renderData,
                                                                                   ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes,
                                                                                   ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyTypeClass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking>(),
                                                           { "RegisterDirty",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderData, dirtyTypes, dirtyTypeClass);
}
inline void UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::ClearDirty(::UnityEngine::UIElements::UIR::RenderData* renderData,
                                                                                ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypesInverse) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking>(),
                          { "ClearDirty", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderData, dirtyTypesInverse);
}
inline void UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "owner", ty: "::UnityEngine::UIElements::UIR::RenderTree*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "heads", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderData*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tails", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderData*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minDepths", ty: "::ArrayW<int32_t>",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxDepths", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dirtyID", ty:
// "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::DepthOrderedDirtyTracking(::UnityEngine::UIElements::UIR::RenderTree* owner,
                                                                                               ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderData*>* heads,
                                                                                               ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderData*>* tails,
                                                                                               ::ArrayW<int32_t> minDepths, ::ArrayW<int32_t> maxDepths, uint32_t dirtyID) noexcept {
  this->owner = owner;
  this->heads = heads;
  this->tails = tails;
  this->minDepths = minDepths;
  this->maxDepths = maxDepths;
  this->dirtyID = dirtyID;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking::DepthOrderedDirtyTracking() {}
