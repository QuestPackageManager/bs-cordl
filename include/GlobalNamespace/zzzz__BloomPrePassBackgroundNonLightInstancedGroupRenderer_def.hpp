#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightInstancedGroupRenderer_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundNonLightInstancedGroupRenderer)
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRenderer;
}
namespace GlobalNamespace {
struct __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightInstancedGroupRenderer;
}
namespace GlobalNamespace {
class __BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty);
// Type: ::PropertyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType
struct CORDL_TYPE __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped
  enum struct ____BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped : int32_t {
    __E_Float = static_cast<int32_t>(0x0),
    __E_Vector = static_cast<int32_t>(0x1),
    __E_Color = static_cast<int32_t>(0x2),
    __E_Matrix4x4 = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped() const noexcept {
    return static_cast<____BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Color value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Color;

  /// @brief Field Float value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Float;

  /// @brief Field Matrix4x4 value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Matrix4x4;

  /// @brief Field Vector value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Vector;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SupportedProperty
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty*
class CORDL_TYPE __BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty : public ::System::Object {
public:
  // Declarations
  /// @brief Field propertyId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_propertyId, put = __cordl_internal_set_propertyId)) int32_t propertyId;

  /// @brief Field propertyName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyName, put = __cordl_internal_set_propertyName))::StringW propertyName;

  /// @brief Field propertyType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_propertyType,
                      put = __cordl_internal_set_propertyType))::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType propertyType;

  static inline ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty* New_ctor();

  constexpr int32_t const& __cordl_internal_get_propertyId() const;

  constexpr int32_t& __cordl_internal_get_propertyId();

  constexpr ::StringW const& __cordl_internal_get_propertyName() const;

  constexpr ::StringW& __cordl_internal_get_propertyName();

  constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const& __cordl_internal_get_propertyType() const;

  constexpr ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType& __cordl_internal_get_propertyType();

  constexpr void __cordl_internal_set_propertyId(int32_t value);

  constexpr void __cordl_internal_set_propertyName(::StringW value);

  constexpr void __cordl_internal_set_propertyType(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType value);

  /// @brief Method .ctor, addr 0x23e890c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty(__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty(__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty const&) = delete;

  /// @brief Field propertyType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType ___propertyType;

  /// @brief Field propertyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___propertyName;

  /// @brief Field propertyId, offset: 0x20, size: 0x4, def value: None
  int32_t ___propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty, ___propertyType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty, ___propertyName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty, ___propertyId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomPrePassBackgroundNonLightInstancedGroupRenderer
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundNonLightInstancedGroupRenderer*
class CORDL_TYPE BloomPrePassBackgroundNonLightInstancedGroupRenderer : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
  // Declarations
  using PropertyType = ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType;

  using SupportedProperty = ::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty;

  /// @brief Field _commandBuffer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__commandBuffer, put = __cordl_internal_set__commandBuffer))::UnityEngine::Rendering::CommandBuffer* _commandBuffer;

  /// @brief Field _renderers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__renderers, put = __cordl_internal_set__renderers))::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>,
                                                                                                             ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*> _renderers;

  /// @brief Field _reusableArraysSize, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__reusableArraysSize, put = __cordl_internal_set__reusableArraysSize)) int32_t _reusableArraysSize;

  /// @brief Field _reusableFloatArrays, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableFloatArrays,
                      put = __cordl_internal_set__reusableFloatArrays))::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>* _reusableFloatArrays;

  /// @brief Field _reusableGetMaterialPropertyBlock, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableGetMaterialPropertyBlock,
                      put = __cordl_internal_set__reusableGetMaterialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _reusableGetMaterialPropertyBlock;

  /// @brief Field _reusableMatrixArrays, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableMatrixArrays, put = __cordl_internal_set__reusableMatrixArrays))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* _reusableMatrixArrays;

  /// @brief Field _reusableSetMaterialPropertyBlock, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableSetMaterialPropertyBlock,
                      put = __cordl_internal_set__reusableSetMaterialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _reusableSetMaterialPropertyBlock;

  /// @brief Field _reusableVectorArrays, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableVectorArrays, put = __cordl_internal_set__reusableVectorArrays))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>* _reusableVectorArrays;

  /// @brief Field _supportedProperties, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get__supportedProperties,
               put = __cordl_internal_set__supportedProperties))::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,
                                                                         ::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*> _supportedProperties;

  /// @brief Field _worldSpaceCameraPosID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__worldSpaceCameraPosID, put = setStaticF__worldSpaceCameraPosID)) int32_t _worldSpaceCameraPosID;

  /// @brief Method AutoFillRenderers, addr 0x23e872c, size 0x50, virtual false, abstract: false, final false
  inline void AutoFillRenderers();

  /// @brief Method Awake, addr 0x23e7b48, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetCachedFloatArray, addr 0x23e8650, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetCachedFloatArray(::StringW propertyName);

  /// @brief Method GetCachedMatrixArray, addr 0x23e8498, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetCachedMatrixArray(::StringW propertyName);

  /// @brief Method GetCachedVectorArray, addr 0x23e8574, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetCachedVectorArray(::StringW propertyName);

  /// @brief Method InitIfNeeded, addr 0x23e7b4c, size 0x258, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer* New_ctor();

  /// @brief Method Render, addr 0x23e7dd4, size 0x6c4, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__commandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get__commandBuffer() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*> const&
  __cordl_internal_get__renderers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*>&
  __cordl_internal_get__renderers();

  constexpr int32_t const& __cordl_internal_get__reusableArraysSize() const;

  constexpr int32_t& __cordl_internal_get__reusableArraysSize();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>*& __cordl_internal_get__reusableFloatArrays();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>*> const&
  __cordl_internal_get__reusableFloatArrays() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__reusableGetMaterialPropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get__reusableGetMaterialPropertyBlock() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*& __cordl_internal_get__reusableMatrixArrays();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*> const&
  __cordl_internal_get__reusableMatrixArrays() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__reusableSetMaterialPropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get__reusableSetMaterialPropertyBlock() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>*& __cordl_internal_get__reusableVectorArrays();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>*> const&
  __cordl_internal_get__reusableVectorArrays() const;

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,
                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*> const&
  __cordl_internal_get__supportedProperties() const;

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,
                     ::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>&
  __cordl_internal_get__supportedProperties();

  constexpr void __cordl_internal_set__commandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void
  __cordl_internal_set__renderers(::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*> value);

  constexpr void __cordl_internal_set__reusableArraysSize(int32_t value);

  constexpr void __cordl_internal_set__reusableFloatArrays(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>* value);

  constexpr void __cordl_internal_set__reusableGetMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set__reusableMatrixArrays(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* value);

  constexpr void __cordl_internal_set__reusableSetMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set__reusableVectorArrays(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>* value);

  constexpr void __cordl_internal_set__supportedProperties(::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,
                                                                    ::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>
                                                               value);

  /// @brief Method .ctor, addr 0x23e877c, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__worldSpaceCameraPosID();

  static inline void setStaticF__worldSpaceCameraPosID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundNonLightInstancedGroupRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightInstancedGroupRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundNonLightInstancedGroupRenderer(BloomPrePassBackgroundNonLightInstancedGroupRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightInstancedGroupRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundNonLightInstancedGroupRenderer(BloomPrePassBackgroundNonLightInstancedGroupRenderer const&) = delete;

  /// @brief Field _renderers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*> ____renderers;

  /// @brief Field _supportedProperties, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*,
           ::Array<::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*>*>
      ____supportedProperties;

  /// @brief Field _reusableFloatArrays, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>* ____reusableFloatArrays;

  /// @brief Field _reusableVectorArrays, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>* ____reusableVectorArrays;

  /// @brief Field _reusableMatrixArrays, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* ____reusableMatrixArrays;

  /// @brief Field _reusableArraysSize, offset: 0x48, size: 0x4, def value: None
  int32_t ____reusableArraysSize;

  /// @brief Field _commandBuffer, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____commandBuffer;

  /// @brief Field _reusableSetMaterialPropertyBlock, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____reusableSetMaterialPropertyBlock;

  /// @brief Field _reusableGetMaterialPropertyBlock, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____reusableGetMaterialPropertyBlock;

  /// @brief Field kInternalMatricesCachingId offset 0xffffffff size 0x8
  static constexpr ::ConstString kInternalMatricesCachingId{ u"INTERNAL_MATRICES" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____renderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____supportedProperties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableFloatArrays) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableVectorArrays) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableMatrixArrays) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableArraysSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____commandBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableSetMaterialPropertyBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableGetMaterialPropertyBlock) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty*, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer/SupportedProperty");
