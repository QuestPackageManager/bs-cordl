#pragma once
// IWYU pragma private; include "Unity/Collections/GenerateTestsForBurstCompatibilityAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GenerateTestsForBurstCompatibilityAttribute)
namespace System {
class Type;
}
namespace Unity::Collections {
struct GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget;
}
// Forward declare root types
namespace Unity::Collections {
struct GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget;
}
namespace Unity::Collections {
class GenerateTestsForBurstCompatibilityAttribute;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget);
MARK_REF_PTR_T(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.GenerateTestsForBurstCompatibilityAttribute/BurstCompatibleCompileTarget
struct CORDL_TYPE GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget_Unwrapped
  enum struct __GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget_Unwrapped : int32_t {
    __E_Player = static_cast<int32_t>(0x0),
    __E_Editor = static_cast<int32_t>(0x1),
    __E_PlayerAndEditor = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget_Unwrapped() const noexcept {
    return static_cast<__GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget(int32_t value__) noexcept;

  /// @brief Field Editor value: I32(1)
  static ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget const Editor;

  /// @brief Field Player value: I32(0)
  static ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget const Player;

  /// @brief Field PlayerAndEditor value: I32(2)
  static ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget const PlayerAndEditor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15578 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget, 0x4>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Attribute, Unity.Collections.GenerateTestsForBurstCompatibilityAttribute::BurstCompatibleCompileTarget
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.GenerateTestsForBurstCompatibilityAttribute
class CORDL_TYPE GenerateTestsForBurstCompatibilityAttribute : public ::System::Attribute {
public:
  // Declarations
  using BurstCompatibleCompileTarget = ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget;

  /// @brief Field CompileTarget, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_CompileTarget,
                      put = __cordl_internal_set_CompileTarget)) ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget CompileTarget;

  __declspec(property(get = get_GenericTypeArguments, put = set_GenericTypeArguments)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GenericTypeArguments;

  /// @brief Field RequiredUnityDefine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_RequiredUnityDefine, put = __cordl_internal_set_RequiredUnityDefine)) ::StringW RequiredUnityDefine;

  /// @brief Field <GenericTypeArguments>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__GenericTypeArguments_k__BackingField,
                      put = __cordl_internal_set__GenericTypeArguments_k__BackingField)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*>
      _GenericTypeArguments_k__BackingField;

  static inline ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute* New_ctor();

  constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget const& __cordl_internal_get_CompileTarget() const;

  constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget& __cordl_internal_get_CompileTarget();

  constexpr ::StringW const& __cordl_internal_get_RequiredUnityDefine() const;

  constexpr ::StringW& __cordl_internal_get_RequiredUnityDefine();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__GenericTypeArguments_k__BackingField() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__GenericTypeArguments_k__BackingField();

  constexpr void __cordl_internal_set_CompileTarget(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget value);

  constexpr void __cordl_internal_set_RequiredUnityDefine(::StringW value);

  constexpr void __cordl_internal_set__GenericTypeArguments_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x62a3e50, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GenericTypeArguments, addr 0x62a3e40, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_GenericTypeArguments();

  /// @brief Method set_GenericTypeArguments, addr 0x62a3e48, size 0x8, virtual false, abstract: false, final false
  inline void set_GenericTypeArguments(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenerateTestsForBurstCompatibilityAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenerateTestsForBurstCompatibilityAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenerateTestsForBurstCompatibilityAttribute(GenerateTestsForBurstCompatibilityAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenerateTestsForBurstCompatibilityAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenerateTestsForBurstCompatibilityAttribute(GenerateTestsForBurstCompatibilityAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15579 };

  /// @brief Field <GenericTypeArguments>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____GenericTypeArguments_k__BackingField;

  /// @brief Field RequiredUnityDefine, offset: 0x18, size: 0x8, def value: None
  ::StringW ___RequiredUnityDefine;

  /// @brief Field CompileTarget, offset: 0x20, size: 0x4, def value: None
  ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget ___CompileTarget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute, ____GenericTypeArguments_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute, ___RequiredUnityDefine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute, ___CompileTarget) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute, 0x28>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget, "Unity.Collections",
                       "GenerateTestsForBurstCompatibilityAttribute/BurstCompatibleCompileTarget");
NEED_NO_BOX(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*, "Unity.Collections", "GenerateTestsForBurstCompatibilityAttribute");
