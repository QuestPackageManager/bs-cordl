#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedIntListSettingsController.hpp"
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
class __NamedIntListSettingsController__TextValuePair;
}
namespace GlobalNamespace {
class __NamedIntListSettingsController____c__DisplayClass6_0;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedIntListSettingsController;
}
namespace GlobalNamespace {
class __NamedIntListSettingsController__TextValuePair;
}
namespace GlobalNamespace {
class __NamedIntListSettingsController____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedIntListSettingsController);
MARK_REF_PTR_T(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair);
MARK_REF_PTR_T(::GlobalNamespace::__NamedIntListSettingsController____c__DisplayClass6_0);
// Type: ::TextValuePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NamedIntListSettingsController::TextValuePair*
class CORDL_TYPE __NamedIntListSettingsController__TextValuePair : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_localizedText)) ::StringW localizedText;

  /// @brief Field text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text)) ::StringW text;

  /// @brief Field value, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  static inline ::GlobalNamespace::__NamedIntListSettingsController__TextValuePair* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_text() const;

  constexpr ::StringW& __cordl_internal_get_text();

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_text(::StringW value);

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x3b9648c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localizedText, addr 0x3b9645c, size 0x28, virtual false, abstract: false, final false
  inline ::StringW get_localizedText();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NamedIntListSettingsController__TextValuePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NamedIntListSettingsController__TextValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NamedIntListSettingsController__TextValuePair(__NamedIntListSettingsController__TextValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NamedIntListSettingsController__TextValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NamedIntListSettingsController__TextValuePair(__NamedIntListSettingsController__TextValuePair const&) = delete;

  /// @brief Field text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field value, offset: 0x18, size: 0x4, def value: None
  int32_t ___value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4832 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair, ___text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair, ___value) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NamedIntListSettingsController::<>c__DisplayClass6_0*
class CORDL_TYPE __NamedIntListSettingsController____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  static inline ::GlobalNamespace::__NamedIntListSettingsController____c__DisplayClass6_0* New_ctor();

  /// @brief Method <SetValue>b__0, addr 0x3b96494, size 0x24, virtual false, abstract: false, final false
  inline bool _SetValue_b__0(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair* entry);

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x3b9639c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NamedIntListSettingsController____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NamedIntListSettingsController____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NamedIntListSettingsController____c__DisplayClass6_0(__NamedIntListSettingsController____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NamedIntListSettingsController____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NamedIntListSettingsController____c__DisplayClass6_0(__NamedIntListSettingsController____c__DisplayClass6_0 const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x4, def value: None
  int32_t ___value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4833 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NamedIntListSettingsController____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NamedIntListSettingsController____c__DisplayClass6_0, ___value) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NamedIntListSettingsController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NamedIntListSettingsController*
class CORDL_TYPE NamedIntListSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  using TextValuePair = ::GlobalNamespace::__NamedIntListSettingsController__TextValuePair;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__NamedIntListSettingsController____c__DisplayClass6_0;

  /// @brief Field _selectedIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedIndex, put = __cordl_internal_set__selectedIndex)) int32_t _selectedIndex;

  /// @brief Field _textValuePairs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__textValuePairs, put = __cordl_internal_set__textValuePairs)) ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*,
                                                                                                                        ::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*>
      _textValuePairs;

  /// @brief Field valueDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_valueDidChangeEvent, put = __cordl_internal_set_valueDidChangeEvent)) ::System::Action_1<int32_t>* valueDidChangeEvent;

  /// @brief Method ApplyValue, addr 0x3b963d0, size 0x58, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x3b963a4, size 0x2c, virtual true, abstract: false, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  static inline ::GlobalNamespace::NamedIntListSettingsController* New_ctor();

  /// @brief Method SetValue, addr 0x3b96290, size 0x10c, virtual false, abstract: false, final false
  inline void SetValue(int32_t value, bool applyValue);

  /// @brief Method TextForValue, addr 0x3b96428, size 0x34, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr int32_t const& __cordl_internal_get__selectedIndex() const;

  constexpr int32_t& __cordl_internal_get__selectedIndex();

  constexpr ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*> const&
  __cordl_internal_get__textValuePairs() const;

  constexpr ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*>&
  __cordl_internal_get__textValuePairs();

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_valueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_valueDidChangeEvent() const;

  constexpr void __cordl_internal_set__selectedIndex(int32_t value);

  constexpr void __cordl_internal_set__textValuePairs(
      ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*> value);

  constexpr void __cordl_internal_set_valueDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x3b96484, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_valueDidChangeEvent, addr 0x3b96130, size 0xb0, virtual false, abstract: false, final false
  inline void add_valueDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_valueDidChangeEvent, addr 0x3b961e0, size 0xb0, virtual false, abstract: false, final false
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

  /// @brief Field _textValuePairs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*>*> ____textValuePairs;

  /// @brief Field valueDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___valueDidChangeEvent;

  /// @brief Field _selectedIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ____selectedIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4834 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedIntListSettingsController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController, ____textValuePairs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController, ___valueDidChangeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedIntListSettingsController, ____selectedIndex) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedIntListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedIntListSettingsController*, "", "NamedIntListSettingsController");
NEED_NO_BOX(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NamedIntListSettingsController__TextValuePair*, "", "NamedIntListSettingsController/TextValuePair");
NEED_NO_BOX(::GlobalNamespace::__NamedIntListSettingsController____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NamedIntListSettingsController____c__DisplayClass6_0*, "", "NamedIntListSettingsController/<>c__DisplayClass6_0");
