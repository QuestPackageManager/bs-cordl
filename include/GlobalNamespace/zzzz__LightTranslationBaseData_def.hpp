#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightTranslationBaseData)
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationBaseData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationBaseData);
// Type: ::LightTranslationBaseData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightTranslationBaseData*
class CORDL_TYPE LightTranslationBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_beat, put = __cordl_internal_set_beat)) float_t beat;

  /// @brief Field easeType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType))::GlobalNamespace::EaseType easeType;

  /// @brief Field translation, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_translation, put = __cordl_internal_set_translation)) float_t translation;

  /// @brief Field usePreviousEventTranslationValue, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousEventTranslationValue, put = __cordl_internal_set_usePreviousEventTranslationValue)) bool usePreviousEventTranslationValue;

  static inline ::GlobalNamespace::LightTranslationBaseData* New_ctor(float_t beat, bool usePreviousEventTranslationValue, ::GlobalNamespace::EaseType easeType, float_t translation);

  constexpr float_t const& __cordl_internal_get_beat() const;

  constexpr float_t& __cordl_internal_get_beat();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr float_t const& __cordl_internal_get_translation() const;

  constexpr float_t& __cordl_internal_get_translation();

  constexpr bool const& __cordl_internal_get_usePreviousEventTranslationValue() const;

  constexpr bool& __cordl_internal_get_usePreviousEventTranslationValue();

  constexpr void __cordl_internal_set_beat(float_t value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_translation(float_t value);

  constexpr void __cordl_internal_set_usePreviousEventTranslationValue(bool value);

  /// @brief Method .ctor, addr 0x14b59b0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousEventTranslationValue, ::GlobalNamespace::EaseType easeType, float_t translation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationBaseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationBaseData(LightTranslationBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationBaseData(LightTranslationBaseData const&) = delete;

  /// @brief Field beat, offset: 0x10, size: 0x4, def value: None
  float_t ___beat;

  /// @brief Field usePreviousEventTranslationValue, offset: 0x14, size: 0x1, def value: None
  bool ___usePreviousEventTranslationValue;

  /// @brief Field easeType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field translation, offset: 0x1c, size: 0x4, def value: None
  float_t ___translation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationBaseData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBaseData, ___beat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBaseData, ___usePreviousEventTranslationValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBaseData, ___easeType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBaseData, ___translation) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBaseData*, "", "LightTranslationBaseData");
