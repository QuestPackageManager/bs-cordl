#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PackingAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__FieldPacking_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PackingAttribute)
namespace UnityEngine::Rendering {
struct FieldPacking;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class PackingAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::PackingAttribute);
// Dependencies System.Attribute, UnityEngine.Rendering.FieldPacking
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.PackingAttribute
class CORDL_TYPE PackingAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field checkIsNormalized, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get_checkIsNormalized, put = __cordl_internal_set_checkIsNormalized)) bool checkIsNormalized;

  /// @brief Field displayNames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_displayNames, put = __cordl_internal_set_displayNames)) ::ArrayW<::StringW, ::Array<::StringW>*> displayNames;

  /// @brief Field isDirection, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_isDirection, put = __cordl_internal_set_isDirection)) bool isDirection;

  /// @brief Field offsetInSource, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_offsetInSource, put = __cordl_internal_set_offsetInSource)) int32_t offsetInSource;

  /// @brief Field packingScheme, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_packingScheme, put = __cordl_internal_set_packingScheme)) ::UnityEngine::Rendering::FieldPacking packingScheme;

  /// @brief Field preprocessor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_preprocessor, put = __cordl_internal_set_preprocessor)) ::StringW preprocessor;

  /// @brief Field range, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_range, put = __cordl_internal_set_range)) ::ArrayW<float_t, ::Array<float_t>*> range;

  /// @brief Field sRGBDisplay, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_sRGBDisplay, put = __cordl_internal_set_sRGBDisplay)) bool sRGBDisplay;

  /// @brief Field sizeInBits, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_sizeInBits, put = __cordl_internal_set_sizeInBits)) int32_t sizeInBits;

  static inline ::UnityEngine::Rendering::PackingAttribute* New_ctor(::StringW displayName, ::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize, int32_t offsetInSource,
                                                                     float_t minValue, float_t maxValue, bool isDirection, bool sRGBDisplay, bool checkIsNormalized, ::StringW preprocessor);

  static inline ::UnityEngine::Rendering::PackingAttribute* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> displayNames, ::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize,
                                                                     int32_t offsetInSource, float_t minValue, float_t maxValue, bool isDirection, bool sRGBDisplay, bool checkIsNormalized,
                                                                     ::StringW preprocessor);

  constexpr bool const& __cordl_internal_get_checkIsNormalized() const;

  constexpr bool& __cordl_internal_get_checkIsNormalized();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_displayNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_displayNames();

  constexpr bool const& __cordl_internal_get_isDirection() const;

  constexpr bool& __cordl_internal_get_isDirection();

  constexpr int32_t const& __cordl_internal_get_offsetInSource() const;

  constexpr int32_t& __cordl_internal_get_offsetInSource();

  constexpr ::UnityEngine::Rendering::FieldPacking const& __cordl_internal_get_packingScheme() const;

  constexpr ::UnityEngine::Rendering::FieldPacking& __cordl_internal_get_packingScheme();

  constexpr ::StringW const& __cordl_internal_get_preprocessor() const;

  constexpr ::StringW& __cordl_internal_get_preprocessor();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_range() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_range();

  constexpr bool const& __cordl_internal_get_sRGBDisplay() const;

  constexpr bool& __cordl_internal_get_sRGBDisplay();

  constexpr int32_t const& __cordl_internal_get_sizeInBits() const;

  constexpr int32_t& __cordl_internal_get_sizeInBits();

  constexpr void __cordl_internal_set_checkIsNormalized(bool value);

  constexpr void __cordl_internal_set_displayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_isDirection(bool value);

  constexpr void __cordl_internal_set_offsetInSource(int32_t value);

  constexpr void __cordl_internal_set_packingScheme(::UnityEngine::Rendering::FieldPacking value);

  constexpr void __cordl_internal_set_preprocessor(::StringW value);

  constexpr void __cordl_internal_set_range(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_sRGBDisplay(bool value);

  constexpr void __cordl_internal_set_sizeInBits(int32_t value);

  /// @brief Method .ctor, addr 0x65ec2e0, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize, int32_t offsetInSource, float_t minValue, float_t maxValue, bool isDirection,
                    bool sRGBDisplay, bool checkIsNormalized, ::StringW preprocessor);

  /// @brief Method .ctor, addr 0x65ec1f0, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> displayNames, ::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize, int32_t offsetInSource, float_t minValue,
                    float_t maxValue, bool isDirection, bool sRGBDisplay, bool checkIsNormalized, ::StringW preprocessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackingAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackingAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackingAttribute(PackingAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackingAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackingAttribute(PackingAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12179 };

  /// @brief Field displayNames, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___displayNames;

  /// @brief Field range, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___range;

  /// @brief Field packingScheme, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::FieldPacking ___packingScheme;

  /// @brief Field offsetInSource, offset: 0x24, size: 0x4, def value: None
  int32_t ___offsetInSource;

  /// @brief Field sizeInBits, offset: 0x28, size: 0x4, def value: None
  int32_t ___sizeInBits;

  /// @brief Field isDirection, offset: 0x2c, size: 0x1, def value: None
  bool ___isDirection;

  /// @brief Field sRGBDisplay, offset: 0x2d, size: 0x1, def value: None
  bool ___sRGBDisplay;

  /// @brief Field checkIsNormalized, offset: 0x2e, size: 0x1, def value: None
  bool ___checkIsNormalized;

  /// @brief Field preprocessor, offset: 0x30, size: 0x8, def value: None
  ::StringW ___preprocessor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PackingAttribute, ___displayNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackingAttribute, ___range) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackingAttribute, ___packingScheme) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackingAttribute, ___offsetInSource) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackingAttribute, ___sizeInBits) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackingAttribute, ___isDirection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackingAttribute, ___sRGBDisplay) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackingAttribute, ___checkIsNormalized) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackingAttribute, ___preprocessor) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PackingAttribute, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::PackingAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PackingAttribute*, "UnityEngine.Rendering", "PackingAttribute");
