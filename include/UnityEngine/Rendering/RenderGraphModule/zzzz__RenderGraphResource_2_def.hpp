#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphResource_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderGraphResource_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphResource_2)
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphResourcePool;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename Type> class RenderGraphResourcePool_1;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename DescType, typename ResType> class RenderGraphResource_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2);
// Dependencies UnityEngine.Rendering.RenderGraphModule.IRenderGraphResource
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename DescType, typename ResType>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphResource`2<DescType,ResType>
class CORDL_TYPE RenderGraphResource_2 : public ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource {
public:
  // Declarations
  /// @brief Field desc, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_desc, put = __cordl_internal_set_desc)) DescType desc;

  /// @brief Field graphicsResource, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_graphicsResource, put = __cordl_internal_set_graphicsResource)) ResType graphicsResource;

  /// @brief Field m_Pool, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<ResType>* m_Pool;

  /// @brief Field validDesc, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_validDesc, put = __cordl_internal_set_validDesc)) bool validDesc;

  /// @brief Method CreatePooledGraphicsResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CreatePooledGraphicsResource();

  /// @brief Method IsCreated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsCreated();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>* New_ctor();

  /// @brief Method ReleaseGraphicsResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReleaseGraphicsResource();

  /// @brief Method ReleasePooledGraphicsResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReleasePooledGraphicsResource(int32_t frameIndex);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* pool);

  constexpr DescType const& __cordl_internal_get_desc() const;

  constexpr DescType& __cordl_internal_get_desc();

  constexpr ResType const& __cordl_internal_get_graphicsResource() const;

  constexpr ResType& __cordl_internal_get_graphicsResource();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<ResType>* const& __cordl_internal_get_m_Pool() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<ResType>*& __cordl_internal_get_m_Pool();

  constexpr bool const& __cordl_internal_get_validDesc() const;

  constexpr bool& __cordl_internal_get_validDesc();

  constexpr void __cordl_internal_set_desc(DescType value);

  constexpr void __cordl_internal_set_graphicsResource(ResType value);

  constexpr void __cordl_internal_set_m_Pool(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<ResType>* value);

  constexpr void __cordl_internal_set_validDesc(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResource_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResource_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResource_2(RenderGraphResource_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResource_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResource_2(RenderGraphResource_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12435 };

  /// @brief Field desc, offset: 0x30, size: 0x8, def value: None
  DescType ___desc;

  /// @brief Field validDesc, offset: 0x38, size: 0x1, def value: None
  bool ___validDesc;

  /// @brief Field graphicsResource, offset: 0x40, size: 0x8, def value: None
  ResType ___graphicsResource;

  /// @brief Field m_Pool, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<ResType>* ___m_Pool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphResource`2");
