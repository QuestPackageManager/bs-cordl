#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/SeverityEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SeverityEntry)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Label;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Toggle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Console;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class SeverityEntry___c__DisplayClass9_0;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class SeverityEntry;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class SeverityEntry___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry___c__DisplayClass9_0);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.SeverityEntry/<>c__DisplayClass9_0
class CORDL_TYPE SeverityEntry___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* __4__this;

  /// @brief Field owner, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_owner, put = __cordl_internal_set_owner)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> owner;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry___c__DisplayClass9_0* New_ctor();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*& __cordl_internal_get___4__this();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> const& __cordl_internal_get_owner() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console>& __cordl_internal_get_owner();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* value);

  constexpr void __cordl_internal_set_owner(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> value);

  /// @brief Method <.ctor>b__0, addr 0x58a4908, size 0x44, virtual false, abstract: false, final false
  inline void __ctor_b__0();

  /// @brief Method .ctor, addr 0x58a48fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SeverityEntry___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SeverityEntry___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SeverityEntry___c__DisplayClass9_0(SeverityEntry___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SeverityEntry___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SeverityEntry___c__DisplayClass9_0(SeverityEntry___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18342 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* _____4__this;

  /// @brief Field owner, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> ___owner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry___c__DisplayClass9_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry___c__DisplayClass9_0, ___owner) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry___c__DisplayClass9_0, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.SeverityEntry
class CORDL_TYPE SeverityEntry : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass9_0 = ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry___c__DisplayClass9_0;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Owner)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> Owner;

  __declspec(property(get = get_PillStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> PillStyle;

  __declspec(property(get = get_ShouldShow, put = set_ShouldShow)) bool ShouldShow;

  /// @brief Field <PillStyle>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__PillStyle_k__BackingField,
                      put = __cordl_internal_set__PillStyle_k__BackingField)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _PillStyle_k__BackingField;

  /// @brief Field _button, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _button;

  /// @brief Field _count, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _countLabel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__countLabel, put = __cordl_internal_set__countLabel)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _countLabel;

  /// @brief Field _owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__owner, put = __cordl_internal_set__owner)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> _owner;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* New_ctor(::Meta::XR::ImmersiveDebugger::UserInterface::Console* owner, ::StringW label, ::UnityEngine::Texture2D* icon,
                                                                                      ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* imageStyle,
                                                                                      ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* pillStyle);

  /// @brief Method Reset, addr 0x589ca78, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__PillStyle_k__BackingField() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__PillStyle_k__BackingField();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__button();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__countLabel() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__countLabel();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> const& __cordl_internal_get__owner() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console>& __cordl_internal_get__owner();

  constexpr void __cordl_internal_set__PillStyle_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__button(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__countLabel(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  constexpr void __cordl_internal_set__owner(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> value);

  /// @brief Method .ctor, addr 0x589b1c4, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::Meta::XR::ImmersiveDebugger::UserInterface::Console* owner, ::StringW label, ::UnityEngine::Texture2D* icon,
                    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* imageStyle, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* pillStyle);

  /// @brief Method get_Count, addr 0x58a4900, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Owner, addr 0x58a48ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> get_Owner();

  /// @brief Method get_PillStyle, addr 0x58a48f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> get_PillStyle();

  /// @brief Method get_ShouldShow, addr 0x589ca80, size 0x18, virtual false, abstract: false, final false
  inline bool get_ShouldShow();

  /// @brief Method set_Count, addr 0x589c314, size 0x54, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

  /// @brief Method set_ShouldShow, addr 0x589b320, size 0x54, virtual false, abstract: false, final false
  inline void set_ShouldShow(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SeverityEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SeverityEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SeverityEntry(SeverityEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SeverityEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SeverityEntry(SeverityEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18343 };

  /// @brief Field _owner, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Console> ____owner;

  /// @brief Field _button, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____button;

  /// @brief Field _countLabel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____countLabel;

  /// @brief Field _count, offset: 0x28, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field <PillStyle>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____PillStyle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry, ____owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry, ____button) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry, ____countLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry, ____count) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry, ____PillStyle_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry, 0x38>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*, "Meta.XR.ImmersiveDebugger.UserInterface", "SeverityEntry");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry___c__DisplayClass9_0*, "Meta.XR.ImmersiveDebugger.UserInterface", "SeverityEntry/<>c__DisplayClass9_0");
