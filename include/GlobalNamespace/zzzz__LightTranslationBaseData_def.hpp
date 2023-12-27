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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(16090))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4325))
// CS Name: ::LightTranslationBaseData*
class CORDL_TYPE LightTranslationBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beat, offset 0x10, size 0x4
  __declspec(property(get = __get_beat, put = __set_beat)) float_t beat;

  /// @brief Field usePreviousEventTranslationValue, offset 0x14, size 0x1
  __declspec(property(get = __get_usePreviousEventTranslationValue, put = __set_usePreviousEventTranslationValue)) bool usePreviousEventTranslationValue;

  /// @brief Field easeType, offset 0x18, size 0x4
  __declspec(property(get = __get_easeType, put = __set_easeType))::GlobalNamespace::EaseType easeType;

  /// @brief Field translation, offset 0x1c, size 0x4
  __declspec(property(get = __get_translation, put = __set_translation)) float_t translation;

  constexpr float_t& __get_beat();

  constexpr float_t const& __get_beat() const;

  constexpr void __set_beat(float_t value);

  constexpr bool& __get_usePreviousEventTranslationValue();

  constexpr bool const& __get_usePreviousEventTranslationValue() const;

  constexpr void __set_usePreviousEventTranslationValue(bool value);

  constexpr ::GlobalNamespace::EaseType& __get_easeType();

  constexpr ::GlobalNamespace::EaseType const& __get_easeType() const;

  constexpr void __set_easeType(::GlobalNamespace::EaseType value);

  constexpr float_t& __get_translation();

  constexpr float_t const& __get_translation() const;

  constexpr void __set_translation(float_t value);

  static inline ::GlobalNamespace::LightTranslationBaseData* New_ctor(float_t beat, bool usePreviousEventTranslationValue, ::GlobalNamespace::EaseType easeType, float_t translation);

  /// @brief Method .ctor addr 0x233dce0 size 0x48 virtual false final false
  inline void _ctor(float_t beat, bool usePreviousEventTranslationValue, ::GlobalNamespace::EaseType easeType, float_t translation);

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationBaseData(LightTranslationBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationBaseData(LightTranslationBaseData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationBaseData();

public:
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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBaseData*, "", "LightTranslationBaseData");
