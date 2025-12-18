#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SupportedOnRenderPipelineAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SupportedOnRenderPipelineAttribute)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
struct SupportedOnRenderPipelineAttribute_SupportedMode;
}
namespace UnityEngine::Rendering {
class SupportedOnRenderPipelineAttribute___c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SupportedOnRenderPipelineAttribute_SupportedMode;
}
namespace UnityEngine::Rendering {
class SupportedOnRenderPipelineAttribute;
}
namespace UnityEngine::Rendering {
class SupportedOnRenderPipelineAttribute___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode);
MARK_REF_PTR_T(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute);
MARK_REF_PTR_T(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SupportedOnRenderPipelineAttribute/SupportedMode
struct CORDL_TYPE SupportedOnRenderPipelineAttribute_SupportedMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SupportedOnRenderPipelineAttribute_SupportedMode_Unwrapped
  enum struct __SupportedOnRenderPipelineAttribute_SupportedMode_Unwrapped : int32_t {
    __E_Unsupported = static_cast<int32_t>(0x0),
    __E_Supported = static_cast<int32_t>(0x1),
    __E_SupportedByBaseClass = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SupportedOnRenderPipelineAttribute_SupportedMode_Unwrapped() const noexcept {
    return static_cast<__SupportedOnRenderPipelineAttribute_SupportedMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportedOnRenderPipelineAttribute_SupportedMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SupportedOnRenderPipelineAttribute_SupportedMode(int32_t value__) noexcept;

  /// @brief Field Supported value: I32(1)
  static ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode const Supported;

  /// @brief Field SupportedByBaseClass value: I32(2)
  static ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode const SupportedByBaseClass;

  /// @brief Field Unsupported value: I32(0)
  static ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode const Unsupported;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10758 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SupportedOnRenderPipelineAttribute/<>c
class CORDL_TYPE SupportedOnRenderPipelineAttribute___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::System::Type*, ::StringW>* __9__6_0;

  static inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* New_ctor();

  /// @brief Method <.cctor>b__12_0, addr 0x6951ad4, size 0xd4, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> __cctor_b__12_0();

  /// @brief Method <.ctor>b__6_0, addr 0x6951ab4, size 0x20, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__6_0(::System::Type* t);

  /// @brief Method .ctor, addr 0x6951ab0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, ::StringW>* getStaticF___9__6_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::System::Type*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportedOnRenderPipelineAttribute___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SupportedOnRenderPipelineAttribute___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupportedOnRenderPipelineAttribute___c(SupportedOnRenderPipelineAttribute___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupportedOnRenderPipelineAttribute___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupportedOnRenderPipelineAttribute___c(SupportedOnRenderPipelineAttribute___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10759 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Attribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SupportedOnRenderPipelineAttribute
class CORDL_TYPE SupportedOnRenderPipelineAttribute : public ::System::Attribute {
public:
  // Declarations
  using SupportedMode = ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode;

  using __c = ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c;

  /// @brief Field <renderPipelineTypes>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__renderPipelineTypes_k__BackingField,
                      put = __cordl_internal_set__renderPipelineTypes_k__BackingField)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*>
      _renderPipelineTypes_k__BackingField;

  /// @brief Field k_DefaultRenderPipelineAsset, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DefaultRenderPipelineAsset,
                      put = setStaticF_k_DefaultRenderPipelineAsset)) ::System::Lazy_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* k_DefaultRenderPipelineAsset;

  __declspec(property(get = get_renderPipelineTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> renderPipelineTypes;

  /// @brief Method GetSupportedMode, addr 0x6951708, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode GetSupportedMode(::System::Type* renderPipelineAssetType);

  /// @brief Method GetSupportedMode, addr 0x6951774, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode GetSupportedMode(::ArrayW<::System::Type*, ::Array<::System::Type*>*> renderPipelineTypes,
                                                                                                            ::System::Type* renderPipelineAssetType);

  /// @brief Method IsTypeSupportedOnRenderPipeline, addr 0x69518bc, size 0x78, virtual false, abstract: false, final false
  static inline bool IsTypeSupportedOnRenderPipeline(::System::Type* type, ::System::Type* renderPipelineAssetType);

  static inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute* New_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> renderPipeline);

  static inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute* New_ctor(::System::Type* renderPipeline);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__renderPipelineTypes_k__BackingField() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__renderPipelineTypes_k__BackingField();

  constexpr void __cordl_internal_set__renderPipelineTypes_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x69513fc, size 0x30c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> renderPipeline);

  /// @brief Method .ctor, addr 0x6951358, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* renderPipeline);

  static inline ::System::Lazy_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* getStaticF_k_DefaultRenderPipelineAsset();

  /// @brief Method get_renderPipelineTypes, addr 0x6951350, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_renderPipelineTypes();

  static inline void setStaticF_k_DefaultRenderPipelineAsset(::System::Lazy_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportedOnRenderPipelineAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SupportedOnRenderPipelineAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupportedOnRenderPipelineAttribute(SupportedOnRenderPipelineAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupportedOnRenderPipelineAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupportedOnRenderPipelineAttribute(SupportedOnRenderPipelineAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10760 };

  /// @brief Field <renderPipelineTypes>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____renderPipelineTypes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute, ____renderPipelineTypes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute_SupportedMode, "UnityEngine.Rendering", "SupportedOnRenderPipelineAttribute/SupportedMode");
NEED_NO_BOX(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*, "UnityEngine.Rendering", "SupportedOnRenderPipelineAttribute");
NEED_NO_BOX(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*, "UnityEngine.Rendering", "SupportedOnRenderPipelineAttribute/<>c");
