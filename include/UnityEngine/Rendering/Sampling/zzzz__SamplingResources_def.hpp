#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Sampling/SamplingResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SamplingResources)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Sampling {
struct SamplingResources_ResourceType;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::Sampling {
struct SamplingResources_ResourceType;
}
namespace UnityEngine::Rendering::Sampling {
class SamplingResources;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType);
MARK_REF_T(::UnityEngine::Rendering::Sampling::SamplingResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType, "UnityEngine.Rendering.Sampling", "SamplingResources/ResourceType");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Sampling::SamplingResources*, "UnityEngine.Rendering.Sampling", "SamplingResources");
// Dependencies
namespace UnityEngine::Rendering::Sampling {
// Is value type: true
// CS Name: UnityEngine.Rendering.Sampling.SamplingResources/ResourceType
struct CORDL_TYPE SamplingResources_ResourceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SamplingResources_ResourceType_Unwrapped
  enum struct __SamplingResources_ResourceType_Unwrapped : int32_t {
    __E_BlueNoiseTextures = static_cast<int32_t>(0x1),
    __E_SobolMatrices = static_cast<int32_t>(0x2),
    __E_All = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SamplingResources_ResourceType_Unwrapped() const noexcept {
    return static_cast<__SamplingResources_ResourceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SamplingResources_ResourceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr SamplingResources_ResourceType(int32_t value__) noexcept;

  /// @brief Field All value: I32(3)
  static ::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType const All;

  /// @brief Field BlueNoiseTextures value: I32(1)
  static ::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType const BlueNoiseTextures;

  /// @brief Field SobolMatrices value: I32(2)
  static ::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType const SobolMatrices;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9271 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Sampling
// Dependencies System.Object
namespace UnityEngine::Rendering::Sampling {
// Is value type: false
// CS Name: UnityEngine.Rendering.Sampling.SamplingResources
class CORDL_TYPE SamplingResources : public ::System::Object {
public:
  // Declarations
  using ResourceType = ::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType;

  /// @brief Field m_SobolBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SobolBuffer, put = __cordl_internal_set_m_SobolBuffer)) ::UnityEngine::GraphicsBuffer* m_SobolBuffer;

  /// @brief Field m_SobolOwenScrambled256Samples, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SobolOwenScrambled256Samples, put = __cordl_internal_set_m_SobolOwenScrambled256Samples)) ::UnityW<::UnityEngine::Texture2D>
      m_SobolOwenScrambled256Samples;

  /// @brief Field m_SobolRankingTile, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SobolRankingTile, put = __cordl_internal_set_m_SobolRankingTile)) ::UnityW<::UnityEngine::Texture2D> m_SobolRankingTile;

  /// @brief Field m_SobolScramblingTile, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SobolScramblingTile, put = __cordl_internal_set_m_SobolScramblingTile)) ::UnityW<::UnityEngine::Texture2D> m_SobolScramblingTile;

  /// @brief Field sobolMatrices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sobolMatrices, put = setStaticF_sobolMatrices)) ::ArrayW<uint32_t> sobolMatrices;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Bind, addr 0x6bf1ee4, size 0x228, virtual false, abstract: false, final false
  static inline void Bind(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Sampling::SamplingResources* resources);

  /// @brief Method Dispose, addr 0x6bf210c, size 0x14, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::Rendering::Sampling::SamplingResources* New_ctor();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_SobolBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_SobolBuffer();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_SobolOwenScrambled256Samples() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_SobolOwenScrambled256Samples();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_SobolRankingTile() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_SobolRankingTile();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_SobolScramblingTile() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_SobolScramblingTile();

  constexpr void __cordl_internal_set_m_SobolBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_SobolOwenScrambled256Samples(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_SobolRankingTile(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_SobolScramblingTile(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x6bf2120, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t> getStaticF_sobolMatrices();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_sobolMatrices(::ArrayW<uint32_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SamplingResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SamplingResources", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SamplingResources(SamplingResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SamplingResources", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SamplingResources(SamplingResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9272 };

  /// @brief Field m_SobolScramblingTile, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_SobolScramblingTile;

  /// @brief Field m_SobolRankingTile, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_SobolRankingTile;

  /// @brief Field m_SobolOwenScrambled256Samples, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_SobolOwenScrambled256Samples;

  /// @brief Field m_SobolBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_SobolBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Sampling::SamplingResources, ___m_SobolScramblingTile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Sampling::SamplingResources, ___m_SobolRankingTile) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Sampling::SamplingResources, ___m_SobolOwenScrambled256Samples) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Sampling::SamplingResources, ___m_SobolBuffer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Sampling::SamplingResources) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::Sampling
