#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/SceneMemoryRequirements.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__SceneMemoryRequirements_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::*)()>(
    &::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dfcef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint64_t& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_buildScratchSizeInDwords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildScratchSizeInDwords;
}
constexpr uint64_t const& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_buildScratchSizeInDwords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildScratchSizeInDwords;
}
constexpr void UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_set_buildScratchSizeInDwords(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buildScratchSizeInDwords = value;
}
constexpr ::ArrayW<uint64_t>& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_bottomLevelBvhSizeInNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLevelBvhSizeInNodes;
}
constexpr ::ArrayW<uint64_t> const& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_bottomLevelBvhSizeInNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLevelBvhSizeInNodes;
}
constexpr void UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_set_bottomLevelBvhSizeInNodes(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottomLevelBvhSizeInNodes = value;
}
constexpr ::ArrayW<uint32_t>& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_bottomLevelBvhOffsetInNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLevelBvhOffsetInNodes;
}
constexpr ::ArrayW<uint32_t> const& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_bottomLevelBvhOffsetInNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLevelBvhOffsetInNodes;
}
constexpr void UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_set_bottomLevelBvhOffsetInNodes(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottomLevelBvhOffsetInNodes = value;
}
constexpr ::ArrayW<uint64_t>& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_bottomLevelBvhLeavesSizeInNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLevelBvhLeavesSizeInNodes;
}
constexpr ::ArrayW<uint64_t> const& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_bottomLevelBvhLeavesSizeInNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLevelBvhLeavesSizeInNodes;
}
constexpr void UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_set_bottomLevelBvhLeavesSizeInNodes(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottomLevelBvhLeavesSizeInNodes = value;
}
constexpr ::ArrayW<uint32_t>& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_bottomLevelBvhLeavesOffsetInNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLevelBvhLeavesOffsetInNodes;
}
constexpr ::ArrayW<uint32_t> const& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_bottomLevelBvhLeavesOffsetInNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLevelBvhLeavesOffsetInNodes;
}
constexpr void UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_set_bottomLevelBvhLeavesOffsetInNodes(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottomLevelBvhLeavesOffsetInNodes = value;
}
constexpr uint64_t& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_totalBottomLevelBvhSizeInNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBottomLevelBvhSizeInNodes;
}
constexpr uint64_t const& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_totalBottomLevelBvhSizeInNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBottomLevelBvhSizeInNodes;
}
constexpr void UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_set_totalBottomLevelBvhSizeInNodes(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalBottomLevelBvhSizeInNodes = value;
}
constexpr uint64_t& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_totalBottomLevelBvhLeavesSizeInNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBottomLevelBvhLeavesSizeInNodes;
}
constexpr uint64_t const& UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_get_totalBottomLevelBvhLeavesSizeInNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBottomLevelBvhLeavesSizeInNodes;
}
constexpr void UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::__cordl_internal_set_totalBottomLevelBvhLeavesSizeInNodes(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalBottomLevelBvhLeavesSizeInNodes = value;
}
inline void UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements* UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements::SceneMemoryRequirements() {}
