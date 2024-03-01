#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GradientRemap)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::GradientRemap);
// Type: UnityEngine.UIElements.UIR::GradientRemap
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::GradientRemap*
class CORDL_TYPE GradientRemap : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::GradientRemap*> {
public:
  // Declarations
  /// @brief Field atlas, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_atlas, put = __cordl_internal_set_atlas))::UnityEngine::UIElements::TextureId atlas;

  /// @brief Field destIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_destIndex, put = __cordl_internal_set_destIndex)) int32_t destIndex;

  /// @brief Field location, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location))::UnityEngine::RectInt location;

  /// @brief Field next, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next))::UnityEngine::UIElements::UIR::GradientRemap* next;

  /// @brief Field origIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_origIndex, put = __cordl_internal_set_origIndex)) int32_t origIndex;

  static inline ::UnityEngine::UIElements::UIR::GradientRemap* New_ctor();

  /// @brief Method Reset, addr 0x2edbc70, size 0x68, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::UIElements::TextureId const& __cordl_internal_get_atlas() const;

  constexpr ::UnityEngine::UIElements::TextureId& __cordl_internal_get_atlas();

  constexpr int32_t const& __cordl_internal_get_destIndex() const;

  constexpr int32_t& __cordl_internal_get_destIndex();

  constexpr ::UnityEngine::RectInt const& __cordl_internal_get_location() const;

  constexpr ::UnityEngine::RectInt& __cordl_internal_get_location();

  constexpr ::UnityEngine::UIElements::UIR::GradientRemap*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GradientRemap*> const& __cordl_internal_get_next() const;

  constexpr int32_t const& __cordl_internal_get_origIndex() const;

  constexpr int32_t& __cordl_internal_get_origIndex();

  constexpr void __cordl_internal_set_atlas(::UnityEngine::UIElements::TextureId value);

  constexpr void __cordl_internal_set_destIndex(int32_t value);

  constexpr void __cordl_internal_set_location(::UnityEngine::RectInt value);

  constexpr void __cordl_internal_set_next(::UnityEngine::UIElements::UIR::GradientRemap* value);

  constexpr void __cordl_internal_set_origIndex(int32_t value);

  /// @brief Method .ctor, addr 0x2edbc14, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientRemap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GradientRemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientRemap(GradientRemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientRemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientRemap(GradientRemap const&) = delete;

  /// @brief Field origIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___origIndex;

  /// @brief Field destIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___destIndex;

  /// @brief Field location, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::RectInt ___location;

  /// @brief Field next, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::GradientRemap* ___next;

  /// @brief Field atlas, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId ___atlas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GradientRemap, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientRemap, ___origIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientRemap, ___destIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientRemap, ___location) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientRemap, ___next) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientRemap, ___atlas) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GradientRemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GradientRemap*, "UnityEngine.UIElements.UIR", "GradientRemap");
