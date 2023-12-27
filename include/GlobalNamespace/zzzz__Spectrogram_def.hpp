#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Spectrogram)
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace GlobalNamespace {
class BasicSpectrogramData;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4999))
// CS Name: ::Spectrogram*
class CORDL_TYPE Spectrogram : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _setAsGlobal, offset 0x18, size 0x1
  __declspec(property(get = __get__setAsGlobal, put = __set__setAsGlobal)) bool _setAsGlobal;

  /// @brief Field _meshRenderers, offset 0x20, size 0x8
  __declspec(property(get = __get__meshRenderers, put = __set__meshRenderers))::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> _meshRenderers;

  /// @brief Field _materialPropertyBlockController, offset 0x28, size 0x8
  __declspec(property(get = __get__materialPropertyBlockController, put = __set__materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _materialPropertyBlockController;

  /// @brief Field _spectrogramData, offset 0x30, size 0x8
  __declspec(property(get = __get__spectrogramData, put = __set__spectrogramData))::GlobalNamespace::BasicSpectrogramData* _spectrogramData;

  /// @brief Field _spectrogramDataID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__spectrogramDataID, put = setStaticF__spectrogramDataID)) int32_t _spectrogramDataID;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  __declspec(property(get = get_materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* materialPropertyBlock;

  constexpr bool& __get__setAsGlobal();

  constexpr bool const& __get__setAsGlobal() const;

  constexpr void __set__setAsGlobal(bool value);

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*>& __get__meshRenderers();

  constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> const& __get__meshRenderers() const;

  constexpr void __set__meshRenderers(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__materialPropertyBlockController() const;

  constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr ::GlobalNamespace::BasicSpectrogramData*& __get__spectrogramData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicSpectrogramData*> const& __get__spectrogramData() const;

  constexpr void __set__spectrogramData(::GlobalNamespace::BasicSpectrogramData* value);

  static inline void setStaticF__spectrogramDataID(int32_t value);

  static inline int32_t getStaticF__spectrogramDataID();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  /// @brief Method get_materialPropertyBlock addr 0x23b6cfc size 0xb4 virtual false final false
  inline ::UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock();

  /// @brief Method Awake addr 0x23b6db0 size 0xf0 virtual false final false
  inline void Awake();

  /// @brief Method Update addr 0x23b6ea0 size 0x1a8 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::Spectrogram* New_ctor();

  /// @brief Method .ctor addr 0x23b7048 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Spectrogram", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Spectrogram(Spectrogram&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Spectrogram", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Spectrogram(Spectrogram const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Spectrogram();

public:
  /// @brief Field _setAsGlobal, offset: 0x18, size: 0x1, def value: None
  bool ____setAsGlobal;

  /// @brief Field _meshRenderers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> ____meshRenderers;

  /// @brief Field _materialPropertyBlockController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____materialPropertyBlockController;

  /// @brief Field _spectrogramData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BasicSpectrogramData* ____spectrogramData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Spectrogram, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Spectrogram);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Spectrogram*, "", "Spectrogram");
