#pragma once
// IWYU pragma private; include "GlobalNamespace/SpectrogramRow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpectrogramRow)
namespace GlobalNamespace {
class BasicSpectrogramData;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SpectrogramRow;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpectrogramRow);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpectrogramRow
class CORDL_TYPE SpectrogramRow : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _dataIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__dataIndex, put = __cordl_internal_set__dataIndex)) int32_t _dataIndex;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _meshRenderers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderers,
                      put = __cordl_internal_set__meshRenderers)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>
      _meshRenderers;

  /// @brief Field _spectrogramData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__spectrogramData, put = __cordl_internal_set__spectrogramData)) ::UnityW<::GlobalNamespace::BasicSpectrogramData> _spectrogramData;

  /// @brief Field _spectrogramDataID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__spectrogramDataID, put = setStaticF__spectrogramDataID)) int32_t _spectrogramDataID;

  /// @brief Method Awake, addr 0x3b9f258, size 0xa0, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::SpectrogramRow* New_ctor();

  /// @brief Method Update, addr 0x3b9f2f8, size 0x120, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get__dataIndex() const;

  constexpr int32_t& __cordl_internal_get__dataIndex();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get__meshRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get__meshRenderers();

  constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData> const& __cordl_internal_get__spectrogramData() const;

  constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData>& __cordl_internal_get__spectrogramData();

  constexpr void __cordl_internal_set__dataIndex(int32_t value);

  constexpr void __cordl_internal_set__meshRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  constexpr void __cordl_internal_set__spectrogramData(::UnityW<::GlobalNamespace::BasicSpectrogramData> value);

  /// @brief Method .ctor, addr 0x3b9f418, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline int32_t getStaticF__spectrogramDataID();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline void setStaticF__spectrogramDataID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpectrogramRow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpectrogramRow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpectrogramRow(SpectrogramRow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpectrogramRow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpectrogramRow(SpectrogramRow const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4376 };

  /// @brief Field _meshRenderers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ____meshRenderers;

  /// @brief Field _dataIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ____dataIndex;

  /// @brief Field _spectrogramData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BasicSpectrogramData> ____spectrogramData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpectrogramRow, ____meshRenderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRow, ____dataIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRow, ____spectrogramData) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpectrogramRow, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpectrogramRow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpectrogramRow*, "", "SpectrogramRow");
