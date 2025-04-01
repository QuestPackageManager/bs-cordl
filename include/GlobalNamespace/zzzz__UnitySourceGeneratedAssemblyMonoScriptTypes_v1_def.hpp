#pragma once
// IWYU pragma private; include "GlobalNamespace/UnitySourceGeneratedAssemblyMonoScriptTypes_v1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnitySourceGeneratedAssemblyMonoScriptTypes_v1)
namespace GlobalNamespace {
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData;
}
// Forward declare root types
namespace GlobalNamespace {
class UnitySourceGeneratedAssemblyMonoScriptTypes_v1;
}
namespace GlobalNamespace {
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1);
MARK_VAL_T(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnitySourceGeneratedAssemblyMonoScriptTypes_v1/MonoScriptData
struct CORDL_TYPE UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData();

  // Ctor Parameters [CppParam { name: "FilePathsData", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "TypesData", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "TotalTypes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TotalFiles", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "IsEditorOnly", ty: "bool", modifiers: "", def_value: None }]
  constexpr UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData(::ArrayW<uint8_t, ::Array<uint8_t>*> FilePathsData, ::ArrayW<uint8_t, ::Array<uint8_t>*> TypesData, int32_t TotalTypes,
                                                                          int32_t TotalFiles, bool IsEditorOnly) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8511 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field FilePathsData, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> FilePathsData;

  /// @brief Field TypesData, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> TypesData;

  /// @brief Field TotalTypes, offset: 0x10, size: 0x4, def value: None
  int32_t TotalTypes;

  /// @brief Field TotalFiles, offset: 0x14, size: 0x4, def value: None
  int32_t TotalFiles;

  /// @brief Field IsEditorOnly, offset: 0x18, size: 0x1, def value: None
  bool IsEditorOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, FilePathsData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, TypesData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, TotalTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, TotalFiles) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, IsEditorOnly) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnitySourceGeneratedAssemblyMonoScriptTypes_v1
class CORDL_TYPE UnitySourceGeneratedAssemblyMonoScriptTypes_v1 : public ::System::Object {
public:
  // Declarations
  using MonoScriptData = ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData;

  /// @brief Method Get, addr 0x40487f4, size 0xc4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData Get();

  static inline ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1* New_ctor();

  /// @brief Method .ctor, addr 0x40488b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnitySourceGeneratedAssemblyMonoScriptTypes_v1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnitySourceGeneratedAssemblyMonoScriptTypes_v1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnitySourceGeneratedAssemblyMonoScriptTypes_v1(UnitySourceGeneratedAssemblyMonoScriptTypes_v1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnitySourceGeneratedAssemblyMonoScriptTypes_v1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnitySourceGeneratedAssemblyMonoScriptTypes_v1(UnitySourceGeneratedAssemblyMonoScriptTypes_v1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8512 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*, "", "UnitySourceGeneratedAssemblyMonoScriptTypes_v1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, "", "UnitySourceGeneratedAssemblyMonoScriptTypes_v1/MonoScriptData");
