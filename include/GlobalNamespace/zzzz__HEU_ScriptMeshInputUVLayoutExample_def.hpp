#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ScriptMeshInputUVLayoutExample)
namespace GlobalNamespace {
struct __HEU_ScriptMeshInputUVLayoutExample__OutputMode;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct __HEU_ScriptMeshInputUVLayoutExample__OutputMode;
}
namespace GlobalNamespace {
class HEU_ScriptMeshInputUVLayoutExample;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__HEU_ScriptMeshInputUVLayoutExample__OutputMode);
MARK_REF_PTR_T(::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample);
// Type: ::OutputMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9590))
// CS Name: ::HEU_ScriptMeshInputUVLayoutExample::OutputMode
struct CORDL_TYPE __HEU_ScriptMeshInputUVLayoutExample__OutputMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_ScriptMeshInputUVLayoutExample__OutputMode_Unwrapped
  enum struct ____HEU_ScriptMeshInputUVLayoutExample__OutputMode_Unwrapped : int32_t {
    __E_COPY = static_cast<int32_t>(0x0),
    __E_REPLACE = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_ScriptMeshInputUVLayoutExample__OutputMode_Unwrapped() const noexcept {
    return static_cast<____HEU_ScriptMeshInputUVLayoutExample__OutputMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_ScriptMeshInputUVLayoutExample__OutputMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_ScriptMeshInputUVLayoutExample__OutputMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field COPY value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__HEU_ScriptMeshInputUVLayoutExample__OutputMode const COPY;

  /// @brief Field REPLACE value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__HEU_ScriptMeshInputUVLayoutExample__OutputMode const REPLACE;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HEU_ScriptMeshInputUVLayoutExample__OutputMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HEU_ScriptMeshInputUVLayoutExample
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9591))
// CS Name: ::HEU_ScriptMeshInputUVLayoutExample*
class CORDL_TYPE HEU_ScriptMeshInputUVLayoutExample : public ::System::Object {
public:
  // Declarations
  using OutputMode = ::GlobalNamespace::__HEU_ScriptMeshInputUVLayoutExample__OutputMode;

  /// @brief Method ApplyUVLayoutTo addr 0x214d0d0 size 0x840 virtual false final false
  static inline void ApplyUVLayoutTo(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> gameObjects,
                                     ::GlobalNamespace::__HEU_ScriptMeshInputUVLayoutExample__OutputMode outputMode, ::StringW output_name_suffix);

  static inline ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample* New_ctor();

  /// @brief Method .ctor addr 0x214d9b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptMeshInputUVLayoutExample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ScriptMeshInputUVLayoutExample(HEU_ScriptMeshInputUVLayoutExample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptMeshInputUVLayoutExample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ScriptMeshInputUVLayoutExample(HEU_ScriptMeshInputUVLayoutExample const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ScriptMeshInputUVLayoutExample();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HEU_ScriptMeshInputUVLayoutExample__OutputMode, "", "HEU_ScriptMeshInputUVLayoutExample/OutputMode");
NEED_NO_BOX(::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample*, "", "HEU_ScriptMeshInputUVLayoutExample");
