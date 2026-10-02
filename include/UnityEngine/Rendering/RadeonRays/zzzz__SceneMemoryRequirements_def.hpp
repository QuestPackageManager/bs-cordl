#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/SceneMemoryRequirements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneMemoryRequirements)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
class SceneMemoryRequirements;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements*, "UnityEngine.Rendering.RadeonRays", "SceneMemoryRequirements");
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.SceneMemoryRequirements
class CORDL_TYPE SceneMemoryRequirements : public ::System::Object {
public:
  // Declarations
  /// @brief Field bottomLevelBvhLeavesOffsetInNodes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bottomLevelBvhLeavesOffsetInNodes, put = __cordl_internal_set_bottomLevelBvhLeavesOffsetInNodes)) ::ArrayW<uint32_t> bottomLevelBvhLeavesOffsetInNodes;

  /// @brief Field bottomLevelBvhLeavesSizeInNodes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bottomLevelBvhLeavesSizeInNodes, put = __cordl_internal_set_bottomLevelBvhLeavesSizeInNodes)) ::ArrayW<uint64_t> bottomLevelBvhLeavesSizeInNodes;

  /// @brief Field bottomLevelBvhOffsetInNodes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bottomLevelBvhOffsetInNodes, put = __cordl_internal_set_bottomLevelBvhOffsetInNodes)) ::ArrayW<uint32_t> bottomLevelBvhOffsetInNodes;

  /// @brief Field bottomLevelBvhSizeInNodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bottomLevelBvhSizeInNodes, put = __cordl_internal_set_bottomLevelBvhSizeInNodes)) ::ArrayW<uint64_t> bottomLevelBvhSizeInNodes;

  /// @brief Field buildScratchSizeInDwords, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buildScratchSizeInDwords, put = __cordl_internal_set_buildScratchSizeInDwords)) uint64_t buildScratchSizeInDwords;

  /// @brief Field totalBottomLevelBvhLeavesSizeInNodes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_totalBottomLevelBvhLeavesSizeInNodes, put = __cordl_internal_set_totalBottomLevelBvhLeavesSizeInNodes)) uint64_t totalBottomLevelBvhLeavesSizeInNodes;

  /// @brief Field totalBottomLevelBvhSizeInNodes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_totalBottomLevelBvhSizeInNodes, put = __cordl_internal_set_totalBottomLevelBvhSizeInNodes)) uint64_t totalBottomLevelBvhSizeInNodes;

  static inline ::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements* New_ctor();

  constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_bottomLevelBvhLeavesOffsetInNodes() const;

  constexpr ::ArrayW<uint32_t>& __cordl_internal_get_bottomLevelBvhLeavesOffsetInNodes();

  constexpr ::ArrayW<uint64_t> const& __cordl_internal_get_bottomLevelBvhLeavesSizeInNodes() const;

  constexpr ::ArrayW<uint64_t>& __cordl_internal_get_bottomLevelBvhLeavesSizeInNodes();

  constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_bottomLevelBvhOffsetInNodes() const;

  constexpr ::ArrayW<uint32_t>& __cordl_internal_get_bottomLevelBvhOffsetInNodes();

  constexpr ::ArrayW<uint64_t> const& __cordl_internal_get_bottomLevelBvhSizeInNodes() const;

  constexpr ::ArrayW<uint64_t>& __cordl_internal_get_bottomLevelBvhSizeInNodes();

  constexpr uint64_t const& __cordl_internal_get_buildScratchSizeInDwords() const;

  constexpr uint64_t& __cordl_internal_get_buildScratchSizeInDwords();

  constexpr uint64_t const& __cordl_internal_get_totalBottomLevelBvhLeavesSizeInNodes() const;

  constexpr uint64_t& __cordl_internal_get_totalBottomLevelBvhLeavesSizeInNodes();

  constexpr uint64_t const& __cordl_internal_get_totalBottomLevelBvhSizeInNodes() const;

  constexpr uint64_t& __cordl_internal_get_totalBottomLevelBvhSizeInNodes();

  constexpr void __cordl_internal_set_bottomLevelBvhLeavesOffsetInNodes(::ArrayW<uint32_t> value);

  constexpr void __cordl_internal_set_bottomLevelBvhLeavesSizeInNodes(::ArrayW<uint64_t> value);

  constexpr void __cordl_internal_set_bottomLevelBvhOffsetInNodes(::ArrayW<uint32_t> value);

  constexpr void __cordl_internal_set_bottomLevelBvhSizeInNodes(::ArrayW<uint64_t> value);

  constexpr void __cordl_internal_set_buildScratchSizeInDwords(uint64_t value);

  constexpr void __cordl_internal_set_totalBottomLevelBvhLeavesSizeInNodes(uint64_t value);

  constexpr void __cordl_internal_set_totalBottomLevelBvhSizeInNodes(uint64_t value);

  /// @brief Method .ctor, addr 0x6dfcef4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneMemoryRequirements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneMemoryRequirements", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneMemoryRequirements(SceneMemoryRequirements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneMemoryRequirements", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneMemoryRequirements(SceneMemoryRequirements const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20432 };

  /// @brief Field buildScratchSizeInDwords, offset: 0x10, size: 0x8, def value: None
  uint64_t ___buildScratchSizeInDwords;

  /// @brief Field bottomLevelBvhSizeInNodes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint64_t> ___bottomLevelBvhSizeInNodes;

  /// @brief Field bottomLevelBvhOffsetInNodes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint32_t> ___bottomLevelBvhOffsetInNodes;

  /// @brief Field bottomLevelBvhLeavesSizeInNodes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint64_t> ___bottomLevelBvhLeavesSizeInNodes;

  /// @brief Field bottomLevelBvhLeavesOffsetInNodes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint32_t> ___bottomLevelBvhLeavesOffsetInNodes;

  /// @brief Field totalBottomLevelBvhSizeInNodes, offset: 0x38, size: 0x8, def value: None
  uint64_t ___totalBottomLevelBvhSizeInNodes;

  /// @brief Field totalBottomLevelBvhLeavesSizeInNodes, offset: 0x40, size: 0x8, def value: None
  uint64_t ___totalBottomLevelBvhLeavesSizeInNodes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements, ___buildScratchSizeInDwords) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements, ___bottomLevelBvhSizeInNodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements, ___bottomLevelBvhOffsetInNodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements, ___bottomLevelBvhLeavesSizeInNodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements, ___bottomLevelBvhLeavesOffsetInNodes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements, ___totalBottomLevelBvhSizeInNodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements, ___totalBottomLevelBvhLeavesSizeInNodes) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::SceneMemoryRequirements) == 0x48, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
