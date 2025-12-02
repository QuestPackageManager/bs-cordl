#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AchievementDefinition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__AchievementType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AchievementDefinition)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementDefinition;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AchievementDefinition);
// Dependencies Oculus.Platform.AchievementType, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.AchievementDefinition
class CORDL_TYPE AchievementDefinition : public ::System::Object {
public:
  // Declarations
  /// @brief Field BitfieldLength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_BitfieldLength, put = __cordl_internal_set_BitfieldLength)) uint32_t BitfieldLength;

  /// @brief Field Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  /// @brief Field Target, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) uint64_t Target;

  /// @brief Field Type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::Oculus::Platform::AchievementType Type;

  static inline ::Oculus::Platform::Models::AchievementDefinition* New_ctor(::System::IntPtr o);

  constexpr uint32_t const& __cordl_internal_get_BitfieldLength() const;

  constexpr uint32_t& __cordl_internal_get_BitfieldLength();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr uint64_t const& __cordl_internal_get_Target() const;

  constexpr uint64_t& __cordl_internal_get_Target();

  constexpr ::Oculus::Platform::AchievementType const& __cordl_internal_get_Type() const;

  constexpr ::Oculus::Platform::AchievementType& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_BitfieldLength(uint32_t value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Target(uint64_t value);

  constexpr void __cordl_internal_set_Type(::Oculus::Platform::AchievementType value);

  /// @brief Method .ctor, addr 0x5bd8670, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementDefinition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AchievementDefinition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementDefinition(AchievementDefinition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementDefinition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementDefinition(AchievementDefinition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17963 };

  /// @brief Field Type, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::AchievementType ___Type;

  /// @brief Field Name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field BitfieldLength, offset: 0x20, size: 0x4, def value: None
  uint32_t ___BitfieldLength;

  /// @brief Field Target, offset: 0x28, size: 0x8, def value: None
  uint64_t ___Target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::AchievementDefinition, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AchievementDefinition, ___Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AchievementDefinition, ___BitfieldLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AchievementDefinition, ___Target) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AchievementDefinition, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AchievementDefinition);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementDefinition*, "Oculus.Platform.Models", "AchievementDefinition");
