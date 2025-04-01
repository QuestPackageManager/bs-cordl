#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedIntListSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamedIntListSettingsController)
namespace GlobalNamespace {
class NamedIntListSettingsController_TextValuePair;
}
namespace GlobalNamespace {
class NamedIntListSettingsController___c__DisplayClass6_0;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedIntListSettingsController;
}
namespace GlobalNamespace {
class NamedIntListSettingsController_TextValuePair;
}
namespace GlobalNamespace {
class NamedIntListSettingsController___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedIntListSettingsController);
MARK_REF_PTR_T(::GlobalNamespace::NamedIntListSettingsController_TextValuePair);
MARK_REF_PTR_T(::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NamedIntListSettingsController/TextValuePair
class CORDL_TYPE NamedIntListSettingsController_TextValuePair : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_localizedText)) ::StringW localizedText;

  /// @brief Field text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text)) ::StringW text;

  /// @brief Field value, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  static inline ::GlobalNamespace::NamedIntListSettingsController_TextValuePair* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_text() const;

  constexpr ::StringW& __cordl_internal_get_text();

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_text(::StringW value);

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x3c0e488, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localizedText, addr 0x3c0e458, size 0x28, virtual false, abstract: false, final false
  inline ::StringW get_localizedText();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedIntListSettingsController_TextValuePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController_TextValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedIntListSettingsController_TextValuePair(NamedIntListSettingsController_TextValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController_TextValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedIntListSettingsController_TextValuePair(NamedIntListSettingsController_TextValuePair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4857 };

  /// @brief Field text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field value, offset: 0x18, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController_TextValuePair, ___text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController_TextValuePair, ___value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedIntListSettingsController_TextValuePair, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NamedIntListSettingsController/<>c__DisplayClass6_0
class CORDL_TYPE NamedIntListSettingsController___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  static inline ::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0* New_ctor();

  /// @brief Method <SetValue>b__0, addr 0x3c0e490, size 0x24, virtual false, abstract: false, final false
  inline bool _SetValue_b__0(::GlobalNamespace::NamedIntListSettingsController_TextValuePair* entry);

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x3c0e398, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedIntListSettingsController___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedIntListSettingsController___c__DisplayClass6_0(NamedIntListSettingsController___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedIntListSettingsController___c__DisplayClass6_0(NamedIntListSettingsController___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4858 };

  /// @brief Field value, offset: 0x10, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ListSettingsController
namespace GlobalNamespace {
// Is value type: false
// CS Name: NamedIntListSettingsController
class CORDL_TYPE NamedIntListSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  using TextValuePair = ::GlobalNamespace::NamedIntListSettingsController_TextValuePair;

  using __c__DisplayClass6_0 = ::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0;

  /// @brief Field _selectedIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedIndex, put = __cordl_internal_set__selectedIndex)) int32_t _selectedIndex;

  /// @brief Field _textValuePairs, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__textValuePairs,
      put =
          __cordl_internal_set__textValuePairs)) ::ArrayW<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>*>
      _textValuePairs;

  /// @brief Field valueDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_valueDidChangeEvent, put = __cordl_internal_set_valueDidChangeEvent)) ::System::Action_1<int32_t>* valueDidChangeEvent;

  /// @brief Method ApplyValue, addr 0x3c0e3cc, size 0x58, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x3c0e3a0, size 0x2c, virtual true, abstract: false, final false
  inline bool GetInitValues(::ByRef<int32_t> idx, ::ByRef<int32_t> numberOfElements);

  static inline ::GlobalNamespace::NamedIntListSettingsController* New_ctor();

  /// @brief Method SetValue, addr 0x3c0e28c, size 0x10c, virtual false, abstract: false, final false
  inline void SetValue(int32_t value, bool applyValue);

  /// @brief Method TextForValue, addr 0x3c0e424, size 0x34, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr int32_t const& __cordl_internal_get__selectedIndex() const;

  constexpr int32_t& __cordl_internal_get__selectedIndex();

  constexpr ::ArrayW<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>*> const&
  __cordl_internal_get__textValuePairs() const;

  constexpr ::ArrayW<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>*>&
  __cordl_internal_get__textValuePairs();

  constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_valueDidChangeEvent() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_valueDidChangeEvent();

  constexpr void __cordl_internal_set__selectedIndex(int32_t value);

  constexpr void
  __cordl_internal_set__textValuePairs(::ArrayW<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>*> value);

  constexpr void __cordl_internal_set_valueDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x3c0e480, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_valueDidChangeEvent, addr 0x3c0e12c, size 0xb0, virtual false, abstract: false, final false
  inline void add_valueDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_valueDidChangeEvent, addr 0x3c0e1dc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_valueDidChangeEvent(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedIntListSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedIntListSettingsController(NamedIntListSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedIntListSettingsController(NamedIntListSettingsController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4859 };

  /// @brief Field _textValuePairs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>*> ____textValuePairs;

  /// @brief Field valueDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___valueDidChangeEvent;

  /// @brief Field _selectedIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ____selectedIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController, ____textValuePairs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController, ___valueDidChangeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController, ____selectedIndex) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedIntListSettingsController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedIntListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedIntListSettingsController*, "", "NamedIntListSettingsController");
NEED_NO_BOX(::GlobalNamespace::NamedIntListSettingsController_TextValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedIntListSettingsController_TextValuePair*, "", "NamedIntListSettingsController/TextValuePair");
NEED_NO_BOX(::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0*, "", "NamedIntListSettingsController/<>c__DisplayClass6_0");
