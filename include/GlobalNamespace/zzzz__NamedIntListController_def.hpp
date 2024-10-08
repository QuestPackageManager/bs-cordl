#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedIntListController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamedIntListController)
namespace GlobalNamespace {
class __NamedIntListController__TextValuePair;
}
namespace HMUI {
template <typename T> class IValueChanger_1;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedIntListController;
}
namespace GlobalNamespace {
class __NamedIntListController__TextValuePair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedIntListController);
MARK_REF_PTR_T(::GlobalNamespace::__NamedIntListController__TextValuePair);
// Type: ::TextValuePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NamedIntListController::TextValuePair*
class CORDL_TYPE __NamedIntListController__TextValuePair : public ::System::Object {
public:
  // Declarations
  /// @brief Field localizationKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localizationKey, put = __cordl_internal_set_localizationKey)) ::StringW localizationKey;

  __declspec(property(get = get_localizedText)) ::StringW localizedText;

  /// @brief Field value, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  static inline ::GlobalNamespace::__NamedIntListController__TextValuePair* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_localizationKey() const;

  constexpr ::StringW& __cordl_internal_get_localizationKey();

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_localizationKey(::StringW value);

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x3bb27fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localizedText, addr 0x3bb27cc, size 0x28, virtual false, abstract: false, final false
  inline ::StringW get_localizedText();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NamedIntListController__TextValuePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NamedIntListController__TextValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NamedIntListController__TextValuePair(__NamedIntListController__TextValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NamedIntListController__TextValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NamedIntListController__TextValuePair(__NamedIntListController__TextValuePair const&) = delete;

  /// @brief Field localizationKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___localizationKey;

  /// @brief Field value, offset: 0x18, size: 0x4, def value: None
  int32_t ___value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18830 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NamedIntListController__TextValuePair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NamedIntListController__TextValuePair, ___localizationKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NamedIntListController__TextValuePair, ___value) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NamedIntListController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NamedIntListController*
class CORDL_TYPE NamedIntListController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  using TextValuePair = ::GlobalNamespace::__NamedIntListController__TextValuePair;

  /// @brief Field _textValuePairs, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__textValuePairs,
      put = __cordl_internal_set__textValuePairs)) ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>
      _textValuePairs;

  /// @brief Field _value, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) int32_t _value;

  /// @brief Field valueChangedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_valueChangedEvent, put = __cordl_internal_set_valueChangedEvent)) ::System::Action_1<int32_t>* valueChangedEvent;

  /// @brief Convert operator to "::HMUI::IValueChanger_1<int32_t>"
  constexpr operator ::HMUI::IValueChanger_1<int32_t>*() noexcept;

  /// @brief Method ApplyValue, addr 0x3bb2778, size 0x20, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x3bb2704, size 0x74, virtual true, abstract: false, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method InitValues, addr 0x3bb2694, size 0x38, virtual false, abstract: false, final false
  inline void InitValues(::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*> values);

  static inline ::GlobalNamespace::NamedIntListController* New_ctor();

  /// @brief Method SetValue, addr 0x3bb26cc, size 0x38, virtual false, abstract: false, final false
  inline void SetValue(int32_t value);

  /// @brief Method TextForValue, addr 0x3bb2798, size 0x34, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*> const&
  __cordl_internal_get__textValuePairs() const;

  constexpr ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>& __cordl_internal_get__textValuePairs();

  constexpr int32_t const& __cordl_internal_get__value() const;

  constexpr int32_t& __cordl_internal_get__value();

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_valueChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_valueChangedEvent() const;

  constexpr void
  __cordl_internal_set__textValuePairs(::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*> value);

  constexpr void __cordl_internal_set__value(int32_t value);

  constexpr void __cordl_internal_set_valueChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x3bb27f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_valueChangedEvent, addr 0x3bb2534, size 0xb0, virtual true, abstract: false, final true
  inline void add_valueChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Convert to "::HMUI::IValueChanger_1<int32_t>"
  constexpr ::HMUI::IValueChanger_1<int32_t>* i___HMUI__IValueChanger_1_int32_t_() noexcept;

  /// @brief Method remove_valueChangedEvent, addr 0x3bb25e4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_valueChangedEvent(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedIntListController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedIntListController(NamedIntListController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedIntListController(NamedIntListController const&) = delete;

  /// @brief Field _textValuePairs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*> ____textValuePairs;

  /// @brief Field _value, offset: 0x38, size: 0x4, def value: None
  int32_t ____value;

  /// @brief Field valueChangedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___valueChangedEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18831 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedIntListController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListController, ____textValuePairs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListController, ____value) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListController, ___valueChangedEvent) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedIntListController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedIntListController*, "", "NamedIntListController");
NEED_NO_BOX(::GlobalNamespace::__NamedIntListController__TextValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NamedIntListController__TextValuePair*, "", "NamedIntListController/TextValuePair");
