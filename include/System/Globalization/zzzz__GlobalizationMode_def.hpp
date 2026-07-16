#pragma once
// IWYU pragma private; include "System/Globalization/GlobalizationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GlobalizationMode)
// Forward declare root types
namespace System::Globalization {
class GlobalizationMode;
}
// Write type traits
MARK_REF_T(::System::Globalization::GlobalizationMode*);
DEFINE_IL2CPP_CLASS(::System::Globalization::GlobalizationMode*, "System.Globalization", "GlobalizationMode");
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.GlobalizationMode
class CORDL_TYPE GlobalizationMode : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Invariant>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__Invariant_k__BackingField, put = setStaticF__Invariant_k__BackingField)) bool _Invariant_k__BackingField;

  /// @brief Method GetGlobalizationInvariantMode, addr 0x5bc2b3c, size 0x8, virtual false, abstract: false, final false
  static inline bool GetGlobalizationInvariantMode();

  static inline bool getStaticF__Invariant_k__BackingField();

  /// @brief Method get_Invariant, addr 0x5bc2ae0, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_Invariant();

  static inline void setStaticF__Invariant_k__BackingField(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalizationMode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalizationMode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalizationMode(GlobalizationMode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalizationMode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalizationMode(GlobalizationMode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3621 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Globalization::GlobalizationMode) == 0x10, "Size mismatch!");

} // namespace System::Globalization
