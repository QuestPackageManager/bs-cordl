#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpectrogramRow)
namespace GlobalNamespace {
class BasicSpectrogramData;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class SpectrogramRow;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpectrogramRow);
// Type: ::SpectrogramRow
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5000))
// CS Name: ::SpectrogramRow*
class CORDL_TYPE SpectrogramRow : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _meshRenderers, offset 0x18, size 0x8
  __declspec(property(get = __get__meshRenderers, put = __set__meshRenderers))::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> _meshRenderers;

  /// @brief Field _dataIndex, offset 0x20, size 0x4
  __declspec(property(get = __get__dataIndex, put = __set__dataIndex)) int32_t _dataIndex;

  /// @brief Field _spectrogramData, offset 0x28, size 0x8
  __declspec(property(get = __get__spectrogramData, put = __set__spectrogramData))::GlobalNamespace::BasicSpectrogramData* _spectrogramData;

  /// @brief Field _spectrogramDataID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__spectrogramDataID, put = setStaticF__spectrogramDataID)) int32_t _spectrogramDataID;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*>& __get__meshRenderers();

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> const& __get__meshRenderers() const;

  constexpr void __set__meshRenderers(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> value);

  constexpr int32_t& __get__dataIndex();

  constexpr int32_t const& __get__dataIndex() const;

  constexpr void __set__dataIndex(int32_t value);

  constexpr ::GlobalNamespace::BasicSpectrogramData*& __get__spectrogramData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicSpectrogramData*> const& __get__spectrogramData() const;

  constexpr void __set__spectrogramData(::GlobalNamespace::BasicSpectrogramData* value);

  static inline void setStaticF__spectrogramDataID(int32_t value);

  static inline int32_t getStaticF__spectrogramDataID();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  /// @brief Method Awake, addr 0x23b70b8, size 0xa8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x23b7160, size 0x120, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::SpectrogramRow* New_ctor();

  /// @brief Method .ctor, addr 0x23b7280, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SpectrogramRow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpectrogramRow(SpectrogramRow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpectrogramRow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpectrogramRow(SpectrogramRow const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpectrogramRow();

public:
  /// @brief Field _meshRenderers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> ____meshRenderers;

  /// @brief Field _dataIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____dataIndex;

  /// @brief Field _spectrogramData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BasicSpectrogramData* ____spectrogramData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpectrogramRow, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRow, ____meshRenderers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRow, ____dataIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpectrogramRow, ____spectrogramData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpectrogramRow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpectrogramRow*, "", "SpectrogramRow");
