#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SurfaceDataAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__FieldPrecision_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SurfaceDataAttributes)
namespace UnityEngine::Rendering {
struct FieldPrecision;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SurfaceDataAttributes;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SurfaceDataAttributes);
// Dependencies System.Attribute, UnityEngine.Rendering.FieldPrecision
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SurfaceDataAttributes
class CORDL_TYPE SurfaceDataAttributes : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field checkIsNormalized, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_checkIsNormalized, put = __cordl_internal_set_checkIsNormalized)) bool checkIsNormalized;

  /// @brief Field displayNames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_displayNames, put = __cordl_internal_set_displayNames)) ::ArrayW<::StringW, ::Array<::StringW>*> displayNames;

  /// @brief Field isDirection, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_isDirection, put = __cordl_internal_set_isDirection)) bool isDirection;

  /// @brief Field precision, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_precision, put = __cordl_internal_set_precision)) ::UnityEngine::Rendering::FieldPrecision precision;

  /// @brief Field preprocessor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_preprocessor, put = __cordl_internal_set_preprocessor)) ::StringW preprocessor;

  /// @brief Field sRGBDisplay, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_sRGBDisplay, put = __cordl_internal_set_sRGBDisplay)) bool sRGBDisplay;

  static inline ::UnityEngine::Rendering::SurfaceDataAttributes* New_ctor(::StringW displayName, bool isDirection, bool sRGBDisplay, ::UnityEngine::Rendering::FieldPrecision precision,
                                                                          bool checkIsNormalized, ::StringW preprocessor);

  static inline ::UnityEngine::Rendering::SurfaceDataAttributes* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> displayNames, bool isDirection, bool sRGBDisplay,
                                                                          ::UnityEngine::Rendering::FieldPrecision precision, bool checkIsNormalized, ::StringW preprocessor);

  constexpr bool const& __cordl_internal_get_checkIsNormalized() const;

  constexpr bool& __cordl_internal_get_checkIsNormalized();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_displayNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_displayNames();

  constexpr bool const& __cordl_internal_get_isDirection() const;

  constexpr bool& __cordl_internal_get_isDirection();

  constexpr ::UnityEngine::Rendering::FieldPrecision const& __cordl_internal_get_precision() const;

  constexpr ::UnityEngine::Rendering::FieldPrecision& __cordl_internal_get_precision();

  constexpr ::StringW const& __cordl_internal_get_preprocessor() const;

  constexpr ::StringW& __cordl_internal_get_preprocessor();

  constexpr bool const& __cordl_internal_get_sRGBDisplay() const;

  constexpr bool& __cordl_internal_get_sRGBDisplay();

  constexpr void __cordl_internal_set_checkIsNormalized(bool value);

  constexpr void __cordl_internal_set_displayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_isDirection(bool value);

  constexpr void __cordl_internal_set_precision(::UnityEngine::Rendering::FieldPrecision value);

  constexpr void __cordl_internal_set_preprocessor(::StringW value);

  constexpr void __cordl_internal_set_sRGBDisplay(bool value);

  /// @brief Method .ctor, addr 0x6584580, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, bool isDirection, bool sRGBDisplay, ::UnityEngine::Rendering::FieldPrecision precision, bool checkIsNormalized, ::StringW preprocessor);

  /// @brief Method .ctor, addr 0x658463c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> displayNames, bool isDirection, bool sRGBDisplay, ::UnityEngine::Rendering::FieldPrecision precision, bool checkIsNormalized,
                    ::StringW preprocessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SurfaceDataAttributes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SurfaceDataAttributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SurfaceDataAttributes(SurfaceDataAttributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SurfaceDataAttributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SurfaceDataAttributes(SurfaceDataAttributes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12173 };

  /// @brief Field displayNames, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___displayNames;

  /// @brief Field isDirection, offset: 0x18, size: 0x1, def value: None
  bool ___isDirection;

  /// @brief Field sRGBDisplay, offset: 0x19, size: 0x1, def value: None
  bool ___sRGBDisplay;

  /// @brief Field precision, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::FieldPrecision ___precision;

  /// @brief Field checkIsNormalized, offset: 0x20, size: 0x1, def value: None
  bool ___checkIsNormalized;

  /// @brief Field preprocessor, offset: 0x28, size: 0x8, def value: None
  ::StringW ___preprocessor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SurfaceDataAttributes, ___displayNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SurfaceDataAttributes, ___isDirection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SurfaceDataAttributes, ___sRGBDisplay) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SurfaceDataAttributes, ___precision) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SurfaceDataAttributes, ___checkIsNormalized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SurfaceDataAttributes, ___preprocessor) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SurfaceDataAttributes, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SurfaceDataAttributes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SurfaceDataAttributes*, "UnityEngine.Rendering", "SurfaceDataAttributes");
