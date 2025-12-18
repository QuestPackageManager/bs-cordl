#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HLSLArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HLSLArray)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class HLSLArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::HLSLArray);
// Dependencies System.Attribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.HLSLArray
class CORDL_TYPE HLSLArray : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field arraySize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_arraySize, put = __cordl_internal_set_arraySize)) int32_t arraySize;

  /// @brief Field elementType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elementType, put = __cordl_internal_set_elementType)) ::System::Type* elementType;

  static inline ::UnityEngine::Rendering::HLSLArray* New_ctor(int32_t arraySize, ::System::Type* elementType);

  constexpr int32_t const& __cordl_internal_get_arraySize() const;

  constexpr int32_t& __cordl_internal_get_arraySize();

  constexpr ::System::Type* const& __cordl_internal_get_elementType() const;

  constexpr ::System::Type*& __cordl_internal_get_elementType();

  constexpr void __cordl_internal_set_arraySize(int32_t value);

  constexpr void __cordl_internal_set_elementType(::System::Type* value);

  /// @brief Method .ctor, addr 0x65ec1e4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t arraySize, ::System::Type* elementType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HLSLArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HLSLArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HLSLArray(HLSLArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HLSLArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HLSLArray(HLSLArray const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12178 };

  /// @brief Field arraySize, offset: 0x10, size: 0x4, def value: None
  int32_t ___arraySize;

  /// @brief Field elementType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___elementType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::HLSLArray, ___arraySize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::HLSLArray, ___elementType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HLSLArray, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::HLSLArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HLSLArray*, "UnityEngine.Rendering", "HLSLArray");
