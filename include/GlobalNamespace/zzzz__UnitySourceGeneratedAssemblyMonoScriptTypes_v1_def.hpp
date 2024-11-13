#pragma once
// IWYU pragma private; include "GlobalNamespace/UnitySourceGeneratedAssemblyMonoScriptTypes_v1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnitySourceGeneratedAssemblyMonoScriptTypes_v1)
namespace GlobalNamespace {
struct __UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData;
}
// Forward declare root types
namespace GlobalNamespace {
class UnitySourceGeneratedAssemblyMonoScriptTypes_v1;
}
namespace GlobalNamespace {
struct __UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1);
MARK_VAL_T(::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData);
// Type: ::MonoScriptData
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::MonoScriptData
struct CORDL_TYPE __UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData();

  // Ctor Parameters [CppParam { name: "FilePathsData", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "TypesData", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "TotalTypes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TotalFiles", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "IsEditorOnly", ty: "bool", modifiers: "", def_value: None }]
  constexpr __UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData(::ArrayW<uint8_t, ::Array<uint8_t>*> FilePathsData, ::ArrayW<uint8_t, ::Array<uint8_t>*> TypesData, int32_t TotalTypes,
                                                                             int32_t TotalFiles, bool IsEditorOnly) noexcept;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData, FilePathsData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData, TypesData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData, TotalTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData, TotalFiles) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData, IsEditorOnly) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UnitySourceGeneratedAssemblyMonoScriptTypes_v1
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*
class CORDL_TYPE UnitySourceGeneratedAssemblyMonoScriptTypes_v1 : public ::System::Object {
public:
  // Declarations
  using MonoScriptData = ::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData;

  /// @brief Method Get, addr 0x47a940c, size 0xc4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData Get();

  static inline ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1* New_ctor();

  /// @brief Method .ctor, addr 0x47a94d0, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15747 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*, "", "UnitySourceGeneratedAssemblyMonoScriptTypes_v1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnitySourceGeneratedAssemblyMonoScriptTypes_v1__MonoScriptData, "", "UnitySourceGeneratedAssemblyMonoScriptTypes_v1/MonoScriptData");
