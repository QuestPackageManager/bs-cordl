#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamedIntListSettingsController)
namespace GlobalNamespace {
class IntSO;
}
namespace GlobalNamespace {
class __NamedIntListSettingsController__TextValuePair;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedIntListSettingsController;
}
namespace GlobalNamespace {
class __NamedIntListSettingsController__TextValuePair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedIntListSettingsController);
MARK_REF_PTR_T(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair);
// Type: ::TextValuePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5597))
// CS Name: ::NamedIntListSettingsController::TextValuePair*
class CORDL_TYPE __NamedIntListSettingsController__TextValuePair : public ::System::Object {
public:
  // Declarations
  /// @brief Field text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text))::StringW text;

  /// @brief Field value, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  __declspec(property(get = get_localizedText))::StringW localizedText;

  constexpr ::StringW& __cordl_internal_get_text();

  constexpr ::StringW const& __cordl_internal_get_text() const;

  constexpr void __cordl_internal_set_text(::StringW value);

  constexpr int32_t& __cordl_internal_get_value();

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method get_localizedText, addr 0x22aafe4, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_localizedText();

  static inline ::GlobalNamespace::__NamedIntListSettingsController__TextValuePair* New_ctor();

  /// @brief Method .ctor, addr 0x22aaff8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NamedIntListSettingsController__TextValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NamedIntListSettingsController__TextValuePair(__NamedIntListSettingsController__TextValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NamedIntListSettingsController__TextValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NamedIntListSettingsController__TextValuePair(__NamedIntListSettingsController__TextValuePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NamedIntListSettingsController__TextValuePair();

public:
  /// @brief Field text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field value, offset: 0x18, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair, ___text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair, ___value) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NamedIntListSettingsController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(16149))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5598))
// CS Name: ::NamedIntListSettingsController*
class CORDL_TYPE NamedIntListSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  using TextValuePair = ::GlobalNamespace::__NamedIntListSettingsController__TextValuePair;

  /// @brief Field _settingsValue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsValue, put = __cordl_internal_set__settingsValue))::UnityW<::GlobalNamespace::IntSO> _settingsValue;

  /// @brief Field _textValuePairs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__textValuePairs,
                      put = __cordl_internal_set__textValuePairs))::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*,
                                                                           ::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*> _textValuePairs;

  constexpr ::UnityW<::GlobalNamespace::IntSO>& __cordl_internal_get__settingsValue();

  constexpr ::UnityW<::GlobalNamespace::IntSO> const& __cordl_internal_get__settingsValue() const;

  constexpr void __cordl_internal_set__settingsValue(::UnityW<::GlobalNamespace::IntSO> value);

  constexpr ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*>&
  __cordl_internal_get__textValuePairs();

  constexpr ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*> const&
  __cordl_internal_get__textValuePairs() const;

  constexpr void __cordl_internal_set__textValuePairs(
      ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*> value);

  /// @brief Method GetInitValues, addr 0x22aae64, size 0xc8, virtual true, abstract: false, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method ApplyValue, addr 0x22aaf2c, size 0x7c, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method TextForValue, addr 0x22aafa8, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  static inline ::GlobalNamespace::NamedIntListSettingsController* New_ctor();

  /// @brief Method .ctor, addr 0x22aaff0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedIntListSettingsController(NamedIntListSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedIntListSettingsController(NamedIntListSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedIntListSettingsController();

public:
  /// @brief Field _settingsValue, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::IntSO> ____settingsValue;

  /// @brief Field _textValuePairs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*> ____textValuePairs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedIntListSettingsController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController, ____settingsValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController, ____textValuePairs) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedIntListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedIntListSettingsController*, "", "NamedIntListSettingsController");
NEED_NO_BOX(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, "", "NamedIntListSettingsController/TextValuePair");
