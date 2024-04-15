#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Spectrogram)
namespace GlobalNamespace {
class BasicSpectrogramData;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class Spectrogram;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Spectrogram);
// Type: ::Spectrogram
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Spectrogram*
class CORDL_TYPE Spectrogram : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _materialPropertyBlockController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _materialPropertyBlockController;

  /// @brief Field _meshRenderers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderers,
                      put = __cordl_internal_set__meshRenderers))::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> _meshRenderers;

  /// @brief Field _setAsGlobal, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__setAsGlobal, put = __cordl_internal_set__setAsGlobal)) bool _setAsGlobal;

  /// @brief Field _spectrogramData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__spectrogramData, put = __cordl_internal_set__spectrogramData))::UnityW<::GlobalNamespace::BasicSpectrogramData> _spectrogramData;

  /// @brief Field _spectrogramDataID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__spectrogramDataID, put = setStaticF__spectrogramDataID)) int32_t _spectrogramDataID;

  __declspec(property(get = get_materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* materialPropertyBlock;

  /// @brief Method Awake, addr 0x25d8034, size 0xf0, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::Spectrogram* New_ctor();

  /// @brief Method Update, addr 0x25d8124, size 0x1a8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get__meshRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get__meshRenderers();

  constexpr bool const& __cordl_internal_get__setAsGlobal() const;

  constexpr bool& __cordl_internal_get__setAsGlobal();

  constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData> const& __cordl_internal_get__spectrogramData() const;

  constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData>& __cordl_internal_get__spectrogramData();

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__meshRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  constexpr void __cordl_internal_set__setAsGlobal(bool value);

  constexpr void __cordl_internal_set__spectrogramData(::UnityW<::GlobalNamespace::BasicSpectrogramData> value);

  /// @brief Method .ctor, addr 0x25d82cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline int32_t getStaticF__spectrogramDataID();

  /// @brief Method get_materialPropertyBlock, addr 0x25d7f80, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline void setStaticF__spectrogramDataID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Spectrogram();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Spectrogram", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Spectrogram(Spectrogram&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Spectrogram", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Spectrogram(Spectrogram const&) = delete;

  /// @brief Field _setAsGlobal, offset: 0x18, size: 0x1, def value: None
  bool ____setAsGlobal;

  /// @brief Field _meshRenderers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ____meshRenderers;

  /// @brief Field _materialPropertyBlockController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _spectrogramData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BasicSpectrogramData> ____spectrogramData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Spectrogram, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Spectrogram, ____setAsGlobal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Spectrogram, ____meshRenderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Spectrogram, ____materialPropertyBlockController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Spectrogram, ____spectrogramData) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Spectrogram);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Spectrogram*, "", "Spectrogram");
