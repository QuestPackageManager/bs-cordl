#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Switch)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Diagnostics {
class Switch;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Switch);
// Type: System.Diagnostics::Switch
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8935))
// CS Name: ::System.Diagnostics::Switch*
class CORDL_TYPE Switch : public ::System::Object {
public:
  // Declarations
  /// @brief Field description, offset 0x10, size 0x8
  __declspec(property(get = __get_description, put = __set_description))::StringW description;

  /// @brief Field displayName, offset 0x18, size 0x8
  __declspec(property(get = __get_displayName, put = __set_displayName))::StringW displayName;

  /// @brief Field switchValueString, offset 0x20, size 0x8
  __declspec(property(get = __get_switchValueString, put = __set_switchValueString))::StringW switchValueString;

  /// @brief Field defaultValue, offset 0x28, size 0x8
  __declspec(property(get = __get_defaultValue, put = __set_defaultValue))::StringW defaultValue;

  /// @brief Field switches, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_switches, put = setStaticF_switches))::System::Collections::Generic::List_1<::System::WeakReference*>* switches;

  /// @brief Field s_LastCollectionCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_LastCollectionCount, put = setStaticF_s_LastCollectionCount)) int32_t s_LastCollectionCount;

  constexpr ::StringW& __get_description();

  constexpr ::StringW const& __get_description() const;

  constexpr void __set_description(::StringW value);

  constexpr ::StringW& __get_displayName();

  constexpr ::StringW const& __get_displayName() const;

  constexpr void __set_displayName(::StringW value);

  constexpr ::StringW& __get_switchValueString();

  constexpr ::StringW const& __get_switchValueString() const;

  constexpr void __set_switchValueString(::StringW value);

  constexpr ::StringW& __get_defaultValue();

  constexpr ::StringW const& __get_defaultValue() const;

  constexpr void __set_defaultValue(::StringW value);

  static inline void setStaticF_switches(::System::Collections::Generic::List_1<::System::WeakReference*>* value);

  static inline ::System::Collections::Generic::List_1<::System::WeakReference*>* getStaticF_switches();

  static inline void setStaticF_s_LastCollectionCount(int32_t value);

  static inline int32_t getStaticF_s_LastCollectionCount();

  static inline ::System::Diagnostics::Switch* New_ctor(::StringW displayName, ::StringW description);

  /// @brief Method .ctor, addr 0x296bd00, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW description);

  static inline ::System::Diagnostics::Switch* New_ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue);

  /// @brief Method .ctor, addr 0x296bd60, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue);

  /// @brief Method _pruneCachedSwitches, addr 0x296bfac, size 0x4e4, virtual false, abstract: false, final false
  static inline void _pruneCachedSwitches();

  // Ctor Parameters [CppParam { name: "", ty: "Switch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Switch(Switch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Switch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Switch(Switch const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Switch();

public:
  /// @brief Field description, offset: 0x10, size: 0x8, def value: None
  ::StringW ___description;

  /// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field switchValueString, offset: 0x20, size: 0x8, def value: None
  ::StringW ___switchValueString;

  /// @brief Field defaultValue, offset: 0x28, size: 0x8, def value: None
  ::StringW ___defaultValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Switch, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___description) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___switchValueString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___defaultValue) == 0x28, "Offset mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::Switch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Switch*, "System.Diagnostics", "Switch");
