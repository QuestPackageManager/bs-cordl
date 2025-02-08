#pragma once
// IWYU pragma private; include "TrueOverdraw/TrueOverdraw.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrueOverdraw)
namespace TrueOverdraw {
struct TrueOverdraw_OverdrawType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace TrueOverdraw {
struct TrueOverdraw_OverdrawType;
}
namespace TrueOverdraw {
class TrueOverdraw;
}
// Write type traits
MARK_VAL_T(::TrueOverdraw::TrueOverdraw_OverdrawType);
MARK_REF_PTR_T(::TrueOverdraw::TrueOverdraw);
// Dependencies
namespace TrueOverdraw {
// Is value type: true
// CS Name: TrueOverdraw.TrueOverdraw/OverdrawType
struct CORDL_TYPE TrueOverdraw_OverdrawType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TrueOverdraw_OverdrawType_Unwrapped
  enum struct __TrueOverdraw_OverdrawType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Transparent = static_cast<int32_t>(0x1),
    __E_Opaque = static_cast<int32_t>(0x2),
    __E_Everything = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TrueOverdraw_OverdrawType_Unwrapped() const noexcept {
    return static_cast<__TrueOverdraw_OverdrawType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrueOverdraw_OverdrawType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TrueOverdraw_OverdrawType(int32_t value__) noexcept;

  /// @brief Field Everything value: I32(3)
  static ::TrueOverdraw::TrueOverdraw_OverdrawType const Everything;

  /// @brief Field None value: I32(0)
  static ::TrueOverdraw::TrueOverdraw_OverdrawType const None;

  /// @brief Field Opaque value: I32(2)
  static ::TrueOverdraw::TrueOverdraw_OverdrawType const Opaque;

  /// @brief Field Transparent value: I32(1)
  static ::TrueOverdraw::TrueOverdraw_OverdrawType const Transparent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19096 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TrueOverdraw::TrueOverdraw_OverdrawType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TrueOverdraw::TrueOverdraw_OverdrawType, 0x4>, "Size mismatch!");

} // namespace TrueOverdraw
// Dependencies System.IDisposable, System.Object, TrueOverdraw.TrueOverdraw::OverdrawType, UnityEngine.Color
namespace TrueOverdraw {
// Is value type: false
// CS Name: TrueOverdraw.TrueOverdraw
class CORDL_TYPE TrueOverdraw : public ::System::Object {
public:
  // Declarations
  using OverdrawType = ::TrueOverdraw::TrueOverdraw_OverdrawType;

  /// @brief Field _blendDstAlphaFactor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__blendDstAlphaFactor, put = setStaticF__blendDstAlphaFactor)) int32_t _blendDstAlphaFactor;

  /// @brief Field _blendDstColorFactor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__blendDstColorFactor, put = setStaticF__blendDstColorFactor)) int32_t _blendDstColorFactor;

  /// @brief Field _blendOperation, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__blendOperation, put = setStaticF__blendOperation)) int32_t _blendOperation;

  /// @brief Field _blendSrcAlphaFactor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__blendSrcAlphaFactor, put = setStaticF__blendSrcAlphaFactor)) int32_t _blendSrcAlphaFactor;

  /// @brief Field _blendSrcColorFactor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__blendSrcColorFactor, put = setStaticF__blendSrcColorFactor)) int32_t _blendSrcColorFactor;

  /// @brief Field _cachedMaterialInstances, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedMaterialInstances,
                      put = __cordl_internal_set__cachedMaterialInstances)) ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                                                                                     ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>
      _cachedMaterialInstances;

  /// @brief Field _cachedSharedMaterials, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedSharedMaterials,
                      put = __cordl_internal_set__cachedSharedMaterials)) ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                                                                                   ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>
      _cachedSharedMaterials;

  /// @brief Field _environmentElementsColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__environmentElementsColor, put = setStaticF__environmentElementsColor)) ::UnityEngine::Color _environmentElementsColor;

  /// @brief Field _gameplayElementsColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__gameplayElementsColor, put = setStaticF__gameplayElementsColor)) ::UnityEngine::Color _gameplayElementsColor;

  /// @brief Field _opaqueOverdraw, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__opaqueOverdraw, put = setStaticF__opaqueOverdraw)) int32_t _opaqueOverdraw;

  /// @brief Field _overdrawColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__overdrawColor, put = setStaticF__overdrawColor)) int32_t _overdrawColor;

  /// @brief Field <overdrawType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__overdrawType_k__BackingField,
                      put = __cordl_internal_set__overdrawType_k__BackingField)) ::TrueOverdraw::TrueOverdraw_OverdrawType _overdrawType_k__BackingField;

  /// @brief Field _renderers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__renderers, put = __cordl_internal_set__renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*>
      _renderers;

  /// @brief Field _transparentOverdraw, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__transparentOverdraw, put = setStaticF__transparentOverdraw)) int32_t _transparentOverdraw;

  /// @brief Field _trueOverdrawProperty, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__trueOverdrawProperty, put = setStaticF__trueOverdrawProperty)) int32_t _trueOverdrawProperty;

  __declspec(property(get = get_overdrawType, put = set_overdrawType)) ::TrueOverdraw::TrueOverdraw_OverdrawType overdrawType;

  __declspec(property(get = get_renderersLength)) int32_t renderersLength;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Disable, addr 0x40822a8, size 0x228, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Dispose, addr 0x40824d0, size 0xf0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enable, addr 0x4081c20, size 0x2d4, virtual false, abstract: false, final false
  inline void Enable();

  static inline ::TrueOverdraw::TrueOverdraw* New_ctor(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers);

  /// @brief Method ResolveRendererColor, addr 0x4081f7c, size 0x204, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ResolveRendererColor(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material);

  /// @brief Method SetGlobalFloats, addr 0x4081ef4, size 0x88, virtual false, abstract: false, final false
  static inline void SetGlobalFloats(float_t trueOverdraw, float_t opaque, float_t transparent);

  /// @brief Method SetMaterialValues, addr 0x4082180, size 0x128, virtual false, abstract: false, final false
  static inline void SetMaterialValues(::UnityEngine::Material* material, ::UnityEngine::Color color);

  /// @brief Method SetOverdrawValues, addr 0x4082620, size 0x88, virtual false, abstract: false, final false
  static inline void SetOverdrawValues(float_t opaque, float_t transparent);

  /// @brief Method ShowEverything, addr 0x40825c0, size 0x60, virtual false, abstract: false, final false
  inline void ShowEverything();

  /// @brief Method ShowOnlyOpaque, addr 0x4082708, size 0x60, virtual false, abstract: false, final false
  inline void ShowOnlyOpaque();

  /// @brief Method ShowOnlyTransparent, addr 0x40826a8, size 0x60, virtual false, abstract: false, final false
  inline void ShowOnlyTransparent();

  constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                     ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*> const&
  __cordl_internal_get__cachedMaterialInstances() const;

  constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                     ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>&
  __cordl_internal_get__cachedMaterialInstances();

  constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                     ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*> const&
  __cordl_internal_get__cachedSharedMaterials() const;

  constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                     ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>&
  __cordl_internal_get__cachedSharedMaterials();

  constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType const& __cordl_internal_get__overdrawType_k__BackingField() const;

  constexpr ::TrueOverdraw::TrueOverdraw_OverdrawType& __cordl_internal_get__overdrawType_k__BackingField();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> const& __cordl_internal_get__renderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*>& __cordl_internal_get__renderers();

  constexpr void __cordl_internal_set__cachedMaterialInstances(::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                                                                        ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>
                                                                   value);

  constexpr void __cordl_internal_set__cachedSharedMaterials(::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>,
                                                                      ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>
                                                                 value);

  constexpr void __cordl_internal_set__overdrawType_k__BackingField(::TrueOverdraw::TrueOverdraw_OverdrawType value);

  constexpr void __cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> value);

  /// @brief Method .ctor, addr 0x4081854, size 0x3cc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers);

  static inline int32_t getStaticF__blendDstAlphaFactor();

  static inline int32_t getStaticF__blendDstColorFactor();

  static inline int32_t getStaticF__blendOperation();

  static inline int32_t getStaticF__blendSrcAlphaFactor();

  static inline int32_t getStaticF__blendSrcColorFactor();

  static inline ::UnityEngine::Color getStaticF__environmentElementsColor();

  static inline ::UnityEngine::Color getStaticF__gameplayElementsColor();

  static inline int32_t getStaticF__opaqueOverdraw();

  static inline int32_t getStaticF__overdrawColor();

  static inline int32_t getStaticF__transparentOverdraw();

  static inline int32_t getStaticF__trueOverdrawProperty();

  /// @brief Method get_overdrawType, addr 0x4081844, size 0x8, virtual false, abstract: false, final false
  inline ::TrueOverdraw::TrueOverdraw_OverdrawType get_overdrawType();

  /// @brief Method get_renderersLength, addr 0x4081828, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_renderersLength();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__blendDstAlphaFactor(int32_t value);

  static inline void setStaticF__blendDstColorFactor(int32_t value);

  static inline void setStaticF__blendOperation(int32_t value);

  static inline void setStaticF__blendSrcAlphaFactor(int32_t value);

  static inline void setStaticF__blendSrcColorFactor(int32_t value);

  static inline void setStaticF__environmentElementsColor(::UnityEngine::Color value);

  static inline void setStaticF__gameplayElementsColor(::UnityEngine::Color value);

  static inline void setStaticF__opaqueOverdraw(int32_t value);

  static inline void setStaticF__overdrawColor(int32_t value);

  static inline void setStaticF__transparentOverdraw(int32_t value);

  static inline void setStaticF__trueOverdrawProperty(int32_t value);

  /// @brief Method set_overdrawType, addr 0x408184c, size 0x8, virtual false, abstract: false, final false
  inline void set_overdrawType(::TrueOverdraw::TrueOverdraw_OverdrawType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrueOverdraw();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrueOverdraw", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrueOverdraw(TrueOverdraw&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrueOverdraw", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrueOverdraw(TrueOverdraw const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19097 };

  /// @brief Field kOverdrawViewKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kOverdrawViewKeyword{ u"OVERDRAW_VIEW" };

  /// @brief Field <overdrawType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::TrueOverdraw::TrueOverdraw_OverdrawType ____overdrawType_k__BackingField;

  /// @brief Field _renderers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> ____renderers;

  /// @brief Field _cachedSharedMaterials, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>
      ____cachedSharedMaterials;

  /// @brief Field _cachedMaterialInstances, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, ::Array<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>
      ____cachedMaterialInstances;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TrueOverdraw::TrueOverdraw, ____overdrawType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TrueOverdraw::TrueOverdraw, ____renderers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TrueOverdraw::TrueOverdraw, ____cachedSharedMaterials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TrueOverdraw::TrueOverdraw, ____cachedMaterialInstances) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TrueOverdraw::TrueOverdraw, 0x30>, "Size mismatch!");

} // namespace TrueOverdraw
DEFINE_IL2CPP_ARG_TYPE(::TrueOverdraw::TrueOverdraw_OverdrawType, "TrueOverdraw", "TrueOverdraw/OverdrawType");
NEED_NO_BOX(::TrueOverdraw::TrueOverdraw);
DEFINE_IL2CPP_ARG_TYPE(::TrueOverdraw::TrueOverdraw*, "TrueOverdraw", "TrueOverdraw");
