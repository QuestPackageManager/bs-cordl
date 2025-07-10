#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundNonLightInstancedGroupRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundNonLightInstancedGroupRenderer)
namespace GlobalNamespace {
struct BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRenderer;
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
struct BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightInstancedGroupRenderer;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType
struct CORDL_TYPE BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType_Unwrapped
  enum struct __BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType_Unwrapped : int32_t {
    __E_Float = static_cast<int32_t>(0x0),
    __E_Vector = static_cast<int32_t>(0x1),
    __E_Color = static_cast<int32_t>(0x2),
    __E_Matrix4x4 = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType_Unwrapped() const noexcept {
    return static_cast<__BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType(int32_t value__) noexcept;

  /// @brief Field Color value: I32(2)
  static ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType const Color;

  /// @brief Field Float value: I32(0)
  static ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType const Float;

  /// @brief Field Matrix4x4 value: I32(3)
  static ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType const Matrix4x4;

  /// @brief Field Vector value: I32(1)
  static ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType const Vector;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16249 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundNonLightInstancedGroupRenderer/SupportedProperty
class CORDL_TYPE BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty : public ::System::Object {
public:
  // Declarations
  /// @brief Field propertyId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_propertyId, put = __cordl_internal_set_propertyId)) int32_t propertyId;

  /// @brief Field propertyName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyName, put = __cordl_internal_set_propertyName)) ::StringW propertyName;

  /// @brief Field propertyType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_propertyType,
                      put = __cordl_internal_set_propertyType)) ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType propertyType;

  static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty* New_ctor();

  constexpr int32_t const& __cordl_internal_get_propertyId() const;

  constexpr int32_t& __cordl_internal_get_propertyId();

  constexpr ::StringW const& __cordl_internal_get_propertyName() const;

  constexpr ::StringW& __cordl_internal_get_propertyName();

  constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType const& __cordl_internal_get_propertyType() const;

  constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType& __cordl_internal_get_propertyType();

  constexpr void __cordl_internal_set_propertyId(int32_t value);

  constexpr void __cordl_internal_set_propertyName(::StringW value);

  constexpr void __cordl_internal_set_propertyType(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType value);

  /// @brief Method .ctor, addr 0x39d76e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty(BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty(BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16248 };

  /// @brief Field propertyType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType ___propertyType;

  /// @brief Field propertyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___propertyName;

  /// @brief Field propertyId, offset: 0x20, size: 0x4, def value: None
  int32_t ___propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty, ___propertyType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty, ___propertyName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty, ___propertyId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BloomPrePassNonLightPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundNonLightInstancedGroupRenderer
class CORDL_TYPE BloomPrePassBackgroundNonLightInstancedGroupRenderer : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
  // Declarations
  using PropertyType = ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType;

  using SupportedProperty = ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty;

  /// @brief Field _commandBuffer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__commandBuffer, put = __cordl_internal_set__commandBuffer)) ::UnityEngine::Rendering::CommandBuffer* _commandBuffer;

  /// @brief Field _renderers, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__renderers,
      put =
          __cordl_internal_set__renderers)) ::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*>
      _renderers;

  /// @brief Field _reusableArraysSize, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__reusableArraysSize, put = __cordl_internal_set__reusableArraysSize)) int32_t _reusableArraysSize;

  /// @brief Field _reusableFloatArrays, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableFloatArrays,
                      put = __cordl_internal_set__reusableFloatArrays)) ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>* _reusableFloatArrays;

  /// @brief Field _reusableGetMaterialPropertyBlock, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableGetMaterialPropertyBlock,
                      put = __cordl_internal_set__reusableGetMaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _reusableGetMaterialPropertyBlock;

  /// @brief Field _reusableMatrixArrays, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableMatrixArrays, put = __cordl_internal_set__reusableMatrixArrays)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* _reusableMatrixArrays;

  /// @brief Field _reusableSetMaterialPropertyBlock, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableSetMaterialPropertyBlock,
                      put = __cordl_internal_set__reusableSetMaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _reusableSetMaterialPropertyBlock;

  /// @brief Field _reusableVectorArrays, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableVectorArrays,
                      put = __cordl_internal_set__reusableVectorArrays)) ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>*
      _reusableVectorArrays;

  /// @brief Field _supportedProperties, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__supportedProperties,
                      put = __cordl_internal_set__supportedProperties)) ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*,
                                                                                 ::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>*>
      _supportedProperties;

  /// @brief Field _worldSpaceCameraPosID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__worldSpaceCameraPosID, put = setStaticF__worldSpaceCameraPosID)) int32_t _worldSpaceCameraPosID;

  /// @brief Method AutoFillRenderers, addr 0x39d7500, size 0x50, virtual false, abstract: false, final false
  inline void AutoFillRenderers();

  /// @brief Method Awake, addr 0x39d6968, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetCachedFloatArray, addr 0x39d7428, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetCachedFloatArray(::StringW propertyName);

  /// @brief Method GetCachedMatrixArray, addr 0x39d7278, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GetCachedMatrixArray(::StringW propertyName);

  /// @brief Method GetCachedVectorArray, addr 0x39d7350, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GetCachedVectorArray(::StringW propertyName);

  /// @brief Method InitIfNeeded, addr 0x39d696c, size 0x250, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer* New_ctor();

  /// @brief Method Render, addr 0x39d6bf0, size 0x688, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__commandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__commandBuffer();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*> const&
  __cordl_internal_get__renderers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*>&
  __cordl_internal_get__renderers();

  constexpr int32_t const& __cordl_internal_get__reusableArraysSize() const;

  constexpr int32_t& __cordl_internal_get__reusableArraysSize();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>* const& __cordl_internal_get__reusableFloatArrays() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>*& __cordl_internal_get__reusableFloatArrays();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__reusableGetMaterialPropertyBlock() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__reusableGetMaterialPropertyBlock();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* const& __cordl_internal_get__reusableMatrixArrays() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*& __cordl_internal_get__reusableMatrixArrays();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__reusableSetMaterialPropertyBlock() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__reusableSetMaterialPropertyBlock();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>* const& __cordl_internal_get__reusableVectorArrays() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>*& __cordl_internal_get__reusableVectorArrays();

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*,
                     ::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>*> const&
  __cordl_internal_get__supportedProperties() const;

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*,
                     ::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>*>&
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

  constexpr void __cordl_internal_set__supportedProperties(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*,
                                                                    ::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>*>
                                                               value);

  /// @brief Method .ctor, addr 0x39d7550, size 0x130, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16250 };

  /// @brief Field kInternalMatricesCachingId offset 0xffffffff size 0x8
  static constexpr ::ConstString kInternalMatricesCachingId{ u"INTERNAL_MATRICES" };

  /// @brief Field _renderers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*> ____renderers;

  /// @brief Field _supportedProperties, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*,
           ::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>*>
      ____supportedProperties;

  /// @brief Field _reusableFloatArrays, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>* ____reusableFloatArrays;

  /// @brief Field _reusableVectorArrays, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>* ____reusableVectorArrays;

  /// @brief Field _reusableMatrixArrays, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* ____reusableMatrixArrays;

  /// @brief Field _reusableArraysSize, offset: 0x50, size: 0x4, def value: None
  int32_t ____reusableArraysSize;

  /// @brief Field _commandBuffer, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____commandBuffer;

  /// @brief Field _reusableSetMaterialPropertyBlock, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____reusableSetMaterialPropertyBlock;

  /// @brief Field _reusableGetMaterialPropertyBlock, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____reusableGetMaterialPropertyBlock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____renderers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____supportedProperties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableFloatArrays) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableVectorArrays) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableMatrixArrays) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableArraysSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____commandBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableSetMaterialPropertyBlock) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, ____reusableGetMaterialPropertyBlock) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer/SupportedProperty");
