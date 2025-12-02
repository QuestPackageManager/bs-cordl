#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRenderGraphResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IRenderGraphResource)
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphResourcePool;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphResource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource);
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IRenderGraphResource
class CORDL_TYPE IRenderGraphResource : public ::System::Object {
public:
  // Declarations
  /// @brief Field cachedHash, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_cachedHash, put = __cordl_internal_set_cachedHash)) int32_t cachedHash;

  /// @brief Field forceRelease, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_forceRelease, put = __cordl_internal_set_forceRelease)) bool forceRelease;

  /// @brief Field imported, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_imported, put = __cordl_internal_set_imported)) bool imported;

  /// @brief Field readCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_readCount, put = __cordl_internal_set_readCount)) uint32_t readCount;

  /// @brief Field requestFallBack, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_requestFallBack, put = __cordl_internal_set_requestFallBack)) bool requestFallBack;

  /// @brief Field shared, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_shared, put = __cordl_internal_set_shared)) bool shared;

  /// @brief Field sharedExplicitRelease, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_sharedExplicitRelease, put = __cordl_internal_set_sharedExplicitRelease)) bool sharedExplicitRelease;

  /// @brief Field sharedResourceLastFrameUsed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_sharedResourceLastFrameUsed, put = __cordl_internal_set_sharedResourceLastFrameUsed)) int32_t sharedResourceLastFrameUsed;

  /// @brief Field transientPassIndex, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_transientPassIndex, put = __cordl_internal_set_transientPassIndex)) int32_t transientPassIndex;

  /// @brief Field version, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Field writeCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_writeCount, put = __cordl_internal_set_writeCount)) uint32_t writeCount;

  /// @brief Method CreateGraphicsResource, addr 0x65cb2e8, size 0x4, virtual true, abstract: false, final false
  inline void CreateGraphicsResource();

  /// @brief Method CreatePooledGraphicsResource, addr 0x65cb2e4, size 0x4, virtual true, abstract: false, final false
  inline void CreatePooledGraphicsResource();

  /// @brief Method GetDescHashCode, addr 0x65cb308, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDescHashCode();

  /// @brief Method GetName, addr 0x65cb244, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method GetSortIndex, addr 0x65cb300, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetSortIndex();

  /// @brief Method IncrementReadCount, addr 0x65cb2a0, size 0x10, virtual true, abstract: false, final false
  inline void IncrementReadCount();

  /// @brief Method IncrementWriteCount, addr 0x65cb290, size 0x10, virtual true, abstract: false, final false
  inline void IncrementWriteCount();

  /// @brief Method IsCreated, addr 0x65cb288, size 0x8, virtual true, abstract: false, final false
  inline bool IsCreated();

  /// @brief Method LogCreation, addr 0x65cb2f8, size 0x4, virtual true, abstract: false, final false
  inline void LogCreation(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  /// @brief Method LogRelease, addr 0x65cb2fc, size 0x4, virtual true, abstract: false, final false
  inline void LogRelease(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  /// @brief Method NeedsFallBack, addr 0x65cb2c4, size 0x20, virtual true, abstract: false, final false
  inline bool NeedsFallBack();

  /// @brief Method NewVersion, addr 0x65cb2b0, size 0x14, virtual true, abstract: false, final false
  inline int32_t NewVersion();

  static inline ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* New_ctor();

  /// @brief Method ReleaseGraphicsResource, addr 0x65cb2f4, size 0x4, virtual true, abstract: false, final false
  inline void ReleaseGraphicsResource();

  /// @brief Method ReleasePooledGraphicsResource, addr 0x65cb2f0, size 0x4, virtual true, abstract: false, final false
  inline void ReleasePooledGraphicsResource(int32_t frameIndex);

  /// @brief Method Reset, addr 0x65cb224, size 0x20, virtual true, abstract: false, final false
  inline void Reset(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* _);

  /// @brief Method UpdateGraphicsResource, addr 0x65cb2ec, size 0x4, virtual true, abstract: false, final false
  inline void UpdateGraphicsResource();

  constexpr int32_t const& __cordl_internal_get_cachedHash() const;

  constexpr int32_t& __cordl_internal_get_cachedHash();

  constexpr bool const& __cordl_internal_get_forceRelease() const;

  constexpr bool& __cordl_internal_get_forceRelease();

  constexpr bool const& __cordl_internal_get_imported() const;

  constexpr bool& __cordl_internal_get_imported();

  constexpr uint32_t const& __cordl_internal_get_readCount() const;

  constexpr uint32_t& __cordl_internal_get_readCount();

  constexpr bool const& __cordl_internal_get_requestFallBack() const;

  constexpr bool& __cordl_internal_get_requestFallBack();

  constexpr bool const& __cordl_internal_get_shared() const;

  constexpr bool& __cordl_internal_get_shared();

  constexpr bool const& __cordl_internal_get_sharedExplicitRelease() const;

  constexpr bool& __cordl_internal_get_sharedExplicitRelease();

  constexpr int32_t const& __cordl_internal_get_sharedResourceLastFrameUsed() const;

  constexpr int32_t& __cordl_internal_get_sharedResourceLastFrameUsed();

  constexpr int32_t const& __cordl_internal_get_transientPassIndex() const;

  constexpr int32_t& __cordl_internal_get_transientPassIndex();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr uint32_t const& __cordl_internal_get_writeCount() const;

  constexpr uint32_t& __cordl_internal_get_writeCount();

  constexpr void __cordl_internal_set_cachedHash(int32_t value);

  constexpr void __cordl_internal_set_forceRelease(bool value);

  constexpr void __cordl_internal_set_imported(bool value);

  constexpr void __cordl_internal_set_readCount(uint32_t value);

  constexpr void __cordl_internal_set_requestFallBack(bool value);

  constexpr void __cordl_internal_set_shared(bool value);

  constexpr void __cordl_internal_set_sharedExplicitRelease(bool value);

  constexpr void __cordl_internal_set_sharedResourceLastFrameUsed(int32_t value);

  constexpr void __cordl_internal_set_transientPassIndex(int32_t value);

  constexpr void __cordl_internal_set_version(int32_t value);

  constexpr void __cordl_internal_set_writeCount(uint32_t value);

  /// @brief Method .ctor, addr 0x65cb310, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IRenderGraphResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRenderGraphResource(IRenderGraphResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderGraphResource(IRenderGraphResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12430 };

  /// @brief Field imported, offset: 0x10, size: 0x1, def value: None
  bool ___imported;

  /// @brief Field shared, offset: 0x11, size: 0x1, def value: None
  bool ___shared;

  /// @brief Field sharedExplicitRelease, offset: 0x12, size: 0x1, def value: None
  bool ___sharedExplicitRelease;

  /// @brief Field requestFallBack, offset: 0x13, size: 0x1, def value: None
  bool ___requestFallBack;

  /// @brief Field forceRelease, offset: 0x14, size: 0x1, def value: None
  bool ___forceRelease;

  /// @brief Field writeCount, offset: 0x18, size: 0x4, def value: None
  uint32_t ___writeCount;

  /// @brief Field readCount, offset: 0x1c, size: 0x4, def value: None
  uint32_t ___readCount;

  /// @brief Field cachedHash, offset: 0x20, size: 0x4, def value: None
  int32_t ___cachedHash;

  /// @brief Field transientPassIndex, offset: 0x24, size: 0x4, def value: None
  int32_t ___transientPassIndex;

  /// @brief Field sharedResourceLastFrameUsed, offset: 0x28, size: 0x4, def value: None
  int32_t ___sharedResourceLastFrameUsed;

  /// @brief Field version, offset: 0x2c, size: 0x4, def value: None
  int32_t ___version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___imported) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___shared) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___sharedExplicitRelease) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___requestFallBack) == 0x13, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___forceRelease) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___writeCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___readCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___cachedHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___transientPassIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___sharedResourceLastFrameUsed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, ___version) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*, "UnityEngine.Rendering.RenderGraphModule", "IRenderGraphResource");
